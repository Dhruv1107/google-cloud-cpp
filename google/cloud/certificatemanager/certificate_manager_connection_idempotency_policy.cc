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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#include "google/cloud/certificatemanager/certificate_manager_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace certificatemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CertificateManagerConnectionIdempotencyPolicy::
    ~CertificateManagerConnectionIdempotencyPolicy() = default;

std::unique_ptr<CertificateManagerConnectionIdempotencyPolicy>
CertificateManagerConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<CertificateManagerConnectionIdempotencyPolicy>(
      *this);
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::ListCertificates(
    google::cloud::certificatemanager::v1::ListCertificatesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::GetCertificate(
    google::cloud::certificatemanager::v1::GetCertificateRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::CreateCertificate(
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::UpdateCertificate(
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::DeleteCertificate(
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::ListCertificateMaps(
    google::cloud::certificatemanager::v1::
        ListCertificateMapsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::GetCertificateMap(
    google::cloud::certificatemanager::v1::GetCertificateMapRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::CreateCertificateMap(
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::UpdateCertificateMap(
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::DeleteCertificateMap(
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::ListCertificateMapEntries(
    google::cloud::certificatemanager::v1::
        ListCertificateMapEntriesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::GetCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        GetCertificateMapEntryRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::CreateCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::UpdateCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::DeleteCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::ListDnsAuthorizations(
    google::cloud::certificatemanager::v1::
        ListDnsAuthorizationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CertificateManagerConnectionIdempotencyPolicy::GetDnsAuthorization(
    google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::CreateDnsAuthorization(
    google::cloud::certificatemanager::v1::
        CreateDnsAuthorizationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::UpdateDnsAuthorization(
    google::cloud::certificatemanager::v1::
        UpdateDnsAuthorizationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::DeleteDnsAuthorization(
    google::cloud::certificatemanager::v1::
        DeleteDnsAuthorizationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::ListCertificateIssuanceConfigs(
    google::cloud::certificatemanager::v1::
        ListCertificateIssuanceConfigsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::GetCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        GetCertificateIssuanceConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::CreateCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CertificateManagerConnectionIdempotencyPolicy::DeleteCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<CertificateManagerConnectionIdempotencyPolicy>
MakeDefaultCertificateManagerConnectionIdempotencyPolicy() {
  return absl::make_unique<CertificateManagerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager
}  // namespace cloud
}  // namespace google
