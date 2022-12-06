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
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_SYSTEM_POLICY_V1_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_SYSTEM_POLICY_V1_OPTIONS_H

#include "google/cloud/binaryauthorization/system_policy_v1_connection.h"
#include "google/cloud/binaryauthorization/system_policy_v1_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-binaryauthorization-options
 */
struct SystemPolicyV1RetryPolicyOption {
  using Type = std::shared_ptr<SystemPolicyV1RetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-binaryauthorization-options
 */
struct SystemPolicyV1BackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-binaryauthorization-options
 */
struct SystemPolicyV1ConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<SystemPolicyV1ConnectionIdempotencyPolicy>;
};

/**
 * The options applicable to SystemPolicyV1.
 *
 * @ingroup google-cloud-binaryauthorization-options
 */
using SystemPolicyV1PolicyOptionList =
    OptionList<SystemPolicyV1RetryPolicyOption,
               SystemPolicyV1BackoffPolicyOption,
               SystemPolicyV1ConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_SYSTEM_POLICY_V1_OPTIONS_H
