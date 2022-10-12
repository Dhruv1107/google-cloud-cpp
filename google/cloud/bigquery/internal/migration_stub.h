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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MIGRATION_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MIGRATION_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/migration/v2/migration_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MigrationServiceStub {
 public:
  virtual ~MigrationServiceStub() = 0;

  virtual StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  CreateMigrationWorkflow(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::
          CreateMigrationWorkflowRequest const& request) = 0;

  virtual StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  GetMigrationWorkflow(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::bigquery::migration::v2::ListMigrationWorkflowsResponse>
  ListMigrationWorkflows(grpc::ClientContext& context,
                         google::cloud::bigquery::migration::v2::
                             ListMigrationWorkflowsRequest const& request) = 0;

  virtual Status DeleteMigrationWorkflow(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::
          DeleteMigrationWorkflowRequest const& request) = 0;

  virtual Status StartMigrationWorkflow(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::
          StartMigrationWorkflowRequest const& request) = 0;

  virtual StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
  GetMigrationSubtask(
      grpc::ClientContext& context,
      google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::bigquery::migration::v2::ListMigrationSubtasksResponse>
  ListMigrationSubtasks(grpc::ClientContext& context,
                        google::cloud::bigquery::migration::v2::
                            ListMigrationSubtasksRequest const& request) = 0;
};

class DefaultMigrationServiceStub : public MigrationServiceStub {
 public:
  explicit DefaultMigrationServiceStub(
      std::unique_ptr<google::cloud::bigquery::migration::v2::MigrationService::
                          StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  CreateMigrationWorkflow(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::migration::v2::
          CreateMigrationWorkflowRequest const& request) override;

  StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  GetMigrationWorkflow(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
          request) override;

  StatusOr<
      google::cloud::bigquery::migration::v2::ListMigrationWorkflowsResponse>
  ListMigrationWorkflows(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::migration::v2::
          ListMigrationWorkflowsRequest const& request) override;

  Status DeleteMigrationWorkflow(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::migration::v2::
          DeleteMigrationWorkflowRequest const& request) override;

  Status StartMigrationWorkflow(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::migration::v2::
          StartMigrationWorkflowRequest const& request) override;

  StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
  GetMigrationSubtask(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
          request) override;

  StatusOr<
      google::cloud::bigquery::migration::v2::ListMigrationSubtasksResponse>
  ListMigrationSubtasks(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::migration::v2::
          ListMigrationSubtasksRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::bigquery::migration::v2::MigrationService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MIGRATION_STUB_H
