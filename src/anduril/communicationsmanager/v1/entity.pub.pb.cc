// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/communicationsmanager/v1/entity.pub.proto
// Protobuf C++ Version: 5.27.3

#include "anduril/communicationsmanager/v1/entity.pub.pb.h"

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
namespace communicationsmanager {
namespace v1 {

inline constexpr EntityDataVendor::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : data_type_{},
        vendor_name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR EntityDataVendor::EntityDataVendor(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct EntityDataVendorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EntityDataVendorDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EntityDataVendorDefaultTypeInternal() {}
  union {
    EntityDataVendor _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EntityDataVendorDefaultTypeInternal _EntityDataVendor_default_instance_;

inline constexpr EntityIntegrationDetails::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : vendors_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR EntityIntegrationDetails::EntityIntegrationDetails(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct EntityIntegrationDetailsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EntityIntegrationDetailsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EntityIntegrationDetailsDefaultTypeInternal() {}
  union {
    EntityIntegrationDetails _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EntityIntegrationDetailsDefaultTypeInternal _EntityIntegrationDetails_default_instance_;

inline constexpr EntityIntegrationRuleDetails::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        filter_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR EntityIntegrationRuleDetails::EntityIntegrationRuleDetails(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct EntityIntegrationRuleDetailsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EntityIntegrationRuleDetailsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EntityIntegrationRuleDetailsDefaultTypeInternal() {}
  union {
    EntityIntegrationRuleDetails _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EntityIntegrationRuleDetailsDefaultTypeInternal _EntityIntegrationRuleDetails_default_instance_;
}  // namespace v1
}  // namespace communicationsmanager
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::communicationsmanager::v1::EntityIntegrationDetails, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::communicationsmanager::v1::EntityIntegrationDetails, _impl_.vendors_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::communicationsmanager::v1::EntityDataVendor, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::communicationsmanager::v1::EntityDataVendor, _impl_.vendor_name_),
        PROTOBUF_FIELD_OFFSET(::anduril::communicationsmanager::v1::EntityDataVendor, _impl_.data_type_),
        PROTOBUF_FIELD_OFFSET(::anduril::communicationsmanager::v1::EntityIntegrationRuleDetails, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::anduril::communicationsmanager::v1::EntityIntegrationRuleDetails, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::communicationsmanager::v1::EntityIntegrationRuleDetails, _impl_.filter_),
        0,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::communicationsmanager::v1::EntityIntegrationDetails)},
        {9, -1, -1, sizeof(::anduril::communicationsmanager::v1::EntityDataVendor)},
        {19, 28, -1, sizeof(::anduril::communicationsmanager::v1::EntityIntegrationRuleDetails)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::communicationsmanager::v1::_EntityIntegrationDetails_default_instance_._instance,
    &::anduril::communicationsmanager::v1::_EntityDataVendor_default_instance_._instance,
    &::anduril::communicationsmanager::v1::_EntityIntegrationRuleDetails_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n1anduril/communicationsmanager/v1/entit"
    "y.pub.proto\022 anduril.communicationsmanag"
    "er.v1\032)anduril/entitymanager/v1/filter.p"
    "ub.proto\"h\n\030EntityIntegrationDetails\022L\n\007"
    "vendors\030\001 \003(\01322.anduril.communicationsma"
    "nager.v1.EntityDataVendorR\007vendors\"P\n\020En"
    "tityDataVendor\022\037\n\013vendor_name\030\001 \001(\tR\nven"
    "dorName\022\033\n\tdata_type\030\002 \003(\tR\010dataType\"[\n\034"
    "EntityIntegrationRuleDetails\022;\n\006filter\030\001"
    " \001(\0132#.anduril.entitymanager.v1.Statemen"
    "tR\006filterB\241\002\n$com.anduril.communications"
    "manager.v1B\016EntityPubProtoP\001ZGghe.anduri"
    "l.dev/anduril/andurilapis-go/anduril/com"
    "municationsmanager/v1\242\002\003ACX\252\002 Anduril.Co"
    "mmunicationsmanager.V1\312\002 Anduril\\Communi"
    "cationsmanager\\V1\342\002,Anduril\\Communicatio"
    "nsmanager\\V1\\GPBMetadata\352\002\"Anduril::Comm"
    "unicationsmanager::V1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto_deps[1] =
    {
        &::descriptor_table_anduril_2fentitymanager_2fv1_2ffilter_2epub_2eproto,
};
static ::absl::once_flag descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto = {
    false,
    false,
    709,
    descriptor_table_protodef_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto,
    "anduril/communicationsmanager/v1/entity.pub.proto",
    &descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto_once,
    descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto_deps,
    1,
    3,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto,
    file_level_service_descriptors_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto,
};
namespace anduril {
namespace communicationsmanager {
namespace v1 {
// ===================================================================

class EntityIntegrationDetails::_Internal {
 public:
};

EntityIntegrationDetails::EntityIntegrationDetails(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.communicationsmanager.v1.EntityIntegrationDetails)
}
inline PROTOBUF_NDEBUG_INLINE EntityIntegrationDetails::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::communicationsmanager::v1::EntityIntegrationDetails& from_msg)
      : vendors_{visibility, arena, from.vendors_},
        _cached_size_{0} {}

EntityIntegrationDetails::EntityIntegrationDetails(
    ::google::protobuf::Arena* arena,
    const EntityIntegrationDetails& from)
    : ::google::protobuf::Message(arena) {
  EntityIntegrationDetails* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:anduril.communicationsmanager.v1.EntityIntegrationDetails)
}
inline PROTOBUF_NDEBUG_INLINE EntityIntegrationDetails::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : vendors_{visibility, arena},
        _cached_size_{0} {}

inline void EntityIntegrationDetails::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
EntityIntegrationDetails::~EntityIntegrationDetails() {
  // @@protoc_insertion_point(destructor:anduril.communicationsmanager.v1.EntityIntegrationDetails)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void EntityIntegrationDetails::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
EntityIntegrationDetails::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(EntityIntegrationDetails, _impl_._cached_size_),
              false,
          },
          &EntityIntegrationDetails::MergeImpl,
          &EntityIntegrationDetails::kDescriptorMethods,
          &descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> EntityIntegrationDetails::_table_ = {
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
    &_EntityIntegrationDetails_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::communicationsmanager::v1::EntityIntegrationDetails>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated .anduril.communicationsmanager.v1.EntityDataVendor vendors = 1 [json_name = "vendors"];
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(EntityIntegrationDetails, _impl_.vendors_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .anduril.communicationsmanager.v1.EntityDataVendor vendors = 1 [json_name = "vendors"];
    {PROTOBUF_FIELD_OFFSET(EntityIntegrationDetails, _impl_.vendors_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::communicationsmanager::v1::EntityDataVendor>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void EntityIntegrationDetails::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.communicationsmanager.v1.EntityIntegrationDetails)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.vendors_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* EntityIntegrationDetails::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.communicationsmanager.v1.EntityIntegrationDetails)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .anduril.communicationsmanager.v1.EntityDataVendor vendors = 1 [json_name = "vendors"];
  for (unsigned i = 0, n = static_cast<unsigned>(
                           this->_internal_vendors_size());
       i < n; i++) {
    const auto& repfield = this->_internal_vendors().Get(i);
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
  // @@protoc_insertion_point(serialize_to_array_end:anduril.communicationsmanager.v1.EntityIntegrationDetails)
  return target;
}

::size_t EntityIntegrationDetails::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.communicationsmanager.v1.EntityIntegrationDetails)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // repeated .anduril.communicationsmanager.v1.EntityDataVendor vendors = 1 [json_name = "vendors"];
  total_size += 1UL * this->_internal_vendors_size();
  for (const auto& msg : this->_internal_vendors()) {
    total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void EntityIntegrationDetails::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<EntityIntegrationDetails*>(&to_msg);
  auto& from = static_cast<const EntityIntegrationDetails&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.communicationsmanager.v1.EntityIntegrationDetails)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_vendors()->MergeFrom(
      from._internal_vendors());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void EntityIntegrationDetails::CopyFrom(const EntityIntegrationDetails& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.communicationsmanager.v1.EntityIntegrationDetails)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void EntityIntegrationDetails::InternalSwap(EntityIntegrationDetails* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.vendors_.InternalSwap(&other->_impl_.vendors_);
}

::google::protobuf::Metadata EntityIntegrationDetails::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class EntityDataVendor::_Internal {
 public:
};

EntityDataVendor::EntityDataVendor(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.communicationsmanager.v1.EntityDataVendor)
}
inline PROTOBUF_NDEBUG_INLINE EntityDataVendor::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::communicationsmanager::v1::EntityDataVendor& from_msg)
      : data_type_{visibility, arena, from.data_type_},
        vendor_name_(arena, from.vendor_name_),
        _cached_size_{0} {}

EntityDataVendor::EntityDataVendor(
    ::google::protobuf::Arena* arena,
    const EntityDataVendor& from)
    : ::google::protobuf::Message(arena) {
  EntityDataVendor* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:anduril.communicationsmanager.v1.EntityDataVendor)
}
inline PROTOBUF_NDEBUG_INLINE EntityDataVendor::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : data_type_{visibility, arena},
        vendor_name_(arena),
        _cached_size_{0} {}

inline void EntityDataVendor::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
EntityDataVendor::~EntityDataVendor() {
  // @@protoc_insertion_point(destructor:anduril.communicationsmanager.v1.EntityDataVendor)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void EntityDataVendor::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.vendor_name_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
EntityDataVendor::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(EntityDataVendor, _impl_._cached_size_),
              false,
          },
          &EntityDataVendor::MergeImpl,
          &EntityDataVendor::kDescriptorMethods,
          &descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 78, 2> EntityDataVendor::_table_ = {
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
    &_EntityDataVendor_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::communicationsmanager::v1::EntityDataVendor>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated string data_type = 2 [json_name = "dataType"];
    {::_pbi::TcParser::FastUR1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(EntityDataVendor, _impl_.data_type_)}},
    // string vendor_name = 1 [json_name = "vendorName"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(EntityDataVendor, _impl_.vendor_name_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string vendor_name = 1 [json_name = "vendorName"];
    {PROTOBUF_FIELD_OFFSET(EntityDataVendor, _impl_.vendor_name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // repeated string data_type = 2 [json_name = "dataType"];
    {PROTOBUF_FIELD_OFFSET(EntityDataVendor, _impl_.data_type_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
  }},
  // no aux_entries
  {{
    "\61\13\11\0\0\0\0\0"
    "anduril.communicationsmanager.v1.EntityDataVendor"
    "vendor_name"
    "data_type"
  }},
};

PROTOBUF_NOINLINE void EntityDataVendor::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.communicationsmanager.v1.EntityDataVendor)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.data_type_.Clear();
  _impl_.vendor_name_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* EntityDataVendor::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.communicationsmanager.v1.EntityDataVendor)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string vendor_name = 1 [json_name = "vendorName"];
  if (!this->_internal_vendor_name().empty()) {
    const std::string& _s = this->_internal_vendor_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.communicationsmanager.v1.EntityDataVendor.vendor_name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // repeated string data_type = 2 [json_name = "dataType"];
  for (int i = 0, n = this->_internal_data_type_size(); i < n; ++i) {
    const auto& s = this->_internal_data_type().Get(i);
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "anduril.communicationsmanager.v1.EntityDataVendor.data_type");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.communicationsmanager.v1.EntityDataVendor)
  return target;
}

