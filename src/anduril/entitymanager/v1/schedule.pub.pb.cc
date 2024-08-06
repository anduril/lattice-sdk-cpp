// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/schedule.pub.proto
// Protobuf C++ Version: 5.27.3

#include "anduril/entitymanager/v1/schedule.pub.pb.h"

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

inline constexpr CronWindow::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : cron_expression_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        duration_millis_{::uint64_t{0u}},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR CronWindow::CronWindow(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct CronWindowDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CronWindowDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CronWindowDefaultTypeInternal() {}
  union {
    CronWindow _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CronWindowDefaultTypeInternal _CronWindow_default_instance_;

inline constexpr Schedule::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : windows_{},
        schedule_id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        schedule_type_{static_cast< ::anduril::entitymanager::v1::ScheduleType >(0)},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Schedule::Schedule(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ScheduleDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ScheduleDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ScheduleDefaultTypeInternal() {}
  union {
    Schedule _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ScheduleDefaultTypeInternal _Schedule_default_instance_;

inline constexpr Schedules::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : schedules_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Schedules::Schedules(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct SchedulesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SchedulesDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SchedulesDefaultTypeInternal() {}
  union {
    Schedules _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SchedulesDefaultTypeInternal _Schedules_default_instance_;
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Schedules, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Schedules, _impl_.schedules_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Schedule, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Schedule, _impl_.windows_),
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Schedule, _impl_.schedule_id_),
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Schedule, _impl_.schedule_type_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::CronWindow, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::CronWindow, _impl_.cron_expression_),
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::CronWindow, _impl_.duration_millis_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::entitymanager::v1::Schedules)},
        {9, -1, -1, sizeof(::anduril::entitymanager::v1::Schedule)},
        {20, -1, -1, sizeof(::anduril::entitymanager::v1::CronWindow)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::entitymanager::v1::_Schedules_default_instance_._instance,
    &::anduril::entitymanager::v1::_Schedule_default_instance_._instance,
    &::anduril::entitymanager::v1::_CronWindow_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n+anduril/entitymanager/v1/schedule.pub."
    "proto\022\030anduril.entitymanager.v1\"M\n\tSched"
    "ules\022@\n\tschedules\030\001 \003(\0132\".anduril.entity"
    "manager.v1.ScheduleR\tschedules\"\270\001\n\010Sched"
    "ule\022>\n\007windows\030\001 \003(\0132$.anduril.entityman"
    "ager.v1.CronWindowR\007windows\022\037\n\013schedule_"
    "id\030\002 \001(\tR\nscheduleId\022K\n\rschedule_type\030\003 "
    "\001(\0162&.anduril.entitymanager.v1.ScheduleT"
    "ypeR\014scheduleType\"^\n\nCronWindow\022\'\n\017cron_"
    "expression\030\001 \001(\tR\016cronExpression\022\'\n\017dura"
    "tion_millis\030\002 \001(\004R\016durationMillis*n\n\014Sch"
    "eduleType\022\031\n\025SCHEDULE_TYPE_INVALID\020\000\022\036\n\032"
    "SCHEDULE_TYPE_ZONE_ENABLED\020\001\022#\n\037SCHEDULE"
    "_TYPE_ZONE_TEMP_ENABLED\020\002B\201\002\n\034com.anduri"
    "l.entitymanager.v1B\020SchedulePubProtoP\001ZM"
    "ghe.anduril.dev/anduril/andurilapis-go/a"
    "nduril/entitymanager/v1;entitymanager\242\002\003"
    "AEX\252\002\030Anduril.Entitymanager.V1\312\002\030Anduril"
    "\\Entitymanager\\V1\342\002$Anduril\\Entitymanage"
    "r\\V1\\GPBMetadata\352\002\032Anduril::Entitymanage"
    "r::V1b\006proto3"
};
static ::absl::once_flag descriptor_table_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto = {
    false,
    false,
    813,
    descriptor_table_protodef_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto,
    "anduril/entitymanager/v1/schedule.pub.proto",
    &descriptor_table_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto,
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto,
};
namespace anduril {
namespace entitymanager {
namespace v1 {
const ::google::protobuf::EnumDescriptor* ScheduleType_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto);
  return file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t ScheduleType_internal_data_[] = {
    196608u, 0u, };
bool ScheduleType_IsValid(int value) {
  return 0 <= value && value <= 2;
}
// ===================================================================

class Schedules::_Internal {
 public:
};

Schedules::Schedules(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.Schedules)
}
inline PROTOBUF_NDEBUG_INLINE Schedules::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::entitymanager::v1::Schedules& from_msg)
      : schedules_{visibility, arena, from.schedules_},
        _cached_size_{0} {}

Schedules::Schedules(
    ::google::protobuf::Arena* arena,
    const Schedules& from)
    : ::google::protobuf::Message(arena) {
  Schedules* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:anduril.entitymanager.v1.Schedules)
}
inline PROTOBUF_NDEBUG_INLINE Schedules::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : schedules_{visibility, arena},
        _cached_size_{0} {}

