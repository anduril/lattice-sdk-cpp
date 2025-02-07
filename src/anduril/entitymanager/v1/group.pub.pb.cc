// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/group.pub.proto
// Protobuf C++ Version: 5.29.0

#include "anduril/entitymanager/v1/group.pub.pb.h"

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

inline constexpr Echelon::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : echelon_type_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR Echelon::Echelon(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct EchelonDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EchelonDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EchelonDefaultTypeInternal() {}
  union {
    Echelon _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EchelonDefaultTypeInternal _Echelon_default_instance_;

inline constexpr GroupDetails::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : group_type_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR GroupDetails::GroupDetails(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct GroupDetailsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupDetailsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupDetailsDefaultTypeInternal() {}
  union {
    GroupDetails _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupDetailsDefaultTypeInternal _GroupDetails_default_instance_;
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::GroupDetails, _internal_metadata_),
        ~0u,  // no _extensions_
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::GroupDetails, _impl_._oneof_case_[0]),
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        ::_pbi::kInvalidFieldOffsetTag,
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::GroupDetails, _impl_.group_type_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Echelon, _internal_metadata_),
        ~0u,  // no _extensions_
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Echelon, _impl_._oneof_case_[0]),
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        ::_pbi::kInvalidFieldOffsetTag,
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Echelon, _impl_.echelon_type_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::entitymanager::v1::GroupDetails)},
        {10, -1, -1, sizeof(::anduril::entitymanager::v1::Echelon)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::entitymanager::v1::_GroupDetails_default_instance_._instance,
    &::anduril::entitymanager::v1::_Echelon_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n(anduril/entitymanager/v1/group.pub.pro"
    "to\022\030anduril.entitymanager.v1\"[\n\014GroupDet"
    "ails\022=\n\007echelon\030\003 \001(\0132!.anduril.entityma"
    "nager.v1.EchelonH\000R\007echelonB\014\n\ngroup_typ"
    "e\"e\n\007Echelon\022J\n\014army_echelon\030\001 \001(\0162%.and"
    "uril.entitymanager.v1.ArmyEchelonH\000R\013arm"
    "yEchelonB\016\n\014echelon_type*\252\002\n\013ArmyEchelon"
    "\022\030\n\024ARMY_ECHELON_INVALID\020\000\022\032\n\026ARMY_ECHEL"
    "ON_FIRE_TEAM\020\001\022\026\n\022ARMY_ECHELON_SQUAD\020\002\022\030"
    "\n\024ARMY_ECHELON_PLATOON\020\003\022\030\n\024ARMY_ECHELON"
    "_COMPANY\020\004\022\032\n\026ARMY_ECHELON_BATTALION\020\005\022\031"
    "\n\025ARMY_ECHELON_REGIMENT\020\006\022\030\n\024ARMY_ECHELO"
    "N_BRIGADE\020\007\022\031\n\025ARMY_ECHELON_DIVISION\020\010\022\026"
    "\n\022ARMY_ECHELON_CORPS\020\t\022\025\n\021ARMY_ECHELON_A"
    "RMY\020\nB\376\001\n\034com.anduril.entitymanager.v1B\r"
    "GroupPubProtoP\001ZMghe.anduril.dev/anduril"
    "/andurilapis-go/anduril/entitymanager/v1"
    ";entitymanager\242\002\003AEX\252\002\030Anduril.Entityman"
    "ager.V1\312\002\030Anduril\\Entitymanager\\V1\342\002$And"
    "uril\\Entitymanager\\V1\\GPBMetadata\352\002\032Andu"
    "ril::Entitymanager::V1b\006proto3"
};
static ::absl::once_flag descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto = {
    false,
    false,
    830,
    descriptor_table_protodef_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto,
    "anduril/entitymanager/v1/group.pub.proto",
    &descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto,
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto,
};
namespace anduril {
namespace entitymanager {
namespace v1 {
const ::google::protobuf::EnumDescriptor* ArmyEchelon_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto);
  return file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t ArmyEchelon_internal_data_[] = {
    720896u, 0u, };
bool ArmyEchelon_IsValid(int value) {
  return 0 <= value && value <= 10;
}
// ===================================================================

class GroupDetails::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
      PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::GroupDetails, _impl_._oneof_case_);
};

void GroupDetails::set_allocated_echelon(::anduril::entitymanager::v1::Echelon* echelon) {
  ::google::protobuf::Arena* message_arena = GetArena();
  clear_group_type();
  if (echelon) {
    ::google::protobuf::Arena* submessage_arena = echelon->GetArena();
    if (message_arena != submessage_arena) {
      echelon = ::google::protobuf::internal::GetOwnedMessage(message_arena, echelon, submessage_arena);
    }
    set_has_echelon();
    _impl_.group_type_.echelon_ = echelon;
  }
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.GroupDetails.echelon)
}
GroupDetails::GroupDetails(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.GroupDetails)
}
inline PROTOBUF_NDEBUG_INLINE GroupDetails::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::entitymanager::v1::GroupDetails& from_msg)
      : group_type_{},
        _cached_size_{0},
        _oneof_case_{from._oneof_case_[0]} {}

