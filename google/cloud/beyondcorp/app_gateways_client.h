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
// source: google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_GATEWAYS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_GATEWAYS_CLIENT_H

#include "google/cloud/beyondcorp/app_gateways_connection.h"
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
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API Overview:
///
/// The `beyondcorp.googleapis.com` service implements the Google Cloud
/// BeyondCorp API.
///
/// Data Model:
///
/// The AppGatewaysService exposes the following resources:
///
/// * AppGateways, named as follows:
///   `projects/{project_id}/locations/{location_id}/appGateways/{app_gateway_id}`.
///
/// The AppGatewaysService service provides methods to manage
/// (create/read/update/delete) BeyondCorp AppGateways.
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
class AppGatewaysServiceClient {
 public:
  explicit AppGatewaysServiceClient(
      std::shared_ptr<AppGatewaysServiceConnection> connection,
      Options opts = {});
  ~AppGatewaysServiceClient();

  ///@{
  // @name Copy and move support
  AppGatewaysServiceClient(AppGatewaysServiceClient const&) = default;
  AppGatewaysServiceClient& operator=(AppGatewaysServiceClient const&) =
      default;
  AppGatewaysServiceClient(AppGatewaysServiceClient&&) = default;
  AppGatewaysServiceClient& operator=(AppGatewaysServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(AppGatewaysServiceClient const& a,
                         AppGatewaysServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AppGatewaysServiceClient const& a,
                         AppGatewaysServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists AppGateways in a given project and location.
  ///
  /// @param parent  Required. The resource name of the AppGateway location
  /// using the form:
  ///  `projects/{project_id}/locations/{location_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::AppGateway,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  /// [google.cloud.beyondcorp.appgateways.v1.ListAppGatewaysRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L99}
  /// [google.cloud.beyondcorp.appgateways.v1.AppGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  StreamRange<google::cloud::beyondcorp::appgateways::v1::AppGateway>
  ListAppGateways(std::string const& parent, Options opts = {});

  ///
  /// Lists AppGateways in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysRequest,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L99}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::AppGateway,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  /// [google.cloud.beyondcorp.appgateways.v1.ListAppGatewaysRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L99}
  /// [google.cloud.beyondcorp.appgateways.v1.AppGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  StreamRange<google::cloud::beyondcorp::appgateways::v1::AppGateway>
  ListAppGateways(
      google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysRequest
          request,
      Options opts = {});

  ///
  /// Gets details of a single AppGateway.
  ///
  /// @param name  Required. BeyondCorp AppGateway name using the form:
  ///  `projects/{project_id}/locations/{location_id}/appGateways/{app_gateway_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::AppGateway,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  /// [google.cloud.beyondcorp.appgateways.v1.GetAppGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L145}
  /// [google.cloud.beyondcorp.appgateways.v1.AppGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>
  GetAppGateway(std::string const& name, Options opts = {});

  ///
  /// Gets details of a single AppGateway.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::GetAppGatewayRequest,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L145}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::AppGateway,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  /// [google.cloud.beyondcorp.appgateways.v1.GetAppGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L145}
  /// [google.cloud.beyondcorp.appgateways.v1.AppGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>
  GetAppGateway(
      google::cloud::beyondcorp::appgateways::v1::GetAppGatewayRequest const&
          request,
      Options opts = {});

  ///
  /// Creates a new AppGateway in a given project and location.
  ///
  /// @param parent  Required. The resource project name of the AppGateway
  /// location using the
  ///  form: `projects/{project_id}/locations/{location_id}`
  /// @param app_gateway  Required. A BeyondCorp AppGateway resource.
  /// @param app_gateway_id  Optional. User-settable AppGateway resource ID.
  ///   * Must start with a letter.
  ///   * Must contain between 4-63 characters from `/[a-z][0-9]-/`.
  ///   * Must end with a number or a letter.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::AppGateway,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  /// [google.cloud.beyondcorp.appgateways.v1.CreateAppGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L157}
  /// [google.cloud.beyondcorp.appgateways.v1.AppGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  future<StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>>
  CreateAppGateway(
      std::string const& parent,
      google::cloud::beyondcorp::appgateways::v1::AppGateway const& app_gateway,
      std::string const& app_gateway_id, Options opts = {});

  ///
  /// Creates a new AppGateway in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::CreateAppGatewayRequest,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L157}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::AppGateway,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  /// [google.cloud.beyondcorp.appgateways.v1.CreateAppGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L157}
  /// [google.cloud.beyondcorp.appgateways.v1.AppGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L231}
  ///
  future<StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>>
  CreateAppGateway(
      google::cloud::beyondcorp::appgateways::v1::CreateAppGatewayRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes a single AppGateway.
  ///
  /// @param name  Required. BeyondCorp AppGateway name using the form:
  ///  `projects/{project_id}/locations/{location_id}/appGateways/{app_gateway_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::AppGatewayOperationMetadata,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L329}
  ///
  /// [google.cloud.beyondcorp.appgateways.v1.DeleteAppGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L197}
  /// [google.cloud.beyondcorp.appgateways.v1.AppGatewayOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L329}
  ///
  future<StatusOr<
      google::cloud::beyondcorp::appgateways::v1::AppGatewayOperationMetadata>>
  DeleteAppGateway(std::string const& name, Options opts = {});

  ///
  /// Deletes a single AppGateway.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::DeleteAppGatewayRequest,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L197}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appgateways::v1::AppGatewayOperationMetadata,google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L329}
  ///
  /// [google.cloud.beyondcorp.appgateways.v1.DeleteAppGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L197}
  /// [google.cloud.beyondcorp.appgateways.v1.AppGatewayOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto#L329}
  ///
  future<StatusOr<
      google::cloud::beyondcorp::appgateways::v1::AppGatewayOperationMetadata>>
  DeleteAppGateway(
      google::cloud::beyondcorp::appgateways::v1::DeleteAppGatewayRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<AppGatewaysServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_GATEWAYS_CLIENT_H