inline void Schedules::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Schedules::~Schedules() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.Schedules)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Schedules::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
Schedules::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(Schedules, _impl_._cached_size_),
              false,
          },
          &Schedules::MergeImpl,
          &Schedules::kDescriptorMethods,
          &descriptor_table_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> Schedules::_table_ = {
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
    &_Schedules_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Schedules>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated .anduril.entitymanager.v1.Schedule schedules = 1 [json_name = "schedules"];
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Schedules, _impl_.schedules_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .anduril.entitymanager.v1.Schedule schedules = 1 [json_name = "schedules"];
    {PROTOBUF_FIELD_OFFSET(Schedules, _impl_.schedules_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Schedule>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void Schedules::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.Schedules)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.schedules_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* Schedules::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.Schedules)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .anduril.entitymanager.v1.Schedule schedules = 1 [json_name = "schedules"];
  for (unsigned i = 0, n = static_cast<unsigned>(
                           this->_internal_schedules_size());
       i < n; i++) {
    const auto& repfield = this->_internal_schedules().Get(i);
    target =
        ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            1, repfield, repfield.GetCachedSize(),
            target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.Schedules)
  return target;
}

::size_t Schedules::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.Schedules)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // repeated .anduril.entitymanager.v1.Schedule schedules = 1 [json_name = "schedules"];
  total_size += 1UL * this->_internal_schedules_size();
  for (const auto& msg : this->_internal_schedules()) {
    total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Schedules::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Schedules*>(&to_msg);
  auto& from = static_cast<const Schedules&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.Schedules)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_schedules()->MergeFrom(
      from._internal_schedules());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Schedules::CopyFrom(const Schedules& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.Schedules)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Schedules::InternalSwap(Schedules* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.schedules_.InternalSwap(&other->_impl_.schedules_);
}

::google::protobuf::Metadata Schedules::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class Schedule::_Internal {
 public:
};

Schedule::Schedule(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.Schedule)
}
inline PROTOBUF_NDEBUG_INLINE Schedule::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::entitymanager::v1::Schedule& from_msg)
      : windows_{visibility, arena, from.windows_},
        schedule_id_(arena, from.schedule_id_),
        _cached_size_{0} {}

Schedule::Schedule(
    ::google::protobuf::Arena* arena,
    const Schedule& from)
    : ::google::protobuf::Message(arena) {
  Schedule* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.schedule_type_ = from._impl_.schedule_type_;

  // @@protoc_insertion_point(copy_constructor:anduril.entitymanager.v1.Schedule)
}
inline PROTOBUF_NDEBUG_INLINE Schedule::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : windows_{visibility, arena},
        schedule_id_(arena),
        _cached_size_{0} {}

inline void Schedule::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.schedule_type_ = {};
}
Schedule::~Schedule() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.Schedule)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Schedule::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.schedule_id_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
Schedule::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(Schedule, _impl_._cached_size_),
              false,
          },
          &Schedule::MergeImpl,
          &Schedule::kDescriptorMethods,
          &descriptor_table_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 1, 53, 2> Schedule::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Schedule_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Schedule>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // repeated .anduril.entitymanager.v1.CronWindow windows = 1 [json_name = "windows"];
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Schedule, _impl_.windows_)}},
    // string schedule_id = 2 [json_name = "scheduleId"];
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Schedule, _impl_.schedule_id_)}},
    // .anduril.entitymanager.v1.ScheduleType schedule_type = 3 [json_name = "scheduleType"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Schedule, _impl_.schedule_type_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(Schedule, _impl_.schedule_type_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .anduril.entitymanager.v1.CronWindow windows = 1 [json_name = "windows"];
    {PROTOBUF_FIELD_OFFSET(Schedule, _impl_.windows_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // string schedule_id = 2 [json_name = "scheduleId"];
    {PROTOBUF_FIELD_OFFSET(Schedule, _impl_.schedule_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // .anduril.entitymanager.v1.ScheduleType schedule_type = 3 [json_name = "scheduleType"];
    {PROTOBUF_FIELD_OFFSET(Schedule, _impl_.schedule_type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::CronWindow>()},
  }}, {{
    "\41\0\13\0\0\0\0\0"
    "anduril.entitymanager.v1.Schedule"
    "schedule_id"
  }},
};

PROTOBUF_NOINLINE void Schedule::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.Schedule)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.windows_.Clear();
  _impl_.schedule_id_.ClearToEmpty();
  _impl_.schedule_type_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* Schedule::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.Schedule)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .anduril.entitymanager.v1.CronWindow windows = 1 [json_name = "windows"];
  for (unsigned i = 0, n = static_cast<unsigned>(
                           this->_internal_windows_size());
       i < n; i++) {
    const auto& repfield = this->_internal_windows().Get(i);
    target =
        ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            1, repfield, repfield.GetCachedSize(),
            target, stream);
  }

  // string schedule_id = 2 [json_name = "scheduleId"];
  if (!this->_internal_schedule_id().empty()) {
    const std::string& _s = this->_internal_schedule_id();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.entitymanager.v1.Schedule.schedule_id");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // .anduril.entitymanager.v1.ScheduleType schedule_type = 3 [json_name = "scheduleType"];
  if (this->_internal_schedule_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        3, this->_internal_schedule_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.Schedule)
  return target;
}

