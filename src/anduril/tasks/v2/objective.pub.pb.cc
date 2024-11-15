// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/tasks/v2/objective.pub.proto
// Protobuf C++ Version: 5.28.3

#include "anduril/tasks/v2/objective.pub.pb.h"

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
namespace tasks {
namespace v2 {

inline constexpr Point::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        reference_name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        backing_entity_id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        lla_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR Point::Point(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct PointDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PointDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PointDefaultTypeInternal() {}
  union {
    Point _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PointDefaultTypeInternal _Point_default_instance_;

inline constexpr Objective::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : produced_by_asset_id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        objective_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR Objective::Objective(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct ObjectiveDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ObjectiveDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ObjectiveDefaultTypeInternal() {}
  union {
    Objective _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ObjectiveDefaultTypeInternal _Objective_default_instance_;
}  // namespace v2
}  // namespace tasks
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Objective, _internal_metadata_),
        ~0u,  // no _extensions_
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Objective, _impl_._oneof_case_[0]),
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Objective, _impl_.produced_by_asset_id_),
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Objective, _impl_.objective_),
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Point, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Point, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Point, _impl_.reference_name_),
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Point, _impl_.lla_),
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Point, _impl_.backing_entity_id_),
        ~0u,
        0,
        ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::tasks::v2::Objective)},
        {12, 23, -1, sizeof(::anduril::tasks::v2::Point)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::tasks::v2::_Objective_default_instance_._instance,
    &::anduril::tasks::v2::_Point_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n$anduril/tasks/v2/objective.pub.proto\022\020"
    "anduril.tasks.v2\032\035anduril/type/coords.pu"
    "b.proto\"\231\001\n\tObjective\022\035\n\tentity_id\030\001 \001(\t"
    "H\000R\010entityId\022/\n\005point\030\005 \001(\0132\027.anduril.ta"
    "sks.v2.PointH\000R\005point\022/\n\024produced_by_ass"
    "et_id\030\002 \001(\tR\021producedByAssetIdB\013\n\tobject"
    "ive\"\177\n\005Point\022%\n\016reference_name\030\001 \001(\tR\rre"
    "ferenceName\022#\n\003lla\030\002 \001(\0132\021.anduril.type."
    "LLAR\003lla\022*\n\021backing_entity_id\030\003 \001(\tR\017bac"
    "kingEntityIdB\312\001\n\024com.anduril.tasks.v2B\021O"
    "bjectivePubProtoP\001Z=ghe.anduril.dev/andu"
    "ril/andurilapis-go/anduril/tasks/v2;task"
    "s\242\002\003ATX\252\002\020Anduril.Tasks.V2\312\002\020Anduril\\Tas"
    "ks\\V2\342\002\034Anduril\\Tasks\\V2\\GPBMetadata\352\002\022A"
    "nduril::Tasks::V2b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto_deps[1] =
    {
        &::descriptor_table_anduril_2ftype_2fcoords_2epub_2eproto,
};
static ::absl::once_flag descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto = {
    false,
    false,
    585,
    descriptor_table_protodef_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto,
    "anduril/tasks/v2/objective.pub.proto",
    &descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto_once,
    descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto_deps,
    1,
    2,
    schemas,
    file_default_instances,
    TableStruct_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto,
    file_level_service_descriptors_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto,
};
namespace anduril {
namespace tasks {
namespace v2 {
// ===================================================================

class Objective::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
      PROTOBUF_FIELD_OFFSET(::anduril::tasks::v2::Objective, _impl_._oneof_case_);
};

void Objective::set_allocated_point(::anduril::tasks::v2::Point* point) {
  ::google::protobuf::Arena* message_arena = GetArena();
  clear_objective();
  if (point) {
    ::google::protobuf::Arena* submessage_arena = point->GetArena();
    if (message_arena != submessage_arena) {
      point = ::google::protobuf::internal::GetOwnedMessage(message_arena, point, submessage_arena);
    }
    set_has_point();
    _impl_.objective_.point_ = point;
  }
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.v2.Objective.point)
}
Objective::Objective(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.tasks.v2.Objective)
}
inline PROTOBUF_NDEBUG_INLINE Objective::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::tasks::v2::Objective& from_msg)
      : produced_by_asset_id_(arena, from.produced_by_asset_id_),
        objective_{},
        _cached_size_{0},
        _oneof_case_{from._oneof_case_[0]} {}

