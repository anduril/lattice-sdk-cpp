// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: anduril/tasks/v2/catalog.pub.proto

#include "anduril/tasks/v2/catalog.pub.pb.h"

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
namespace tasks {
namespace v2 {

inline constexpr TaskDefinition::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : task_specification_url_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        display_name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TaskDefinition::TaskDefinition(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
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
        is_asset_inhibited_{false},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TaskCatalog::TaskCatalog(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
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
static ::_pb::Metadata file_level_metadata_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto = nullptr;
const ::uint32_t TableStruct_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
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
    PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::TaskCatalog, _impl_.is_asset_inhibited_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::TaskDefinition, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::TaskDefinition, _impl_.task_specification_url_),
    PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::TaskDefinition, _impl_.display_name_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::tasks::v2::TaskCatalog)},
        {10, -1, -1, sizeof(::anduril::tasks::v2::TaskDefinition)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::tasks::v2::_TaskCatalog_default_instance_._instance,
    &::anduril::tasks::v2::_TaskDefinition_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\"anduril/tasks/v2/catalog.pub.proto\022\020an"
    "duril.tasks.v2\"\210\001\n\013TaskCatalog\022K\n\020task_d"
    "efinitions\030\001 \003(\0132 .anduril.tasks.v2.Task"
    "DefinitionR\017taskDefinitions\022,\n\022is_asset_"
    "inhibited\030\002 \001(\010R\020isAssetInhibited\"i\n\016Tas"
    "kDefinition\0224\n\026task_specification_url\030\001 "
    "\001(\tR\024taskSpecificationUrl\022!\n\014display_nam"
    "e\030\002 \001(\tR\013displayNameB\310\001\n\024com.anduril.tas"
    "ks.v2B\017CatalogPubProtoP\001Z=ghe.anduril.de"
    "v/anduril/andurilapis-go/anduril/tasks/v"
    "2;tasks\242\002\003ATX\252\002\020Anduril.Tasks.V2\312\002\020Andur"
    "il\\Tasks\\V2\342\002\034Anduril\\Tasks\\V2\\GPBMetada"
    "ta\352\002\022Anduril::Tasks::V2b\006proto3"
};
static ::absl::once_flag descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto = {
    false,
    false,
    511,
    descriptor_table_protodef_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto,
    "anduril/tasks/v2/catalog.pub.proto",
    &descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto::offsets,
    file_level_metadata_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto,
    file_level_enum_descriptors_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto,
    file_level_service_descriptors_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_getter() {
  return &descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto(&descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto);
namespace anduril {
namespace tasks {
namespace v2 {
// ===================================================================

class TaskCatalog::_Internal {
 public:
};

TaskCatalog::TaskCatalog(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.tasks.v2.TaskCatalog)
}
inline PROTOBUF_NDEBUG_INLINE TaskCatalog::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : task_definitions_{visibility, arena, from.task_definitions_},
        _cached_size_{0} {}

TaskCatalog::TaskCatalog(
    ::google::protobuf::Arena* arena,
    const TaskCatalog& from)
    : ::google::protobuf::Message(arena) {
  TaskCatalog* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.is_asset_inhibited_ = from._impl_.is_asset_inhibited_;

  // @@protoc_insertion_point(copy_constructor:anduril.tasks.v2.TaskCatalog)
}
inline PROTOBUF_NDEBUG_INLINE TaskCatalog::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : task_definitions_{visibility, arena},
        _cached_size_{0} {}

inline void TaskCatalog::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.is_asset_inhibited_ = {};
}
TaskCatalog::~TaskCatalog() {
  // @@protoc_insertion_point(destructor:anduril.tasks.v2.TaskCatalog)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TaskCatalog::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void TaskCatalog::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.tasks.v2.TaskCatalog)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.task_definitions_.Clear();
  _impl_.is_asset_inhibited_ = false;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TaskCatalog::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 1, 0, 2> TaskCatalog::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_TaskCatalog_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // bool is_asset_inhibited = 2 [json_name = "isAssetInhibited"];
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(TaskCatalog, _impl_.is_asset_inhibited_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(TaskCatalog, _impl_.is_asset_inhibited_)}},
    // repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TaskCatalog, _impl_.task_definitions_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
    {PROTOBUF_FIELD_OFFSET(TaskCatalog, _impl_.task_definitions_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // bool is_asset_inhibited = 2 [json_name = "isAssetInhibited"];
    {PROTOBUF_FIELD_OFFSET(TaskCatalog, _impl_.is_asset_inhibited_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBool)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::tasks::v2::TaskDefinition>()},
  }}, {{
  }},
};

::uint8_t* TaskCatalog::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.tasks.v2.TaskCatalog)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_task_definitions_size()); i < n; i++) {
    const auto& repfield = this->_internal_task_definitions().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // bool is_asset_inhibited = 2 [json_name = "isAssetInhibited"];
  if (this->_internal_is_asset_inhibited() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        2, this->_internal_is_asset_inhibited(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.tasks.v2.TaskCatalog)
  return target;
}

::size_t TaskCatalog::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.tasks.v2.TaskCatalog)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
  total_size += 1UL * this->_internal_task_definitions_size();
  for (const auto& msg : this->_internal_task_definitions()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // bool is_asset_inhibited = 2 [json_name = "isAssetInhibited"];
  if (this->_internal_is_asset_inhibited() != 0) {
    total_size += 2;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TaskCatalog::_class_data_ = {
    TaskCatalog::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* TaskCatalog::GetClassData() const {
  return &_class_data_;
}

void TaskCatalog::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TaskCatalog*>(&to_msg);
  auto& from = static_cast<const TaskCatalog&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.tasks.v2.TaskCatalog)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_task_definitions()->MergeFrom(
      from._internal_task_definitions());
  if (from._internal_is_asset_inhibited() != 0) {
    _this->_internal_set_is_asset_inhibited(from._internal_is_asset_inhibited());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TaskCatalog::CopyFrom(const TaskCatalog& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.tasks.v2.TaskCatalog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TaskCatalog::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* TaskCatalog::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void TaskCatalog::InternalSwap(TaskCatalog* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.task_definitions_.InternalSwap(&other->_impl_.task_definitions_);
        swap(_impl_.is_asset_inhibited_, other->_impl_.is_asset_inhibited_);
}

::google::protobuf::Metadata TaskCatalog::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_getter, &descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_once,
      file_level_metadata_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto[0]);
}
// ===================================================================

class TaskDefinition::_Internal {
 public:
};

TaskDefinition::TaskDefinition(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.tasks.v2.TaskDefinition)
}
inline PROTOBUF_NDEBUG_INLINE TaskDefinition::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : task_specification_url_(arena, from.task_specification_url_),
        display_name_(arena, from.display_name_),
        _cached_size_{0} {}

TaskDefinition::TaskDefinition(
    ::google::protobuf::Arena* arena,
    const TaskDefinition& from)
    : ::google::protobuf::Message(arena) {
  TaskDefinition* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:anduril.tasks.v2.TaskDefinition)
}
inline PROTOBUF_NDEBUG_INLINE TaskDefinition::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : task_specification_url_(arena),
        display_name_(arena),
        _cached_size_{0} {}

