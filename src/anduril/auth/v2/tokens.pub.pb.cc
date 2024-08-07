// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/auth/v2/tokens.pub.proto
// Protobuf C++ Version: 5.27.3

#include "anduril/auth/v2/tokens.pub.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace anduril {
namespace auth {
namespace v2 {

inline constexpr RefreshOidcTokensRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : refresh_token_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR RefreshOidcTokensRequest::RefreshOidcTokensRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct RefreshOidcTokensRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RefreshOidcTokensRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RefreshOidcTokensRequestDefaultTypeInternal() {}
  union {
    RefreshOidcTokensRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RefreshOidcTokensRequestDefaultTypeInternal _RefreshOidcTokensRequest_default_instance_;

inline constexpr RefreshOidcTokensResponse::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        refresh_token_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        id_token_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        token_validity_duration_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR RefreshOidcTokensResponse::RefreshOidcTokensResponse(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct RefreshOidcTokensResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RefreshOidcTokensResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RefreshOidcTokensResponseDefaultTypeInternal() {}
  union {
    RefreshOidcTokensResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RefreshOidcTokensResponseDefaultTypeInternal _RefreshOidcTokensResponse_default_instance_;
}  // namespace v2
}  // namespace auth
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2fauth_2fv2_2ftokens_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fauth_2fv2_2ftokens_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2fauth_2fv2_2ftokens_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::auth::v2::RefreshOidcTokensRequest, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::auth::v2::RefreshOidcTokensRequest, _impl_.refresh_token_),
        PROTOBUF_FIELD_OFFSET(::anduril::auth::v2::RefreshOidcTokensResponse, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::anduril::auth::v2::RefreshOidcTokensResponse, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::auth::v2::RefreshOidcTokensResponse, _impl_.token_validity_duration_),
        PROTOBUF_FIELD_OFFSET(::anduril::auth::v2::RefreshOidcTokensResponse, _impl_.refresh_token_),
        PROTOBUF_FIELD_OFFSET(::anduril::auth::v2::RefreshOidcTokensResponse, _impl_.id_token_),
        0,
        ~0u,
        ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::auth::v2::RefreshOidcTokensRequest)},
        {9, 20, -1, sizeof(::anduril::auth::v2::RefreshOidcTokensResponse)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::auth::v2::_RefreshOidcTokensRequest_default_instance_._instance,
    &::anduril::auth::v2::_RefreshOidcTokensResponse_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fauth_2fv2_2ftokens_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n anduril/auth/v2/tokens.pub.proto\022\017andu"
    "ril.auth.v2\032\036google/protobuf/duration.pr"
    "oto\"\?\n\030RefreshOidcTokensRequest\022#\n\rrefre"
    "sh_token\030\001 \001(\tR\014refreshToken\"\256\001\n\031Refresh"
    "OidcTokensResponse\022Q\n\027token_validity_dur"
    "ation\030\001 \001(\0132\031.google.protobuf.DurationR\025"
    "tokenValidityDuration\022#\n\rrefresh_token\030\002"
    " \001(\tR\014refreshToken\022\031\n\010id_token\030\003 \001(\tR\007id"
    "Token2t\n\006Tokens\022j\n\021RefreshOidcTokens\022).a"
    "nduril.auth.v2.RefreshOidcTokensRequest\032"
    "*.anduril.auth.v2.RefreshOidcTokensRespo"
    "nseB\300\001\n\023com.anduril.auth.v2B\016TokensPubPr"
    "otoP\001Z;ghe.anduril.dev/anduril/andurilap"
    "is-go/anduril/auth/v2;auth\242\002\003AAX\252\002\017Andur"
    "il.Auth.V2\312\002\017Anduril\\Auth\\V2\342\002\033Anduril\\A"
    "uth\\V2\\GPBMetadata\352\002\021Anduril::Auth::V2b\006"
    "proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_anduril_2fauth_2fv2_2ftokens_2epub_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2fduration_2eproto,
};
static ::absl::once_flag descriptor_table_anduril_2fauth_2fv2_2ftokens_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fauth_2fv2_2ftokens_2epub_2eproto = {
    false,
    false,
    646,
    descriptor_table_protodef_anduril_2fauth_2fv2_2ftokens_2epub_2eproto,
    "anduril/auth/v2/tokens.pub.proto",
    &descriptor_table_anduril_2fauth_2fv2_2ftokens_2epub_2eproto_once,
    descriptor_table_anduril_2fauth_2fv2_2ftokens_2epub_2eproto_deps,
    1,
    2,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fauth_2fv2_2ftokens_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2fauth_2fv2_2ftokens_2epub_2eproto,
    file_level_service_descriptors_anduril_2fauth_2fv2_2ftokens_2epub_2eproto,
};
namespace anduril {
namespace auth {
namespace v2 {
// ===================================================================

class RefreshOidcTokensRequest::_Internal {
 public:
};

RefreshOidcTokensRequest::RefreshOidcTokensRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.auth.v2.RefreshOidcTokensRequest)
}
inline PROTOBUF_NDEBUG_INLINE RefreshOidcTokensRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::auth::v2::RefreshOidcTokensRequest& from_msg)
      : refresh_token_(arena, from.refresh_token_),
        _cached_size_{0} {}

