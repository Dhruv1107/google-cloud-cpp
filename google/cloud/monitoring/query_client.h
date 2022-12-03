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
// source: google/monitoring/v3/query_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_QUERY_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_QUERY_CLIENT_H

#include "google/cloud/monitoring/query_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The QueryService API is used to manage time series data in Stackdriver
/// Monitoring. Time series data is a collection of data points that describes
/// the time-varying values of a metric.
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
class QueryServiceClient {
 public:
  explicit QueryServiceClient(
      std::shared_ptr<QueryServiceConnection> connection, Options opts = {});
  ~QueryServiceClient();

  ///@{
  // @name Copy and move support
  QueryServiceClient(QueryServiceClient const&) = default;
  QueryServiceClient& operator=(QueryServiceClient const&) = default;
  QueryServiceClient(QueryServiceClient&&) = default;
  QueryServiceClient& operator=(QueryServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(QueryServiceClient const& a,
                         QueryServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(QueryServiceClient const& a,
                         QueryServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Queries time series using Monitoring Query Language. This method does not
  /// require a Workspace.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::QueryTimeSeriesRequest,google/monitoring/v3/metric_service.proto#L474}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::monitoring::v3::TimeSeriesData,google/monitoring/v3/metric.proto#L133}
  ///
  /// [google.monitoring.v3.QueryTimeSeriesRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L474}
  /// [google.monitoring.v3.TimeSeriesData]:
  /// @googleapis_reference_link{google/monitoring/v3/metric.proto#L133}
  ///
  StreamRange<google::monitoring::v3::TimeSeriesData> QueryTimeSeries(
      google::monitoring::v3::QueryTimeSeriesRequest request,
      Options opts = {});

 private:
  std::shared_ptr<QueryServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_QUERY_CLIENT_H