GroupDetails::GroupDetails(
    ::google::protobuf::Arena* arena,
    const GroupDetails& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  GroupDetails* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  switch (group_type_case()) {
    case GROUP_TYPE_NOT_SET:
      break;
      case kEchelon:
        _impl_.group_type_.echelon_ = ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Echelon>(arena, *from._impl_.group_type_.echelon_);
        break;
  }

  // @@protoc_insertion_point(copy_constructor:anduril.entitymanager.v1.GroupDetails)
}
inline PROTOBUF_NDEBUG_INLINE GroupDetails::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : group_type_{},
        _cached_size_{0},
        _oneof_case_{} {}

inline void GroupDetails::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
GroupDetails::~GroupDetails() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.GroupDetails)
  SharedDtor(*this);
}
inline void GroupDetails::SharedDtor(MessageLite& self) {
  GroupDetails& this_ = static_cast<GroupDetails&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  if (this_.has_group_type()) {
    this_.clear_group_type();
  }
  this_._impl_.~Impl_();
}

void GroupDetails::clear_group_type() {
// @@protoc_insertion_point(one_of_clear_start:anduril.entitymanager.v1.GroupDetails)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (group_type_case()) {
    case kEchelon: {
      if (GetArena() == nullptr) {
        delete _impl_.group_type_.echelon_;
      } else if (::google::protobuf::internal::DebugHardenClearOneofMessageOnArena()) {
        ::google::protobuf::internal::MaybePoisonAfterClear(_impl_.group_type_.echelon_);
      }
      break;
    }
    case GROUP_TYPE_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = GROUP_TYPE_NOT_SET;
}


inline void* GroupDetails::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) GroupDetails(arena);
}
constexpr auto GroupDetails::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::ZeroInit(sizeof(GroupDetails),
                                            alignof(GroupDetails));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull GroupDetails::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_GroupDetails_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &GroupDetails::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<GroupDetails>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &GroupDetails::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<GroupDetails>(), &GroupDetails::ByteSizeLong,
            &GroupDetails::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(GroupDetails, _impl_._cached_size_),
        false,
    },
    &GroupDetails::kDescriptorMethods,
    &descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* GroupDetails::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> GroupDetails::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967291,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::GroupDetails>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // .anduril.entitymanager.v1.Echelon echelon = 3 [json_name = "echelon"];
    {PROTOBUF_FIELD_OFFSET(GroupDetails, _impl_.group_type_.echelon_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Echelon>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void GroupDetails::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.GroupDetails)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_group_type();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* GroupDetails::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const GroupDetails& this_ = static_cast<const GroupDetails&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* GroupDetails::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const GroupDetails& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.GroupDetails)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // .anduril.entitymanager.v1.Echelon echelon = 3 [json_name = "echelon"];
          if (this_.group_type_case() == kEchelon) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                3, *this_._impl_.group_type_.echelon_, this_._impl_.group_type_.echelon_->GetCachedSize(), target,
                stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.GroupDetails)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t GroupDetails::ByteSizeLong(const MessageLite& base) {
          const GroupDetails& this_ = static_cast<const GroupDetails&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t GroupDetails::ByteSizeLong() const {
          const GroupDetails& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.GroupDetails)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          switch (this_.group_type_case()) {
            // .anduril.entitymanager.v1.Echelon echelon = 3 [json_name = "echelon"];
            case kEchelon: {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.group_type_.echelon_);
              break;
            }
            case GROUP_TYPE_NOT_SET: {
              break;
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void GroupDetails::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<GroupDetails*>(&to_msg);
  auto& from = static_cast<const GroupDetails&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.GroupDetails)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[0]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[0];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_group_type();
      }
      _this->_impl_._oneof_case_[0] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kEchelon: {
        if (oneof_needs_init) {
          _this->_impl_.group_type_.echelon_ =
              ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Echelon>(arena, *from._impl_.group_type_.echelon_);
        } else {
          _this->_impl_.group_type_.echelon_->MergeFrom(from._internal_echelon());
        }
        break;
      }
      case GROUP_TYPE_NOT_SET:
        break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void GroupDetails::CopyFrom(const GroupDetails& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.GroupDetails)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void GroupDetails::InternalSwap(GroupDetails* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.group_type_, other->_impl_.group_type_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::google::protobuf::Metadata GroupDetails::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class Echelon::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
      PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Echelon, _impl_._oneof_case_);
};

