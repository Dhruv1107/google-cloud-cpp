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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SCHEDULER_CLOUD_SCHEDULER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SCHEDULER_CLOUD_SCHEDULER_CLIENT_H

#include "google/cloud/scheduler/cloud_scheduler_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace scheduler {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The Cloud Scheduler API allows external entities to reliably
/// schedule asynchronous jobs.
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
class CloudSchedulerClient {
 public:
  explicit CloudSchedulerClient(
      std::shared_ptr<CloudSchedulerConnection> connection, Options opts = {});
  ~CloudSchedulerClient();

  ///@{
  // @name Copy and move support
  CloudSchedulerClient(CloudSchedulerClient const&) = default;
  CloudSchedulerClient& operator=(CloudSchedulerClient const&) = default;
  CloudSchedulerClient(CloudSchedulerClient&&) = default;
  CloudSchedulerClient& operator=(CloudSchedulerClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(CloudSchedulerClient const& a,
                         CloudSchedulerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CloudSchedulerClient const& a,
                         CloudSchedulerClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists jobs.
  ///
  /// @param parent  Required. The location name. For example:
  ///  `projects/PROJECT_ID/locations/LOCATION_ID`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.ListJobsRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L133}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StreamRange<google::cloud::scheduler::v1::Job> ListJobs(
      std::string const& parent, Options opts = {});

  ///
  /// Lists jobs.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::scheduler::v1::ListJobsRequest,google/cloud/scheduler/v1/cloudscheduler.proto#L133}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.ListJobsRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L133}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StreamRange<google::cloud::scheduler::v1::Job> ListJobs(
      google::cloud::scheduler::v1::ListJobsRequest request, Options opts = {});