::size_t Schedule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.Schedule)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // repeated .anduril.entitymanager.v1.CronWindow windows = 1 [json_name = "windows"];
  total_size += 1UL * this->_internal_windows_size();
  for (const auto& msg : this->_internal_windows()) {
    total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // string schedule_id = 2 [json_name = "scheduleId"];
  if (!this->_internal_schedule_id().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_schedule_id());
  }

  // .anduril.entitymanager.v1.ScheduleType schedule_type = 3 [json_name = "scheduleType"];
  if (this->_internal_schedule_type() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_schedule_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Schedule::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Schedule*>(&to_msg);
  auto& from = static_cast<const Schedule&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.Schedule)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_windows()->MergeFrom(
      from._internal_windows());
  if (!from._internal_schedule_id().empty()) {
    _this->_internal_set_schedule_id(from._internal_schedule_id());
  }
  if (from._internal_schedule_type() != 0) {
    _this->_impl_.schedule_type_ = from._impl_.schedule_type_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Schedule::CopyFrom(const Schedule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.Schedule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Schedule::InternalSwap(Schedule* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.windows_.InternalSwap(&other->_impl_.windows_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.schedule_id_, &other->_impl_.schedule_id_, arena);
  swap(_impl_.schedule_type_, other->_impl_.schedule_type_);
}

::google::protobuf::Metadata Schedule::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class CronWindow::_Internal {
 public:
};

CronWindow::CronWindow(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.CronWindow)
}
inline PROTOBUF_NDEBUG_INLINE CronWindow::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::entitymanager::v1::CronWindow& from_msg)
      : cron_expression_(arena, from.cron_expression_),
        _cached_size_{0} {}

CronWindow::CronWindow(
    ::google::protobuf::Arena* arena,
    const CronWindow& from)
    : ::google::protobuf::Message(arena) {
  CronWindow* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.duration_millis_ = from._impl_.duration_millis_;

  // @@protoc_insertion_point(copy_constructor:anduril.entitymanager.v1.CronWindow)
}
inline PROTOBUF_NDEBUG_INLINE CronWindow::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : cron_expression_(arena),
        _cached_size_{0} {}

inline void CronWindow::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.duration_millis_ = {};
}
CronWindow::~CronWindow() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.CronWindow)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CronWindow::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.cron_expression_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
CronWindow::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(CronWindow, _impl_._cached_size_),
              false,
          },
          &CronWindow::MergeImpl,
          &CronWindow::kDescriptorMethods,
          &descriptor_table_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 59, 2> CronWindow::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_CronWindow_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::CronWindow>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // uint64 duration_millis = 2 [json_name = "durationMillis"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint64_t, offsetof(CronWindow, _impl_.duration_millis_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(CronWindow, _impl_.duration_millis_)}},
    // string cron_expression = 1 [json_name = "cronExpression"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(CronWindow, _impl_.cron_expression_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string cron_expression = 1 [json_name = "cronExpression"];
    {PROTOBUF_FIELD_OFFSET(CronWindow, _impl_.cron_expression_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // uint64 duration_millis = 2 [json_name = "durationMillis"];
    {PROTOBUF_FIELD_OFFSET(CronWindow, _impl_.duration_millis_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt64)},
  }},
  // no aux_entries
  {{
    "\43\17\0\0\0\0\0\0"
    "anduril.entitymanager.v1.CronWindow"
    "cron_expression"
  }},
};

PROTOBUF_NOINLINE void CronWindow::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.CronWindow)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.cron_expression_.ClearToEmpty();
  _impl_.duration_millis_ = ::uint64_t{0u};
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* CronWindow::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.CronWindow)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string cron_expression = 1 [json_name = "cronExpression"];
  if (!this->_internal_cron_expression().empty()) {
    const std::string& _s = this->_internal_cron_expression();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.entitymanager.v1.CronWindow.cron_expression");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // uint64 duration_millis = 2 [json_name = "durationMillis"];
  if (this->_internal_duration_millis() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        2, this->_internal_duration_millis(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.CronWindow)
  return target;
}

::size_t CronWindow::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.CronWindow)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string cron_expression = 1 [json_name = "cronExpression"];
  if (!this->_internal_cron_expression().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_cron_expression());
  }

  // uint64 duration_millis = 2 [json_name = "durationMillis"];
  if (this->_internal_duration_millis() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_duration_millis());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void CronWindow::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<CronWindow*>(&to_msg);
  auto& from = static_cast<const CronWindow&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.CronWindow)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_cron_expression().empty()) {
    _this->_internal_set_cron_expression(from._internal_cron_expression());
  }
  if (from._internal_duration_millis() != 0) {
    _this->_impl_.duration_millis_ = from._impl_.duration_millis_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CronWindow::CopyFrom(const CronWindow& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.CronWindow)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void CronWindow::InternalSwap(CronWindow* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.cron_expression_, &other->_impl_.cron_expression_, arena);
        swap(_impl_.duration_millis_, other->_impl_.duration_millis_);
}

::google::protobuf::Metadata CronWindow::GetMetadata() const {
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
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
