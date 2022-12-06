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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_DOMAIN_MAPPINGS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_DOMAIN_MAPPINGS_CLIENT_H

#include "google/cloud/appengine/domain_mappings_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages domains serving an application.
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
class DomainMappingsClient {
 public:
  explicit DomainMappingsClient(
      std::shared_ptr<DomainMappingsConnection> connection, Options opts = {});
  ~DomainMappingsClient();

  ///@{
  // @name Copy and move support
  DomainMappingsClient(DomainMappingsClient const&) = default;
  DomainMappingsClient& operator=(DomainMappingsClient const&) = default;
  DomainMappingsClient(DomainMappingsClient&&) = default;
  DomainMappingsClient& operator=(DomainMappingsClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(DomainMappingsClient const& a,
                         DomainMappingsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DomainMappingsClient const& a,
                         DomainMappingsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists the domain mappings on an application.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::ListDomainMappingsRequest,google/appengine/v1/appengine.proto#L932}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::DomainMapping,google/appengine/v1/domain_mapping.proto#L28}
  ///
  /// [google.appengine.v1.ListDomainMappingsRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L932}
  /// [google.appengine.v1.DomainMapping]:
  /// @googleapis_reference_link{google/appengine/v1/domain_mapping.proto#L28}
  ///
  StreamRange<google::appengine::v1::DomainMapping> ListDomainMappings(
      google::appengine::v1::ListDomainMappingsRequest request,
      Options opts = {});

  ///
  /// Gets the specified domain mapping.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::GetDomainMappingRequest,google/appengine/v1/appengine.proto#L953}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::DomainMapping,google/appengine/v1/domain_mapping.proto#L28}
  ///
  /// [google.appengine.v1.GetDomainMappingRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L953}
  /// [google.appengine.v1.DomainMapping]:
  /// @googleapis_reference_link{google/appengine/v1/domain_mapping.proto#L28}
  ///
  StatusOr<google::appengine::v1::DomainMapping> GetDomainMapping(
      google::appengine::v1::GetDomainMappingRequest const& request,
      Options opts = {});

  ///
  /// Maps a domain to an application. A user must be authorized to administer a
  /// domain in order to map it to an application. For a list of available
  /// authorized domains, see [`AuthorizedDomains.ListAuthorizedDomains`]().
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::CreateDomainMappingRequest,google/appengine/v1/appengine.proto#L977}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::DomainMapping,google/appengine/v1/domain_mapping.proto#L28}
  ///
  /// [google.appengine.v1.CreateDomainMappingRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L977}
  /// [google.appengine.v1.DomainMapping]:
  /// @googleapis_reference_link{google/appengine/v1/domain_mapping.proto#L28}
  ///
  future<StatusOr<google::appengine::v1::DomainMapping>> CreateDomainMapping(
      google::appengine::v1::CreateDomainMappingRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified domain mapping. To map an SSL certificate to a
  /// domain mapping, update `certificate_id` to point to an
  /// `AuthorizedCertificate` resource. A user must be authorized to administer
  /// the associated domain in order to update a `DomainMapping` resource.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::UpdateDomainMappingRequest,google/appengine/v1/appengine.proto#L990}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::DomainMapping,google/appengine/v1/domain_mapping.proto#L28}
  ///
  /// [google.appengine.v1.UpdateDomainMappingRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L990}
  /// [google.appengine.v1.DomainMapping]:
  /// @googleapis_reference_link{google/appengine/v1/domain_mapping.proto#L28}
  ///
  future<StatusOr<google::appengine::v1::DomainMapping>> UpdateDomainMapping(
      google::appengine::v1::UpdateDomainMappingRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified domain mapping. A user must be authorized to
  /// administer the associated domain in order to delete a `DomainMapping`
  /// resource.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::DeleteDomainMappingRequest,google/appengine/v1/appengine.proto#L1004}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::OperationMetadataV1,google/appengine/v1/operation.proto#L30}
  ///
  /// [google.appengine.v1.DeleteDomainMappingRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L1004}
  /// [google.appengine.v1.OperationMetadataV1]:
  /// @googleapis_reference_link{google/appengine/v1/operation.proto#L30}
  ///
  future<StatusOr<google::appengine::v1::OperationMetadataV1>>
  DeleteDomainMapping(
      google::appengine::v1::DeleteDomainMappingRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<DomainMappingsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_DOMAIN_MAPPINGS_CLIENT_H
