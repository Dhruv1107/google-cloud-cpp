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
// source: google/cloud/run/v2/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_SERVICES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_SERVICES_CLIENT_H

#include "google/cloud/run/services_connection.h"
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
namespace run {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Cloud Run Service Control Plane API
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
class ServicesClient {
 public:
  explicit ServicesClient(std::shared_ptr<ServicesConnection> connection,
                          Options opts = {});
  ~ServicesClient();

  ///@{
  // @name Copy and move support
  ServicesClient(ServicesClient const&) = default;
  ServicesClient& operator=(ServicesClient const&) = default;
  ServicesClient(ServicesClient&&) = default;
  ServicesClient& operator=(ServicesClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(ServicesClient const& a, ServicesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ServicesClient const& a, ServicesClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a new Service in a given project and location.
  ///
  /// @param parent  Required. The location and project in which this service
  /// should be created.
  ///  Format: projects/{project}/locations/{location}, where {project} can be
  ///  project id or number. Only lowercase characters, digits, and hyphens.
  /// @param service  Required. The Service instance to create.
  /// @param service_id  Required. The unique identifier for the Service. It
  /// must begin with letter,
  ///  and cannot end with hyphen; must contain fewer than 50 characters.
  ///  The name of the service becomes {parent}/services/{service_id}.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.CreateServiceRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L159}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  future<StatusOr<google::cloud::run::v2::Service>> CreateService(
      std::string const& parent, google::cloud::run::v2::Service const& service,
      std::string const& service_id, Options opts = {});

  ///
  /// Creates a new Service in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::run::v2::CreateServiceRequest,google/cloud/run/v2/service.proto#L159}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.CreateServiceRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L159}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  future<StatusOr<google::cloud::run::v2::Service>> CreateService(
      google::cloud::run::v2::CreateServiceRequest const& request,
      Options opts = {});

  ///
  /// Gets information about a Service.
  ///
  /// @param name  Required. The full name of the Service.
  ///  Format: projects/{project}/locations/{location}/services/{service}, where
  ///  {project} can be project id or number.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.GetServiceRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L233}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  StatusOr<google::cloud::run::v2::Service> GetService(std::string const& name,
                                                       Options opts = {});

  ///
  /// Gets information about a Service.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::run::v2::GetServiceRequest,google/cloud/run/v2/service.proto#L233}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.GetServiceRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L233}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  StatusOr<google::cloud::run::v2::Service> GetService(
      google::cloud::run::v2::GetServiceRequest const& request,
      Options opts = {});

  ///
  /// Lists Services.
  ///
  /// @param parent  Required. The location and project to list resources on.
  ///  Location must be a valid GCP region, and cannot be the "-" wildcard.
  ///  Format: projects/{project}/locations/{location}, where {project} can be
  ///  project id or number.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.ListServicesRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L199}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  StreamRange<google::cloud::run::v2::Service> ListServices(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Services.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::run::v2::ListServicesRequest,google/cloud/run/v2/service.proto#L199}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.ListServicesRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L199}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  StreamRange<google::cloud::run::v2::Service> ListServices(
      google::cloud::run::v2::ListServicesRequest request, Options opts = {});

  ///
  /// Updates a Service.
  ///
  /// @param service  Required. The Service to be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.UpdateServiceRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L184}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  future<StatusOr<google::cloud::run::v2::Service>> UpdateService(
      google::cloud::run::v2::Service const& service, Options opts = {});

  ///
  /// Updates a Service.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::run::v2::UpdateServiceRequest,google/cloud/run/v2/service.proto#L184}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.UpdateServiceRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L184}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  future<StatusOr<google::cloud::run::v2::Service>> UpdateService(
      google::cloud::run::v2::UpdateServiceRequest const& request,
      Options opts = {});

  ///
  /// Deletes a Service.
  /// This will cause the Service to stop serving traffic and will delete all
  /// revisions.
  ///
  /// @param name  Required. The full name of the Service.
  ///  Format: projects/{project}/locations/{location}/services/{service}, where
  ///  {project} can be project id or number.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.DeleteServiceRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L246}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  future<StatusOr<google::cloud::run::v2::Service>> DeleteService(
      std::string const& name, Options opts = {});

  ///
  /// Deletes a Service.
  /// This will cause the Service to stop serving traffic and will delete all
  /// revisions.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::run::v2::DeleteServiceRequest,google/cloud/run/v2/service.proto#L246}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::run::v2::Service,google/cloud/run/v2/service.proto#L271}
  ///
  /// [google.cloud.run.v2.DeleteServiceRequest]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L246}
  /// [google.cloud.run.v2.Service]:
  /// @googleapis_reference_link{google/cloud/run/v2/service.proto#L271}
  ///
  future<StatusOr<google::cloud::run::v2::Service>> DeleteService(
      google::cloud::run::v2::DeleteServiceRequest const& request,
      Options opts = {});

  ///
  /// Gets the IAM Access Control policy currently in effect for the given
  /// Cloud Run Service. This result does not include any inherited policies.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Sets the IAM Access control policy for the specified Service. Overwrites
  /// any existing policy.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Returns permissions that a caller has on the specified Project.
  ///
  /// There are no permissions required for making this API call.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ServicesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_SERVICES_CLIENT_H
