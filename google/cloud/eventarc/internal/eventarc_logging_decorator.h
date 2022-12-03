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
// source: google/cloud/eventarc/v1/eventarc.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_INTERNAL_EVENTARC_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_INTERNAL_EVENTARC_LOGGING_DECORATOR_H

#include "google/cloud/eventarc/internal/eventarc_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace eventarc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EventarcLogging : public EventarcStub {
 public:
  ~EventarcLogging() override = default;
  EventarcLogging(std::shared_ptr<EventarcStub> child,
                  TracingOptions tracing_options,
                  std::set<std::string> components);

  StatusOr<google::cloud::eventarc::v1::Trigger> GetTrigger(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::GetTriggerRequest const& request) override;

  StatusOr<google::cloud::eventarc::v1::ListTriggersResponse> ListTriggers(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::ListTriggersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTrigger(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::eventarc::v1::CreateTriggerRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTrigger(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTrigger(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::Channel> GetChannel(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::GetChannelRequest const& request) override;

  StatusOr<google::cloud::eventarc::v1::ListChannelsResponse> ListChannels(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::ListChannelsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateChannel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::eventarc::v1::CreateChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateChannel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::eventarc::v1::UpdateChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteChannel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::eventarc::v1::DeleteChannelRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::Provider> GetProvider(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::GetProviderRequest const& request) override;

  StatusOr<google::cloud::eventarc::v1::ListProvidersResponse> ListProviders(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::ListProvidersRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::ChannelConnection> GetChannelConnection(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::GetChannelConnectionRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::ListChannelConnectionsResponse>
  ListChannelConnections(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::ListChannelConnectionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateChannelConnection(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteChannelConnection(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request) override;

  StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  GetGoogleChannelConfig(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  UpdateGoogleChannelConfig(
      grpc::ClientContext& context,
      google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
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
  std::shared_ptr<EventarcStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // EventarcLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_INTERNAL_EVENTARC_LOGGING_DECORATOR_H
