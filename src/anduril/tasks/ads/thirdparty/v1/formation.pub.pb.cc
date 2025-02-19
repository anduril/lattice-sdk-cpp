// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/tasks/ads/thirdparty/v1/formation.pub.proto
// Protobuf C++ Version: 5.29.0

#include "anduril/tasks/ads/thirdparty/v1/formation.pub.pb.h"

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
namespace ads {
namespace thirdparty {
namespace v1 {

inline constexpr LineFormation::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        line_start_{nullptr},
        line_end_{nullptr},
        surface_speed_ms_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR LineFormation::LineFormation(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct LineFormationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LineFormationDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~LineFormationDefaultTypeInternal() {}
  union {
    LineFormation _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LineFormationDefaultTypeInternal _LineFormation_default_instance_;
}  // namespace v1
}  // namespace thirdparty
}  // namespace ads
}  // namespace tasks
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::ads::thirdparty::v1::LineFormation, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::ads::thirdparty::v1::LineFormation, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::ads::thirdparty::v1::LineFormation, _impl_.line_start_),
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::ads::thirdparty::v1::LineFormation, _impl_.line_end_),
        PROTOBUF_FIELD_OFFSET(::anduril::tasks::ads::thirdparty::v1::LineFormation, _impl_.surface_speed_ms_),
        0,
        1,
        2,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 11, -1, sizeof(::anduril::tasks::ads::thirdparty::v1::LineFormation)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::tasks::ads::thirdparty::v1::_LineFormation_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n3anduril/tasks/ads/thirdparty/v1/format"
    "ion.pub.proto\022\037anduril.tasks.ads.thirdpa"
    "rty.v1\032$anduril/tasks/v2/objective.pub.p"
    "roto\032\036google/protobuf/wrappers.proto\"\313\001\n"
    "\rLineFormation\022:\n\nline_start\030\001 \001(\0132\033.and"
    "uril.tasks.v2.ObjectiveR\tlineStart\0226\n\010li"
    "ne_end\030\002 \001(\0132\033.anduril.tasks.v2.Objectiv"
    "eR\007lineEnd\022F\n\020surface_speed_ms\030\003 \001(\0132\034.g"
    "oogle.protobuf.DoubleValueR\016surfaceSpeed"
    "MsB\251\002\n#com.anduril.tasks.ads.thirdparty."
    "v1B\021FormationPubProtoP\001ZNghe.anduril.dev"
    "/anduril/andurilapis-go/anduril/tasks/ad"
    "s/thirdparty/v1;tasksv1\242\002\004ATAT\252\002\037Anduril"
    ".Tasks.Ads.Thirdparty.V1\312\002\037Anduril\\Tasks"
    "\\Ads\\Thirdparty\\V1\342\002+Anduril\\Tasks\\Ads\\T"
    "hirdparty\\V1\\GPBMetadata\352\002#Anduril::Task"
    "s::Ads::Thirdparty::V1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto_deps[2] =
    {
        &::descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto,
        &::descriptor_table_google_2fprotobuf_2fwrappers_2eproto,
};
static ::absl::once_flag descriptor_table_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto = {
    false,
    false,
    670,
    descriptor_table_protodef_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto,
    "anduril/tasks/ads/thirdparty/v1/formation.pub.proto",
    &descriptor_table_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto_once,
    descriptor_table_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto_deps,
    2,
    1,
    schemas,
    file_default_instances,
    TableStruct_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto,
    file_level_service_descriptors_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto,
};
namespace anduril {
namespace tasks {
namespace ads {
namespace thirdparty {
namespace v1 {
// ===================================================================

class LineFormation::_Internal {
 public:
  using HasBits =
      decltype(std::declval<LineFormation>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(LineFormation, _impl_._has_bits_);
};

void LineFormation::clear_line_start() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.line_start_ != nullptr) _impl_.line_start_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void LineFormation::clear_line_end() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.line_end_ != nullptr) _impl_.line_end_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
void LineFormation::clear_surface_speed_ms() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.surface_speed_ms_ != nullptr) _impl_.surface_speed_ms_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
LineFormation::LineFormation(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.tasks.ads.thirdparty.v1.LineFormation)
}
inline PROTOBUF_NDEBUG_INLINE LineFormation::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::tasks::ads::thirdparty::v1::LineFormation& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

LineFormation::LineFormation(
    ::google::protobuf::Arena* arena,
    const LineFormation& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  LineFormation* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.line_start_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::anduril::tasks::v2::Objective>(
                              arena, *from._impl_.line_start_)
                        : nullptr;
  _impl_.line_end_ = (cached_has_bits & 0x00000002u) ? ::google::protobuf::Message::CopyConstruct<::anduril::tasks::v2::Objective>(
                              arena, *from._impl_.line_end_)
                        : nullptr;
  _impl_.surface_speed_ms_ = (cached_has_bits & 0x00000004u) ? ::google::protobuf::Message::CopyConstruct<::google::protobuf::DoubleValue>(
                              arena, *from._impl_.surface_speed_ms_)
                        : nullptr;

  // @@protoc_insertion_point(copy_constructor:anduril.tasks.ads.thirdparty.v1.LineFormation)
}
inline PROTOBUF_NDEBUG_INLINE LineFormation::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void LineFormation::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, line_start_),
           0,
           offsetof(Impl_, surface_speed_ms_) -
               offsetof(Impl_, line_start_) +
               sizeof(Impl_::surface_speed_ms_));
}
LineFormation::~LineFormation() {
  // @@protoc_insertion_point(destructor:anduril.tasks.ads.thirdparty.v1.LineFormation)
  SharedDtor(*this);
}
inline void LineFormation::SharedDtor(MessageLite& self) {
  LineFormation& this_ = static_cast<LineFormation&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  delete this_._impl_.line_start_;
  delete this_._impl_.line_end_;
  delete this_._impl_.surface_speed_ms_;
  this_._impl_.~Impl_();
}

