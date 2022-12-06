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
// source: google/cloud/dialogflow/cx/v3/security_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_SECURITY_SETTINGS_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_SECURITY_SETTINGS_OPTIONS_H

#include "google/cloud/dialogflow_cx/security_settings_connection.h"
#include "google/cloud/dialogflow_cx/security_settings_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-dialogflow_cx-options
 */
struct SecuritySettingsServiceRetryPolicyOption {
  using Type = std::shared_ptr<SecuritySettingsServiceRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-dialogflow_cx-options
 */
struct SecuritySettingsServiceBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-dialogflow_cx-options
 */
struct SecuritySettingsServiceConnectionIdempotencyPolicyOption {
  using Type =
      std::shared_ptr<SecuritySettingsServiceConnectionIdempotencyPolicy>;
};

/**
 * The options applicable to SecuritySettingsService.
 *
 * @ingroup google-cloud-dialogflow_cx-options
 */
using SecuritySettingsServicePolicyOptionList =
    OptionList<SecuritySettingsServiceRetryPolicyOption,
               SecuritySettingsServiceBackoffPolicyOption,
               SecuritySettingsServiceConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_SECURITY_SETTINGS_OPTIONS_H
