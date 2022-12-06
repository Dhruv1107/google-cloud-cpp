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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_WORKFLOW_TEMPLATE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_WORKFLOW_TEMPLATE_CLIENT_H

#include "google/cloud/dataproc/workflow_template_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The API interface for managing Workflow Templates in the
/// Dataproc API.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class WorkflowTemplateServiceClient {
 public:
  explicit WorkflowTemplateServiceClient(
      std::shared_ptr<WorkflowTemplateServiceConnection> connection,
      Options opts = {});
  ~WorkflowTemplateServiceClient();

  ///@{
  // @name Copy and move support
  WorkflowTemplateServiceClient(WorkflowTemplateServiceClient const&) = default;
  WorkflowTemplateServiceClient& operator=(
      WorkflowTemplateServiceClient const&) = default;
  WorkflowTemplateServiceClient(WorkflowTemplateServiceClient&&) = default;
  WorkflowTemplateServiceClient& operator=(WorkflowTemplateServiceClient&&) =
      default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(WorkflowTemplateServiceClient const& a,
                         WorkflowTemplateServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(WorkflowTemplateServiceClient const& a,
                         WorkflowTemplateServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates new workflow template.
  ///
  /// @param parent  Required. The resource name of the region or location, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.workflowTemplates.create`, the resource name of
  ///  the
  ///    region has the following format:
  ///    `projects/{project_id}/regions/{region}`
  ///  * For `projects.locations.workflowTemplates.create`, the resource name of
  ///    the location has the following format:
  ///    `projects/{project_id}/locations/{location}`
  /// @param template_  Required. The Dataproc workflow template to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowTemplate,google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  /// [google.cloud.dataproc.v1.CreateWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L611}
  /// [google.cloud.dataproc.v1.WorkflowTemplate]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
  CreateWorkflowTemplate(
      std::string const& parent,
      google::cloud::dataproc::v1::WorkflowTemplate const& template_,
      Options opts = {});

  ///
  /// Creates new workflow template.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::CreateWorkflowTemplateRequest,google/cloud/dataproc/v1/workflow_templates.proto#L611}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowTemplate,google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  /// [google.cloud.dataproc.v1.CreateWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L611}
  /// [google.cloud.dataproc.v1.WorkflowTemplate]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
  CreateWorkflowTemplate(
      google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request,
      Options opts = {});

  ///
  /// Retrieves the latest workflow template.
  ///
  /// Can retrieve previously instantiated template by specifying optional
  /// version parameter.
  ///
  /// @param name  Required. The resource name of the workflow template, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.workflowTemplates.get`, the resource name of the
  ///    template has the following format:
  ///    `projects/{project_id}/regions/{region}/workflowTemplates/{template_id}`
  ///  * For `projects.locations.workflowTemplates.get`, the resource name of
  ///  the
  ///    template has the following format:
  ///    `projects/{project_id}/locations/{location}/workflowTemplates/{template_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowTemplate,google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  /// [google.cloud.dataproc.v1.GetWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L634}
  /// [google.cloud.dataproc.v1.WorkflowTemplate]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  StatusOr<google::cloud::dataproc::v1::WorkflowTemplate> GetWorkflowTemplate(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the latest workflow template.
  ///
  /// Can retrieve previously instantiated template by specifying optional
  /// version parameter.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::GetWorkflowTemplateRequest,google/cloud/dataproc/v1/workflow_templates.proto#L634}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowTemplate,google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  /// [google.cloud.dataproc.v1.GetWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L634}
  /// [google.cloud.dataproc.v1.WorkflowTemplate]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  StatusOr<google::cloud::dataproc::v1::WorkflowTemplate> GetWorkflowTemplate(
      google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request,
      Options opts = {});

  ///
  /// Instantiates a template and begins execution.
  ///
  /// The returned Operation can be used to track execution of
  /// workflow by polling
  /// [operations.get][google.longrunning.Operations.GetOperation].
  /// The Operation will complete when entire workflow is finished.
  ///
  /// The running workflow can be aborted via
  /// [operations.cancel][google.longrunning.Operations.CancelOperation].
  /// This will cause any inflight jobs to be cancelled and workflow-owned
  /// clusters to be deleted.
  ///
  /// The [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [WorkflowMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#workflowmetadata).
  /// Also see [Using
  /// WorkflowMetadata](https://cloud.google.com/dataproc/docs/concepts/workflows/debugging#using_workflowmetadata).
  ///
  /// On successful completion,
  /// [Operation.response][google.longrunning.Operation.response] will be
  /// [Empty][google.protobuf.Empty].
  ///
  /// @param name  Required. The resource name of the workflow template, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.workflowTemplates.instantiate`, the resource name
  ///  of the template has the following format:
  ///    `projects/{project_id}/regions/{region}/workflowTemplates/{template_id}`
  ///  * For `projects.locations.workflowTemplates.instantiate`, the resource
  ///  name
  ///    of the template has the following format:
  ///    `projects/{project_id}/locations/{location}/workflowTemplates/{template_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowMetadata,google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  /// [google.cloud.dataproc.v1.InstantiateWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L660}
  /// [google.cloud.dataproc.v1.WorkflowMetadata]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
  InstantiateWorkflowTemplate(std::string const& name, Options opts = {});

  ///
  /// Instantiates a template and begins execution.
  ///
  /// The returned Operation can be used to track execution of
  /// workflow by polling
  /// [operations.get][google.longrunning.Operations.GetOperation].
  /// The Operation will complete when entire workflow is finished.
  ///
  /// The running workflow can be aborted via
  /// [operations.cancel][google.longrunning.Operations.CancelOperation].
  /// This will cause any inflight jobs to be cancelled and workflow-owned
  /// clusters to be deleted.
  ///
  /// The [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [WorkflowMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#workflowmetadata).
  /// Also see [Using
  /// WorkflowMetadata](https://cloud.google.com/dataproc/docs/concepts/workflows/debugging#using_workflowmetadata).
  ///
  /// On successful completion,
  /// [Operation.response][google.longrunning.Operation.response] will be
  /// [Empty][google.protobuf.Empty].
  ///
  /// @param name  Required. The resource name of the workflow template, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.workflowTemplates.instantiate`, the resource name
  ///  of the template has the following format:
  ///    `projects/{project_id}/regions/{region}/workflowTemplates/{template_id}`
  ///  * For `projects.locations.workflowTemplates.instantiate`, the resource
  ///  name
  ///    of the template has the following format:
  ///    `projects/{project_id}/locations/{location}/workflowTemplates/{template_id}`
  /// @param parameters  Optional. Map from parameter names to values that
  /// should be used for those
  ///  parameters. Values may not exceed 1000 characters.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowMetadata,google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  /// [google.cloud.dataproc.v1.InstantiateWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L660}
  /// [google.cloud.dataproc.v1.WorkflowMetadata]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
  InstantiateWorkflowTemplate(
      std::string const& name,
      std::map<std::string, std::string> const& parameters, Options opts = {});

  ///
  /// Instantiates a template and begins execution.
  ///
  /// The returned Operation can be used to track execution of
  /// workflow by polling
  /// [operations.get][google.longrunning.Operations.GetOperation].
  /// The Operation will complete when entire workflow is finished.
  ///
  /// The running workflow can be aborted via
  /// [operations.cancel][google.longrunning.Operations.CancelOperation].
  /// This will cause any inflight jobs to be cancelled and workflow-owned
  /// clusters to be deleted.
  ///
  /// The [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [WorkflowMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#workflowmetadata).
  /// Also see [Using
  /// WorkflowMetadata](https://cloud.google.com/dataproc/docs/concepts/workflows/debugging#using_workflowmetadata).
  ///
  /// On successful completion,
  /// [Operation.response][google.longrunning.Operation.response] will be
  /// [Empty][google.protobuf.Empty].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest,google/cloud/dataproc/v1/workflow_templates.proto#L660}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowMetadata,google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  /// [google.cloud.dataproc.v1.InstantiateWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L660}
  /// [google.cloud.dataproc.v1.WorkflowMetadata]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
  InstantiateWorkflowTemplate(
      google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
          request,
      Options opts = {});

  ///
  /// Instantiates a template and begins execution.
  ///
  /// This method is equivalent to executing the sequence
  /// [CreateWorkflowTemplate][google.cloud.dataproc.v1.WorkflowTemplateService.CreateWorkflowTemplate],
  /// [InstantiateWorkflowTemplate][google.cloud.dataproc.v1.WorkflowTemplateService.InstantiateWorkflowTemplate],
  /// [DeleteWorkflowTemplate][google.cloud.dataproc.v1.WorkflowTemplateService.DeleteWorkflowTemplate].
  ///
  /// The returned Operation can be used to track execution of
  /// workflow by polling
  /// [operations.get][google.longrunning.Operations.GetOperation].
  /// The Operation will complete when entire workflow is finished.
  ///
  /// The running workflow can be aborted via
  /// [operations.cancel][google.longrunning.Operations.CancelOperation].
  /// This will cause any inflight jobs to be cancelled and workflow-owned
  /// clusters to be deleted.
  ///
  /// The [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [WorkflowMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#workflowmetadata).
  /// Also see [Using
  /// WorkflowMetadata](https://cloud.google.com/dataproc/docs/concepts/workflows/debugging#using_workflowmetadata).
  ///
  /// On successful completion,
  /// [Operation.response][google.longrunning.Operation.response] will be
  /// [Empty][google.protobuf.Empty].
  ///
  /// @param parent  Required. The resource name of the region or location, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.workflowTemplates,instantiateinline`, the
  ///  resource
  ///    name of the region has the following format:
  ///    `projects/{project_id}/regions/{region}`
  ///  * For `projects.locations.workflowTemplates.instantiateinline`, the
  ///    resource name of the location has the following format:
  ///    `projects/{project_id}/locations/{location}`
  /// @param template_  Required. The workflow template to instantiate.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowMetadata,google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  /// [google.cloud.dataproc.v1.InstantiateInlineWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L703}
  /// [google.cloud.dataproc.v1.WorkflowMetadata]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
  InstantiateInlineWorkflowTemplate(
      std::string const& parent,
      google::cloud::dataproc::v1::WorkflowTemplate const& template_,
      Options opts = {});

  ///
  /// Instantiates a template and begins execution.
  ///
  /// This method is equivalent to executing the sequence
  /// [CreateWorkflowTemplate][google.cloud.dataproc.v1.WorkflowTemplateService.CreateWorkflowTemplate],
  /// [InstantiateWorkflowTemplate][google.cloud.dataproc.v1.WorkflowTemplateService.InstantiateWorkflowTemplate],
  /// [DeleteWorkflowTemplate][google.cloud.dataproc.v1.WorkflowTemplateService.DeleteWorkflowTemplate].
  ///
  /// The returned Operation can be used to track execution of
  /// workflow by polling
  /// [operations.get][google.longrunning.Operations.GetOperation].
  /// The Operation will complete when entire workflow is finished.
  ///
  /// The running workflow can be aborted via
  /// [operations.cancel][google.longrunning.Operations.CancelOperation].
  /// This will cause any inflight jobs to be cancelled and workflow-owned
  /// clusters to be deleted.
  ///
  /// The [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [WorkflowMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#workflowmetadata).
  /// Also see [Using
  /// WorkflowMetadata](https://cloud.google.com/dataproc/docs/concepts/workflows/debugging#using_workflowmetadata).
  ///
  /// On successful completion,
  /// [Operation.response][google.longrunning.Operation.response] will be
  /// [Empty][google.protobuf.Empty].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest,google/cloud/dataproc/v1/workflow_templates.proto#L703}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowMetadata,google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  /// [google.cloud.dataproc.v1.InstantiateInlineWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L703}
  /// [google.cloud.dataproc.v1.WorkflowMetadata]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L480}
  ///
  future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
  InstantiateInlineWorkflowTemplate(
      google::cloud::dataproc::v1::
          InstantiateInlineWorkflowTemplateRequest const& request,
      Options opts = {});

  ///
  /// Updates (replaces) workflow template. The updated template
  /// must contain version that matches the current server version.
  ///
  /// @param template_  Required. The updated workflow template.
  ///  The `template.version` field must match the current version.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowTemplate,google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  /// [google.cloud.dataproc.v1.UpdateWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L737}
  /// [google.cloud.dataproc.v1.WorkflowTemplate]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
  UpdateWorkflowTemplate(
      google::cloud::dataproc::v1::WorkflowTemplate const& template_,
      Options opts = {});

  ///
  /// Updates (replaces) workflow template. The updated template
  /// must contain version that matches the current server version.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest,google/cloud/dataproc/v1/workflow_templates.proto#L737}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowTemplate,google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  /// [google.cloud.dataproc.v1.UpdateWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L737}
  /// [google.cloud.dataproc.v1.WorkflowTemplate]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
  UpdateWorkflowTemplate(
      google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request,
      Options opts = {});

  ///
  /// Lists workflows that match the specified filter in the request.
  ///
  /// @param parent  Required. The resource name of the region or location, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.workflowTemplates,list`, the resource
  ///    name of the region has the following format:
  ///    `projects/{project_id}/regions/{region}`
  ///  * For `projects.locations.workflowTemplates.list`, the
  ///    resource name of the location has the following format:
  ///    `projects/{project_id}/locations/{location}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowTemplate,google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  /// [google.cloud.dataproc.v1.ListWorkflowTemplatesRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L745}
  /// [google.cloud.dataproc.v1.WorkflowTemplate]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
  ListWorkflowTemplates(std::string const& parent, Options opts = {});

  ///
  /// Lists workflows that match the specified filter in the request.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::ListWorkflowTemplatesRequest,google/cloud/dataproc/v1/workflow_templates.proto#L745}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::WorkflowTemplate,google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  /// [google.cloud.dataproc.v1.ListWorkflowTemplatesRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L745}
  /// [google.cloud.dataproc.v1.WorkflowTemplate]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L183}
  ///
  StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
  ListWorkflowTemplates(
      google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request,
      Options opts = {});

  ///
  /// Deletes a workflow template. It does not cancel in-progress workflows.
  ///
  /// @param name  Required. The resource name of the workflow template, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.workflowTemplates.delete`, the resource name
  ///  of the template has the following format:
  ///    `projects/{project_id}/regions/{region}/workflowTemplates/{template_id}`
  ///  * For `projects.locations.workflowTemplates.instantiate`, the resource
  ///  name
  ///    of the template has the following format:
  ///    `projects/{project_id}/locations/{location}/workflowTemplates/{template_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dataproc.v1.DeleteWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L785}
  ///
  Status DeleteWorkflowTemplate(std::string const& name, Options opts = {});

  ///
  /// Deletes a workflow template. It does not cancel in-progress workflows.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest,google/cloud/dataproc/v1/workflow_templates.proto#L785}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dataproc.v1.DeleteWorkflowTemplateRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/workflow_templates.proto#L785}
  ///
  Status DeleteWorkflowTemplate(
      google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<WorkflowTemplateServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_WORKFLOW_TEMPLATE_CLIENT_H