Echelon::Echelon(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.Echelon)
}
inline PROTOBUF_NDEBUG_INLINE Echelon::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::entitymanager::v1::Echelon& from_msg)
      : echelon_type_{},
        _cached_size_{0},
        _oneof_case_{from._oneof_case_[0]} {}

Echelon::Echelon(
    ::google::protobuf::Arena* arena,
    const Echelon& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Echelon* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  switch (echelon_type_case()) {
    case ECHELON_TYPE_NOT_SET:
      break;
      case kArmyEchelon:
        _impl_.echelon_type_.army_echelon_ = from._impl_.echelon_type_.army_echelon_;
        break;
  }

  // @@protoc_insertion_point(copy_constructor:anduril.entitymanager.v1.Echelon)
}
inline PROTOBUF_NDEBUG_INLINE Echelon::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : echelon_type_{},
        _cached_size_{0},
        _oneof_case_{} {}

inline void Echelon::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Echelon::~Echelon() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.Echelon)
  SharedDtor(*this);
}
inline void Echelon::SharedDtor(MessageLite& self) {
  Echelon& this_ = static_cast<Echelon&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  if (this_.has_echelon_type()) {
    this_.clear_echelon_type();
  }
  this_._impl_.~Impl_();
}

void Echelon::clear_echelon_type() {
// @@protoc_insertion_point(one_of_clear_start:anduril.entitymanager.v1.Echelon)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (echelon_type_case()) {
    case kArmyEchelon: {
      // No need to clear
      break;
    }
    case ECHELON_TYPE_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = ECHELON_TYPE_NOT_SET;
}


inline void* Echelon::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) Echelon(arena);
}
constexpr auto Echelon::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::ZeroInit(sizeof(Echelon),
                                            alignof(Echelon));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull Echelon::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_Echelon_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &Echelon::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<Echelon>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &Echelon::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<Echelon>(), &Echelon::ByteSizeLong,
            &Echelon::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(Echelon, _impl_._cached_size_),
        false,
    },
    &Echelon::kDescriptorMethods,
    &descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* Echelon::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> Echelon::_table_ = {
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
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Echelon>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // .anduril.entitymanager.v1.ArmyEchelon army_echelon = 1 [json_name = "armyEchelon"];
    {PROTOBUF_FIELD_OFFSET(Echelon, _impl_.echelon_type_.army_echelon_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kOpenEnum)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void Echelon::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.Echelon)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_echelon_type();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Echelon::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Echelon& this_ = static_cast<const Echelon&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Echelon::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Echelon& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.Echelon)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // .anduril.entitymanager.v1.ArmyEchelon army_echelon = 1 [json_name = "armyEchelon"];
          if (this_.echelon_type_case() == kArmyEchelon) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteEnumToArray(
                1, this_._internal_army_echelon(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.Echelon)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Echelon::ByteSizeLong(const MessageLite& base) {
          const Echelon& this_ = static_cast<const Echelon&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Echelon::ByteSizeLong() const {
          const Echelon& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.Echelon)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          switch (this_.echelon_type_case()) {
            // .anduril.entitymanager.v1.ArmyEchelon army_echelon = 1 [json_name = "armyEchelon"];
            case kArmyEchelon: {
              total_size += 1 +
                            ::_pbi::WireFormatLite::EnumSize(this_._internal_army_echelon());
              break;
            }
            case ECHELON_TYPE_NOT_SET: {
              break;
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void Echelon::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Echelon*>(&to_msg);
  auto& from = static_cast<const Echelon&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.Echelon)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[0]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[0];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_echelon_type();
      }
      _this->_impl_._oneof_case_[0] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kArmyEchelon: {
        _this->_impl_.echelon_type_.army_echelon_ = from._impl_.echelon_type_.army_echelon_;
        break;
      }
      case ECHELON_TYPE_NOT_SET:
        break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Echelon::CopyFrom(const Echelon& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.Echelon)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Echelon::InternalSwap(Echelon* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.echelon_type_, other->_impl_.echelon_type_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::google::protobuf::Metadata Echelon::GetMetadata() const {
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
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
