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
// source: google/cloud/speech/v1/cloud_speech.proto

#include "google/cloud/speech/speech_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace speech {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpeechClient::SpeechClient(std::shared_ptr<SpeechConnection> connection,
                           Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SpeechClient::~SpeechClient() = default;

StatusOr<google::cloud::speech::v1::RecognizeResponse> SpeechClient::Recognize(
    google::cloud::speech::v1::RecognitionConfig const& config,
    google::cloud::speech::v1::RecognitionAudio const& audio, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v1::RecognizeRequest request;
  *request.mutable_config() = config;
  *request.mutable_audio() = audio;
  return connection_->Recognize(request);
}

StatusOr<google::cloud::speech::v1::RecognizeResponse> SpeechClient::Recognize(
    google::cloud::speech::v1::RecognizeRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Recognize(request);
}

future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
SpeechClient::LongRunningRecognize(
    google::cloud::speech::v1::RecognitionConfig const& config,
    google::cloud::speech::v1::RecognitionAudio const& audio, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v1::LongRunningRecognizeRequest request;
  *request.mutable_config() = config;
  *request.mutable_audio() = audio;
  return connection_->LongRunningRecognize(request);
}

future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
SpeechClient::LongRunningRecognize(
    google::cloud::speech::v1::LongRunningRecognizeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LongRunningRecognize(request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v1::StreamingRecognizeRequest,
    google::cloud::speech::v1::StreamingRecognizeResponse>>
SpeechClient::AsyncStreamingRecognize(Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AsyncStreamingRecognize();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech
}  // namespace cloud
}  // namespace google
