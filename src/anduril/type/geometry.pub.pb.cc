// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: anduril/type/geometry.pub.proto

#include "anduril/type/geometry.pub.pb.h"

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
static ::_pb::Metadata file_level_metadata_anduril_2ftype_2fgeometry_2epub_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_anduril_2ftype_2fgeometry_2epub_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_anduril_2ftype_2fgeometry_2epub_2eproto = nullptr;
const ::uint32_t TableStruct_anduril_2ftype_2fgeometry_2epub_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
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
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, 13, -1, sizeof(::anduril::type::Grid)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::anduril::type::_Grid_default_instance_._instance,
};
const char descriptor_table_protodef_anduril_2ftype_2fgeometry_2epub_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
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
const ::_pbi::DescriptorTable descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto = {
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
    file_level_metadata_anduril_2ftype_2fgeometry_2epub_2eproto,
    file_level_enum_descriptors_anduril_2ftype_2fgeometry_2epub_2eproto,
    file_level_service_descriptors_anduril_2ftype_2fgeometry_2epub_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto_getter() {
  return &descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_anduril_2ftype_2fgeometry_2epub_2eproto(&descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto);
namespace anduril {
namespace type {
// ===================================================================

class Grid::_Internal {
 public:
  using HasBits = decltype(std::declval<Grid>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Grid, _impl_._has_bits_);
  static const ::anduril::type::LLA& bottom_left_pos(const Grid* msg);
  static void set_has_bottom_left_pos(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::anduril::type::LLA& top_right_pos(const Grid* msg);
  static void set_has_top_right_pos(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::anduril::type::LLA& Grid::_Internal::bottom_left_pos(const Grid* msg) {
  return *msg->_impl_.bottom_left_pos_;
}
const ::anduril::type::LLA& Grid::_Internal::top_right_pos(const Grid* msg) {
  return *msg->_impl_.top_right_pos_;
}
void Grid::clear_bottom_left_pos() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (_impl_.bottom_left_pos_ != nullptr) _impl_.bottom_left_pos_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void Grid::clear_top_right_pos() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
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
    const Impl_& from)
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
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.bottom_left_pos_ = (cached_has_bits & 0x00000001u)
                ? CreateMaybeMessage<::anduril::type::LLA>(arena, *from._impl_.bottom_left_pos_)
                : nullptr;
  _impl_.top_right_pos_ = (cached_has_bits & 0x00000002u)
                ? CreateMaybeMessage<::anduril::type::LLA>(arena, *from._impl_.top_right_pos_)
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

PROTOBUF_NOINLINE void Grid::Clear() {
// @@protoc_insertion_point(message_clear_start:anduril.type.Grid)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
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

const char* Grid::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
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
    ::_pbi::TcParser::GenericFallback,  // fallback
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
        1, _Internal::bottom_left_pos(this),
        _Internal::bottom_left_pos(this).GetCachedSize(), target, stream);
  }

  // .anduril.type.LLA top_right_pos = 2 [json_name = "topRightPos"];
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        2, _Internal::top_right_pos(this),
        _Internal::top_right_pos(this).GetCachedSize(), target, stream);
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

const ::google::protobuf::Message::ClassData Grid::_class_data_ = {
    Grid::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Grid::GetClassData() const {
  return &_class_data_;
}

void Grid::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Grid*>(&to_msg);
  auto& from = static_cast<const Grid&>(from_msg);
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
      _this->_internal_mutable_bottom_left_pos()->::anduril::type::LLA::MergeFrom(
          from._internal_bottom_left_pos());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_top_right_pos()->::anduril::type::LLA::MergeFrom(
          from._internal_top_right_pos());
    }
  }
  if (from._internal_grid_width() != 0) {
    _this->_internal_set_grid_width(from._internal_grid_width());
  }
  if (from._internal_grid_height() != 0) {
    _this->_internal_set_grid_height(from._internal_grid_height());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Grid::CopyFrom(const Grid& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:anduril.type.Grid)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Grid::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Grid::AccessCachedSize() const {
  return &_impl_._cached_size_;
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
  return ::_pbi::AssignDescriptors(
      &descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto_getter, &descriptor_table_anduril_2ftype_2fgeometry_2epub_2eproto_once,
      file_level_metadata_anduril_2ftype_2fgeometry_2epub_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
