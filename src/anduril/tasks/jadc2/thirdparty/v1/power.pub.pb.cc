// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/tasks/jadc2/thirdparty/v1/power.pub.proto
// Protobuf C++ Version: 5.29.0

#include "anduril/tasks/jadc2/thirdparty/v1/power.pub.pb.h"

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
namespace tasks {
namespace jadc2 {
namespace thirdparty {
namespace v1 {

inline constexpr SetPowerState::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : power_state_{static_cast< ::anduril::tasks::jadc2::thirdparty::v1::PowerState >(0)},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR SetPowerState::SetPowerState(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct SetPowerStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SetPowerStateDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SetPowerStateDefaultTypeInternal() {}
  union {
    SetPowerState _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SetPowerStateDefaultTypeInternal _SetPowerState_default_instance_;
}  // namespace v1
}  // namespace thirdparty
}  // namespace jadc2
}  // namespace tasks
}  // namespace anduril
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::jadc2::thirdparty::v1::SetPowerState, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::jadc2::thirdparty::v1::SetPowerState, _impl_.power_state_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::tasks::jadc2::thirdparty::v1::SetPowerState)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::tasks::jadc2::thirdparty::v1::_SetPowerState_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n1anduril/tasks/jadc2/thirdparty/v1/powe"
    "r.pub.proto\022!anduril.tasks.jadc2.thirdpa"
    "rty.v1\"_\n\rSetPowerState\022N\n\013power_state\030\001"
    " \001(\0162-.anduril.tasks.jadc2.thirdparty.v1"
    ".PowerStateR\npowerState*N\n\nPowerState\022\027\n"
    "\023POWER_STATE_INVALID\020\000\022\022\n\016POWER_STATE_ON"
    "\020\001\022\023\n\017POWER_STATE_OFF\020\002B\337\001\n%com.anduril."
    "tasks.jadc2.thirdparty.v1B\rPowerPubProto"
    "P\001\242\002\004ATJT\252\002!Anduril.Tasks.Jadc2.Thirdpar"
    "ty.V1\312\002!Anduril\\Tasks\\Jadc2\\Thirdparty\\V"
    "1\342\002-Anduril\\Tasks\\Jadc2\\Thirdparty\\V1\\GP"
    "BMetadata\352\002%Anduril::Tasks::Jadc2::Third"
    "party::V1b\006proto3"
};
static ::absl::once_flag descriptor_table_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto = {
    false,
    false,
    497,
    descriptor_table_protodef_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto,
    "anduril/tasks/jadc2/thirdparty/v1/power.pub.proto",
    &descriptor_table_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto,
    file_level_service_descriptors_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto,
};
namespace anduril {
namespace tasks {
namespace jadc2 {
namespace thirdparty {
namespace v1 {
const ::google::protobuf::EnumDescriptor* PowerState_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto);
  return file_level_enum_descriptors_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t PowerState_internal_data_[] = {
    196608u, 0u, };
bool PowerState_IsValid(int value) {
  return 0 <= value && value <= 2;
}
// ===================================================================

class SetPowerState::_Internal {
 public:
};

SetPowerState::SetPowerState(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.tasks.jadc2.thirdparty.v1.SetPowerState)
}
SetPowerState::SetPowerState(
    ::google::protobuf::Arena* arena, const SetPowerState& from)
    : SetPowerState(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE SetPowerState::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void SetPowerState::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.power_state_ = {};
}
SetPowerState::~SetPowerState() {
  // @@protoc_insertion_point(destructor:anduril.tasks.jadc2.thirdparty.v1.SetPowerState)
  SharedDtor(*this);
}
inline void SetPowerState::SharedDtor(MessageLite& self) {
  SetPowerState& this_ = static_cast<SetPowerState&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.~Impl_();
}

inline void* SetPowerState::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) SetPowerState(arena);
}
constexpr auto SetPowerState::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::ZeroInit(sizeof(SetPowerState),
                                            alignof(SetPowerState));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull SetPowerState::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_SetPowerState_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &SetPowerState::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<SetPowerState>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &SetPowerState::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<SetPowerState>(), &SetPowerState::ByteSizeLong,
            &SetPowerState::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(SetPowerState, _impl_._cached_size_),
        false,
    },
    &SetPowerState::kDescriptorMethods,
    &descriptor_table_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* SetPowerState::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> SetPowerState::_table_ = {
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
    ::_pbi::TcParser::GetTable<::anduril::tasks::jadc2::thirdparty::v1::SetPowerState>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // .anduril.tasks.jadc2.thirdparty.v1.PowerState power_state = 1 [json_name = "powerState"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(SetPowerState, _impl_.power_state_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(SetPowerState, _impl_.power_state_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .anduril.tasks.jadc2.thirdparty.v1.PowerState power_state = 1 [json_name = "powerState"];
    {PROTOBUF_FIELD_OFFSET(SetPowerState, _impl_.power_state_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void SetPowerState::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.tasks.jadc2.thirdparty.v1.SetPowerState)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.power_state_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* SetPowerState::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const SetPowerState& this_ = static_cast<const SetPowerState&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* SetPowerState::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const SetPowerState& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.tasks.jadc2.thirdparty.v1.SetPowerState)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // .anduril.tasks.jadc2.thirdparty.v1.PowerState power_state = 1 [json_name = "powerState"];
          if (this_._internal_power_state() != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteEnumToArray(
                1, this_._internal_power_state(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.tasks.jadc2.thirdparty.v1.SetPowerState)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t SetPowerState::ByteSizeLong(const MessageLite& base) {
          const SetPowerState& this_ = static_cast<const SetPowerState&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t SetPowerState::ByteSizeLong() const {
          const SetPowerState& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.tasks.jadc2.thirdparty.v1.SetPowerState)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // .anduril.tasks.jadc2.thirdparty.v1.PowerState power_state = 1 [json_name = "powerState"];
            if (this_._internal_power_state() != 0) {
              total_size += 1 +
                            ::_pbi::WireFormatLite::EnumSize(this_._internal_power_state());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void SetPowerState::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<SetPowerState*>(&to_msg);
  auto& from = static_cast<const SetPowerState&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.tasks.jadc2.thirdparty.v1.SetPowerState)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_power_state() != 0) {
    _this->_impl_.power_state_ = from._impl_.power_state_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void SetPowerState::CopyFrom(const SetPowerState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.tasks.jadc2.thirdparty.v1.SetPowerState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void SetPowerState::InternalSwap(SetPowerState* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.power_state_, other->_impl_.power_state_);
}

::google::protobuf::Metadata SetPowerState::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace thirdparty
}  // namespace jadc2
}  // namespace tasks
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
