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

#include "google/cloud/notebooks/internal/managed_notebook_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/notebooks/v1/managed_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace notebooks_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedNotebookServiceMetadata::ManagedNotebookServiceMetadata(
    std::shared_ptr<ManagedNotebookServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::notebooks::v1::ListRuntimesResponse>
ManagedNotebookServiceMetadata::ListRuntimes(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListRuntimesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListRuntimes(context, request);
}

StatusOr<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceMetadata::GetRuntime(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetRuntimeRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetRuntime(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncCreateRuntime(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateRuntimeRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateRuntime(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncUpdateRuntime(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpdateRuntimeRequest const& request) {
  SetMetadata(*context, "runtime.name=" + request.runtime().name());
  return child_->AsyncUpdateRuntime(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncDeleteRuntime(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteRuntimeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteRuntime(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncStartRuntime(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StartRuntimeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncStartRuntime(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncStopRuntime(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StopRuntimeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncStopRuntime(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncSwitchRuntime(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SwitchRuntimeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncSwitchRuntime(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncResetRuntime(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ResetRuntimeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncResetRuntime(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncUpgradeRuntime(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpgradeRuntime(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncReportRuntimeEvent(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncReportRuntimeEvent(cq, std::move(context), request);
}

StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
ManagedNotebookServiceMetadata::RefreshRuntimeTokenInternal(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->RefreshRuntimeTokenInternal(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncDiagnoseRuntime(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDiagnoseRuntime(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ManagedNotebookServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ManagedNotebookServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ManagedNotebookServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_internal
}  // namespace cloud
}  // namespace google