RefreshOidcTokensRequest::RefreshOidcTokensRequest(
    ::google::protobuf::Arena* arena,
    const RefreshOidcTokensRequest& from)
    : ::google::protobuf::Message(arena) {
  RefreshOidcTokensRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:anduril.auth.v2.RefreshOidcTokensRequest)
}
inline PROTOBUF_NDEBUG_INLINE RefreshOidcTokensRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : refresh_token_(arena),
        _cached_size_{0} {}

inline void RefreshOidcTokensRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
RefreshOidcTokensRequest::~RefreshOidcTokensRequest() {
  // @@protoc_insertion_point(destructor:anduril.auth.v2.RefreshOidcTokensRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void RefreshOidcTokensRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.refresh_token_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
RefreshOidcTokensRequest::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(RefreshOidcTokensRequest, _impl_._cached_size_),
              false,
          },
          &RefreshOidcTokensRequest::MergeImpl,
          &RefreshOidcTokensRequest::kDescriptorMethods,
          &descriptor_table_anduril_2fauth_2fv2_2ftokens_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 62, 2> RefreshOidcTokensRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_RefreshOidcTokensRequest_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::auth::v2::RefreshOidcTokensRequest>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string refresh_token = 1 [json_name = "refreshToken"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(RefreshOidcTokensRequest, _impl_.refresh_token_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string refresh_token = 1 [json_name = "refreshToken"];
    {PROTOBUF_FIELD_OFFSET(RefreshOidcTokensRequest, _impl_.refresh_token_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\50\15\0\0\0\0\0\0"
    "anduril.auth.v2.RefreshOidcTokensRequest"
    "refresh_token"
  }},
};

PROTOBUF_NOINLINE void RefreshOidcTokensRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.auth.v2.RefreshOidcTokensRequest)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.refresh_token_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* RefreshOidcTokensRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.auth.v2.RefreshOidcTokensRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string refresh_token = 1 [json_name = "refreshToken"];
  if (!this->_internal_refresh_token().empty()) {
    const std::string& _s = this->_internal_refresh_token();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.auth.v2.RefreshOidcTokensRequest.refresh_token");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.auth.v2.RefreshOidcTokensRequest)
  return target;
}

::size_t RefreshOidcTokensRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.auth.v2.RefreshOidcTokensRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string refresh_token = 1 [json_name = "refreshToken"];
  if (!this->_internal_refresh_token().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_refresh_token());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void RefreshOidcTokensRequest::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<RefreshOidcTokensRequest*>(&to_msg);
  auto& from = static_cast<const RefreshOidcTokensRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.auth.v2.RefreshOidcTokensRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_refresh_token().empty()) {
    _this->_internal_set_refresh_token(from._internal_refresh_token());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void RefreshOidcTokensRequest::CopyFrom(const RefreshOidcTokensRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.auth.v2.RefreshOidcTokensRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void RefreshOidcTokensRequest::InternalSwap(RefreshOidcTokensRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.refresh_token_, &other->_impl_.refresh_token_, arena);
}

::google::protobuf::Metadata RefreshOidcTokensRequest::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class RefreshOidcTokensResponse::_Internal {
 public:
  using HasBits =
      decltype(std::declval<RefreshOidcTokensResponse>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(RefreshOidcTokensResponse, _impl_._has_bits_);
};

void RefreshOidcTokensResponse::clear_token_validity_duration() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.token_validity_duration_ != nullptr) _impl_.token_validity_duration_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
RefreshOidcTokensResponse::RefreshOidcTokensResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.auth.v2.RefreshOidcTokensResponse)
}
inline PROTOBUF_NDEBUG_INLINE RefreshOidcTokensResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::auth::v2::RefreshOidcTokensResponse& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        refresh_token_(arena, from.refresh_token_),
        id_token_(arena, from.id_token_) {}

RefreshOidcTokensResponse::RefreshOidcTokensResponse(
    ::google::protobuf::Arena* arena,
    const RefreshOidcTokensResponse& from)
    : ::google::protobuf::Message(arena) {
  RefreshOidcTokensResponse* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.token_validity_duration_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::google::protobuf::Duration>(
                              arena, *from._impl_.token_validity_duration_)
                        : nullptr;

  // @@protoc_insertion_point(copy_constructor:anduril.auth.v2.RefreshOidcTokensResponse)
}
inline PROTOBUF_NDEBUG_INLINE RefreshOidcTokensResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        refresh_token_(arena),
        id_token_(arena) {}

