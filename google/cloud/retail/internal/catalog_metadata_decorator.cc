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
// source: google/cloud/retail/v2/catalog_service.proto

#include "google/cloud/retail/internal/catalog_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/retail/v2/catalog_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceMetadata::CatalogServiceMetadata(
    std::shared_ptr<CatalogServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::retail::v2::ListCatalogsResponse>
CatalogServiceMetadata::ListCatalogs(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ListCatalogsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCatalogs(context, request);
}

StatusOr<google::cloud::retail::v2::Catalog>
CatalogServiceMetadata::UpdateCatalog(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateCatalogRequest const& request) {
  SetMetadata(context, "catalog.name=" + request.catalog().name());
  return child_->UpdateCatalog(context, request);
}

Status CatalogServiceMetadata::SetDefaultBranch(
    grpc::ClientContext& context,
    google::cloud::retail::v2::SetDefaultBranchRequest const& request) {
  SetMetadata(context, "catalog=" + request.catalog());
  return child_->SetDefaultBranch(context, request);
}

StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
CatalogServiceMetadata::GetDefaultBranch(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetDefaultBranchRequest const& request) {
  SetMetadata(context, "catalog=" + request.catalog());
  return child_->GetDefaultBranch(context, request);
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceMetadata::GetCompletionConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetCompletionConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCompletionConfig(context, request);
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceMetadata::UpdateCompletionConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateCompletionConfigRequest const& request) {
  SetMetadata(context,
              "completion_config.name=" + request.completion_config().name());
  return child_->UpdateCompletionConfig(context, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceMetadata::GetAttributesConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetAttributesConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAttributesConfig(context, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceMetadata::UpdateAttributesConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateAttributesConfigRequest const& request) {
  SetMetadata(context,
              "attributes_config.name=" + request.attributes_config().name());
  return child_->UpdateAttributesConfig(context, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceMetadata::AddCatalogAttribute(
    grpc::ClientContext& context,
    google::cloud::retail::v2::AddCatalogAttributeRequest const& request) {
  SetMetadata(context, "attributes_config=" + request.attributes_config());
  return child_->AddCatalogAttribute(context, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceMetadata::RemoveCatalogAttribute(
    grpc::ClientContext& context,
    google::cloud::retail::v2::RemoveCatalogAttributeRequest const& request) {
  SetMetadata(context, "attributes_config=" + request.attributes_config());
  return child_->RemoveCatalogAttribute(context, request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceMetadata::ReplaceCatalogAttribute(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ReplaceCatalogAttributeRequest const& request) {
  SetMetadata(context, "attributes_config=" + request.attributes_config());
  return child_->ReplaceCatalogAttribute(context, request);
}

void CatalogServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CatalogServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google
