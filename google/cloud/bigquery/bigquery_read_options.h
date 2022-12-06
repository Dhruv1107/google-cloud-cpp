// Copyright 2021 Google LLC
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
// source: google/cloud/bigquery/storage/v1/storage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGQUERY_READ_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGQUERY_READ_OPTIONS_H

#include "google/cloud/bigquery/bigquery_read_connection.h"
#include "google/cloud/bigquery/bigquery_read_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-bigquery-options
 */
struct BigQueryReadRetryPolicyOption {
  using Type = std::shared_ptr<BigQueryReadRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-bigquery-options
 */
struct BigQueryReadBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-bigquery-options
 */
struct BigQueryReadConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<BigQueryReadConnectionIdempotencyPolicy>;
};

/**
 * The options applicable to BigQueryRead.
 *
 * @ingroup google-cloud-bigquery-options
 */
using BigQueryReadPolicyOptionList =
    OptionList<BigQueryReadRetryPolicyOption, BigQueryReadBackoffPolicyOption,
               BigQueryReadConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGQUERY_READ_OPTIONS_H
