// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/orbit.pub.proto
// Protobuf C++ Version: 5.29.0

#include "anduril/entitymanager/v1/orbit.pub.pb.h"

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

inline constexpr Orbit::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        orbit_mean_elements_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR Orbit::Orbit(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct OrbitDefaultTypeInternal {
  PROTOBUF_CONSTEXPR OrbitDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~OrbitDefaultTypeInternal() {}
  union {
    Orbit _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 OrbitDefaultTypeInternal _Orbit_default_instance_;
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Orbit, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Orbit, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::entitymanager::v1::Orbit, _impl_.orbit_mean_elements_),
        0,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 9, -1, sizeof(::anduril::entitymanager::v1::Orbit)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::entitymanager::v1::_Orbit_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n(anduril/entitymanager/v1/orbit.pub.pro"
    "to\022\030anduril.entitymanager.v1\032\034anduril/ty"
    "pe/orbit.pub.proto\"X\n\005Orbit\022O\n\023orbit_mea"
    "n_elements\030\001 \001(\0132\037.anduril.type.OrbitMea"
    "nElementsR\021orbitMeanElementsB\376\001\n\034com.and"
    "uril.entitymanager.v1B\rOrbitPubProtoP\001ZM"
    "ghe.anduril.dev/anduril/andurilapis-go/a"
    "nduril/entitymanager/v1;entitymanager\242\002\003"
    "AEX\252\002\030Anduril.Entitymanager.V1\312\002\030Anduril"
    "\\Entitymanager\\V1\342\002$Anduril\\Entitymanage"
    "r\\V1\\GPBMetadata\352\002\032Anduril::Entitymanage"
    "r::V1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto_deps[1] =
    {
        &::descriptor_table_anduril_2ftype_2forbit_2epub_2eproto,
};
static ::absl::once_flag descriptor_table_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto = {
    false,
    false,
    453,
    descriptor_table_protodef_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto,
    "anduril/entitymanager/v1/orbit.pub.proto",
    &descriptor_table_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto_once,
    descriptor_table_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto,
    file_level_service_descriptors_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto,
};
namespace anduril {
namespace entitymanager {
namespace v1 {
// ===================================================================

class Orbit::_Internal {
 public:
  using HasBits =
      decltype(std::declval<Orbit>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(Orbit, _impl_._has_bits_);
};

void Orbit::clear_orbit_mean_elements() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.orbit_mean_elements_ != nullptr) _impl_.orbit_mean_elements_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
Orbit::Orbit(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.entitymanager.v1.Orbit)
}
inline PROTOBUF_NDEBUG_INLINE Orbit::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::entitymanager::v1::Orbit& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

Orbit::Orbit(
    ::google::protobuf::Arena* arena,
    const Orbit& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Orbit* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.orbit_mean_elements_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::anduril::type::OrbitMeanElements>(
                              arena, *from._impl_.orbit_mean_elements_)
                        : nullptr;

  // @@protoc_insertion_point(copy_constructor:anduril.entitymanager.v1.Orbit)
}
inline PROTOBUF_NDEBUG_INLINE Orbit::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void Orbit::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.orbit_mean_elements_ = {};
}
Orbit::~Orbit() {
  // @@protoc_insertion_point(destructor:anduril.entitymanager.v1.Orbit)
  SharedDtor(*this);
}
inline void Orbit::SharedDtor(MessageLite& self) {
  Orbit& this_ = static_cast<Orbit&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  delete this_._impl_.orbit_mean_elements_;
  this_._impl_.~Impl_();
}

inline void* Orbit::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) Orbit(arena);
}
constexpr auto Orbit::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::ZeroInit(sizeof(Orbit),
                                            alignof(Orbit));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull Orbit::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_Orbit_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &Orbit::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<Orbit>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &Orbit::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<Orbit>(), &Orbit::ByteSizeLong,
            &Orbit::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(Orbit, _impl_._cached_size_),
        false,
    },
    &Orbit::kDescriptorMethods,
    &descriptor_table_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* Orbit::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> Orbit::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Orbit, _impl_._has_bits_),
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
    ::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Orbit>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // .anduril.type.OrbitMeanElements orbit_mean_elements = 1 [json_name = "orbitMeanElements"];
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(Orbit, _impl_.orbit_mean_elements_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .anduril.type.OrbitMeanElements orbit_mean_elements = 1 [json_name = "orbitMeanElements"];
    {PROTOBUF_FIELD_OFFSET(Orbit, _impl_.orbit_mean_elements_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::type::OrbitMeanElements>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void Orbit::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.entitymanager.v1.Orbit)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.orbit_mean_elements_ != nullptr);
    _impl_.orbit_mean_elements_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Orbit::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Orbit& this_ = static_cast<const Orbit&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Orbit::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Orbit& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.entitymanager.v1.Orbit)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // .anduril.type.OrbitMeanElements orbit_mean_elements = 1 [json_name = "orbitMeanElements"];
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                1, *this_._impl_.orbit_mean_elements_, this_._impl_.orbit_mean_elements_->GetCachedSize(), target,
                stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.entitymanager.v1.Orbit)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Orbit::ByteSizeLong(const MessageLite& base) {
          const Orbit& this_ = static_cast<const Orbit&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Orbit::ByteSizeLong() const {
          const Orbit& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.entitymanager.v1.Orbit)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // .anduril.type.OrbitMeanElements orbit_mean_elements = 1 [json_name = "orbitMeanElements"];
            cached_has_bits = this_._impl_._has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.orbit_mean_elements_);
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void Orbit::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Orbit*>(&to_msg);
  auto& from = static_cast<const Orbit&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.entitymanager.v1.Orbit)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(from._impl_.orbit_mean_elements_ != nullptr);
    if (_this->_impl_.orbit_mean_elements_ == nullptr) {
      _this->_impl_.orbit_mean_elements_ =
          ::google::protobuf::Message::CopyConstruct<::anduril::type::OrbitMeanElements>(arena, *from._impl_.orbit_mean_elements_);
    } else {
      _this->_impl_.orbit_mean_elements_->MergeFrom(*from._impl_.orbit_mean_elements_);
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Orbit::CopyFrom(const Orbit& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.entitymanager.v1.Orbit)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Orbit::InternalSwap(Orbit* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.orbit_mean_elements_, other->_impl_.orbit_mean_elements_);
}

::google::protobuf::Metadata Orbit::GetMetadata() const {
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
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