inline void TaskDefinition::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
TaskDefinition::~TaskDefinition() {
  // @@protoc_insertion_point(destructor:anduril.tasks.v2.TaskDefinition)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TaskDefinition::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.task_specification_url_.Destroy();
  _impl_.display_name_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void TaskDefinition::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.tasks.v2.TaskDefinition)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.task_specification_url_.ClearToEmpty();
  _impl_.display_name_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TaskDefinition::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 74, 2> TaskDefinition::_table_ = {
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
    &_TaskDefinition_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string display_name = 2 [json_name = "displayName"];
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(TaskDefinition, _impl_.display_name_)}},
    // string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TaskDefinition, _impl_.task_specification_url_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
    {PROTOBUF_FIELD_OFFSET(TaskDefinition, _impl_.task_specification_url_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string display_name = 2 [json_name = "displayName"];
    {PROTOBUF_FIELD_OFFSET(TaskDefinition, _impl_.display_name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\37\26\14\0\0\0\0\0"
    "anduril.tasks.v2.TaskDefinition"
    "task_specification_url"
    "display_name"
  }},
};

::uint8_t* TaskDefinition::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.tasks.v2.TaskDefinition)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
  if (!this->_internal_task_specification_url().empty()) {
    const std::string& _s = this->_internal_task_specification_url();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.tasks.v2.TaskDefinition.task_specification_url");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string display_name = 2 [json_name = "displayName"];
  if (!this->_internal_display_name().empty()) {
    const std::string& _s = this->_internal_display_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.tasks.v2.TaskDefinition.display_name");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.tasks.v2.TaskDefinition)
  return target;
}

::size_t TaskDefinition::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.tasks.v2.TaskDefinition)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
  if (!this->_internal_task_specification_url().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_task_specification_url());
  }

  // string display_name = 2 [json_name = "displayName"];
  if (!this->_internal_display_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_display_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TaskDefinition::_class_data_ = {
    TaskDefinition::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* TaskDefinition::GetClassData() const {
  return &_class_data_;
}

void TaskDefinition::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TaskDefinition*>(&to_msg);
  auto& from = static_cast<const TaskDefinition&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.tasks.v2.TaskDefinition)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_task_specification_url().empty()) {
    _this->_internal_set_task_specification_url(from._internal_task_specification_url());
  }
  if (!from._internal_display_name().empty()) {
    _this->_internal_set_display_name(from._internal_display_name());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TaskDefinition::CopyFrom(const TaskDefinition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.tasks.v2.TaskDefinition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TaskDefinition::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* TaskDefinition::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void TaskDefinition::InternalSwap(TaskDefinition* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.task_specification_url_, &other->_impl_.task_specification_url_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.display_name_, &other->_impl_.display_name_, arena);
}

::google::protobuf::Metadata TaskDefinition::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_getter, &descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_once,
      file_level_metadata_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto[1]);
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
#include "google/protobuf/port_undef.inc"
