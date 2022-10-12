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
// source: google/cloud/bigquery/migration/v2/migration_service.proto

#include "google/cloud/bigquery/migration_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

MigrationServiceConnectionIdempotencyPolicy::
    ~MigrationServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<MigrationServiceConnectionIdempotencyPolicy>
MigrationServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<MigrationServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency
MigrationServiceConnectionIdempotencyPolicy::CreateMigrationWorkflow(
    google::cloud::bigquery::migration::v2::
        CreateMigrationWorkflowRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationServiceConnectionIdempotencyPolicy::GetMigrationWorkflow(
    google::cloud::bigquery::migration::v2::
        GetMigrationWorkflowRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationServiceConnectionIdempotencyPolicy::ListMigrationWorkflows(
    google::cloud::bigquery::migration::v2::
        ListMigrationWorkflowsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
MigrationServiceConnectionIdempotencyPolicy::DeleteMigrationWorkflow(
    google::cloud::bigquery::migration::v2::
        DeleteMigrationWorkflowRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationServiceConnectionIdempotencyPolicy::StartMigrationWorkflow(
    google::cloud::bigquery::migration::v2::
        StartMigrationWorkflowRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationServiceConnectionIdempotencyPolicy::GetMigrationSubtask(
    google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationServiceConnectionIdempotencyPolicy::ListMigrationSubtasks(
    google::cloud::bigquery::migration::v2::
        ListMigrationSubtasksRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<MigrationServiceConnectionIdempotencyPolicy>
MakeDefaultMigrationServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<MigrationServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
