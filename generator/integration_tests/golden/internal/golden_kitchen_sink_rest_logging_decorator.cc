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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/internal/golden_kitchen_sink_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenKitchenSinkRestLogging::GoldenKitchenSinkRestLogging(
    std::shared_ptr<GoldenKitchenSinkRestStub> child,
    TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
GoldenKitchenSinkRestLogging::GenerateAccessToken(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
        return child_->GenerateAccessToken(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
GoldenKitchenSinkRestLogging::GenerateIdToken(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
        return child_->GenerateIdToken(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
GoldenKitchenSinkRestLogging::WriteLogEntries(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
        return child_->WriteLogEntries(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::ListLogsResponse>
GoldenKitchenSinkRestLogging::ListLogs(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::ListLogsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::test::admin::database::v1::ListLogsRequest const& request) {
        return child_->ListLogs(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
GoldenKitchenSinkRestLogging::ListServiceAccountKeys(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
        return child_->ListServiceAccountKeys(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

Status
GoldenKitchenSinkRestLogging::DoNothing(
    rest_internal::RestContext& rest_context,
    google::protobuf::Empty const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::protobuf::Empty const& request) {
        return child_->DoNothing(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

Status
GoldenKitchenSinkRestLogging::ExplicitRouting1(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
        return child_->ExplicitRouting1(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

Status
GoldenKitchenSinkRestLogging::ExplicitRouting2(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
        return child_->ExplicitRouting2(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google
