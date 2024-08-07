// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/group.pub.proto
// Protobuf C++ Version: 5.27.3

#include "anduril/entitymanager/v1/group.pub.pb.h"

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
namespace entitymanager {
namespace v1 {
      template <typename>
PROTOBUF_CONSTEXPR Team::Team(::_pbi::ConstantInitialized) {}
struct TeamDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TeamDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TeamDefaultTypeInternal() {}
  union {
    Team _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TeamDefaultTypeInternal _Team_default_instance_;

inline constexpr GroupDetails::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : group_type_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR GroupDetails::GroupDetails(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
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
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto = nullptr;
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
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Team, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::entitymanager::v1::GroupDetails)},
        {10, -1, -1, sizeof(::anduril::entitymanager::v1::Team)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::entitymanager::v1::_GroupDetails_default_instance_._instance,
    &::anduril::entitymanager::v1::_Team_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n(anduril/entitymanager/v1/group.pub.pro"
    "to\022\030anduril.entitymanager.v1\"R\n\014GroupDet"
    "ails\0224\n\004team\030\001 \001(\0132\036.anduril.entitymanag"
    "er.v1.TeamH\000R\004teamB\014\n\ngroup_type\"\006\n\004Team"
    "B\376\001\n\034com.anduril.entitymanager.v1B\rGroup"
    "PubProtoP\001ZMghe.anduril.dev/anduril/andu"
    "rilapis-go/anduril/entitymanager/v1;enti"
    "tymanager\242\002\003AEX\252\002\030Anduril.Entitymanager."
    "V1\312\002\030Anduril\\Entitymanager\\V1\342\002$Anduril\\"
    "Entitymanager\\V1\\GPBMetadata\352\002\032Anduril::"
    "Entitymanager::V1b\006proto3"
};
static ::absl::once_flag descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto = {
    false,
    false,
    425,
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
// ===================================================================

class GroupDetails::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
      PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::GroupDetails, _impl_._oneof_case_);
};

void GroupDetails::set_allocated_team(::anduril::entitymanager::v1::Team* team) {
  ::google::protobuf::Arena* message_arena = GetArena();
  clear_group_type();
  if (team) {
    ::google::protobuf::Arena* submessage_arena = team->GetArena();
    if (message_arena != submessage_arena) {
      team = ::google::protobuf::internal::GetOwnedMessage(message_arena, team, submessage_arena);
    }
    set_has_team();
    _impl_.group_type_.team_ = team;
  }
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.GroupDetails.team)
}
GroupDetails::GroupDetails(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
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
    : ::google::protobuf::Message(arena) {
  GroupDetails* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  switch (group_type_case()) {
    case GROUP_TYPE_NOT_SET:
      break;
      case kTeam:
        _impl_.group_type_.team_ = ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Team>(arena, *from._impl_.group_type_.team_);
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
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void GroupDetails::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  if (has_group_type()) {
    clear_group_type();
  }
  _impl_.~Impl_();
}

void GroupDetails::clear_group_type() {
// @@protoc_insertion_point(one_of_clear_start:anduril.entitymanager.v1.GroupDetails)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (group_type_case()) {
    case kTeam: {
      if (GetArena() == nullptr) {
        delete _impl_.group_type_.team_;
      } else if (::google::protobuf::internal::DebugHardenClearOneofMessageOnArena()) {
        ::google::protobuf::internal::MaybePoisonAfterClear(_impl_.group_type_.team_);
      }
      break;
    }
    case GROUP_TYPE_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = GROUP_TYPE_NOT_SET;
}


const ::google::protobuf::MessageLite::ClassData*
GroupDetails::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(GroupDetails, _impl_._cached_size_),
              false,
          },
          &GroupDetails::MergeImpl,
          &GroupDetails::kDescriptorMethods,
          &descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> GroupDetails::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_GroupDetails_default_instance_._instance,
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
    // .anduril.entitymanager.v1.Team team = 1 [json_name = "team"];
    {PROTOBUF_FIELD_OFFSET(GroupDetails, _impl_.group_type_.team_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Team>()},
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

::uint8_t* GroupDetails::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.GroupDetails)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // .anduril.entitymanager.v1.Team team = 1 [json_name = "team"];
  if (group_type_case() == kTeam) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        1, *_impl_.group_type_.team_, _impl_.group_type_.team_->GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.GroupDetails)
  return target;
}

::size_t GroupDetails::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.GroupDetails)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (group_type_case()) {
    // .anduril.entitymanager.v1.Team team = 1 [json_name = "team"];
    case kTeam: {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.group_type_.team_);
      break;
    }
    case GROUP_TYPE_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
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
      case kTeam: {
        if (oneof_needs_init) {
          _this->_impl_.group_type_.team_ =
              ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Team>(arena, *from._impl_.group_type_.team_);
        } else {
          _this->_impl_.group_type_.team_->MergeFrom(from._internal_team());
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

class Team::_Internal {
 public:
};

Team::Team(::google::protobuf::Arena* arena)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.Team)
}
Team::Team(
    ::google::protobuf::Arena* arena,
    const Team& from)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  Team* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);

  // @@protoc_insertion_point(copy_constructor:anduril.entitymanager.v1.Team)
}

const ::google::protobuf::MessageLite::ClassData*
Team::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(Team, _impl_._cached_size_),
              false,
          },
          &Team::MergeImpl,
          &Team::kDescriptorMethods,
          &descriptor_table_anduril_2fentitymanager_2fv1_2fgroup_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 0, 0, 0, 2> Team::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    0, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967295,  // skipmap
    offsetof(decltype(_table_), field_names),  // no field_entries
    0,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Team_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Team>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }},
  // no field_entries, or aux_entries
  {{
  }},
};









::google::protobuf::Metadata Team::GetMetadata() const {
  return ::google::protobuf::internal::ZeroFieldsBase::GetMetadataImpl(GetClassData()->full());
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