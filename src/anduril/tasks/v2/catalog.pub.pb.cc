// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/tasks/v2/catalog.pub.proto
// Protobuf C++ Version: 5.29.0

#include "anduril/tasks/v2/catalog.pub.pb.h"

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
namespace v2 {

inline constexpr TaskDefinition::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : task_specification_url_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TaskDefinition::TaskDefinition(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct TaskDefinitionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TaskDefinitionDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TaskDefinitionDefaultTypeInternal() {}
  union {
    TaskDefinition _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TaskDefinitionDefaultTypeInternal _TaskDefinition_default_instance_;

inline constexpr TaskCatalog::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : task_definitions_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TaskCatalog::TaskCatalog(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct TaskCatalogDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TaskCatalogDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TaskCatalogDefaultTypeInternal() {}
  union {
    TaskCatalog _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TaskCatalogDefaultTypeInternal _TaskCatalog_default_instance_;
}  // namespace v2
}  // namespace tasks
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::TaskCatalog, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::TaskCatalog, _impl_.task_definitions_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::TaskDefinition, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::TaskDefinition, _impl_.task_specification_url_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::tasks::v2::TaskCatalog)},
        {9, -1, -1, sizeof(::anduril::tasks::v2::TaskDefinition)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::tasks::v2::_TaskCatalog_default_instance_._instance,
    &::anduril::tasks::v2::_TaskDefinition_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\"anduril/tasks/v2/catalog.pub.proto\022\020an"
    "duril.tasks.v2\"`\n\013TaskCatalog\022K\n\020task_de"
    "finitions\030\001 \003(\0132 .anduril.tasks.v2.TaskD"
    "efinitionR\017taskDefinitionsJ\004\010\002\020\003\"F\n\016Task"
    "Definition\0224\n\026task_specification_url\030\001 \001"
    "(\tR\024taskSpecificationUrlB\211\001\n\024com.anduril"
    ".tasks.v2B\017CatalogPubProtoP\001\242\002\003ATX\252\002\020And"
    "uril.Tasks.V2\312\002\020Anduril\\Tasks\\V2\342\002\034Andur"
    "il\\Tasks\\V2\\GPBMetadata\352\002\022Anduril::Tasks"
    "::V2b\006proto3"
};
static ::absl::once_flag descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto = {
    false,
    false,
    372,
    descriptor_table_protodef_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto,
    "anduril/tasks/v2/catalog.pub.proto",
    &descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto,
    file_level_service_descriptors_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto,
};
namespace anduril {
namespace tasks {
namespace v2 {
// ===================================================================

class TaskCatalog::_Internal {
 public:
};

TaskCatalog::TaskCatalog(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.tasks.v2.TaskCatalog)
}
inline PROTOBUF_NDEBUG_INLINE TaskCatalog::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::tasks::v2::TaskCatalog& from_msg)
      : task_definitions_{visibility, arena, from.task_definitions_},
        _cached_size_{0} {}

TaskCatalog::TaskCatalog(
    ::google::protobuf::Arena* arena,
    const TaskCatalog& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  TaskCatalog* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:anduril.tasks.v2.TaskCatalog)
}
inline PROTOBUF_NDEBUG_INLINE TaskCatalog::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : task_definitions_{visibility, arena},
        _cached_size_{0} {}

inline void TaskCatalog::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
TaskCatalog::~TaskCatalog() {
  // @@protoc_insertion_point(destructor:anduril.tasks.v2.TaskCatalog)
  SharedDtor(*this);
}
inline void TaskCatalog::SharedDtor(MessageLite& self) {
  TaskCatalog& this_ = static_cast<TaskCatalog&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.~Impl_();
}

inline void* TaskCatalog::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) TaskCatalog(arena);
}
constexpr auto TaskCatalog::InternalNewImpl_() {
  constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
      PROTOBUF_FIELD_OFFSET(TaskCatalog, _impl_.task_definitions_) +
          decltype(TaskCatalog::_impl_.task_definitions_)::
              InternalGetArenaOffset(
                  ::google::protobuf::Message::internal_visibility()),
  });
  if (arena_bits.has_value()) {
    return ::google::protobuf::internal::MessageCreator::ZeroInit(
        sizeof(TaskCatalog), alignof(TaskCatalog), *arena_bits);
  } else {
    return ::google::protobuf::internal::MessageCreator(&TaskCatalog::PlacementNew_,
                                 sizeof(TaskCatalog),
                                 alignof(TaskCatalog));
  }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull TaskCatalog::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_TaskCatalog_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &TaskCatalog::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<TaskCatalog>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &TaskCatalog::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<TaskCatalog>(), &TaskCatalog::ByteSizeLong,
            &TaskCatalog::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(TaskCatalog, _impl_._cached_size_),
        false,
    },
    &TaskCatalog::kDescriptorMethods,
    &descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* TaskCatalog::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> TaskCatalog::_table_ = {
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
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::tasks::v2::TaskCatalog>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TaskCatalog, _impl_.task_definitions_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
    {PROTOBUF_FIELD_OFFSET(TaskCatalog, _impl_.task_definitions_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::tasks::v2::TaskDefinition>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void TaskCatalog::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.tasks.v2.TaskCatalog)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.task_definitions_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* TaskCatalog::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const TaskCatalog& this_ = static_cast<const TaskCatalog&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* TaskCatalog::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const TaskCatalog& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.tasks.v2.TaskCatalog)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
          for (unsigned i = 0, n = static_cast<unsigned>(
                                   this_._internal_task_definitions_size());
               i < n; i++) {
            const auto& repfield = this_._internal_task_definitions().Get(i);
            target =
                ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                    1, repfield, repfield.GetCachedSize(),
                    target, stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.tasks.v2.TaskCatalog)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t TaskCatalog::ByteSizeLong(const MessageLite& base) {
          const TaskCatalog& this_ = static_cast<const TaskCatalog&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t TaskCatalog::ByteSizeLong() const {
          const TaskCatalog& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.tasks.v2.TaskCatalog)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
            {
              total_size += 1UL * this_._internal_task_definitions_size();
              for (const auto& msg : this_._internal_task_definitions()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
              }
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void TaskCatalog::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<TaskCatalog*>(&to_msg);
  auto& from = static_cast<const TaskCatalog&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.tasks.v2.TaskCatalog)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_task_definitions()->MergeFrom(
      from._internal_task_definitions());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TaskCatalog::CopyFrom(const TaskCatalog& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.tasks.v2.TaskCatalog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void TaskCatalog::InternalSwap(TaskCatalog* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.task_definitions_.InternalSwap(&other->_impl_.task_definitions_);
}

::google::protobuf::Metadata TaskCatalog::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class TaskDefinition::_Internal {
 public:
};

TaskDefinition::TaskDefinition(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.tasks.v2.TaskDefinition)
}
inline PROTOBUF_NDEBUG_INLINE TaskDefinition::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::tasks::v2::TaskDefinition& from_msg)
      : task_specification_url_(arena, from.task_specification_url_),
        _cached_size_{0} {}

TaskDefinition::TaskDefinition(
    ::google::protobuf::Arena* arena,
    const TaskDefinition& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  TaskDefinition* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:anduril.tasks.v2.TaskDefinition)
}
inline PROTOBUF_NDEBUG_INLINE TaskDefinition::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : task_specification_url_(arena),
        _cached_size_{0} {}

