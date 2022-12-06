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
// source: google/cloud/notebooks/v1/managed_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_INTERNAL_MANAGED_NOTEBOOK_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_INTERNAL_MANAGED_NOTEBOOK_CONNECTION_IMPL_H

#include "google/cloud/notebooks/internal/managed_notebook_retry_traits.h"
#include "google/cloud/notebooks/internal/managed_notebook_stub.h"
#include "google/cloud/notebooks/managed_notebook_connection.h"
#include "google/cloud/notebooks/managed_notebook_connection_idempotency_policy.h"
#include "google/cloud/notebooks/managed_notebook_options.h"
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
namespace notebooks_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ManagedNotebookServiceConnectionImpl
    : public notebooks::ManagedNotebookServiceConnection {
 public:
  ~ManagedNotebookServiceConnectionImpl() override = default;

  ManagedNotebookServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<notebooks_internal::ManagedNotebookServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::notebooks::v1::Runtime> ListRuntimes(
      google::cloud::notebooks::v1::ListRuntimesRequest request) override;

  StatusOr<google::cloud::notebooks::v1::Runtime> GetRuntime(
      google::cloud::notebooks::v1::GetRuntimeRequest const& request) override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> CreateRuntime(
      google::cloud::notebooks::v1::CreateRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> UpdateRuntime(
      google::cloud::notebooks::v1::UpdateRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
  DeleteRuntime(google::cloud::notebooks::v1::DeleteRuntimeRequest const&
                    request) override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StartRuntime(
      google::cloud::notebooks::v1::StartRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StopRuntime(
      google::cloud::notebooks::v1::StopRuntimeRequest const& request) override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> SwitchRuntime(
      google::cloud::notebooks::v1::SwitchRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ResetRuntime(
      google::cloud::notebooks::v1::ResetRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> UpgradeRuntime(
      google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ReportRuntimeEvent(
      google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
  RefreshRuntimeTokenInternal(
      google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
          request) override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> DiagnoseRuntime(
      google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request)
      override;

 private:
  std::unique_ptr<notebooks::ManagedNotebookServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<notebooks::ManagedNotebookServiceRetryPolicyOption>()) {
      return options.get<notebooks::ManagedNotebookServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<notebooks::ManagedNotebookServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<notebooks::ManagedNotebookServiceBackoffPolicyOption>()) {
      return options
          .get<notebooks::ManagedNotebookServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<notebooks::ManagedNotebookServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<notebooks::ManagedNotebookServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            notebooks::
                ManagedNotebookServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<notebooks::
                   ManagedNotebookServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<notebooks::
                 ManagedNotebookServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<notebooks::ManagedNotebookServicePollingPolicyOption>()) {
      return options
          .get<notebooks::ManagedNotebookServicePollingPolicyOption>()
          ->clone();
    }
    return options_.get<notebooks::ManagedNotebookServicePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<notebooks_internal::ManagedNotebookServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_INTERNAL_MANAGED_NOTEBOOK_CONNECTION_IMPL_H
