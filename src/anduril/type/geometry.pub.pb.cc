// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/type/geometry.pub.proto
// Protobuf C++ Version: 5.27.3

#include "anduril/type/geometry.pub.pb.h"

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
namespace type {

inline constexpr Grid::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        cell_values_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        bottom_left_pos_{nullptr},
        top_right_pos_{nullptr},
        grid_width_{0u},
        grid_height_{0u} {}

template <typename>
PROTOBUF_CONSTEXPR Grid::Grid(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct GridDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GridDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GridDefaultTypeInternal() {}
  union {
    Grid _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GridDefaultTypeInternal _Grid_default_instance_;
}  // namespace type
}  // namespace anduril
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2ftype_2fgeometry_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2ftype_2fgeometry_2epub_2eproto = nullptr;
const ::uint32_t
    TableStruct_anduril_2ftype_2fgeometry_2epub_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::anduril::type::Grid, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::anduril::type::Grid, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::anduril::type::Grid, _impl_.bottom_left_pos_),
        PROTOBUF_FIELD_OFFSET(::anduril::type::Grid, _impl_.top_right_pos_),
        PROTOBUF_FIELD_OFFSET(::anduril::type::Grid, _impl_.grid_width_),
        PROTOBUF_FIELD_OFFSET(::anduril::type::Grid, _impl_.grid_height_),
        PROTOBUF_FIELD_OFFSET(::anduril::type::Grid, _impl_.cell_values_),
        0,
        1,
        ~0u,
        ~0u,
        ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 13, -1, sizeof(::anduril::type::Grid)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::type::_Grid_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2ftype_2fgeometry_2epub_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\037anduril/type/geometry.pub.proto\022\014andur"
    "il.type\032\035anduril/type/coords.pub.proto\"\331"
    "\001\n\004Grid\0229\n\017bottom_left_pos\030\001 \001(\0132\021.andur"
    "il.type.LLAR\rbottomLeftPos\0225\n\rtop_right_"
    "pos\030\002 \001(\0132\021.anduril.type.LLAR\013topRightPo"
    "s\022\035\n\ngrid_width\030\003 \001(\rR\tgridWidth\022\037\n\013grid"
    "_height\030\004 \001(\rR\ngridHeight\022\037\n\013cell_values"
    "\030\005 \001(\014R\ncellValuesB\261\001\n\020com.anduril.typeB"
    "\020GeometryPubProtoP\001Z:ghe.anduril.dev/and"
    "uril/andurilapis-go/anduril/type;atypes\242"
    "\002\003ATX\252\002\014Anduril.Type\312\002\014Anduril\\Type\342\002\030An"
    "duril\\Type\\GPBMetadata\352\002\rAnduril::Typeb\006"
    "proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto_deps[1] =
    {
        &::descriptor_table_anduril_2ftype_2fcoords_2epub_2eproto,
};
static ::absl::once_flag descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto = {
    false,
    false,
    486,
    descriptor_table_protodef_anduril_2ftype_2fgeometry_2epub_2eproto,
    "anduril/type/geometry.pub.proto",
    &descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto_once,
    descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_anduril_2ftype_2fgeometry_2epub_2eproto::offsets,
    file_level_enum_descriptors_anduril_2ftype_2fgeometry_2epub_2eproto,
    file_level_service_descriptors_anduril_2ftype_2fgeometry_2epub_2eproto,
};
namespace anduril {
namespace type {
// ===================================================================

class Grid::_Internal {
 public:
  using HasBits =
      decltype(std::declval<Grid>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(Grid, _impl_._has_bits_);
};

void Grid::clear_bottom_left_pos() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.bottom_left_pos_ != nullptr) _impl_.bottom_left_pos_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void Grid::clear_top_right_pos() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.top_right_pos_ != nullptr) _impl_.top_right_pos_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
Grid::Grid(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:anduril.type.Grid)
}
inline PROTOBUF_NDEBUG_INLINE Grid::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::anduril::type::Grid& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        cell_values_(arena, from.cell_values_) {}

