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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_TPU_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_TPU_CLIENT_H

#include "google/cloud/tpu/tpu_connection.h"
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
namespace tpu {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages TPU nodes and other resources
///
/// TPU API v1
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
class TpuClient {
 public:
  explicit TpuClient(std::shared_ptr<TpuConnection> connection,
                     Options opts = {});
  ~TpuClient();

  ///@{
  // @name Copy and move support
  TpuClient(TpuClient const&) = default;
  TpuClient& operator=(TpuClient const&) = default;
  TpuClient(TpuClient&&) = default;
  TpuClient& operator=(TpuClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(TpuClient const& a, TpuClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TpuClient const& a, TpuClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists nodes.
  ///
  /// @param parent  Required. The parent resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.ListNodesRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L345}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  StreamRange<google::cloud::tpu::v1::Node> ListNodes(std::string const& parent,
                                                      Options opts = {});

  ///
  /// Lists nodes.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::ListNodesRequest,google/cloud/tpu/v1/cloud_tpu.proto#L345}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.ListNodesRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L345}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  StreamRange<google::cloud::tpu::v1::Node> ListNodes(
      google::cloud::tpu::v1::ListNodesRequest request, Options opts = {});

  ///
  /// Gets the details of a node.
  ///
  /// @param name  Required. The resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.GetNodeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L374}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  StatusOr<google::cloud::tpu::v1::Node> GetNode(std::string const& name,
                                                 Options opts = {});