::size_t EntityDataVendor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.communicationsmanager.v1.EntityDataVendor)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // repeated string data_type = 2 [json_name = "dataType"];
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_data_type().size());
  for (int i = 0, n = _internal_data_type().size(); i < n; ++i) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
        _internal_data_type().Get(i));
  }
  // string vendor_name = 1 [json_name = "vendorName"];
  if (!this->_internal_vendor_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_vendor_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void EntityDataVendor::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<EntityDataVendor*>(&to_msg);
  auto& from = static_cast<const EntityDataVendor&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.communicationsmanager.v1.EntityDataVendor)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_data_type()->MergeFrom(from._internal_data_type());
  if (!from._internal_vendor_name().empty()) {
    _this->_internal_set_vendor_name(from._internal_vendor_name());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void EntityDataVendor::CopyFrom(const EntityDataVendor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.communicationsmanager.v1.EntityDataVendor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void EntityDataVendor::InternalSwap(EntityDataVendor* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.data_type_.InternalSwap(&other->_impl_.data_type_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.vendor_name_, &other->_impl_.vendor_name_, arena);
}

::google::protobuf::Metadata EntityDataVendor::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class EntityIntegrationRuleDetails::_Internal {
 public:
  using HasBits =
      decltype(std::declval<EntityIntegrationRuleDetails>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(EntityIntegrationRuleDetails, _impl_._has_bits_);
};

void EntityIntegrationRuleDetails::clear_filter() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.filter_ != nullptr) _impl_.filter_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
EntityIntegrationRuleDetails::EntityIntegrationRuleDetails(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.communicationsmanager.v1.EntityIntegrationRuleDetails)
}
inline PROTOBUF_NDEBUG_INLINE EntityIntegrationRuleDetails::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::communicationsmanager::v1::EntityIntegrationRuleDetails& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

EntityIntegrationRuleDetails::EntityIntegrationRuleDetails(
    ::google::protobuf::Arena* arena,
    const EntityIntegrationRuleDetails& from)
    : ::google::protobuf::Message(arena) {
  EntityIntegrationRuleDetails* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.filter_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Statement>(
                              arena, *from._impl_.filter_)
                        : nullptr;

  // @@protoc_insertion_point(copy_constructor:anduril.communicationsmanager.v1.EntityIntegrationRuleDetails)
}
inline PROTOBUF_NDEBUG_INLINE EntityIntegrationRuleDetails::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void EntityIntegrationRuleDetails::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.filter_ = {};
}
EntityIntegrationRuleDetails::~EntityIntegrationRuleDetails() {
  // @@protoc_insertion_point(destructor:anduril.communicationsmanager.v1.EntityIntegrationRuleDetails)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void EntityIntegrationRuleDetails::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  delete _impl_.filter_;
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
EntityIntegrationRuleDetails::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(EntityIntegrationRuleDetails, _impl_._cached_size_),
              false,
          },
          &EntityIntegrationRuleDetails::MergeImpl,
          &EntityIntegrationRuleDetails::kDescriptorMethods,
          &descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> EntityIntegrationRuleDetails::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(EntityIntegrationRuleDetails, _impl_._has_bits_),
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_EntityIntegrationRuleDetails_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::communicationsmanager::v1::EntityIntegrationRuleDetails>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // .anduril.entitymanager.v1.Statement filter = 1 [json_name = "filter"];
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(EntityIntegrationRuleDetails, _impl_.filter_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .anduril.entitymanager.v1.Statement filter = 1 [json_name = "filter"];
    {PROTOBUF_FIELD_OFFSET(EntityIntegrationRuleDetails, _impl_.filter_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::entitymanager::v1::Statement>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void EntityIntegrationRuleDetails::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.communicationsmanager.v1.EntityIntegrationRuleDetails)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.filter_ != nullptr);
    _impl_.filter_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* EntityIntegrationRuleDetails::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.communicationsmanager.v1.EntityIntegrationRuleDetails)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .anduril.entitymanager.v1.Statement filter = 1 [json_name = "filter"];
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        1, *_impl_.filter_, _impl_.filter_->GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.communicationsmanager.v1.EntityIntegrationRuleDetails)
  return target;
}

