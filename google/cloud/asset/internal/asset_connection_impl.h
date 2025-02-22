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
// source: google/cloud/asset/v1/asset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_INTERNAL_ASSET_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_INTERNAL_ASSET_CONNECTION_IMPL_H

#include "google/cloud/asset/asset_connection.h"
#include "google/cloud/asset/asset_connection_idempotency_policy.h"
#include "google/cloud/asset/asset_options.h"
#include "google/cloud/asset/internal/asset_retry_traits.h"
#include "google/cloud/asset/internal/asset_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace asset_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AssetServiceConnectionImpl : public asset::AssetServiceConnection {
 public:
  ~AssetServiceConnectionImpl() override = default;

  AssetServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<asset_internal::AssetServiceStub> stub, Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>> ExportAssets(
      google::cloud::asset::v1::ExportAssetsRequest const& request) override;

  StreamRange<google::cloud::asset::v1::Asset> ListAssets(
      google::cloud::asset::v1::ListAssetsRequest request) override;

  StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
  BatchGetAssetsHistory(
      google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request)
      override;

  StatusOr<google::cloud::asset::v1::Feed> CreateFeed(
      google::cloud::asset::v1::CreateFeedRequest const& request) override;

  StatusOr<google::cloud::asset::v1::Feed> GetFeed(
      google::cloud::asset::v1::GetFeedRequest const& request) override;

  StatusOr<google::cloud::asset::v1::ListFeedsResponse> ListFeeds(
      google::cloud::asset::v1::ListFeedsRequest const& request) override;

  StatusOr<google::cloud::asset::v1::Feed> UpdateFeed(
      google::cloud::asset::v1::UpdateFeedRequest const& request) override;

  Status DeleteFeed(
      google::cloud::asset::v1::DeleteFeedRequest const& request) override;

  StreamRange<google::cloud::asset::v1::ResourceSearchResult>
  SearchAllResources(
      google::cloud::asset::v1::SearchAllResourcesRequest request) override;

  StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
  SearchAllIamPolicies(
      google::cloud::asset::v1::SearchAllIamPoliciesRequest request) override;

  StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse> AnalyzeIamPolicy(
      google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request)
      override;

  future<
      StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>
  AnalyzeIamPolicyLongrunning(
      google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
          request) override;

  StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse> AnalyzeMove(
      google::cloud::asset::v1::AnalyzeMoveRequest const& request) override;

  StatusOr<google::cloud::asset::v1::QueryAssetsResponse> QueryAssets(
      google::cloud::asset::v1::QueryAssetsRequest const& request) override;

  StatusOr<google::cloud::asset::v1::SavedQuery> CreateSavedQuery(
      google::cloud::asset::v1::CreateSavedQueryRequest const& request)
      override;

  StatusOr<google::cloud::asset::v1::SavedQuery> GetSavedQuery(
      google::cloud::asset::v1::GetSavedQueryRequest const& request) override;

  StreamRange<google::cloud::asset::v1::SavedQuery> ListSavedQueries(
      google::cloud::asset::v1::ListSavedQueriesRequest request) override;

  StatusOr<google::cloud::asset::v1::SavedQuery> UpdateSavedQuery(
      google::cloud::asset::v1::UpdateSavedQueryRequest const& request)
      override;

  Status DeleteSavedQuery(
      google::cloud::asset::v1::DeleteSavedQueryRequest const& request)
      override;

  StatusOr<google::cloud::asset::v1::BatchGetEffectiveIamPoliciesResponse>
  BatchGetEffectiveIamPolicies(
      google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&
          request) override;

 private:
  std::unique_ptr<asset::AssetServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<asset::AssetServiceRetryPolicyOption>()) {
      return options.get<asset::AssetServiceRetryPolicyOption>()->clone();
    }
    return options_.get<asset::AssetServiceRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<asset::AssetServiceBackoffPolicyOption>()) {
      return options.get<asset::AssetServiceBackoffPolicyOption>()->clone();
    }
    return options_.get<asset::AssetServiceBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<asset::AssetServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<asset::AssetServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<asset::AssetServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_.get<asset::AssetServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<asset::AssetServicePollingPolicyOption>()) {
      return options.get<asset::AssetServicePollingPolicyOption>()->clone();
    }
    return options_.get<asset::AssetServicePollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<asset_internal::AssetServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_INTERNAL_ASSET_CONNECTION_IMPL_H
