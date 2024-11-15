// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/ontology/v1/type.pub.proto
// Protobuf C++ Version: 5.28.3

#include "anduril/ontology/v1/type.pub.pb.h"

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
namespace ontology {
namespace v1 {

inline constexpr ObjectType::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : class__{static_cast< ::anduril::ontology::v1::Class >(0)},
        disposition_{static_cast< ::anduril::ontology::v1::Disposition >(0)},
        environment_{static_cast< ::anduril::ontology::v1::Environment >(0)},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR ObjectType::ObjectType(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct ObjectTypeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ObjectTypeDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ObjectTypeDefaultTypeInternal() {}
  union {
    ObjectType _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ObjectTypeDefaultTypeInternal _ObjectType_default_instance_;
}  // namespace v1
}  // namespace ontology
}  // namespace anduril
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_anduril_2fontology_2fv1_2ftype_2epub_2eproto[4];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2fontology_2fv1_2ftype_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2fontology_2fv1_2ftype_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::anduril::ontology::v1::ObjectType, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::ontology::v1::ObjectType, _impl_.class__),
        PROTOBUF_FIELD_OFFSET(::anduril::ontology::v1::ObjectType, _impl_.disposition_),
        PROTOBUF_FIELD_OFFSET(::anduril::ontology::v1::ObjectType, _impl_.environment_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::anduril::ontology::v1::ObjectType)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::ontology::v1::_ObjectType_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2fontology_2fv1_2ftype_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\"anduril/ontology/v1/type.pub.proto\022\023an"
    "duril.ontology.v1\"\306\001\n\nObjectType\0220\n\005clas"
    "s\030\001 \001(\0162\032.anduril.ontology.v1.ClassR\005cla"
    "ss\022B\n\013disposition\030\002 \001(\0162 .anduril.ontolo"
    "gy.v1.DispositionR\013disposition\022B\n\013enviro"
    "nment\030\003 \001(\0162 .anduril.ontology.v1.Enviro"
    "nmentR\013environment*\203\002\n\005Class\022\021\n\rCLASS_UN"
    "KNOWN\020\000\022\020\n\014CLASS_PERSON\020\001\022\r\n\tCLASS_CAR\020\002"
    "\022\020\n\014CLASS_ANIMAL\020\003\022\025\n\021CLASS_AIR_VEHICLE\020"
    "\004\022\021\n\rCLASS_BICYCLE\020\005\022\027\n\023CLASS_WATER_VEHI"
    "CLE\020\006\022\031\n\025CLASS_UNKNOWN_VEHICLE\020\007\022\021\n\rCLAS"
    "S_MISSILE\020\010\022\035\n\031CLASS_UNKNOWN_AIR_VEHICLE"
    "\020\t\022\016\n\nCLASS_BIRD\020\n\022\024\n\020CLASS_BACKGROUND\020\013"
    "*\311\001\n\013Disposition\022\027\n\023DISPOSITION_UNKNOWN\020"
    "\000\022\030\n\024DISPOSITION_FRIENDLY\020\001\022\027\n\023DISPOSITI"
    "ON_HOSTILE\020\002\022\032\n\026DISPOSITION_SUSPICIOUS\020\003"
    "\022 \n\034DISPOSITION_ASSUMED_FRIENDLY\020\004\022\027\n\023DI"
    "SPOSITION_NEUTRAL\020\005\022\027\n\023DISPOSITION_PENDI"
    "NG\020\006*\236\001\n\013Environment\022\027\n\023ENVIRONMENT_UNKN"
    "OWN\020\000\022\023\n\017ENVIRONMENT_AIR\020\001\022\027\n\023ENVIRONMEN"
    "T_SURFACE\020\002\022\033\n\027ENVIRONMENT_SUB_SURFACE\020\003"
    "\022\024\n\020ENVIRONMENT_LAND\020\004\022\025\n\021ENVIRONMENT_SP"
    "ACE\020\005*\311\030\n\013Nationality\022\027\n\023NATIONALITY_INV"
    "ALID\020\000\022\027\n\023NATIONALITY_ALBANIA\020\001\022\027\n\023NATIO"
    "NALITY_ALGERIA\020>\022\031\n\025NATIONALITY_ARGENTIN"
    "A\020O\022\027\n\023NATIONALITY_ARMENIA\020\002\022\031\n\025NATIONAL"
    "ITY_AUSTRALIA\020\003\022\027\n\023NATIONALITY_AUSTRIA\020\004"
    "\022\032\n\026NATIONALITY_AZERBAIJAN\020\005\022\027\n\023NATIONAL"
    "ITY_BELARUS\020\006\022\027\n\023NATIONALITY_BELGIUM\020\007\022\027"
    "\n\023NATIONALITY_BOLIVIA\020j\022&\n\"NATIONALITY_B"
    "OSNIA_AND_HERZEGOVINA\020\010\022\026\n\022NATIONALITY_B"
    "RAZIL\020P\022\030\n\024NATIONALITY_BULGARIA\020\t\022\030\n\024NAT"
    "IONALITY_CAMBODIA\020D\022\026\n\022NATIONALITY_CANAD"
    "A\020\n\022\025\n\021NATIONALITY_CHILE\020Q\022\025\n\021NATIONALIT"
    "Y_CHINA\020H\022\030\n\024NATIONALITY_COLOMBIA\020R\022\027\n\023N"
    "ATIONALITY_CROATIA\020\013\022\024\n\020NATIONALITY_CUBA"
    "\020W\022\026\n\022NATIONALITY_CYPRUS\0205\022\036\n\032NATIONALIT"
    "Y_CZECH_REPUBLIC\020\014\0224\n0NATIONALITY_DEMOCR"
    "ATIC_PEOPLES_REPUBLIC_OF_KOREA\020J\022\027\n\023NATI"
    "ONALITY_DENMARK\020\r\022\"\n\036NATIONALITY_DOMINIC"
    "AN_REPUBLIC\020X\022\027\n\023NATIONALITY_ECUADOR\020k\022\025"
    "\n\021NATIONALITY_EGYPT\0206\022\027\n\023NATIONALITY_EST"
    "ONIA\020\016\022\030\n\024NATIONALITY_ETHIOPIA\020\?\022\027\n\023NATI"
    "ONALITY_FINLAND\020\017\022\026\n\022NATIONALITY_FRANCE\020"
    "\020\022\027\n\023NATIONALITY_GEORGIA\020\021\022\027\n\023NATIONALIT"
    "Y_GERMANY\020\022\022\026\n\022NATIONALITY_GREECE\020\023\022\031\n\025N"
    "ATIONALITY_GUATEMALA\020l\022\026\n\022NATIONALITY_GU"
    "INEA\020\\\022\027\n\023NATIONALITY_HUNGARY\020\024\022\027\n\023NATIO"
    "NALITY_ICELAND\020\025\022\025\n\021NATIONALITY_INDIA\020B\022"
    "\031\n\025NATIONALITY_INDONESIA\020g\022\'\n#NATIONALIT"
    "Y_INTERNATIONAL_RED_CROSS\020q\022\024\n\020NATIONALI"
    "TY_IRAQ\0208\022\027\n\023NATIONALITY_IRELAND\020\026\022(\n$NA"
    "TIONALITY_ISLAMIC_REPUBLIC_OF_IRAN\0207\022\026\n\022"
    "NATIONALITY_ISRAEL\0209\022\025\n\021NATIONALITY_ITAL"
    "Y\020\027\022\027\n\023NATIONALITY_JAMAICA\020p\022\025\n\021NATIONAL"
    "ITY_JAPAN\020L\022\026\n\022NATIONALITY_JORDAN\020:\022\032\n\026N"
    "ATIONALITY_KAZAKHSTAN\020\030\022\026\n\022NATIONALITY_K"
    "UWAIT\020Z\022 \n\034NATIONALITY_KYRGHYZ_REPUBLIC\020"
    "\031\022/\n+NATIONALITY_LAO_PEOPLES_DEMOCRATIC_"
    "REPUBLIC\020E\022\026\n\022NATIONALITY_LATVIA\020\032\022\027\n\023NA"
    "TIONALITY_LEBANON\020;\022\027\n\023NATIONALITY_LIBER"
    "IA\020@\022\031\n\025NATIONALITY_LITHUANIA\020\033\022\032\n\026NATIO"
    "NALITY_LUXEMBOURG\020\034\022\032\n\026NATIONALITY_MADAG"
    "ASCAR\020]\022\030\n\024NATIONALITY_MALAYSIA\020h\022\025\n\021NAT"
    "IONALITY_MALTA\020\035\022\026\n\022NATIONALITY_MEXICO\020S"
    "\022\027\n\023NATIONALITY_MOLDOVA\020\036\022\032\n\026NATIONALITY"
    "_MONTENEGRO\020\037\022\027\n\023NATIONALITY_MOROCCO\020^\022\027"
    "\n\023NATIONALITY_MYANMAR\020f\022\024\n\020NATIONALITY_N"
    "ATO\020 \022\033\n\027NATIONALITY_NETHERLANDS\020!\022\033\n\027NA"
    "TIONALITY_NEW_ZEALAND\020N\022\031\n\025NATIONALITY_N"
    "ICARAGUA\020m\022\027\n\023NATIONALITY_NIGERIA\020_\022\026\n\022N"
    "ATIONALITY_NORWAY\020\"\022\030\n\024NATIONALITY_PAKIS"
    "TAN\020C\022\026\n\022NATIONALITY_PANAMA\020T\022\030\n\024NATIONA"
    "LITY_PARAGUAY\020n\022\024\n\020NATIONALITY_PERU\020U\022\033\n"
    "\027NATIONALITY_PHILIPPINES\020M\022\026\n\022NATIONALIT"
    "Y_POLAND\020#\022\030\n\024NATIONALITY_PORTUGAL\020$\022!\n\035"
    "NATIONALITY_REPUBLIC_OF_KOREA\020K\022\027\n\023NATIO"
    "NALITY_ROMANIA\020%\022\026\n\022NATIONALITY_RUSSIA\020&"
    "\022\034\n\030NATIONALITY_SAUDI_ARABIA\020<\022\027\n\023NATION"
    "ALITY_SENEGAL\020`\022\026\n\022NATIONALITY_SERBIA\020\'\022"
    "\031\n\025NATIONALITY_SINGAPORE\020i\022\030\n\024NATIONALIT"
    "Y_SLOVAKIA\020(\022\030\n\024NATIONALITY_SLOVENIA\020)\022\034"
    "\n\030NATIONALITY_SOUTH_AFRICA\020A\022\025\n\021NATIONAL"
    "ITY_SPAIN\020*\022\025\n\021NATIONALITY_SUDAN\020b\022\026\n\022NA"
    "TIONALITY_SWEDEN\020+\022\033\n\027NATIONALITY_SWITZE"
    "RLAND\020,\022$\n NATIONALITY_SYRIAN_ARAB_REPUB"
    "LIC\020=\022(\n$NATIONALITY_TAIWAN_PROVINCE_OF_"
    "CHINA\020I\022\032\n\026NATIONALITY_TAJIKISTAN\020-\022\030\n\024N"
    "ATIONALITY_THAILAND\020F\0229\n5NATIONALITY_THE"
    "_FORMER_YUGOSLAV_REPUBLIC_OF_MACEDONIA\020."
    "\022\027\n\023NATIONALITY_TUNISIA\020d\022\026\n\022NATIONALITY"
    "_TURKEY\020/\022\034\n\030NATIONALITY_TURKMENISTAN\0200\022"
    "\026\n\022NATIONALITY_UGANDA\020e\022\027\n\023NATIONALITY_U"
    "KRAINE\0201\022\036\n\032NATIONALITY_UNITED_KINGDOM\0202"
    "\022\036\n\032NATIONALITY_UNITED_NATIONS\020Y\022+\n\'NATI"
    "ONALITY_UNITED_REPUBLIC_OF_TANZANIA\020c\022(\n"
    "$NATIONALITY_UNITED_STATES_OF_AMERICA\0203\022"
    "\027\n\023NATIONALITY_URUGUAY\020o\022\032\n\026NATIONALITY_"
    "UZBEKISTAN\0204\022\031\n\025NATIONALITY_VENEZUELA\020V\022"
    "\027\n\023NATIONALITY_VIETNAM\020G\022\025\n\021NATIONALITY_"
    "YEMEN\020[\022\030\n\024NATIONALITY_ZIMBABWE\020aB\332\001\n\027co"
    "m.anduril.ontology.v1B\014TypePubProtoP\001ZCg"
    "he.anduril.dev/anduril/andurilapis-go/an"
    "duril/ontology/v1;ontology\242\002\003AOX\252\002\023Andur"
    "il.Ontology.V1\312\002\023Anduril\\Ontology\\V1\342\002\037A"
    "nduril\\Ontology\\V1\\GPBMetadata\352\002\025Anduril"
    "::Ontology::V1b\006proto3"
};
static ::absl::once_flag descriptor_table_anduril_2fontology_2fv1_2ftype_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2fontology_2fv1_2ftype_2epub_2eproto = {
    false,
    false,
    4262,
    descriptor_table_protodef_anduril_2fontology_2fv1_2ftype_2epub_2eproto,
    "anduril/ontology/v1/type.pub.proto",
    &descriptor_table_anduril_2fontology_2fv1_2ftype_2epub_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_anduril_2fontology_2fv1_2ftype_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2fontology_2fv1_2ftype_2epub_2eproto,
    file_level_service_descriptors_anduril_2fontology_2fv1_2ftype_2epub_2eproto,
};
namespace anduril {
namespace ontology {
namespace v1 {
const ::google::protobuf::EnumDescriptor* Class_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_anduril_2fontology_2fv1_2ftype_2epub_2eproto);
  return file_level_enum_descriptors_anduril_2fontology_2fv1_2ftype_2epub_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t Class_internal_data_[] = {
    786432u, 0u, };
bool Class_IsValid(int value) {
  return 0 <= value && value <= 11;
}
const ::google::protobuf::EnumDescriptor* Disposition_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_anduril_2fontology_2fv1_2ftype_2epub_2eproto);
  return file_level_enum_descriptors_anduril_2fontology_2fv1_2ftype_2epub_2eproto[1];
}
PROTOBUF_CONSTINIT const uint32_t Disposition_internal_data_[] = {
    458752u, 0u, };
