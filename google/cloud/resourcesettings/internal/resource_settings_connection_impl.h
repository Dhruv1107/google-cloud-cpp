// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCESETTINGS_INTERNAL_RESOURCE_SETTINGS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCESETTINGS_INTERNAL_RESOURCE_SETTINGS_CONNECTION_IMPL_H

#include "google/cloud/resourcesettings/internal/resource_settings_retry_traits.h"
#include "google/cloud/resourcesettings/internal/resource_settings_stub.h"
#include "google/cloud/resourcesettings/resource_settings_connection.h"
#include "google/cloud/resourcesettings/resource_settings_connection_idempotency_policy.h"
#include "google/cloud/resourcesettings/resource_settings_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcesettings_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ResourceSettingsServiceConnectionImpl
    : public resourcesettings::ResourceSettingsServiceConnection {
 public:
  ~ResourceSettingsServiceConnectionImpl() override = default;

  ResourceSettingsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<resourcesettings_internal::ResourceSettingsServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::resourcesettings::v1::Setting> ListSettings(
      google::cloud::resourcesettings::v1::ListSettingsRequest request)
      override;

  StatusOr<google::cloud::resourcesettings::v1::Setting> GetSetting(
      google::cloud::resourcesettings::v1::GetSettingRequest const& request)
      override;

  StatusOr<google::cloud::resourcesettings::v1::Setting> UpdateSetting(
      google::cloud::resourcesettings::v1::UpdateSettingRequest const& request)
      override;

 private:
  std::unique_ptr<resourcesettings::ResourceSettingsServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            resourcesettings::ResourceSettingsServiceRetryPolicyOption>()) {
      return options
          .get<resourcesettings::ResourceSettingsServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<resourcesettings::ResourceSettingsServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            resourcesettings::ResourceSettingsServiceBackoffPolicyOption>()) {
      return options
          .get<resourcesettings::ResourceSettingsServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<resourcesettings::ResourceSettingsServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      resourcesettings::ResourceSettingsServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            resourcesettings::
                ResourceSettingsServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<resourcesettings::
                   ResourceSettingsServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<resourcesettings::
                 ResourceSettingsServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<resourcesettings_internal::ResourceSettingsServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCESETTINGS_INTERNAL_RESOURCE_SETTINGS_CONNECTION_IMPL_H