Objective::Objective(
    ::google::protobuf::Arena* arena,
    const Objective& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Objective* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  switch (objective_case()) {
    case OBJECTIVE_NOT_SET:
      break;
      case kEntityId:
        new (&_impl_.objective_.entity_id_) decltype(_impl_.objective_.entity_id_){arena, from._impl_.objective_.entity_id_};
        break;
      case kPoint:
        _impl_.objective_.point_ = ::google::protobuf::Message::CopyConstruct<::anduril::tasks::v2::Point>(arena, *from._impl_.objective_.point_);
        break;
  }

  // @@protoc_insertion_point(copy_constructor:anduril.tasks.v2.Objective)
}
inline PROTOBUF_NDEBUG_INLINE Objective::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : produced_by_asset_id_(arena),
        objective_{},
        _cached_size_{0},
        _oneof_case_{} {}

inline void Objective::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Objective::~Objective() {
  // @@protoc_insertion_point(destructor:anduril.tasks.v2.Objective)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Objective::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.produced_by_asset_id_.Destroy();
  if (has_objective()) {
    clear_objective();
  }
  _impl_.~Impl_();
}

void Objective::clear_objective() {
// @@protoc_insertion_point(one_of_clear_start:anduril.tasks.v2.Objective)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (objective_case()) {
    case kEntityId: {
      _impl_.objective_.entity_id_.Destroy();
      break;
    }
    case kPoint: {
      if (GetArena() == nullptr) {
        delete _impl_.objective_.point_;
      } else if (::google::protobuf::internal::DebugHardenClearOneofMessageOnArena()) {
        ::google::protobuf::internal::MaybePoisonAfterClear(_impl_.objective_.point_);
      }
      break;
    }
    case OBJECTIVE_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = OBJECTIVE_NOT_SET;
}


PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    Objective::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_Objective_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &Objective::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<Objective>(),
            ::google::protobuf::Message::GetNewImpl<Objective>(),
            ::google::protobuf::Message::GetClearImpl<Objective>(), &Objective::ByteSizeLong,
                &Objective::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(Objective, _impl_._cached_size_),
            false,
        },
        &Objective::kDescriptorMethods,
        &descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* Objective::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 3, 1, 64, 2> Objective::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    5, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967276,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::tasks::v2::Objective>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string produced_by_asset_id = 2 [json_name = "producedByAssetId"];
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Objective, _impl_.produced_by_asset_id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string entity_id = 1 [json_name = "entityId"];
    {PROTOBUF_FIELD_OFFSET(Objective, _impl_.objective_.entity_id_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string produced_by_asset_id = 2 [json_name = "producedByAssetId"];
    {PROTOBUF_FIELD_OFFSET(Objective, _impl_.produced_by_asset_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // .anduril.tasks.v2.Point point = 5 [json_name = "point"];
    {PROTOBUF_FIELD_OFFSET(Objective, _impl_.objective_.point_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::tasks::v2::Point>()},
  }}, {{
    "\32\11\24\0\0\0\0\0"
    "anduril.tasks.v2.Objective"
    "entity_id"
    "produced_by_asset_id"
  }},
};

PROTOBUF_NOINLINE void Objective::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.tasks.v2.Objective)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.produced_by_asset_id_.ClearToEmpty();
  clear_objective();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Objective::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Objective& this_ = static_cast<const Objective&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Objective::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Objective& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.tasks.v2.Objective)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // string entity_id = 1 [json_name = "entityId"];
          if (this_.objective_case() == kEntityId) {
            const std::string& _s = this_._internal_entity_id();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.tasks.v2.Objective.entity_id");
            target = stream->WriteStringMaybeAliased(1, _s, target);
          }

          // string produced_by_asset_id = 2 [json_name = "producedByAssetId"];
          if (!this_._internal_produced_by_asset_id().empty()) {
            const std::string& _s = this_._internal_produced_by_asset_id();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.tasks.v2.Objective.produced_by_asset_id");
            target = stream->WriteStringMaybeAliased(2, _s, target);
          }

          // .anduril.tasks.v2.Point point = 5 [json_name = "point"];
          if (this_.objective_case() == kPoint) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                5, *this_._impl_.objective_.point_, this_._impl_.objective_.point_->GetCachedSize(), target,
                stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.tasks.v2.Objective)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Objective::ByteSizeLong(const MessageLite& base) {
          const Objective& this_ = static_cast<const Objective&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Objective::ByteSizeLong() const {
          const Objective& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.tasks.v2.Objective)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // string produced_by_asset_id = 2 [json_name = "producedByAssetId"];
            if (!this_._internal_produced_by_asset_id().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_produced_by_asset_id());
            }
          }
          switch (this_.objective_case()) {
            // string entity_id = 1 [json_name = "entityId"];
            case kEntityId: {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_entity_id());
              break;
            }
            // .anduril.tasks.v2.Point point = 5 [json_name = "point"];
            case kPoint: {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.objective_.point_);
              break;
            }
            case OBJECTIVE_NOT_SET: {
              break;
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void Objective::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Objective*>(&to_msg);
  auto& from = static_cast<const Objective&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.tasks.v2.Objective)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_produced_by_asset_id().empty()) {
    _this->_internal_set_produced_by_asset_id(from._internal_produced_by_asset_id());
  }
  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[0]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[0];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_objective();
      }
      _this->_impl_._oneof_case_[0] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kEntityId: {
        if (oneof_needs_init) {
          _this->_impl_.objective_.entity_id_.InitDefault();
        }
        _this->_impl_.objective_.entity_id_.Set(from._internal_entity_id(), arena);
        break;
      }
      case kPoint: {
        if (oneof_needs_init) {
          _this->_impl_.objective_.point_ =
              ::google::protobuf::Message::CopyConstruct<::anduril::tasks::v2::Point>(arena, *from._impl_.objective_.point_);
        } else {
          _this->_impl_.objective_.point_->MergeFrom(from._internal_point());
        }
        break;
      }
      case OBJECTIVE_NOT_SET:
        break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Objective::CopyFrom(const Objective& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.tasks.v2.Objective)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Objective::InternalSwap(Objective* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.produced_by_asset_id_, &other->_impl_.produced_by_asset_id_, arena);
  swap(_impl_.objective_, other->_impl_.objective_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::google::protobuf::Metadata Objective::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class Point::_Internal {
 public:
  using HasBits =
      decltype(std::declval<Point>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(Point, _impl_._has_bits_);
};

void Point::clear_lla() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.lla_ != nullptr) _impl_.lla_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
Point::Point(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.tasks.v2.Point)
}
inline PROTOBUF_NDEBUG_INLINE Point::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::tasks::v2::Point& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        reference_name_(arena, from.reference_name_),
        backing_entity_id_(arena, from.backing_entity_id_) {}

Point::Point(
    ::google::protobuf::Arena* arena,
    const Point& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Point* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.lla_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::anduril::type::LLA>(
                              arena, *from._impl_.lla_)
                        : nullptr;

  // @@protoc_insertion_point(copy_constructor:anduril.tasks.v2.Point)
}
inline PROTOBUF_NDEBUG_INLINE Point::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        reference_name_(arena),
        backing_entity_id_(arena) {}

