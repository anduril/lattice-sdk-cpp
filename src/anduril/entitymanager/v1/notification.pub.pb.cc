// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/notification.pub.proto
// Protobuf C++ Version: 5.29.0

#include "anduril/entitymanager/v1/notification.pub.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
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
namespace entitymanager {
namespace v1 {

inline constexpr OverrideNotificationPayload::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        field_path_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        entity_{nullptr},
        provenance_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR OverrideNotificationPayload::OverrideNotificationPayload(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct OverrideNotificationPayloadDefaultTypeInternal {
  PROTOBUF_CONSTEXPR OverrideNotificationPayloadDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~OverrideNotificationPayloadDefaultTypeInternal() {}
  union {
    OverrideNotificationPayload _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 OverrideNotificationPayloadDefaultTypeInternal _OverrideNotificationPayload_default_instance_;
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::OverrideNotificationPayload, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::OverrideNotificationPayload, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::OverrideNotificationPayload, _impl_.entity_),
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::OverrideNotificationPayload, _impl_.field_path_),
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::OverrideNotificationPayload, _impl_.provenance_),
        0,
        ~0u,
        1,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 11, -1, sizeof(::anduril::entitymanager::v1::OverrideNotificationPayload)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::entitymanager::v1::_OverrideNotificationPayload_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n/anduril/entitymanager/v1/notification."
    "pub.proto\022\030anduril.entitymanager.v1\032)and"
    "uril/entitymanager/v1/entity.pub.proto\"\274"
    "\001\n\033OverrideNotificationPayload\0228\n\006entity"
    "\030\001 \001(\0132 .anduril.entitymanager.v1.Entity"
    "R\006entity\022\035\n\nfield_path\030\002 \001(\tR\tfieldPath\022"
    "D\n\nprovenance\030\003 \001(\0132$.anduril.entitymana"
    "ger.v1.ProvenanceR\nprovenanceB\205\002\n\034com.an"
    "duril.entitymanager.v1B\024NotificationPubP"
    "rotoP\001ZMghe.anduril.dev/anduril/andurila"
    "pis-go/anduril/entitymanager/v1;entityma"
    "nager\242\002\003AEX\252\002\030Anduril.Entitymanager.V1\312\002"
    "\030Anduril\\Entitymanager\\V1\342\002$Anduril\\Enti"
    "tymanager\\V1\\GPBMetadata\352\002\032Anduril::Enti"
    "tymanager::V1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto_deps[1] =
    {
        &::descriptor_table_anduril_2fentitymanager_2fv1_2fentity_2epub_2eproto,
};
static ::absl::once_flag descriptor_table_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto = {
    false,
    false,
    581,
    descriptor_table_protodef_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto,
    "anduril/entitymanager/v1/notification.pub.proto",
    &descriptor_table_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto_once,
    descriptor_table_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto,
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto,
};
namespace anduril {
namespace entitymanager {
namespace v1 {
// ===================================================================

class OverrideNotificationPayload::_Internal {
 public:
  using HasBits =
      decltype(std::declval<OverrideNotificationPayload>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_._has_bits_);
};

void OverrideNotificationPayload::clear_entity() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.entity_ != nullptr) _impl_.entity_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void OverrideNotificationPayload::clear_provenance() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.provenance_ != nullptr) _impl_.provenance_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
OverrideNotificationPayload::OverrideNotificationPayload(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.OverrideNotificationPayload)
}
inline PROTOBUF_NDEBUG_INLINE OverrideNotificationPayload::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::entitymanager::v1::OverrideNotificationPayload& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        field_path_(arena, from.field_path_) {}

OverrideNotificationPayload::OverrideNotificationPayload(
    ::google::protobuf::Arena* arena,
    const OverrideNotificationPayload& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  OverrideNotificationPayload* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.entity_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Entity>(
                              arena, *from._impl_.entity_)
                        : nullptr;
  _impl_.provenance_ = (cached_has_bits & 0x00000002u) ? ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Provenance>(
                              arena, *from._impl_.provenance_)
                        : nullptr;

  // @@protoc_insertion_point(copy_constructor:anduril.entitymanager.v1.OverrideNotificationPayload)
}
inline PROTOBUF_NDEBUG_INLINE OverrideNotificationPayload::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        field_path_(arena) {}

inline void OverrideNotificationPayload::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, entity_),
           0,
           offsetof(Impl_, provenance_) -
               offsetof(Impl_, entity_) +
               sizeof(Impl_::provenance_));
}
OverrideNotificationPayload::~OverrideNotificationPayload() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.OverrideNotificationPayload)
  SharedDtor(*this);
}
inline void OverrideNotificationPayload::SharedDtor(MessageLite& self) {
  OverrideNotificationPayload& this_ = static_cast<OverrideNotificationPayload&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.field_path_.Destroy();
  delete this_._impl_.entity_;
  delete this_._impl_.provenance_;
  this_._impl_.~Impl_();
}