  ///
  /// Gets the details of a node.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::GetNodeRequest,google/cloud/tpu/v1/cloud_tpu.proto#L374}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.GetNodeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L374}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  StatusOr<google::cloud::tpu::v1::Node> GetNode(
      google::cloud::tpu::v1::GetNodeRequest const& request, Options opts = {});

  ///
  /// Creates a node.
  ///
  /// @param parent  Required. The parent resource name.
  /// @param node  Required. The node.
  /// @param node_id  The unqualified resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.CreateNodeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L385}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  future<StatusOr<google::cloud::tpu::v1::Node>> CreateNode(
      std::string const& parent, google::cloud::tpu::v1::Node const& node,
      std::string const& node_id, Options opts = {});

  ///
  /// Creates a node.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::CreateNodeRequest,google/cloud/tpu/v1/cloud_tpu.proto#L385}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.CreateNodeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L385}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  future<StatusOr<google::cloud::tpu::v1::Node>> CreateNode(
      google::cloud::tpu::v1::CreateNodeRequest const& request,
      Options opts = {});

  ///
  /// Deletes a node.
  ///
  /// @param name  Required. The resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.DeleteNodeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L402}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  future<StatusOr<google::cloud::tpu::v1::Node>> DeleteNode(
      std::string const& name, Options opts = {});

  ///
  /// Deletes a node.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::DeleteNodeRequest,google/cloud/tpu/v1/cloud_tpu.proto#L402}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.DeleteNodeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L402}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  future<StatusOr<google::cloud::tpu::v1::Node>> DeleteNode(
      google::cloud::tpu::v1::DeleteNodeRequest const& request,
      Options opts = {});

  ///
  /// Reimages a node's OS.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::ReimageNodeRequest,google/cloud/tpu/v1/cloud_tpu.proto#L413}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.ReimageNodeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L413}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  future<StatusOr<google::cloud::tpu::v1::Node>> ReimageNode(
      google::cloud::tpu::v1::ReimageNodeRequest const& request,
      Options opts = {});

  ///
  /// Stops a node.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::StopNodeRequest,google/cloud/tpu/v1/cloud_tpu.proto#L422}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.StopNodeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L422}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  future<StatusOr<google::cloud::tpu::v1::Node>> StopNode(
      google::cloud::tpu::v1::StopNodeRequest const& request,
      Options opts = {});

  ///
  /// Starts a node.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::StartNodeRequest,google/cloud/tpu/v1/cloud_tpu.proto#L428}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::Node,google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  /// [google.cloud.tpu.v1.StartNodeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L428}
  /// [google.cloud.tpu.v1.Node]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L167}
  ///
  future<StatusOr<google::cloud::tpu::v1::Node>> StartNode(
      google::cloud::tpu::v1::StartNodeRequest const& request,
      Options opts = {});

  ///
  /// List TensorFlow versions supported by this API.
  ///
  /// @param parent  Required. The parent resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::TensorFlowVersion,google/cloud/tpu/v1/cloud_tpu.proto#L434}
  ///
  /// [google.cloud.tpu.v1.ListTensorFlowVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L459}
  /// [google.cloud.tpu.v1.TensorFlowVersion]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L434}
  ///
  StreamRange<google::cloud::tpu::v1::TensorFlowVersion> ListTensorFlowVersions(
      std::string const& parent, Options opts = {});

  ///
  /// List TensorFlow versions supported by this API.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::ListTensorFlowVersionsRequest,google/cloud/tpu/v1/cloud_tpu.proto#L459}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::TensorFlowVersion,google/cloud/tpu/v1/cloud_tpu.proto#L434}
  ///
  /// [google.cloud.tpu.v1.ListTensorFlowVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L459}
  /// [google.cloud.tpu.v1.TensorFlowVersion]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L434}
  ///
  StreamRange<google::cloud::tpu::v1::TensorFlowVersion> ListTensorFlowVersions(
      google::cloud::tpu::v1::ListTensorFlowVersionsRequest request,
      Options opts = {});

  ///
  /// Gets TensorFlow Version.
  ///
  /// @param name  Required. The resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::TensorFlowVersion,google/cloud/tpu/v1/cloud_tpu.proto#L434}
  ///
  /// [google.cloud.tpu.v1.GetTensorFlowVersionRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L448}
  /// [google.cloud.tpu.v1.TensorFlowVersion]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L434}
  ///
  StatusOr<google::cloud::tpu::v1::TensorFlowVersion> GetTensorFlowVersion(
      std::string const& name, Options opts = {});

  ///
  /// Gets TensorFlow Version.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::GetTensorFlowVersionRequest,google/cloud/tpu/v1/cloud_tpu.proto#L448}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::TensorFlowVersion,google/cloud/tpu/v1/cloud_tpu.proto#L434}
  ///
  /// [google.cloud.tpu.v1.GetTensorFlowVersionRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L448}
  /// [google.cloud.tpu.v1.TensorFlowVersion]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L434}
  ///
  StatusOr<google::cloud::tpu::v1::TensorFlowVersion> GetTensorFlowVersion(
      google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request,
      Options opts = {});

  ///
  /// Lists accelerator types supported by this API.
  ///
  /// @param parent  Required. The parent resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::AcceleratorType,google/cloud/tpu/v1/cloud_tpu.proto#L494}
  ///
  /// [google.cloud.tpu.v1.ListAcceleratorTypesRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L519}
  /// [google.cloud.tpu.v1.AcceleratorType]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L494}
  ///
  StreamRange<google::cloud::tpu::v1::AcceleratorType> ListAcceleratorTypes(
      std::string const& parent, Options opts = {});

  ///
  /// Lists accelerator types supported by this API.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::ListAcceleratorTypesRequest,google/cloud/tpu/v1/cloud_tpu.proto#L519}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::AcceleratorType,google/cloud/tpu/v1/cloud_tpu.proto#L494}
  ///
  /// [google.cloud.tpu.v1.ListAcceleratorTypesRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L519}
  /// [google.cloud.tpu.v1.AcceleratorType]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L494}
  ///
  StreamRange<google::cloud::tpu::v1::AcceleratorType> ListAcceleratorTypes(
      google::cloud::tpu::v1::ListAcceleratorTypesRequest request,
      Options opts = {});

  ///
  /// Gets AcceleratorType.
  ///
  /// @param name  Required. The resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::AcceleratorType,google/cloud/tpu/v1/cloud_tpu.proto#L494}
  ///
  /// [google.cloud.tpu.v1.GetAcceleratorTypeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L508}
  /// [google.cloud.tpu.v1.AcceleratorType]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L494}
  ///
  StatusOr<google::cloud::tpu::v1::AcceleratorType> GetAcceleratorType(
      std::string const& name, Options opts = {});

  ///
  /// Gets AcceleratorType.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::tpu::v1::GetAcceleratorTypeRequest,google/cloud/tpu/v1/cloud_tpu.proto#L508}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::tpu::v1::AcceleratorType,google/cloud/tpu/v1/cloud_tpu.proto#L494}
  ///
  /// [google.cloud.tpu.v1.GetAcceleratorTypeRequest]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L508}
  /// [google.cloud.tpu.v1.AcceleratorType]:
  /// @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L494}
  ///
  StatusOr<google::cloud::tpu::v1::AcceleratorType> GetAcceleratorType(
      google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<TpuConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_TPU_CLIENT_H