inline void Point::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.lla_ = {};
}
Point::~Point() {
  // @@protoc_insertion_point(destructor:anduril.tasks.v2.Point)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Point::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.reference_name_.Destroy();
  _impl_.backing_entity_id_.Destroy();
  delete _impl_.lla_;
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    Point::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_Point_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &Point::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<Point>(),
            ::google::protobuf::Message::GetNewImpl<Point>(),
            ::google::protobuf::Message::GetClearImpl<Point>(), &Point::ByteSizeLong,
                &Point::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(Point, _impl_._cached_size_),
            false,
        },
        &Point::kDescriptorMethods,
        &descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* Point::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 1, 62, 2> Point::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Point, _impl_._has_bits_),
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::tasks::v2::Point>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // string reference_name = 1 [json_name = "referenceName"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Point, _impl_.reference_name_)}},
    // .anduril.type.LLA lla = 2 [json_name = "lla"];
    {::_pbi::TcParser::FastMtS1,
     {18, 0, 0, PROTOBUF_FIELD_OFFSET(Point, _impl_.lla_)}},
    // string backing_entity_id = 3 [json_name = "backingEntityId"];
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(Point, _impl_.backing_entity_id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string reference_name = 1 [json_name = "referenceName"];
    {PROTOBUF_FIELD_OFFSET(Point, _impl_.reference_name_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // .anduril.type.LLA lla = 2 [json_name = "lla"];
    {PROTOBUF_FIELD_OFFSET(Point, _impl_.lla_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // string backing_entity_id = 3 [json_name = "backingEntityId"];
    {PROTOBUF_FIELD_OFFSET(Point, _impl_.backing_entity_id_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::type::LLA>()},
  }}, {{
    "\26\16\0\21\0\0\0\0"
    "anduril.tasks.v2.Point"
    "reference_name"
    "backing_entity_id"
  }},
};

PROTOBUF_NOINLINE void Point::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.tasks.v2.Point)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.reference_name_.ClearToEmpty();
  _impl_.backing_entity_id_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.lla_ != nullptr);
    _impl_.lla_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Point::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Point& this_ = static_cast<const Point&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Point::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Point& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.tasks.v2.Point)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // string reference_name = 1 [json_name = "referenceName"];
          if (!this_._internal_reference_name().empty()) {
            const std::string& _s = this_._internal_reference_name();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.tasks.v2.Point.reference_name");
            target = stream->WriteStringMaybeAliased(1, _s, target);
          }

          cached_has_bits = this_._impl_._has_bits_[0];
          // .anduril.type.LLA lla = 2 [json_name = "lla"];
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                2, *this_._impl_.lla_, this_._impl_.lla_->GetCachedSize(), target,
                stream);
          }

          // string backing_entity_id = 3 [json_name = "backingEntityId"];
          if (!this_._internal_backing_entity_id().empty()) {
            const std::string& _s = this_._internal_backing_entity_id();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.tasks.v2.Point.backing_entity_id");
            target = stream->WriteStringMaybeAliased(3, _s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.tasks.v2.Point)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Point::ByteSizeLong(const MessageLite& base) {
          const Point& this_ = static_cast<const Point&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Point::ByteSizeLong() const {
          const Point& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.tasks.v2.Point)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // string reference_name = 1 [json_name = "referenceName"];
            if (!this_._internal_reference_name().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_reference_name());
            }
            // string backing_entity_id = 3 [json_name = "backingEntityId"];
            if (!this_._internal_backing_entity_id().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_backing_entity_id());
            }
          }
           {
            // .anduril.type.LLA lla = 2 [json_name = "lla"];
            cached_has_bits =
                this_._impl_._has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.lla_);
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void Point::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Point*>(&to_msg);
  auto& from = static_cast<const Point&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.tasks.v2.Point)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_reference_name().empty()) {
    _this->_internal_set_reference_name(from._internal_reference_name());
  }
  if (!from._internal_backing_entity_id().empty()) {
    _this->_internal_set_backing_entity_id(from._internal_backing_entity_id());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(from._impl_.lla_ != nullptr);
    if (_this->_impl_.lla_ == nullptr) {
      _this->_impl_.lla_ =
          ::google::protobuf::Message::CopyConstruct<::anduril::type::LLA>(arena, *from._impl_.lla_);
    } else {
      _this->_impl_.lla_->MergeFrom(*from._impl_.lla_);
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Point::CopyFrom(const Point& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.tasks.v2.Point)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Point::InternalSwap(Point* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.reference_name_, &other->_impl_.reference_name_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.backing_entity_id_, &other->_impl_.backing_entity_id_, arena);
  swap(_impl_.lla_, other->_impl_.lla_);
}

::google::protobuf::Metadata Point::GetMetadata() const {
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
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