inline void RefreshOidcTokensResponse::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.token_validity_duration_ = {};
}
RefreshOidcTokensResponse::~RefreshOidcTokensResponse() {
  // @@protoc_insertion_point(destructor:anduril.auth.v2.RefreshOidcTokensResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void RefreshOidcTokensResponse::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.refresh_token_.Destroy();
  _impl_.id_token_.Destroy();
  delete _impl_.token_validity_duration_;
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
RefreshOidcTokensResponse::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(RefreshOidcTokensResponse, _impl_._cached_size_),
              false,
          },
          &RefreshOidcTokensResponse::MergeImpl,
          &RefreshOidcTokensResponse::kDescriptorMethods,
          &descriptor_table_anduril_2fauth_2fv2_2ftokens_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 1, 71, 2> RefreshOidcTokensResponse::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(RefreshOidcTokensResponse, _impl_._has_bits_),
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_RefreshOidcTokensResponse_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::auth::v2::RefreshOidcTokensResponse>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // .google.protobuf.Duration token_validity_duration = 1 [json_name = "tokenValidityDuration"];
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(RefreshOidcTokensResponse, _impl_.token_validity_duration_)}},
    // string refresh_token = 2 [json_name = "refreshToken"];
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(RefreshOidcTokensResponse, _impl_.refresh_token_)}},
    // string id_token = 3 [json_name = "idToken"];
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(RefreshOidcTokensResponse, _impl_.id_token_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .google.protobuf.Duration token_validity_duration = 1 [json_name = "tokenValidityDuration"];
    {PROTOBUF_FIELD_OFFSET(RefreshOidcTokensResponse, _impl_.token_validity_duration_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // string refresh_token = 2 [json_name = "refreshToken"];
    {PROTOBUF_FIELD_OFFSET(RefreshOidcTokensResponse, _impl_.refresh_token_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string id_token = 3 [json_name = "idToken"];
    {PROTOBUF_FIELD_OFFSET(RefreshOidcTokensResponse, _impl_.id_token_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }}, {{
    {::_pbi::TcParser::GetTable<::google::protobuf::Duration>()},
  }}, {{
    "\51\0\15\10\0\0\0\0"
    "anduril.auth.v2.RefreshOidcTokensResponse"
    "refresh_token"
    "id_token"
  }},
};

PROTOBUF_NOINLINE void RefreshOidcTokensResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.auth.v2.RefreshOidcTokensResponse)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.refresh_token_.ClearToEmpty();
  _impl_.id_token_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.token_validity_duration_ != nullptr);
    _impl_.token_validity_duration_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* RefreshOidcTokensResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.auth.v2.RefreshOidcTokensResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .google.protobuf.Duration token_validity_duration = 1 [json_name = "tokenValidityDuration"];
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        1, *_impl_.token_validity_duration_, _impl_.token_validity_duration_->GetCachedSize(), target, stream);
  }

  // string refresh_token = 2 [json_name = "refreshToken"];
  if (!this->_internal_refresh_token().empty()) {
    const std::string& _s = this->_internal_refresh_token();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.auth.v2.RefreshOidcTokensResponse.refresh_token");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string id_token = 3 [json_name = "idToken"];
  if (!this->_internal_id_token().empty()) {
    const std::string& _s = this->_internal_id_token();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.auth.v2.RefreshOidcTokensResponse.id_token");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.auth.v2.RefreshOidcTokensResponse)
  return target;
}

::size_t RefreshOidcTokensResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.auth.v2.RefreshOidcTokensResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string refresh_token = 2 [json_name = "refreshToken"];
  if (!this->_internal_refresh_token().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_refresh_token());
  }

  // string id_token = 3 [json_name = "idToken"];
  if (!this->_internal_id_token().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_id_token());
  }

  // .google.protobuf.Duration token_validity_duration = 1 [json_name = "tokenValidityDuration"];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size +=
        1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.token_validity_duration_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void RefreshOidcTokensResponse::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<RefreshOidcTokensResponse*>(&to_msg);
  auto& from = static_cast<const RefreshOidcTokensResponse&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.auth.v2.RefreshOidcTokensResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_refresh_token().empty()) {
    _this->_internal_set_refresh_token(from._internal_refresh_token());
  }
  if (!from._internal_id_token().empty()) {
    _this->_internal_set_id_token(from._internal_id_token());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(from._impl_.token_validity_duration_ != nullptr);
    if (_this->_impl_.token_validity_duration_ == nullptr) {
      _this->_impl_.token_validity_duration_ =
          ::google::protobuf::Message::CopyConstruct<::google::protobuf::Duration>(arena, *from._impl_.token_validity_duration_);
    } else {
      _this->_impl_.token_validity_duration_->MergeFrom(*from._impl_.token_validity_duration_);
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void RefreshOidcTokensResponse::CopyFrom(const RefreshOidcTokensResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.auth.v2.RefreshOidcTokensResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void RefreshOidcTokensResponse::InternalSwap(RefreshOidcTokensResponse* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.refresh_token_, &other->_impl_.refresh_token_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.id_token_, &other->_impl_.id_token_, arena);
  swap(_impl_.token_validity_duration_, other->_impl_.token_validity_duration_);
}

::google::protobuf::Metadata RefreshOidcTokensResponse::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v2
}  // namespace auth
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2fauth_2fv2_2ftokens_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"