  ///
  /// Gets a job.
  ///
  /// @param name  Required. The job name. For example:
  ///  `projects/PROJECT_ID/locations/LOCATION_ID/jobs/JOB_ID`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.GetJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L177}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> GetJob(std::string const& name,
                                                     Options opts = {});

  ///
  /// Gets a job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::scheduler::v1::GetJobRequest,google/cloud/scheduler/v1/cloudscheduler.proto#L177}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.GetJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L177}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> GetJob(
      google::cloud::scheduler::v1::GetJobRequest const& request,
      Options opts = {});

  ///
  /// Creates a job.
  ///
  /// @param parent  Required. The location name. For example:
  ///  `projects/PROJECT_ID/locations/LOCATION_ID`.
  /// @param job  Required. The job to add. The user can optionally specify a
  /// name for the
  ///  job in [name][google.cloud.scheduler.v1.Job.name].
  ///  [name][google.cloud.scheduler.v1.Job.name] cannot be the same as an
  ///  existing job. If a name is not specified then the system will
  ///  generate a random unique name that will be returned
  ///  ([name][google.cloud.scheduler.v1.Job.name]) in the response.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.CreateJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L189}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> CreateJob(
      std::string const& parent, google::cloud::scheduler::v1::Job const& job,
      Options opts = {});

  ///
  /// Creates a job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::scheduler::v1::CreateJobRequest,google/cloud/scheduler/v1/cloudscheduler.proto#L189}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.CreateJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L189}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> CreateJob(
      google::cloud::scheduler::v1::CreateJobRequest const& request,
      Options opts = {});

  ///
  /// Updates a job.
  ///
  /// If successful, the updated [Job][google.cloud.scheduler.v1.Job] is
  /// returned. If the job does not exist, `NOT_FOUND` is returned.
  ///
  /// If UpdateJob does not successfully return, it is possible for the
  /// job to be in an
  /// [Job.State.UPDATE_FAILED][google.cloud.scheduler.v1.Job.State.UPDATE_FAILED]
  /// state. A job in this state may not be executed. If this happens, retry the
  /// UpdateJob request until a successful response is received.
  ///
  /// @param job  Required. The new job properties.
  /// [name][google.cloud.scheduler.v1.Job.name] must be specified.
  ///  Output only fields cannot be modified using UpdateJob.
  ///  Any value specified for an output only field will be ignored.
  /// @param update_mask  A  mask used to specify which fields of the job are
  /// being updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.UpdateJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L208}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> UpdateJob(
      google::cloud::scheduler::v1::Job const& job,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates a job.
  ///
  /// If successful, the updated [Job][google.cloud.scheduler.v1.Job] is
  /// returned. If the job does not exist, `NOT_FOUND` is returned.
  ///
  /// If UpdateJob does not successfully return, it is possible for the
  /// job to be in an
  /// [Job.State.UPDATE_FAILED][google.cloud.scheduler.v1.Job.State.UPDATE_FAILED]
  /// state. A job in this state may not be executed. If this happens, retry the
  /// UpdateJob request until a successful response is received.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::scheduler::v1::UpdateJobRequest,google/cloud/scheduler/v1/cloudscheduler.proto#L208}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.UpdateJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L208}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> UpdateJob(
      google::cloud::scheduler::v1::UpdateJobRequest const& request,
      Options opts = {});

  ///
  /// Deletes a job.
  ///
  /// @param name  Required. The job name. For example:
  ///  `projects/PROJECT_ID/locations/LOCATION_ID/jobs/JOB_ID`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.scheduler.v1.DeleteJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L222}
  ///
  Status DeleteJob(std::string const& name, Options opts = {});

  ///
  /// Deletes a job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::scheduler::v1::DeleteJobRequest,google/cloud/scheduler/v1/cloudscheduler.proto#L222}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.scheduler.v1.DeleteJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L222}
  ///
  Status DeleteJob(
      google::cloud::scheduler::v1::DeleteJobRequest const& request,
      Options opts = {});

  ///
  /// Pauses a job.
  ///
  /// If a job is paused then the system will stop executing the job
  /// until it is re-enabled via
  /// [ResumeJob][google.cloud.scheduler.v1.CloudScheduler.ResumeJob]. The state
  /// of the job is stored in [state][google.cloud.scheduler.v1.Job.state]; if
  /// paused it will be set to
  /// [Job.State.PAUSED][google.cloud.scheduler.v1.Job.State.PAUSED]. A job must
  /// be in [Job.State.ENABLED][google.cloud.scheduler.v1.Job.State.ENABLED] to
  /// be paused.
  ///
  /// @param name  Required. The job name. For example:
  ///  `projects/PROJECT_ID/locations/LOCATION_ID/jobs/JOB_ID`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.PauseJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L234}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> PauseJob(std::string const& name,
                                                       Options opts = {});

  ///
  /// Pauses a job.
  ///
  /// If a job is paused then the system will stop executing the job
  /// until it is re-enabled via
  /// [ResumeJob][google.cloud.scheduler.v1.CloudScheduler.ResumeJob]. The state
  /// of the job is stored in [state][google.cloud.scheduler.v1.Job.state]; if
  /// paused it will be set to
  /// [Job.State.PAUSED][google.cloud.scheduler.v1.Job.State.PAUSED]. A job must
  /// be in [Job.State.ENABLED][google.cloud.scheduler.v1.Job.State.ENABLED] to
  /// be paused.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::scheduler::v1::PauseJobRequest,google/cloud/scheduler/v1/cloudscheduler.proto#L234}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.PauseJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L234}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> PauseJob(
      google::cloud::scheduler::v1::PauseJobRequest const& request,
      Options opts = {});

  ///
  /// Resume a job.
  ///
  /// This method reenables a job after it has been
  /// [Job.State.PAUSED][google.cloud.scheduler.v1.Job.State.PAUSED]. The state
  /// of a job is stored in [Job.state][google.cloud.scheduler.v1.Job.state];
  /// after calling this method it will be set to
  /// [Job.State.ENABLED][google.cloud.scheduler.v1.Job.State.ENABLED]. A job
  /// must be in [Job.State.PAUSED][google.cloud.scheduler.v1.Job.State.PAUSED]
  /// to be resumed.
  ///
  /// @param name  Required. The job name. For example:
  ///  `projects/PROJECT_ID/locations/LOCATION_ID/jobs/JOB_ID`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.ResumeJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L246}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> ResumeJob(std::string const& name,
                                                        Options opts = {});

  ///
  /// Resume a job.
  ///
  /// This method reenables a job after it has been
  /// [Job.State.PAUSED][google.cloud.scheduler.v1.Job.State.PAUSED]. The state
  /// of a job is stored in [Job.state][google.cloud.scheduler.v1.Job.state];
  /// after calling this method it will be set to
  /// [Job.State.ENABLED][google.cloud.scheduler.v1.Job.State.ENABLED]. A job
  /// must be in [Job.State.PAUSED][google.cloud.scheduler.v1.Job.State.PAUSED]
  /// to be resumed.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::scheduler::v1::ResumeJobRequest,google/cloud/scheduler/v1/cloudscheduler.proto#L246}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.ResumeJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L246}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> ResumeJob(
      google::cloud::scheduler::v1::ResumeJobRequest const& request,
      Options opts = {});

  ///
  /// Forces a job to run now.
  ///
  /// When this method is called, Cloud Scheduler will dispatch the job, even
  /// if the job is already running.
  ///
  /// @param name  Required. The job name. For example:
  ///  `projects/PROJECT_ID/locations/LOCATION_ID/jobs/JOB_ID`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.RunJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L259}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> RunJob(std::string const& name,
                                                     Options opts = {});

  ///
  /// Forces a job to run now.
  ///
  /// When this method is called, Cloud Scheduler will dispatch the job, even
  /// if the job is already running.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::scheduler::v1::RunJobRequest,google/cloud/scheduler/v1/cloudscheduler.proto#L259}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::scheduler::v1::Job,google/cloud/scheduler/v1/job.proto#L33}
  ///
  /// [google.cloud.scheduler.v1.RunJobRequest]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/cloudscheduler.proto#L259}
  /// [google.cloud.scheduler.v1.Job]:
  /// @googleapis_reference_link{google/cloud/scheduler/v1/job.proto#L33}
  ///
  StatusOr<google::cloud::scheduler::v1::Job> RunJob(
      google::cloud::scheduler::v1::RunJobRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<CloudSchedulerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SCHEDULER_CLOUD_SCHEDULER_CLIENT_H