bool Disposition_IsValid(int value) {
  return 0 <= value && value <= 6;
}
const ::google::protobuf::EnumDescriptor* Environment_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_anduril_2fontology_2fv1_2ftype_2epub_2eproto);
  return file_level_enum_descriptors_anduril_2fontology_2fv1_2ftype_2epub_2eproto[2];
}
PROTOBUF_CONSTINIT const uint32_t Environment_internal_data_[] = {
    393216u, 0u, };
bool Environment_IsValid(int value) {
  return 0 <= value && value <= 5;
}
const ::google::protobuf::EnumDescriptor* Nationality_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_anduril_2fontology_2fv1_2ftype_2epub_2eproto);
  return file_level_enum_descriptors_anduril_2fontology_2fv1_2ftype_2epub_2eproto[3];
}
PROTOBUF_CONSTINIT const uint32_t Nationality_internal_data_[] = {
    7471104u, 0u, };
bool Nationality_IsValid(int value) {
  return 0 <= value && value <= 113;
}
// ===================================================================

class ObjectType::_Internal {
 public:
};

ObjectType::ObjectType(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.ontology.v1.ObjectType)
}
ObjectType::ObjectType(
    ::google::protobuf::Arena* arena, const ObjectType& from)
    : ObjectType(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE ObjectType::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void ObjectType::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, class__),
           0,
           offsetof(Impl_, environment_) -
               offsetof(Impl_, class__) +
               sizeof(Impl_::environment_));
}
ObjectType::~ObjectType() {
  // @@protoc_insertion_point(destructor:anduril.ontology.v1.ObjectType)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ObjectType::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    ObjectType::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_ObjectType_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &ObjectType::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<ObjectType>(),
            ::google::protobuf::Message::GetNewImpl<ObjectType>(),
            ::google::protobuf::Message::GetClearImpl<ObjectType>(), &ObjectType::ByteSizeLong,
                &ObjectType::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(ObjectType, _impl_._cached_size_),
            false,
        },
        &ObjectType::kDescriptorMethods,
        &descriptor_table_anduril_2fontology_2fv1_2ftype_2epub_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* ObjectType::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 0, 2> ObjectType::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::ontology::v1::ObjectType>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // .anduril.ontology.v1.Class class = 1 [json_name = "class"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(ObjectType, _impl_.class__), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(ObjectType, _impl_.class__)}},
    // .anduril.ontology.v1.Disposition disposition = 2 [json_name = "disposition"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(ObjectType, _impl_.disposition_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(ObjectType, _impl_.disposition_)}},
    // .anduril.ontology.v1.Environment environment = 3 [json_name = "environment"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(ObjectType, _impl_.environment_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(ObjectType, _impl_.environment_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .anduril.ontology.v1.Class class = 1 [json_name = "class"];
    {PROTOBUF_FIELD_OFFSET(ObjectType, _impl_.class__), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
    // .anduril.ontology.v1.Disposition disposition = 2 [json_name = "disposition"];
    {PROTOBUF_FIELD_OFFSET(ObjectType, _impl_.disposition_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
    // .anduril.ontology.v1.Environment environment = 3 [json_name = "environment"];
    {PROTOBUF_FIELD_OFFSET(ObjectType, _impl_.environment_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void ObjectType::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.ontology.v1.ObjectType)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.class__, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.environment_) -
      reinterpret_cast<char*>(&_impl_.class__)) + sizeof(_impl_.environment_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* ObjectType::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const ObjectType& this_ = static_cast<const ObjectType&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* ObjectType::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const ObjectType& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:anduril.ontology.v1.ObjectType)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // .anduril.ontology.v1.Class class = 1 [json_name = "class"];
          if (this_._internal_class_() != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteEnumToArray(
                1, this_._internal_class_(), target);
          }

          // .anduril.ontology.v1.Disposition disposition = 2 [json_name = "disposition"];
          if (this_._internal_disposition() != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteEnumToArray(
                2, this_._internal_disposition(), target);
          }

          // .anduril.ontology.v1.Environment environment = 3 [json_name = "environment"];
          if (this_._internal_environment() != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteEnumToArray(
                3, this_._internal_environment(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:anduril.ontology.v1.ObjectType)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t ObjectType::ByteSizeLong(const MessageLite& base) {
          const ObjectType& this_ = static_cast<const ObjectType&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t ObjectType::ByteSizeLong() const {
          const ObjectType& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:anduril.ontology.v1.ObjectType)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // .anduril.ontology.v1.Class class = 1 [json_name = "class"];
            if (this_._internal_class_() != 0) {
              total_size += 1 +
                            ::_pbi::WireFormatLite::EnumSize(this_._internal_class_());
            }
            // .anduril.ontology.v1.Disposition disposition = 2 [json_name = "disposition"];
            if (this_._internal_disposition() != 0) {
              total_size += 1 +
                            ::_pbi::WireFormatLite::EnumSize(this_._internal_disposition());
            }
            // .anduril.ontology.v1.Environment environment = 3 [json_name = "environment"];
            if (this_._internal_environment() != 0) {
              total_size += 1 +
                            ::_pbi::WireFormatLite::EnumSize(this_._internal_environment());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void ObjectType::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<ObjectType*>(&to_msg);
  auto& from = static_cast<const ObjectType&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.ontology.v1.ObjectType)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_class_() != 0) {
    _this->_impl_.class__ = from._impl_.class__;
  }
  if (from._internal_disposition() != 0) {
    _this->_impl_.disposition_ = from._impl_.disposition_;
  }
  if (from._internal_environment() != 0) {
    _this->_impl_.environment_ = from._impl_.environment_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ObjectType::CopyFrom(const ObjectType& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.ontology.v1.ObjectType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void ObjectType::InternalSwap(ObjectType* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ObjectType, _impl_.environment_)
      + sizeof(ObjectType::_impl_.environment_)
      - PROTOBUF_FIELD_OFFSET(ObjectType, _impl_.class__)>(
          reinterpret_cast<char*>(&_impl_.class__),
          reinterpret_cast<char*>(&other->_impl_.class__));
}

::google::protobuf::Metadata ObjectType::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace ontology
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2fontology_2fv1_2ftype_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
