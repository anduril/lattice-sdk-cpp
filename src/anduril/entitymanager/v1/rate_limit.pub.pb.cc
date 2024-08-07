// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: anduril/entitymanager/v1/rate_limit.pub.proto

#include "anduril/entitymanager/v1/rate_limit.pub.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace anduril {
namespace entitymanager {
namespace v1 {

inline constexpr RateLimit::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : update_per_entity_limit_ms_{0u},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR RateLimit::RateLimit(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct RateLimitDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RateLimitDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RateLimitDefaultTypeInternal() {}
  union {
    RateLimit _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RateLimitDefaultTypeInternal _RateLimit_default_instance_;
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril
static ::_pb::Metadata file_level_metadata_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto = nullptr;
const ::uint32_t TableStruct_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::RateLimit, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::RateLimit, _impl_.update_per_entity_limit_ms_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::entitymanager::v1::RateLimit)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::entitymanager::v1::_RateLimit_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n-anduril/entitymanager/v1/rate_limit.pu"
    "b.proto\022\030anduril.entitymanager.v1\"G\n\tRat"
    "eLimit\022:\n\032update_per_entity_limit_ms\030\001 \001"
    "(\rR\026updatePerEntityLimitMsB\202\002\n\034com.andur"
    "il.entitymanager.v1B\021RateLimitPubProtoP\001"
    "ZMghe.anduril.dev/anduril/andurilapis-go"
    "/anduril/entitymanager/v1;entitymanager\242"
    "\002\003AEX\252\002\030Anduril.Entitymanager.V1\312\002\030Andur"
    "il\\Entitymanager\\V1\342\002$Anduril\\Entitymana"
    "ger\\V1\\GPBMetadata\352\002\032Anduril::Entitymana"
    "ger::V1b\006proto3"
};
static ::absl::once_flag descriptor_table_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto = {
    false,
    false,
    415,
    descriptor_table_protodef_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto,
    "anduril/entitymanager/v1/rate_limit.pub.proto",
    &descriptor_table_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto::offsets,
    file_level_metadata_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto,
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto,
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto_getter() {
  return &descriptor_table_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto(&descriptor_table_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto);
namespace anduril {
namespace entitymanager {
namespace v1 {
// ===================================================================

class RateLimit::_Internal {
 public:
};

RateLimit::RateLimit(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.RateLimit)
}
RateLimit::RateLimit(
    ::google::protobuf::Arena* arena, const RateLimit& from)
    : RateLimit(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE RateLimit::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void RateLimit::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.update_per_entity_limit_ms_ = {};
}
RateLimit::~RateLimit() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.RateLimit)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void RateLimit::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void RateLimit::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.RateLimit)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.update_per_entity_limit_ms_ = 0u;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* RateLimit::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> RateLimit::_table_ = {
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
    &_RateLimit_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // uint32 update_per_entity_limit_ms = 1 [json_name = "updatePerEntityLimitMs"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(RateLimit, _impl_.update_per_entity_limit_ms_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(RateLimit, _impl_.update_per_entity_limit_ms_)}},
  }}, {{
    65535, 65535
  }}, {{
    // uint32 update_per_entity_limit_ms = 1 [json_name = "updatePerEntityLimitMs"];
    {PROTOBUF_FIELD_OFFSET(RateLimit, _impl_.update_per_entity_limit_ms_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* RateLimit::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.RateLimit)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // uint32 update_per_entity_limit_ms = 1 [json_name = "updatePerEntityLimitMs"];
  if (this->_internal_update_per_entity_limit_ms() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_update_per_entity_limit_ms(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.RateLimit)
  return target;
}

::size_t RateLimit::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.RateLimit)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 update_per_entity_limit_ms = 1 [json_name = "updatePerEntityLimitMs"];
  if (this->_internal_update_per_entity_limit_ms() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_update_per_entity_limit_ms());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData RateLimit::_class_data_ = {
    RateLimit::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* RateLimit::GetClassData() const {
  return &_class_data_;
}

void RateLimit::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<RateLimit*>(&to_msg);
  auto& from = static_cast<const RateLimit&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.RateLimit)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_update_per_entity_limit_ms() != 0) {
    _this->_internal_set_update_per_entity_limit_ms(from._internal_update_per_entity_limit_ms());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void RateLimit::CopyFrom(const RateLimit& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.RateLimit)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool RateLimit::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* RateLimit::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void RateLimit::InternalSwap(RateLimit* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.update_per_entity_limit_ms_, other->_impl_.update_per_entity_limit_ms_);
}

::google::protobuf::Metadata RateLimit::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto_getter, &descriptor_table_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto_once,
      file_level_metadata_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
