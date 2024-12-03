// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/route_details.pub.proto
// Protobuf C++ Version: 5.29.0

#include "anduril/entitymanager/v1/route_details.pub.pb.h"

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

inline constexpr RouteDetails::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        destination_name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        estimated_arrival_time_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR RouteDetails::RouteDetails(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct RouteDetailsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RouteDetailsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RouteDetailsDefaultTypeInternal() {}
  union {
    RouteDetails _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RouteDetailsDefaultTypeInternal _RouteDetails_default_instance_;
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::RouteDetails, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::RouteDetails, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::RouteDetails, _impl_.destination_name_),
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::RouteDetails, _impl_.estimated_arrival_time_),
        ~0u,
        0,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 10, -1, sizeof(::anduril::entitymanager::v1::RouteDetails)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::entitymanager::v1::_RouteDetails_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n0anduril/entitymanager/v1/route_details"
    ".pub.proto\022\030anduril.entitymanager.v1\032\037go"
    "ogle/protobuf/timestamp.proto\"\213\001\n\014RouteD"
    "etails\022)\n\020destination_name\030\001 \001(\tR\017destin"
    "ationName\022P\n\026estimated_arrival_time\030\002 \001("
    "\0132\032.google.protobuf.TimestampR\024estimated"
    "ArrivalTimeB\205\002\n\034com.anduril.entitymanage"
    "r.v1B\024RouteDetailsPubProtoP\001ZMghe.anduri"
    "l.dev/anduril/andurilapis-go/anduril/ent"
    "itymanager/v1;entitymanager\242\002\003AEX\252\002\030Andu"
    "ril.Entitymanager.V1\312\002\030Anduril\\Entityman"
    "ager\\V1\342\002$Anduril\\Entitymanager\\V1\\GPBMe"
    "tadata\352\002\032Anduril::Entitymanager::V1b\006pro"
    "to3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::absl::once_flag descriptor_table_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto = {
    false,
    false,
    523,
    descriptor_table_protodef_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto,
    "anduril/entitymanager/v1/route_details.pub.proto",
    &descriptor_table_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto_once,
    descriptor_table_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto,
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto,
};
namespace anduril {
namespace entitymanager {
namespace v1 {
// ===================================================================

class RouteDetails::_Internal {
 public:
  using HasBits =
      decltype(std::declval<RouteDetails>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(RouteDetails, _impl_._has_bits_);
};

void RouteDetails::clear_estimated_arrival_time() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.estimated_arrival_time_ != nullptr) _impl_.estimated_arrival_time_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
RouteDetails::RouteDetails(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.RouteDetails)
}
inline PROTOBUF_NDEBUG_INLINE RouteDetails::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::entitymanager::v1::RouteDetails& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        destination_name_(arena, from.destination_name_) {}

RouteDetails::RouteDetails(
    ::google::protobuf::Arena* arena,
    const RouteDetails& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  RouteDetails* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.estimated_arrival_time_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::google::protobuf::Timestamp>(
                              arena, *from._impl_.estimated_arrival_time_)
                        : nullptr;

  // @@protoc_insertion_point(copy_constructor:anduril.entitymanager.v1.RouteDetails)
}
inline PROTOBUF_NDEBUG_INLINE RouteDetails::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        destination_name_(arena) {}

inline void RouteDetails::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.estimated_arrival_time_ = {};
}
RouteDetails::~RouteDetails() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.RouteDetails)
  SharedDtor(*this);
}
inline void RouteDetails::SharedDtor(MessageLite& self) {
  RouteDetails& this_ = static_cast<RouteDetails&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.destination_name_.Destroy();
  delete this_._impl_.estimated_arrival_time_;
  this_._impl_.~Impl_();
}

