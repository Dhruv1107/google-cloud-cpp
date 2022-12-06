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
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_SYSTEM_POLICY_V1_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_SYSTEM_POLICY_V1_CLIENT_H

#include "google/cloud/binaryauthorization/system_policy_v1_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API for working with the system policy.
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
class SystemPolicyV1Client {
 public:
  explicit SystemPolicyV1Client(
      std::shared_ptr<SystemPolicyV1Connection> connection, Options opts = {});
  ~SystemPolicyV1Client();

  ///@{
  // @name Copy and move support
  SystemPolicyV1Client(SystemPolicyV1Client const&) = default;
  SystemPolicyV1Client& operator=(SystemPolicyV1Client const&) = default;
  SystemPolicyV1Client(SystemPolicyV1Client&&) = default;
  SystemPolicyV1Client& operator=(SystemPolicyV1Client&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(SystemPolicyV1Client const& a,
                         SystemPolicyV1Client const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SystemPolicyV1Client const& a,
                         SystemPolicyV1Client const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Gets the current system policy in the specified location.
  ///
  /// @param name  Required. The resource name, in the format
  /// `locations/*/policy`.
  ///  Note that the system policy is not associated with a project.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Policy,google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  /// [google.cloud.binaryauthorization.v1.GetSystemPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L258}
  /// [google.cloud.binaryauthorization.v1.Policy]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Policy> GetSystemPolicy(
      std::string const& name, Options opts = {});

  ///
  /// Gets the current system policy in the specified location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::binaryauthorization::v1::GetSystemPolicyRequest,google/cloud/binaryauthorization/v1/service.proto#L258}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Policy,google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  /// [google.cloud.binaryauthorization.v1.GetSystemPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L258}
  /// [google.cloud.binaryauthorization.v1.Policy]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Policy> GetSystemPolicy(
      google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<SystemPolicyV1Connection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_SYSTEM_POLICY_V1_CLIENT_H
