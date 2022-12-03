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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/connectors_connection.h"
#include "google/cloud/connectors/connectors_options.h"
#include "google/cloud/connectors/internal/connectors_connection_impl.h"
#include "google/cloud/connectors/internal/connectors_option_defaults.h"
#include "google/cloud/connectors/internal/connectors_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace connectors {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectorsConnection::~ConnectorsConnection() = default;

StreamRange<google::cloud::connectors::v1::Connection>
ConnectorsConnection::ListConnections(
    google::cloud::connectors::v1::
        ListConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::connectors::v1::Connection>>();
}

StatusOr<google::cloud::connectors::v1::Connection>
ConnectorsConnection::GetConnection(
    google::cloud::connectors::v1::GetConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::connectors::v1::Connection>>
ConnectorsConnection::CreateConnection(
    google::cloud::connectors::v1::CreateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::connectors::v1::Connection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::connectors::v1::Connection>>
ConnectorsConnection::UpdateConnection(
    google::cloud::connectors::v1::UpdateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::connectors::v1::Connection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>
ConnectorsConnection::DeleteConnection(
    google::cloud::connectors::v1::DeleteConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::connectors::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::connectors::v1::Provider>
ConnectorsConnection::ListProviders(
    google::cloud::connectors::v1::
        ListProvidersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::connectors::v1::Provider>>();
}

StatusOr<google::cloud::connectors::v1::Provider>
ConnectorsConnection::GetProvider(
    google::cloud::connectors::v1::GetProviderRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::connectors::v1::Connector>
ConnectorsConnection::ListConnectors(
    google::cloud::connectors::v1::
        ListConnectorsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::connectors::v1::Connector>>();
}

StatusOr<google::cloud::connectors::v1::Connector>
ConnectorsConnection::GetConnector(
    google::cloud::connectors::v1::GetConnectorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsConnection::ListConnectorVersions(
    google::cloud::connectors::v1::
        ListConnectorVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::connectors::v1::ConnectorVersion>>();
}

StatusOr<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsConnection::GetConnectorVersion(
    google::cloud::connectors::v1::GetConnectorVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
ConnectorsConnection::GetConnectionSchemaMetadata(
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>
ConnectorsConnection::ListRuntimeEntitySchemas(
    google::cloud::connectors::v1::
        ListRuntimeEntitySchemasRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>>();
}

StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>
ConnectorsConnection::ListRuntimeActionSchemas(
    google::cloud::connectors::v1::
        ListRuntimeActionSchemasRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>>();
}

StatusOr<google::cloud::connectors::v1::RuntimeConfig>
ConnectorsConnection::GetRuntimeConfig(
    google::cloud::connectors::v1::GetRuntimeConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ConnectorsConnection> MakeConnectorsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ConnectorsPolicyOptionList>(options, __func__);
  options = connectors_internal::ConnectorsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = connectors_internal::CreateDefaultConnectorsStub(background->cq(),
                                                               options);
  return std::make_shared<connectors_internal::ConnectorsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors
}  // namespace cloud
}  // namespace google