inline void* RouteDetails::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) RouteDetails(arena);
}
constexpr auto RouteDetails::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::CopyInit(sizeof(RouteDetails),
                                            alignof(RouteDetails));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull RouteDetails::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_RouteDetails_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &RouteDetails::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<RouteDetails>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &RouteDetails::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<RouteDetails>(), &RouteDetails::ByteSizeLong,
            &RouteDetails::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(RouteDetails, _impl_._cached_size_),
        false,
    },
    &RouteDetails::kDescriptorMethods,
    &descriptor_table_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* RouteDetails::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 1, 62, 2> RouteDetails::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(RouteDetails, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::RouteDetails>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // .google.protobuf.Timestamp estimated_arrival_time = 2 [json_name = "estimatedArrivalTime"];
    {::_pbi::TcParser::FastMtS1,
     {18, 0, 0, PROTOBUF_FIELD_OFFSET(RouteDetails, _impl_.estimated_arrival_time_)}},
    // string destination_name = 1 [json_name = "destinationName"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(RouteDetails, _impl_.destination_name_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string destination_name = 1 [json_name = "destinationName"];
    {PROTOBUF_FIELD_OFFSET(RouteDetails, _impl_.destination_name_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // .google.protobuf.Timestamp estimated_arrival_time = 2 [json_name = "estimatedArrivalTime"];
    {PROTOBUF_FIELD_OFFSET(RouteDetails, _impl_.estimated_arrival_time_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::google::protobuf::Timestamp>()},
  }}, {{
    "\45\20\0\0\0\0\0\0"
    "anduril.entitymanager.v1.RouteDetails"
    "destination_name"
  }},
};

PROTOBUF_NOINLINE void RouteDetails::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.RouteDetails)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.destination_name_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.estimated_arrival_time_ != nullptr);
    _impl_.estimated_arrival_time_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* RouteDetails::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const RouteDetails& this_ = static_cast<const RouteDetails&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* RouteDetails::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const RouteDetails& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.RouteDetails)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // string destination_name = 1 [json_name = "destinationName"];
          if (!this_._internal_destination_name().empty()) {
            const std::string& _s = this_._internal_destination_name();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.entitymanager.v1.RouteDetails.destination_name");
            target = stream->WriteStringMaybeAliased(1, _s, target);
          }

          cached_has_bits = this_._impl_._has_bits_[0];
          // .google.protobuf.Timestamp estimated_arrival_time = 2 [json_name = "estimatedArrivalTime"];
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                2, *this_._impl_.estimated_arrival_time_, this_._impl_.estimated_arrival_time_->GetCachedSize(), target,
                stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.RouteDetails)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t RouteDetails::ByteSizeLong(const MessageLite& base) {
          const RouteDetails& this_ = static_cast<const RouteDetails&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t RouteDetails::ByteSizeLong() const {
          const RouteDetails& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.RouteDetails)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // string destination_name = 1 [json_name = "destinationName"];
            if (!this_._internal_destination_name().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_destination_name());
            }
          }
           {
            // .google.protobuf.Timestamp estimated_arrival_time = 2 [json_name = "estimatedArrivalTime"];
            cached_has_bits = this_._impl_._has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.estimated_arrival_time_);
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void RouteDetails::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<RouteDetails*>(&to_msg);
  auto& from = static_cast<const RouteDetails&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.RouteDetails)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_destination_name().empty()) {
    _this->_internal_set_destination_name(from._internal_destination_name());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(from._impl_.estimated_arrival_time_ != nullptr);
    if (_this->_impl_.estimated_arrival_time_ == nullptr) {
      _this->_impl_.estimated_arrival_time_ =
          ::google::protobuf::Message::CopyConstruct<::google::protobuf::Timestamp>(arena, *from._impl_.estimated_arrival_time_);
    } else {
      _this->_impl_.estimated_arrival_time_->MergeFrom(*from._impl_.estimated_arrival_time_);
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void RouteDetails::CopyFrom(const RouteDetails& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.RouteDetails)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void RouteDetails::InternalSwap(RouteDetails* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.destination_name_, &other->_impl_.destination_name_, arena);
  swap(_impl_.estimated_arrival_time_, other->_impl_.estimated_arrival_time_);
}

::google::protobuf::Metadata RouteDetails::GetMetadata() const {
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
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
