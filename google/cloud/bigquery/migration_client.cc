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

#include "google/cloud/bigquery/migration_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MigrationServiceClient::MigrationServiceClient(
    std::shared_ptr<MigrationServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
MigrationServiceClient::~MigrationServiceClient() = default;

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceClient::CreateMigrationWorkflow(
    std::string const& parent,
    google::cloud::bigquery::migration::v2::MigrationWorkflow const&
        migration_workflow,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::migration::v2::CreateMigrationWorkflowRequest
      request;
  request.set_parent(parent);
  *request.mutable_migration_workflow() = migration_workflow;
  return connection_->CreateMigrationWorkflow(request);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceClient::CreateMigrationWorkflow(
    google::cloud::bigquery::migration::v2::
        CreateMigrationWorkflowRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMigrationWorkflow(request);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceClient::GetMigrationWorkflow(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest request;
  request.set_name(name);
  return connection_->GetMigrationWorkflow(request);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceClient::GetMigrationWorkflow(
    google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetMigrationWorkflow(request);
}

StreamRange<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceClient::ListMigrationWorkflows(std::string const& parent,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::migration::v2::ListMigrationWorkflowsRequest request;
  request.set_parent(parent);
  return connection_->ListMigrationWorkflows(request);
}

StreamRange<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceClient::ListMigrationWorkflows(
    google::cloud::bigquery::migration::v2::ListMigrationWorkflowsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMigrationWorkflows(std::move(request));
}

Status MigrationServiceClient::DeleteMigrationWorkflow(std::string const& name,
                                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::migration::v2::DeleteMigrationWorkflowRequest
      request;
  request.set_name(name);
  return connection_->DeleteMigrationWorkflow(request);
}

Status MigrationServiceClient::DeleteMigrationWorkflow(
    google::cloud::bigquery::migration::v2::
        DeleteMigrationWorkflowRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteMigrationWorkflow(request);
}

Status MigrationServiceClient::StartMigrationWorkflow(std::string const& name,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::migration::v2::StartMigrationWorkflowRequest request;
  request.set_name(name);
  return connection_->StartMigrationWorkflow(request);
}

Status MigrationServiceClient::StartMigrationWorkflow(
    google::cloud::bigquery::migration::v2::StartMigrationWorkflowRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartMigrationWorkflow(request);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
MigrationServiceClient::GetMigrationSubtask(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest request;
  request.set_name(name);
  return connection_->GetMigrationSubtask(request);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
MigrationServiceClient::GetMigrationSubtask(
    google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetMigrationSubtask(request);
}

StreamRange<google::cloud::bigquery::migration::v2::MigrationSubtask>
MigrationServiceClient::ListMigrationSubtasks(std::string const& parent,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::migration::v2::ListMigrationSubtasksRequest request;
  request.set_parent(parent);
  return connection_->ListMigrationSubtasks(request);
}

StreamRange<google::cloud::bigquery::migration::v2::MigrationSubtask>
MigrationServiceClient::ListMigrationSubtasks(
    google::cloud::bigquery::migration::v2::ListMigrationSubtasksRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMigrationSubtasks(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
