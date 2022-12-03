// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/internal/oauth2_refreshing_credentials_wrapper.h"
#include "google/cloud/internal/oauth2_credential_constants.h"

namespace google {
namespace cloud {
namespace oauth2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::pair<std::string, std::string> MakeHeader(internal::AccessToken const& t) {
  return {"Authorization", t.token};
}

}  // namespace

RefreshingCredentialsWrapper::RefreshingCredentialsWrapper(
    CurrentTimeFn current_time_fn)
    : current_time_fn_(std::move(current_time_fn)) {}

bool RefreshingCredentialsWrapper::IsExpired() const {
  return current_time_fn_() >
         (token_.expiration - GoogleOAuthAccessTokenExpirationSlack());
}

bool RefreshingCredentialsWrapper::IsValid() const {
  return !token_.token.empty() && current_time_fn_() <= token_.expiration;
}

bool RefreshingCredentialsWrapper::NeedsRefresh() const {
  return token_.token.empty() || IsExpired();
}

StatusOr<std::pair<std::string, std::string>>
RefreshingCredentialsWrapper::AuthorizationHeader(
    RefreshFunctor refresh_fn) const {
  if (!NeedsRefresh()) return MakeHeader(token_);

  // If successful refreshing token, return it. Otherwise, return the current
  // token if it still has time left on it. If no valid token can be returned,
  // return the status of the refresh failure.
  auto new_token = refresh_fn();
  if (new_token) {
    token_ = *std::move(new_token);
    return MakeHeader(token_);
  }
  if (IsValid()) return MakeHeader(token_);
  return new_token.status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oauth2_internal
}  // namespace cloud
}  // namespace google
