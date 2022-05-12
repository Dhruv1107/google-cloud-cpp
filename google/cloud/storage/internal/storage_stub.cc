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
// source: google/storage/v2/storage.proto

#include "google/cloud/storage/internal/storage_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "absl/memory/memory.h"
#include <google/storage/v2/storage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageStub::~StorageStub() = default;

Status DefaultStorageStub::DeleteBucket(
    grpc::ClientContext& client_context,
    google::storage::v2::DeleteBucketRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteBucket(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::storage::v2::Bucket> DefaultStorageStub::GetBucket(
    grpc::ClientContext& client_context,
    google::storage::v2::GetBucketRequest const& request) {
  google::storage::v2::Bucket response;
  auto status = grpc_stub_->GetBucket(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::Bucket> DefaultStorageStub::CreateBucket(
    grpc::ClientContext& client_context,
    google::storage::v2::CreateBucketRequest const& request) {
  google::storage::v2::Bucket response;
  auto status = grpc_stub_->CreateBucket(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::ListBucketsResponse>
DefaultStorageStub::ListBuckets(
    grpc::ClientContext& client_context,
    google::storage::v2::ListBucketsRequest const& request) {
  google::storage::v2::ListBucketsResponse response;
  auto status = grpc_stub_->ListBuckets(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::Bucket>
DefaultStorageStub::LockBucketRetentionPolicy(
    grpc::ClientContext& client_context,
    google::storage::v2::LockBucketRetentionPolicyRequest const& request) {
  google::storage::v2::Bucket response;
  auto status = grpc_stub_->LockBucketRetentionPolicy(&client_context, request,
                                                      &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultStorageStub::GetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultStorageStub::SetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultStorageStub::TestIamPermissions(
    grpc::ClientContext& client_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      grpc_stub_->TestIamPermissions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::Bucket> DefaultStorageStub::UpdateBucket(
    grpc::ClientContext& client_context,
    google::storage::v2::UpdateBucketRequest const& request) {
  google::storage::v2::Bucket response;
  auto status = grpc_stub_->UpdateBucket(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::Object> DefaultStorageStub::ComposeObject(
    grpc::ClientContext& client_context,
    google::storage::v2::ComposeObjectRequest const& request) {
  google::storage::v2::Object response;
  auto status = grpc_stub_->ComposeObject(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultStorageStub::DeleteObject(
    grpc::ClientContext& client_context,
    google::storage::v2::DeleteObjectRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteObject(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::storage::v2::Object> DefaultStorageStub::GetObject(
    grpc::ClientContext& client_context,
    google::storage::v2::GetObjectRequest const& request) {
  google::storage::v2::Object response;
  auto status = grpc_stub_->GetObject(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
DefaultStorageStub::ReadObject(
    std::unique_ptr<grpc::ClientContext> client_context,
    google::storage::v2::ReadObjectRequest const& request) {
  auto stream = grpc_stub_->ReadObject(client_context.get(), request);
  return absl::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::storage::v2::ReadObjectResponse>>(std::move(client_context),
                                                std::move(stream));
}

StatusOr<google::storage::v2::Object> DefaultStorageStub::UpdateObject(
    grpc::ClientContext& client_context,
    google::storage::v2::UpdateObjectRequest const& request) {
  google::storage::v2::Object response;
  auto status = grpc_stub_->UpdateObject(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
DefaultStorageStub::WriteObject(std::unique_ptr<grpc::ClientContext> context) {
  auto response = absl::make_unique<google::storage::v2::WriteObjectResponse>();
  auto stream = grpc_stub_->WriteObject(context.get(), response.get());
  return absl::make_unique<::google::cloud::internal::StreamingWriteRpcImpl<
      google::storage::v2::WriteObjectRequest,
      google::storage::v2::WriteObjectResponse>>(
      std::move(context), std::move(response), std::move(stream));
}

StatusOr<google::storage::v2::ListObjectsResponse>
DefaultStorageStub::ListObjects(
    grpc::ClientContext& client_context,
    google::storage::v2::ListObjectsRequest const& request) {
  google::storage::v2::ListObjectsResponse response;
  auto status = grpc_stub_->ListObjects(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::RewriteResponse>
DefaultStorageStub::RewriteObject(
    grpc::ClientContext& client_context,
    google::storage::v2::RewriteObjectRequest const& request) {
  google::storage::v2::RewriteResponse response;
  auto status = grpc_stub_->RewriteObject(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::StartResumableWriteResponse>
DefaultStorageStub::StartResumableWrite(
    grpc::ClientContext& client_context,
    google::storage::v2::StartResumableWriteRequest const& request) {
  google::storage::v2::StartResumableWriteResponse response;
  auto status =
      grpc_stub_->StartResumableWrite(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::QueryWriteStatusResponse>
DefaultStorageStub::QueryWriteStatus(
    grpc::ClientContext& client_context,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  google::storage::v2::QueryWriteStatusResponse response;
  auto status =
      grpc_stub_->QueryWriteStatus(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::ServiceAccount>
DefaultStorageStub::GetServiceAccount(
    grpc::ClientContext& client_context,
    google::storage::v2::GetServiceAccountRequest const& request) {
  google::storage::v2::ServiceAccount response;
  auto status =
      grpc_stub_->GetServiceAccount(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::CreateHmacKeyResponse>
DefaultStorageStub::CreateHmacKey(
    grpc::ClientContext& client_context,
    google::storage::v2::CreateHmacKeyRequest const& request) {
  google::storage::v2::CreateHmacKeyResponse response;
  auto status = grpc_stub_->CreateHmacKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultStorageStub::DeleteHmacKey(
    grpc::ClientContext& client_context,
    google::storage::v2::DeleteHmacKeyRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteHmacKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::storage::v2::HmacKeyMetadata> DefaultStorageStub::GetHmacKey(
    grpc::ClientContext& client_context,
    google::storage::v2::GetHmacKeyRequest const& request) {
  google::storage::v2::HmacKeyMetadata response;
  auto status = grpc_stub_->GetHmacKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storage::v2::HmacKeyMetadata>
DefaultStorageStub::UpdateHmacKey(
    grpc::ClientContext& client_context,
    google::storage::v2::UpdateHmacKeyRequest const& request) {
  google::storage::v2::HmacKeyMetadata response;
  auto status = grpc_stub_->UpdateHmacKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