inline void TaskDefinition::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
TaskDefinition::~TaskDefinition() {
  // @@protoc_insertion_point(destructor:anduril.tasks.v2.TaskDefinition)
  SharedDtor(*this);
}
inline void TaskDefinition::SharedDtor(MessageLite& self) {
  TaskDefinition& this_ = static_cast<TaskDefinition&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.task_specification_url_.Destroy();
  this_._impl_.~Impl_();
}

inline void* TaskDefinition::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) TaskDefinition(arena);
}
constexpr auto TaskDefinition::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::CopyInit(sizeof(TaskDefinition),
                                            alignof(TaskDefinition));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull TaskDefinition::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_TaskDefinition_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &TaskDefinition::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<TaskDefinition>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &TaskDefinition::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<TaskDefinition>(), &TaskDefinition::ByteSizeLong,
            &TaskDefinition::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(TaskDefinition, _impl_._cached_size_),
        false,
    },
    &TaskDefinition::kDescriptorMethods,
    &descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* TaskDefinition::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 62, 2> TaskDefinition::_table_ = {
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
    ::_pbi::TcParser::GetTable<::anduril::tasks::v2::TaskDefinition>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TaskDefinition, _impl_.task_specification_url_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
    {PROTOBUF_FIELD_OFFSET(TaskDefinition, _impl_.task_specification_url_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\37\26\0\0\0\0\0\0"
    "anduril.tasks.v2.TaskDefinition"
    "task_specification_url"
  }},
};

PROTOBUF_NOINLINE void TaskDefinition::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.tasks.v2.TaskDefinition)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.task_specification_url_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* TaskDefinition::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const TaskDefinition& this_ = static_cast<const TaskDefinition&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* TaskDefinition::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const TaskDefinition& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.tasks.v2.TaskDefinition)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
          if (!this_._internal_task_specification_url().empty()) {
            const std::string& _s = this_._internal_task_specification_url();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.tasks.v2.TaskDefinition.task_specification_url");
            target = stream->WriteStringMaybeAliased(1, _s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.tasks.v2.TaskDefinition)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t TaskDefinition::ByteSizeLong(const MessageLite& base) {
          const TaskDefinition& this_ = static_cast<const TaskDefinition&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t TaskDefinition::ByteSizeLong() const {
          const TaskDefinition& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.tasks.v2.TaskDefinition)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
            if (!this_._internal_task_specification_url().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_task_specification_url());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void TaskDefinition::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<TaskDefinition*>(&to_msg);
  auto& from = static_cast<const TaskDefinition&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.tasks.v2.TaskDefinition)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_task_specification_url().empty()) {
    _this->_internal_set_task_specification_url(from._internal_task_specification_url());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TaskDefinition::CopyFrom(const TaskDefinition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.tasks.v2.TaskDefinition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void TaskDefinition::InternalSwap(TaskDefinition* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.task_specification_url_, &other->_impl_.task_specification_url_, arena);
}

::google::protobuf::Metadata TaskDefinition::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v2
}  // namespace tasks
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