Grid::Grid(
    ::google::protobuf::Arena* arena,
    const Grid& from)
    : ::google::protobuf::Message(arena) {
  Grid* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.bottom_left_pos_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::anduril::type::LLA>(
                              arena, *from._impl_.bottom_left_pos_)
                        : nullptr;
  _impl_.top_right_pos_ = (cached_has_bits & 0x00000002u) ? ::google::protobuf::Message::CopyConstruct<::anduril::type::LLA>(
                              arena, *from._impl_.top_right_pos_)
                        : nullptr;
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, grid_width_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, grid_width_),
           offsetof(Impl_, grid_height_) -
               offsetof(Impl_, grid_width_) +
               sizeof(Impl_::grid_height_));

  // @@protoc_insertion_point(copy_constructor:anduril.type.Grid)
}
inline PROTOBUF_NDEBUG_INLINE Grid::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        cell_values_(arena) {}

inline void Grid::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, bottom_left_pos_),
           0,
           offsetof(Impl_, grid_height_) -
               offsetof(Impl_, bottom_left_pos_) +
               sizeof(Impl_::grid_height_));
}
Grid::~Grid() {
  // @@protoc_insertion_point(destructor:anduril.type.Grid)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Grid::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.cell_values_.Destroy();
  delete _impl_.bottom_left_pos_;
  delete _impl_.top_right_pos_;
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
Grid::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(Grid, _impl_._cached_size_),
              false,
          },
          &Grid::MergeImpl,
          &Grid::kDescriptorMethods,
          &descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 5, 2, 0, 2> Grid::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Grid, _impl_._has_bits_),
    0, // no _extensions_
    5, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967264,  // skipmap
    offsetof(decltype(_table_), field_entries),
    5,  // num_field_entries
    2,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Grid_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::anduril::type::Grid>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // .anduril.type.LLA bottom_left_pos = 1 [json_name = "bottomLeftPos"];
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(Grid, _impl_.bottom_left_pos_)}},
    // .anduril.type.LLA top_right_pos = 2 [json_name = "topRightPos"];
    {::_pbi::TcParser::FastMtS1,
     {18, 1, 1, PROTOBUF_FIELD_OFFSET(Grid, _impl_.top_right_pos_)}},
    // uint32 grid_width = 3 [json_name = "gridWidth"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Grid, _impl_.grid_width_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(Grid, _impl_.grid_width_)}},
    // uint32 grid_height = 4 [json_name = "gridHeight"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Grid, _impl_.grid_height_), 63>(),
     {32, 63, 0, PROTOBUF_FIELD_OFFSET(Grid, _impl_.grid_height_)}},
    // bytes cell_values = 5 [json_name = "cellValues"];
    {::_pbi::TcParser::FastBS1,
     {42, 63, 0, PROTOBUF_FIELD_OFFSET(Grid, _impl_.cell_values_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // .anduril.type.LLA bottom_left_pos = 1 [json_name = "bottomLeftPos"];
    {PROTOBUF_FIELD_OFFSET(Grid, _impl_.bottom_left_pos_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .anduril.type.LLA top_right_pos = 2 [json_name = "topRightPos"];
    {PROTOBUF_FIELD_OFFSET(Grid, _impl_.top_right_pos_), _Internal::kHasBitsOffset + 1, 1,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // uint32 grid_width = 3 [json_name = "gridWidth"];
    {PROTOBUF_FIELD_OFFSET(Grid, _impl_.grid_width_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // uint32 grid_height = 4 [json_name = "gridHeight"];
    {PROTOBUF_FIELD_OFFSET(Grid, _impl_.grid_height_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // bytes cell_values = 5 [json_name = "cellValues"];
    {PROTOBUF_FIELD_OFFSET(Grid, _impl_.cell_values_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
  }}, {{
    {::_pbi::TcParser::GetTable<::anduril::type::LLA>()},
    {::_pbi::TcParser::GetTable<::anduril::type::LLA>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void Grid::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.type.Grid)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.cell_values_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(_impl_.bottom_left_pos_ != nullptr);
      _impl_.bottom_left_pos_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(_impl_.top_right_pos_ != nullptr);
      _impl_.top_right_pos_->Clear();
    }
  }
  ::memset(&_impl_.grid_width_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.grid_height_) -
      reinterpret_cast<char*>(&_impl_.grid_width_)) + sizeof(_impl_.grid_height_));
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* Grid::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:anduril.type.Grid)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .anduril.type.LLA bottom_left_pos = 1 [json_name = "bottomLeftPos"];
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        1, *_impl_.bottom_left_pos_, _impl_.bottom_left_pos_->GetCachedSize(), target, stream);
  }

  // .anduril.type.LLA top_right_pos = 2 [json_name = "topRightPos"];
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        2, *_impl_.top_right_pos_, _impl_.top_right_pos_->GetCachedSize(), target, stream);
  }

  // uint32 grid_width = 3 [json_name = "gridWidth"];
  if (this->_internal_grid_width() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        3, this->_internal_grid_width(), target);
  }

  // uint32 grid_height = 4 [json_name = "gridHeight"];
  if (this->_internal_grid_height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        4, this->_internal_grid_height(), target);
  }

  // bytes cell_values = 5 [json_name = "cellValues"];
  if (!this->_internal_cell_values().empty()) {
    const std::string& _s = this->_internal_cell_values();
    target = stream->WriteBytesMaybeAliased(5, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:anduril.type.Grid)
  return target;
}

::size_t Grid::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:anduril.type.Grid)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // bytes cell_values = 5 [json_name = "cellValues"];
  if (!this->_internal_cell_values().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_cell_values());
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // .anduril.type.LLA bottom_left_pos = 1 [json_name = "bottomLeftPos"];
    if (cached_has_bits & 0x00000001u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.bottom_left_pos_);
    }

    // .anduril.type.LLA top_right_pos = 2 [json_name = "topRightPos"];
    if (cached_has_bits & 0x00000002u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.top_right_pos_);
    }

  }
  // uint32 grid_width = 3 [json_name = "gridWidth"];
  if (this->_internal_grid_width() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_grid_width());
  }

  // uint32 grid_height = 4 [json_name = "gridHeight"];
  if (this->_internal_grid_height() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_grid_height());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Grid::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Grid*>(&to_msg);
  auto& from = static_cast<const Grid&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:anduril.type.Grid)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_cell_values().empty()) {
    _this->_internal_set_cell_values(from._internal_cell_values());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(from._impl_.bottom_left_pos_ != nullptr);
      if (_this->_impl_.bottom_left_pos_ == nullptr) {
        _this->_impl_.bottom_left_pos_ =
            ::google::protobuf::Message::CopyConstruct<::anduril::type::LLA>(arena, *from._impl_.bottom_left_pos_);
      } else {
        _this->_impl_.bottom_left_pos_->MergeFrom(*from._impl_.bottom_left_pos_);
      }
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(from._impl_.top_right_pos_ != nullptr);
      if (_this->_impl_.top_right_pos_ == nullptr) {
        _this->_impl_.top_right_pos_ =
            ::google::protobuf::Message::CopyConstruct<::anduril::type::LLA>(arena, *from._impl_.top_right_pos_);
      } else {
        _this->_impl_.top_right_pos_->MergeFrom(*from._impl_.top_right_pos_);
      }
    }
  }
  if (from._internal_grid_width() != 0) {
    _this->_impl_.grid_width_ = from._impl_.grid_width_;
  }
  if (from._internal_grid_height() != 0) {
    _this->_impl_.grid_height_ = from._impl_.grid_height_;
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Grid::CopyFrom(const Grid& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.type.Grid)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Grid::InternalSwap(Grid* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.cell_values_, &other->_impl_.cell_values_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Grid, _impl_.grid_height_)
      + sizeof(Grid::_impl_.grid_height_)
      - PROTOBUF_FIELD_OFFSET(Grid, _impl_.bottom_left_pos_)>(
          reinterpret_cast<char*>(&_impl_.bottom_left_pos_),
          reinterpret_cast<char*>(&other->_impl_.bottom_left_pos_));
}

::google::protobuf::Metadata Grid::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"