inline void* OverrideNotificationPayload::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) OverrideNotificationPayload(arena);
}
constexpr auto OverrideNotificationPayload::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::CopyInit(sizeof(OverrideNotificationPayload),
                                            alignof(OverrideNotificationPayload));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull OverrideNotificationPayload::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_OverrideNotificationPayload_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &OverrideNotificationPayload::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<OverrideNotificationPayload>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &OverrideNotificationPayload::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<OverrideNotificationPayload>(), &OverrideNotificationPayload::ByteSizeLong,
            &OverrideNotificationPayload::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_._cached_size_),
        false,
    },
    &OverrideNotificationPayload::kDescriptorMethods,
    &descriptor_table_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* OverrideNotificationPayload::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 2, 71, 2> OverrideNotificationPayload::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_._has_bits_),
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    2,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::OverrideNotificationPayload>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // .anduril.entitymanager.v1.Entity entity = 1 [json_name = "entity"];
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_.entity_)}},
    // string field_path = 2 [json_name = "fieldPath"];
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_.field_path_)}},
    // .anduril.entitymanager.v1.Provenance provenance = 3 [json_name = "provenance"];
    {::_pbi::TcParser::FastMtS1,
     {26, 1, 1, PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_.provenance_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .anduril.entitymanager.v1.Entity entity = 1 [json_name = "entity"];
    {PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_.entity_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // string field_path = 2 [json_name = "fieldPath"];
    {PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_.field_path_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // .anduril.entitymanager.v1.Provenance provenance = 3 [json_name = "provenance"];
    {PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_.provenance_), _Internal::kHasBitsOffset + 1, 1,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Entity>()},
    {::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Provenance>()},
  }}, {{
    "\64\0\12\0\0\0\0\0"
    "anduril.entitymanager.v1.OverrideNotificationPayload"
    "field_path"
  }},
};

PROTOBUF_NOINLINE void OverrideNotificationPayload::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.OverrideNotificationPayload)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.field_path_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(_impl_.entity_ != nullptr);
      _impl_.entity_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(_impl_.provenance_ != nullptr);
      _impl_.provenance_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* OverrideNotificationPayload::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const OverrideNotificationPayload& this_ = static_cast<const OverrideNotificationPayload&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* OverrideNotificationPayload::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const OverrideNotificationPayload& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.OverrideNotificationPayload)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // .anduril.entitymanager.v1.Entity entity = 1 [json_name = "entity"];
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                1, *this_._impl_.entity_, this_._impl_.entity_->GetCachedSize(), target,
                stream);
          }

          // string field_path = 2 [json_name = "fieldPath"];
          if (!this_._internal_field_path().empty()) {
            const std::string& _s = this_._internal_field_path();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.entitymanager.v1.OverrideNotificationPayload.field_path");
            target = stream->WriteStringMaybeAliased(2, _s, target);
          }

          // .anduril.entitymanager.v1.Provenance provenance = 3 [json_name = "provenance"];
          if (cached_has_bits & 0x00000002u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                3, *this_._impl_.provenance_, this_._impl_.provenance_->GetCachedSize(), target,
                stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.OverrideNotificationPayload)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t OverrideNotificationPayload::ByteSizeLong(const MessageLite& base) {
          const OverrideNotificationPayload& this_ = static_cast<const OverrideNotificationPayload&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t OverrideNotificationPayload::ByteSizeLong() const {
          const OverrideNotificationPayload& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.OverrideNotificationPayload)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // string field_path = 2 [json_name = "fieldPath"];
            if (!this_._internal_field_path().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_field_path());
            }
          }
          cached_has_bits = this_._impl_._has_bits_[0];
          if (cached_has_bits & 0x00000003u) {
            // .anduril.entitymanager.v1.Entity entity = 1 [json_name = "entity"];
            if (cached_has_bits & 0x00000001u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.entity_);
            }
            // .anduril.entitymanager.v1.Provenance provenance = 3 [json_name = "provenance"];
            if (cached_has_bits & 0x00000002u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.provenance_);
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void OverrideNotificationPayload::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<OverrideNotificationPayload*>(&to_msg);
  auto& from = static_cast<const OverrideNotificationPayload&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.OverrideNotificationPayload)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_field_path().empty()) {
    _this->_internal_set_field_path(from._internal_field_path());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(from._impl_.entity_ != nullptr);
      if (_this->_impl_.entity_ == nullptr) {
        _this->_impl_.entity_ =
            ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Entity>(arena, *from._impl_.entity_);
      } else {
        _this->_impl_.entity_->MergeFrom(*from._impl_.entity_);
      }
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(from._impl_.provenance_ != nullptr);
      if (_this->_impl_.provenance_ == nullptr) {
        _this->_impl_.provenance_ =
            ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Provenance>(arena, *from._impl_.provenance_);
      } else {
        _this->_impl_.provenance_->MergeFrom(*from._impl_.provenance_);
      }
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void OverrideNotificationPayload::CopyFrom(const OverrideNotificationPayload& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.OverrideNotificationPayload)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void OverrideNotificationPayload::InternalSwap(OverrideNotificationPayload* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.field_path_, &other->_impl_.field_path_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_.provenance_)
      + sizeof(OverrideNotificationPayload::_impl_.provenance_)
      - PROTOBUF_FIELD_OFFSET(OverrideNotificationPayload, _impl_.entity_)>(
          reinterpret_cast<char*>(&_impl_.entity_),
          reinterpret_cast<char*>(&other->_impl_.entity_));
}

::google::protobuf::Metadata OverrideNotificationPayload::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
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
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
