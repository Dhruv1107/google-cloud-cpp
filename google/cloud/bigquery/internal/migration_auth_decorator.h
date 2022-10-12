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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MIGRATION_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MIGRATION_AUTH_DECORATOR_H

#include "google/cloud/bigquery/internal/migration_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MigrationServiceAuth : public MigrationServiceStub {
 public:
  ~MigrationServiceAuth() override = default;
  MigrationServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<MigrationServiceStub> child);

  StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  CreateMigrationWorkflow(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::
          CreateMigrationWorkflowRequest const& request) override;

  StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  GetMigrationWorkflow(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
          request) override;

  StatusOr<
      google::cloud::bigquery::migration::v2::ListMigrationWorkflowsResponse>
  ListMigrationWorkflows(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::
          ListMigrationWorkflowsRequest const& request) override;

  Status DeleteMigrationWorkflow(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::
          DeleteMigrationWorkflowRequest const& request) override;

  Status StartMigrationWorkflow(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::
          StartMigrationWorkflowRequest const& request) override;

  StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
  GetMigrationSubtask(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
          request) override;

  StatusOr<
      google::cloud::bigquery::migration::v2::ListMigrationSubtasksResponse>
  ListMigrationSubtasks(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::
          ListMigrationSubtasksRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<MigrationServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MIGRATION_AUTH_DECORATOR_H