::size_t EntityIntegrationRuleDetails::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.communicationsmanager.v1.EntityIntegrationRuleDetails)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .anduril.entitymanager.v1.Statement filter = 1 [json_name = "filter"];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size +=
        1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.filter_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void EntityIntegrationRuleDetails::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<EntityIntegrationRuleDetails*>(&to_msg);
  auto& from = static_cast<const EntityIntegrationRuleDetails&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.communicationsmanager.v1.EntityIntegrationRuleDetails)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(from._impl_.filter_ != nullptr);
    if (_this->_impl_.filter_ == nullptr) {
      _this->_impl_.filter_ =
          ::google::protobuf::Message::CopyConstruct<::anduril::entitymanager::v1::Statement>(arena, *from._impl_.filter_);
    } else {
      _this->_impl_.filter_->MergeFrom(*from._impl_.filter_);
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void EntityIntegrationRuleDetails::CopyFrom(const EntityIntegrationRuleDetails& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.communicationsmanager.v1.EntityIntegrationRuleDetails)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void EntityIntegrationRuleDetails::InternalSwap(EntityIntegrationRuleDetails* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.filter_, other->_impl_.filter_);
}

::google::protobuf::Metadata EntityIntegrationRuleDetails::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace communicationsmanager
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fentity_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
