// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/dimensions.pub.proto
// Protobuf C++ Version: 5.29.0

#include "anduril/entitymanager/v1/dimensions.pub.pb.h"

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

inline constexpr Dimensions::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : length_m_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Dimensions::Dimensions(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct DimensionsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DimensionsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DimensionsDefaultTypeInternal() {}
  union {
    Dimensions _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DimensionsDefaultTypeInternal _Dimensions_default_instance_;
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Dimensions, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Dimensions, _impl_.length_m_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::entitymanager::v1::Dimensions)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::entitymanager::v1::_Dimensions_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n-anduril/entitymanager/v1/dimensions.pu"
    "b.proto\022\030anduril.entitymanager.v1\"\'\n\nDim"
    "ensions\022\031\n\010length_m\030\001 \001(\002R\007lengthMB\203\002\n\034c"
    "om.anduril.entitymanager.v1B\022DimensionsP"
    "ubProtoP\001ZMghe.anduril.dev/anduril/andur"
    "ilapis-go/anduril/entitymanager/v1;entit"
    "ymanager\242\002\003AEX\252\002\030Anduril.Entitymanager.V"
    "1\312\002\030Anduril\\Entitymanager\\V1\342\002$Anduril\\E"
    "ntitymanager\\V1\\GPBMetadata\352\002\032Anduril::E"
    "ntitymanager::V1b\006proto3"
};
static ::absl::once_flag descriptor_table_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto = {
    false,
    false,
    384,
    descriptor_table_protodef_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto,
    "anduril/entitymanager/v1/dimensions.pub.proto",
    &descriptor_table_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto,
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto,
};
namespace anduril {
namespace entitymanager {
namespace v1 {
// ===================================================================

class Dimensions::_Internal {
 public:
};

Dimensions::Dimensions(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.Dimensions)
}
Dimensions::Dimensions(
    ::google::protobuf::Arena* arena, const Dimensions& from)
    : Dimensions(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE Dimensions::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void Dimensions::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.length_m_ = {};
}
Dimensions::~Dimensions() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.Dimensions)
  SharedDtor(*this);
}
inline void Dimensions::SharedDtor(MessageLite& self) {
  Dimensions& this_ = static_cast<Dimensions&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.~Impl_();
}

inline void* Dimensions::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) Dimensions(arena);
}
constexpr auto Dimensions::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::ZeroInit(sizeof(Dimensions),
                                            alignof(Dimensions));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull Dimensions::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_Dimensions_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &Dimensions::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<Dimensions>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &Dimensions::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<Dimensions>(), &Dimensions::ByteSizeLong,
            &Dimensions::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(Dimensions, _impl_._cached_size_),
        false,
    },
    &Dimensions::kDescriptorMethods,
    &descriptor_table_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* Dimensions::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> Dimensions::_table_ = {
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
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Dimensions>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // float length_m = 1 [json_name = "lengthM"];
    {::_pbi::TcParser::FastF32S1,
     {13, 63, 0, PROTOBUF_FIELD_OFFSET(Dimensions, _impl_.length_m_)}},
  }}, {{
    65535, 65535
  }}, {{
    // float length_m = 1 [json_name = "lengthM"];
    {PROTOBUF_FIELD_OFFSET(Dimensions, _impl_.length_m_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void Dimensions::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.Dimensions)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.length_m_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Dimensions::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Dimensions& this_ = static_cast<const Dimensions&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Dimensions::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Dimensions& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.Dimensions)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // float length_m = 1 [json_name = "lengthM"];
          if (::absl::bit_cast<::uint32_t>(this_._internal_length_m()) != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteFloatToArray(
                1, this_._internal_length_m(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.Dimensions)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Dimensions::ByteSizeLong(const MessageLite& base) {
          const Dimensions& this_ = static_cast<const Dimensions&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Dimensions::ByteSizeLong() const {
          const Dimensions& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.Dimensions)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // float length_m = 1 [json_name = "lengthM"];
            if (::absl::bit_cast<::uint32_t>(this_._internal_length_m()) != 0) {
              total_size += 5;
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void Dimensions::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Dimensions*>(&to_msg);
  auto& from = static_cast<const Dimensions&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.Dimensions)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (::absl::bit_cast<::uint32_t>(from._internal_length_m()) != 0) {
    _this->_impl_.length_m_ = from._impl_.length_m_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Dimensions::CopyFrom(const Dimensions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.Dimensions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Dimensions::InternalSwap(Dimensions* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.length_m_, other->_impl_.length_m_);
}

::google::protobuf::Metadata Dimensions::GetMetadata() const {
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
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2fentitymanager_2fv1_2fdimensions_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