inline void* LineFormation::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) LineFormation(arena);
}
constexpr auto LineFormation::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::ZeroInit(sizeof(LineFormation),
                                            alignof(LineFormation));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull LineFormation::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_LineFormation_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &LineFormation::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<LineFormation>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &LineFormation::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<LineFormation>(), &LineFormation::ByteSizeLong,
            &LineFormation::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(LineFormation, _impl_._cached_size_),
        false,
    },
    &LineFormation::kDescriptorMethods,
    &descriptor_table_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* LineFormation::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 3, 0, 2> LineFormation::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(LineFormation, _impl_._has_bits_),
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    3,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::tasks::ads::thirdparty::v1::LineFormation>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // .anduril.tasks.v2.Objective line_start = 1 [json_name = "lineStart"];
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(LineFormation, _impl_.line_start_)}},
    // .anduril.tasks.v2.Objective line_end = 2 [json_name = "lineEnd"];
    {::_pbi::TcParser::FastMtS1,
     {18, 1, 1, PROTOBUF_FIELD_OFFSET(LineFormation, _impl_.line_end_)}},
    // .google.protobuf.DoubleValue surface_speed_ms = 3 [json_name = "surfaceSpeedMs"];
    {::_pbi::TcParser::FastMtS1,
     {26, 2, 2, PROTOBUF_FIELD_OFFSET(LineFormation, _impl_.surface_speed_ms_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .anduril.tasks.v2.Objective line_start = 1 [json_name = "lineStart"];
    {PROTOBUF_FIELD_OFFSET(LineFormation, _impl_.line_start_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .anduril.tasks.v2.Objective line_end = 2 [json_name = "lineEnd"];
    {PROTOBUF_FIELD_OFFSET(LineFormation, _impl_.line_end_), _Internal::kHasBitsOffset + 1, 1,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .google.protobuf.DoubleValue surface_speed_ms = 3 [json_name = "surfaceSpeedMs"];
    {PROTOBUF_FIELD_OFFSET(LineFormation, _impl_.surface_speed_ms_), _Internal::kHasBitsOffset + 2, 2,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::tasks::v2::Objective>()},
    {::_pbi::TcParser::GetTable<::anduril::tasks::v2::Objective>()},
    {::_pbi::TcParser::GetTable<::google::protobuf::DoubleValue>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void LineFormation::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.tasks.ads.thirdparty.v1.LineFormation)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(_impl_.line_start_ != nullptr);
      _impl_.line_start_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(_impl_.line_end_ != nullptr);
      _impl_.line_end_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      ABSL_DCHECK(_impl_.surface_speed_ms_ != nullptr);
      _impl_.surface_speed_ms_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* LineFormation::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const LineFormation& this_ = static_cast<const LineFormation&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* LineFormation::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const LineFormation& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.tasks.ads.thirdparty.v1.LineFormation)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // .anduril.tasks.v2.Objective line_start = 1 [json_name = "lineStart"];
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                1, *this_._impl_.line_start_, this_._impl_.line_start_->GetCachedSize(), target,
                stream);
          }

          // .anduril.tasks.v2.Objective line_end = 2 [json_name = "lineEnd"];
          if (cached_has_bits & 0x00000002u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                2, *this_._impl_.line_end_, this_._impl_.line_end_->GetCachedSize(), target,
                stream);
          }

          // .google.protobuf.DoubleValue surface_speed_ms = 3 [json_name = "surfaceSpeedMs"];
          if (cached_has_bits & 0x00000004u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                3, *this_._impl_.surface_speed_ms_, this_._impl_.surface_speed_ms_->GetCachedSize(), target,
                stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.tasks.ads.thirdparty.v1.LineFormation)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t LineFormation::ByteSizeLong(const MessageLite& base) {
          const LineFormation& this_ = static_cast<const LineFormation&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t LineFormation::ByteSizeLong() const {
          const LineFormation& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.tasks.ads.thirdparty.v1.LineFormation)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
          cached_has_bits = this_._impl_._has_bits_[0];
          if (cached_has_bits & 0x00000007u) {
            // .anduril.tasks.v2.Objective line_start = 1 [json_name = "lineStart"];
            if (cached_has_bits & 0x00000001u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.line_start_);
            }
            // .anduril.tasks.v2.Objective line_end = 2 [json_name = "lineEnd"];
            if (cached_has_bits & 0x00000002u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.line_end_);
            }
            // .google.protobuf.DoubleValue surface_speed_ms = 3 [json_name = "surfaceSpeedMs"];
            if (cached_has_bits & 0x00000004u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.surface_speed_ms_);
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void LineFormation::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<LineFormation*>(&to_msg);
  auto& from = static_cast<const LineFormation&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.tasks.ads.thirdparty.v1.LineFormation)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(from._impl_.line_start_ != nullptr);
      if (_this->_impl_.line_start_ == nullptr) {
        _this->_impl_.line_start_ =
            ::google::protobuf::Message::CopyConstruct<::anduril::tasks::v2::Objective>(arena, *from._impl_.line_start_);
      } else {
        _this->_impl_.line_start_->MergeFrom(*from._impl_.line_start_);
      }
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(from._impl_.line_end_ != nullptr);
      if (_this->_impl_.line_end_ == nullptr) {
        _this->_impl_.line_end_ =
            ::google::protobuf::Message::CopyConstruct<::anduril::tasks::v2::Objective>(arena, *from._impl_.line_end_);
      } else {
        _this->_impl_.line_end_->MergeFrom(*from._impl_.line_end_);
      }
    }
    if (cached_has_bits & 0x00000004u) {
      ABSL_DCHECK(from._impl_.surface_speed_ms_ != nullptr);
      if (_this->_impl_.surface_speed_ms_ == nullptr) {
        _this->_impl_.surface_speed_ms_ =
            ::google::protobuf::Message::CopyConstruct<::google::protobuf::DoubleValue>(arena, *from._impl_.surface_speed_ms_);
      } else {
        _this->_impl_.surface_speed_ms_->MergeFrom(*from._impl_.surface_speed_ms_);
      }
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void LineFormation::CopyFrom(const LineFormation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.tasks.ads.thirdparty.v1.LineFormation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void LineFormation::InternalSwap(LineFormation* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LineFormation, _impl_.surface_speed_ms_)
      + sizeof(LineFormation::_impl_.surface_speed_ms_)
      - PROTOBUF_FIELD_OFFSET(LineFormation, _impl_.line_start_)>(
          reinterpret_cast<char*>(&_impl_.line_start_),
          reinterpret_cast<char*>(&other->_impl_.line_start_));
}

::google::protobuf::Metadata LineFormation::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace thirdparty
}  // namespace ads
}  // namespace tasks
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
