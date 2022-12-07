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

#include "google/cloud/notebooks/managed_notebook_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ManagedNotebookServiceConnectionIdempotencyPolicy::
    ~ManagedNotebookServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ManagedNotebookServiceConnectionIdempotencyPolicy>
ManagedNotebookServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<ManagedNotebookServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::ListRuntimes(
    google::cloud::notebooks::v1::ListRuntimesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::GetRuntime(
    google::cloud::notebooks::v1::GetRuntimeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::CreateRuntime(
    google::cloud::notebooks::v1::CreateRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::UpdateRuntime(
    google::cloud::notebooks::v1::UpdateRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::DeleteRuntime(
    google::cloud::notebooks::v1::DeleteRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::StartRuntime(
    google::cloud::notebooks::v1::StartRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::StopRuntime(
    google::cloud::notebooks::v1::StopRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::SwitchRuntime(
    google::cloud::notebooks::v1::SwitchRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::ResetRuntime(
    google::cloud::notebooks::v1::ResetRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::UpgradeRuntime(
    google::cloud::notebooks::v1::UpgradeRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ManagedNotebookServiceConnectionIdempotencyPolicy::ReportRuntimeEvent(
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ManagedNotebookServiceConnectionIdempotencyPolicy::RefreshRuntimeTokenInternal(
    google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ManagedNotebookServiceConnectionIdempotencyPolicy::DiagnoseRuntime(
    google::cloud::notebooks::v1::DiagnoseRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ManagedNotebookServiceConnectionIdempotencyPolicy>
MakeDefaultManagedNotebookServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<ManagedNotebookServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks
}  // namespace cloud
}  // namespace google
