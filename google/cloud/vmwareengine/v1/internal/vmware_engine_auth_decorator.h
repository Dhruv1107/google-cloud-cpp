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
// source: google/cloud/vmwareengine/v1/vmwareengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_INTERNAL_VMWARE_ENGINE_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_INTERNAL_VMWARE_ENGINE_AUTH_DECORATOR_H

#include "google/cloud/vmwareengine/v1/internal/vmware_engine_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace vmwareengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VmwareEngineAuth : public VmwareEngineStub {
 public:
  ~VmwareEngineAuth() override = default;
  VmwareEngineAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<VmwareEngineStub> child);

  StatusOr<google::cloud::vmwareengine::v1::ListPrivateCloudsResponse>
  ListPrivateClouds(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::ListPrivateCloudsRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::PrivateCloud> GetPrivateCloud(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::GetPrivateCloudRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreatePrivateCloud(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdatePrivateCloud(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeletePrivateCloud(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeletePrivateCloud(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::ListClustersResponse> ListClusters(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::ListClustersRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::Cluster> GetCluster(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::GetClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::DeleteClusterRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::ListSubnetsResponse> ListSubnets(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::ListSubnetsRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::ListNodeTypesResponse>
  ListNodeTypes(grpc::ClientContext& context,
                google::cloud::vmwareengine::v1::ListNodeTypesRequest const&
                    request) override;

  StatusOr<google::cloud::vmwareengine::v1::NodeType> GetNodeType(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::GetNodeTypeRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::Credentials> ShowNsxCredentials(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::ShowNsxCredentialsRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::Credentials> ShowVcenterCredentials(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::ShowVcenterCredentialsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncResetNsxCredentials(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncResetVcenterCredentials(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateHcxActivationKey(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::ListHcxActivationKeysResponse>
  ListHcxActivationKeys(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::ListHcxActivationKeysRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>
  GetHcxActivationKey(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::GetHcxActivationKeyRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy> GetNetworkPolicy(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::GetNetworkPolicyRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::ListNetworkPoliciesResponse>
  ListNetworkPolicies(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::ListNetworkPoliciesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateNetworkPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateNetworkPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNetworkPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateVmwareEngineNetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateVmwareEngineNetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteVmwareEngineNetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
  GetVmwareEngineNetwork(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::GetVmwareEngineNetworkRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::ListVmwareEngineNetworksResponse>
  ListVmwareEngineNetworks(
      grpc::ClientContext& context,
      google::cloud::vmwareengine::v1::ListVmwareEngineNetworksRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<VmwareEngineStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmwareengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_INTERNAL_VMWARE_ENGINE_AUTH_DECORATOR_H
