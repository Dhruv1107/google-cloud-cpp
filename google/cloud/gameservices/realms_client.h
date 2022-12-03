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
// source: google/cloud/gaming/v1/realms_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_REALMS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_REALMS_CLIENT_H

#include "google/cloud/gameservices/realms_connection.h"
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
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A realm is a grouping of game server clusters that are considered
/// interchangeable.
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
class RealmsServiceClient {
 public:
  explicit RealmsServiceClient(
      std::shared_ptr<RealmsServiceConnection> connection, Options opts = {});
  ~RealmsServiceClient();

  ///@{
  // @name Copy and move support
  RealmsServiceClient(RealmsServiceClient const&) = default;
  RealmsServiceClient& operator=(RealmsServiceClient const&) = default;
  RealmsServiceClient(RealmsServiceClient&&) = default;
  RealmsServiceClient& operator=(RealmsServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(RealmsServiceClient const& a,
                         RealmsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RealmsServiceClient const& a,
                         RealmsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists realms in a given project and location.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  `projects/{project}/locations/{location}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::Realm,google/cloud/gaming/v1/realms.proto#L151}
  ///
  /// [google.cloud.gaming.v1.ListRealmsRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L30}
  /// [google.cloud.gaming.v1.Realm]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  StreamRange<google::cloud::gaming::v1::Realm> ListRealms(
      std::string const& parent, Options opts = {});

  ///
  /// Lists realms in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::ListRealmsRequest,google/cloud/gaming/v1/realms.proto#L30}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::Realm,google/cloud/gaming/v1/realms.proto#L151}
  ///
  /// [google.cloud.gaming.v1.ListRealmsRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L30}
  /// [google.cloud.gaming.v1.Realm]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  StreamRange<google::cloud::gaming::v1::Realm> ListRealms(
      google::cloud::gaming::v1::ListRealmsRequest request, Options opts = {});

  ///
  /// Gets details of a single realm.
  ///
  /// @param name  Required. The name of the realm to retrieve, in the following
  /// form:
  ///  `projects/{project}/locations/{location}/realms/{realm}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::Realm,google/cloud/gaming/v1/realms.proto#L151}
  ///
  /// [google.cloud.gaming.v1.GetRealmRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L73}
  /// [google.cloud.gaming.v1.Realm]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  StatusOr<google::cloud::gaming::v1::Realm> GetRealm(std::string const& name,
                                                      Options opts = {});

  ///
  /// Gets details of a single realm.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::GetRealmRequest,google/cloud/gaming/v1/realms.proto#L73}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::Realm,google/cloud/gaming/v1/realms.proto#L151}
  ///
  /// [google.cloud.gaming.v1.GetRealmRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L73}
  /// [google.cloud.gaming.v1.Realm]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  StatusOr<google::cloud::gaming::v1::Realm> GetRealm(
      google::cloud::gaming::v1::GetRealmRequest const& request,
      Options opts = {});

  ///
  /// Creates a new realm in a given project and location.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  `projects/{project}/locations/{location}`.
  /// @param realm  Required. The realm resource to be created.
  /// @param realm_id  Required. The ID of the realm resource to be created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::Realm,google/cloud/gaming/v1/realms.proto#L151}
  ///
  /// [google.cloud.gaming.v1.CreateRealmRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L85}
  /// [google.cloud.gaming.v1.Realm]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  future<StatusOr<google::cloud::gaming::v1::Realm>> CreateRealm(
      std::string const& parent, google::cloud::gaming::v1::Realm const& realm,
      std::string const& realm_id, Options opts = {});

  ///
  /// Creates a new realm in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::CreateRealmRequest,google/cloud/gaming/v1/realms.proto#L85}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::Realm,google/cloud/gaming/v1/realms.proto#L151}
  ///
  /// [google.cloud.gaming.v1.CreateRealmRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L85}
  /// [google.cloud.gaming.v1.Realm]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  future<StatusOr<google::cloud::gaming::v1::Realm>> CreateRealm(
      google::cloud::gaming::v1::CreateRealmRequest const& request,
      Options opts = {});

  ///
  /// Deletes a single realm.
  ///
  /// @param name  Required. The name of the realm to delete, in the following
  /// form:
  ///  `projects/{project}/locations/{location}/realms/{realm}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::OperationMetadata,google/cloud/gaming/v1/common.proto#L28}
  ///
  /// [google.cloud.gaming.v1.DeleteRealmRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L103}
  /// [google.cloud.gaming.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L28}
  ///
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>> DeleteRealm(
      std::string const& name, Options opts = {});

  ///
  /// Deletes a single realm.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::DeleteRealmRequest,google/cloud/gaming/v1/realms.proto#L103}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::OperationMetadata,google/cloud/gaming/v1/common.proto#L28}
  ///
  /// [google.cloud.gaming.v1.DeleteRealmRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L103}
  /// [google.cloud.gaming.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L28}
  ///
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>> DeleteRealm(
      google::cloud::gaming::v1::DeleteRealmRequest const& request,
      Options opts = {});

  ///
  /// Patches a single realm.
  ///
  /// @param realm  Required. The realm to be updated.
  ///  Only fields specified in update_mask are updated.
  /// @param update_mask  Required. The update mask applies to the resource. For
  /// the `FieldMask`
  ///  definition, see
  ///  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::Realm,google/cloud/gaming/v1/realms.proto#L151}
  ///
  /// [google.cloud.gaming.v1.UpdateRealmRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L115}
  /// [google.cloud.gaming.v1.Realm]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  future<StatusOr<google::cloud::gaming::v1::Realm>> UpdateRealm(
      google::cloud::gaming::v1::Realm const& realm,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Patches a single realm.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::UpdateRealmRequest,google/cloud/gaming/v1/realms.proto#L115}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::Realm,google/cloud/gaming/v1/realms.proto#L151}
  ///
  /// [google.cloud.gaming.v1.UpdateRealmRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L115}
  /// [google.cloud.gaming.v1.Realm]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  future<StatusOr<google::cloud::gaming::v1::Realm>> UpdateRealm(
      google::cloud::gaming::v1::UpdateRealmRequest const& request,
      Options opts = {});

  ///
  /// Previews patches to a single realm.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gaming::v1::PreviewRealmUpdateRequest,google/cloud/gaming/v1/realms.proto#L127}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gaming::v1::PreviewRealmUpdateResponse,google/cloud/gaming/v1/realms.proto#L142}
  ///
  /// [google.cloud.gaming.v1.PreviewRealmUpdateRequest]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L127}
  /// [google.cloud.gaming.v1.PreviewRealmUpdateResponse]:
  /// @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L142}
  ///
  StatusOr<google::cloud::gaming::v1::PreviewRealmUpdateResponse>
  PreviewRealmUpdate(
      google::cloud::gaming::v1::PreviewRealmUpdateRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<RealmsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_REALMS_CLIENT_H
