// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/tasks/v2/objective.pub.proto
// Protobuf C++ Version: 5.27.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027003
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "anduril/type/coords.pub.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto;
namespace anduril {
namespace tasks {
namespace v2 {
class Objective;
struct ObjectiveDefaultTypeInternal;
extern ObjectiveDefaultTypeInternal _Objective_default_instance_;
class Point;
struct PointDefaultTypeInternal;
extern PointDefaultTypeInternal _Point_default_instance_;
}  // namespace v2
}  // namespace tasks
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace anduril {
namespace tasks {
namespace v2 {

// ===================================================================


// -------------------------------------------------------------------

class Point final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.tasks.v2.Point) */ {
 public:
  inline Point() : Point(nullptr) {}
  ~Point() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Point(
      ::google::protobuf::internal::ConstantInitialized);

  inline Point(const Point& from) : Point(nullptr, from) {}
  inline Point(Point&& from) noexcept
      : Point(nullptr, std::move(from)) {}
  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }
  inline Point& operator=(Point&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Point& default_instance() {
    return *internal_default_instance();
  }
  static inline const Point* internal_default_instance() {
    return reinterpret_cast<const Point*>(
        &_Point_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(Point& a, Point& b) { a.Swap(&b); }
  inline void Swap(Point* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Point* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Point* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Point>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Point& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Point& from) { Point::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Point* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.tasks.v2.Point"; }

 protected:
  explicit Point(::google::protobuf::Arena* arena);
  Point(::google::protobuf::Arena* arena, const Point& from);
  Point(::google::protobuf::Arena* arena, Point&& from) noexcept
      : Point(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kReferenceNameFieldNumber = 1,
    kBackingEntityIdFieldNumber = 3,
    kLlaFieldNumber = 2,
  };
  // string reference_name = 1 [json_name = "referenceName"];
  void clear_reference_name() ;
  const std::string& reference_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_reference_name(Arg_&& arg, Args_... args);
  std::string* mutable_reference_name();
  PROTOBUF_NODISCARD std::string* release_reference_name();
  void set_allocated_reference_name(std::string* value);

  private:
  const std::string& _internal_reference_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_reference_name(
      const std::string& value);
  std::string* _internal_mutable_reference_name();

  public:
  // string backing_entity_id = 3 [json_name = "backingEntityId"];
  void clear_backing_entity_id() ;
  const std::string& backing_entity_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_backing_entity_id(Arg_&& arg, Args_... args);
  std::string* mutable_backing_entity_id();
  PROTOBUF_NODISCARD std::string* release_backing_entity_id();
  void set_allocated_backing_entity_id(std::string* value);

  private:
  const std::string& _internal_backing_entity_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_backing_entity_id(
      const std::string& value);
  std::string* _internal_mutable_backing_entity_id();

  public:
  // .anduril.type.LLA lla = 2 [json_name = "lla"];
  bool has_lla() const;
  void clear_lla() ;
  const ::anduril::type::LLA& lla() const;
  PROTOBUF_NODISCARD ::anduril::type::LLA* release_lla();
  ::anduril::type::LLA* mutable_lla();
  void set_allocated_lla(::anduril::type::LLA* value);
  void unsafe_arena_set_allocated_lla(::anduril::type::LLA* value);
  ::anduril::type::LLA* unsafe_arena_release_lla();

  private:
  const ::anduril::type::LLA& _internal_lla() const;
  ::anduril::type::LLA* _internal_mutable_lla();

  public:
  // @@protoc_insertion_point(class_scope:anduril.tasks.v2.Point)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 1,
      62, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Point_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Point& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr reference_name_;
    ::google::protobuf::internal::ArenaStringPtr backing_entity_id_;
    ::anduril::type::LLA* lla_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto;
};
// -------------------------------------------------------------------

class Objective final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.tasks.v2.Objective) */ {
 public:
  inline Objective() : Objective(nullptr) {}
  ~Objective() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Objective(
      ::google::protobuf::internal::ConstantInitialized);

  inline Objective(const Objective& from) : Objective(nullptr, from) {}
  inline Objective(Objective&& from) noexcept
      : Objective(nullptr, std::move(from)) {}
  inline Objective& operator=(const Objective& from) {
    CopyFrom(from);
    return *this;
  }
  inline Objective& operator=(Objective&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Objective& default_instance() {
    return *internal_default_instance();
  }
  enum ObjectiveCase {
    kEntityId = 1,
    kPoint = 5,
    OBJECTIVE_NOT_SET = 0,
  };
  static inline const Objective* internal_default_instance() {
    return reinterpret_cast<const Objective*>(
        &_Objective_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Objective& a, Objective& b) { a.Swap(&b); }
  inline void Swap(Objective* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Objective* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Objective* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Objective>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Objective& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Objective& from) { Objective::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Objective* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.tasks.v2.Objective"; }

 protected:
  explicit Objective(::google::protobuf::Arena* arena);
  Objective(::google::protobuf::Arena* arena, const Objective& from);
  Objective(::google::protobuf::Arena* arena, Objective&& from) noexcept
      : Objective(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kProducedByAssetIdFieldNumber = 2,
    kEntityIdFieldNumber = 1,
    kPointFieldNumber = 5,
  };
  // string produced_by_asset_id = 2 [json_name = "producedByAssetId"];
  void clear_produced_by_asset_id() ;
  const std::string& produced_by_asset_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_produced_by_asset_id(Arg_&& arg, Args_... args);
  std::string* mutable_produced_by_asset_id();
  PROTOBUF_NODISCARD std::string* release_produced_by_asset_id();
  void set_allocated_produced_by_asset_id(std::string* value);

  private:
  const std::string& _internal_produced_by_asset_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_produced_by_asset_id(
      const std::string& value);
  std::string* _internal_mutable_produced_by_asset_id();

  public:
  // string entity_id = 1 [json_name = "entityId"];
  bool has_entity_id() const;
  void clear_entity_id() ;
  const std::string& entity_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_entity_id(Arg_&& arg, Args_... args);
  std::string* mutable_entity_id();
  PROTOBUF_NODISCARD std::string* release_entity_id();
  void set_allocated_entity_id(std::string* value);

  private:
  const std::string& _internal_entity_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_entity_id(
      const std::string& value);
  std::string* _internal_mutable_entity_id();

  public:
  // .anduril.tasks.v2.Point point = 5 [json_name = "point"];
  bool has_point() const;
  private:
  bool _internal_has_point() const;

  public:
  void clear_point() ;
  const ::anduril::tasks::v2::Point& point() const;
  PROTOBUF_NODISCARD ::anduril::tasks::v2::Point* release_point();
  ::anduril::tasks::v2::Point* mutable_point();
  void set_allocated_point(::anduril::tasks::v2::Point* value);
  void unsafe_arena_set_allocated_point(::anduril::tasks::v2::Point* value);
  ::anduril::tasks::v2::Point* unsafe_arena_release_point();

  private:
  const ::anduril::tasks::v2::Point& _internal_point() const;
  ::anduril::tasks::v2::Point* _internal_mutable_point();

  public:
  void clear_objective();
  ObjectiveCase objective_case() const;
  // @@protoc_insertion_point(class_scope:anduril.tasks.v2.Objective)
 private:
  class _Internal;
  void set_has_entity_id();
  void set_has_point();
  inline bool has_objective() const;
  inline void clear_has_objective();
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 3, 1,
      64, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Objective_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Objective& from_msg);
    ::google::protobuf::internal::ArenaStringPtr produced_by_asset_id_;
    union ObjectiveUnion {
      constexpr ObjectiveUnion() : _constinit_{} {}
      ::google::protobuf::internal::ConstantInitialized _constinit_;
      ::google::protobuf::internal::ArenaStringPtr entity_id_;
      ::anduril::tasks::v2::Point* point_;
    } objective_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t _oneof_case_[1];
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Objective

// string entity_id = 1 [json_name = "entityId"];
inline bool Objective::has_entity_id() const {
  return objective_case() == kEntityId;
}
inline void Objective::set_has_entity_id() {
  _impl_._oneof_case_[0] = kEntityId;
}
inline void Objective::clear_entity_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (objective_case() == kEntityId) {
    _impl_.objective_.entity_id_.Destroy();
    clear_has_objective();
  }
}
inline const std::string& Objective::entity_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.v2.Objective.entity_id)
  return _internal_entity_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Objective::set_entity_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (objective_case() != kEntityId) {
    clear_objective();

    set_has_entity_id();
    _impl_.objective_.entity_id_.InitDefault();
  }
  _impl_.objective_.entity_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.tasks.v2.Objective.entity_id)
}
inline std::string* Objective::mutable_entity_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_entity_id();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.v2.Objective.entity_id)
  return _s;
}
inline const std::string& Objective::_internal_entity_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  if (objective_case() != kEntityId) {
    return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.objective_.entity_id_.Get();
}
inline void Objective::_internal_set_entity_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (objective_case() != kEntityId) {
    clear_objective();

    set_has_entity_id();
    _impl_.objective_.entity_id_.InitDefault();
  }
  _impl_.objective_.entity_id_.Set(value, GetArena());
}
inline std::string* Objective::_internal_mutable_entity_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (objective_case() != kEntityId) {
    clear_objective();

    set_has_entity_id();
    _impl_.objective_.entity_id_.InitDefault();
  }
  return _impl_.objective_.entity_id_.Mutable( GetArena());
}
inline std::string* Objective::release_entity_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.v2.Objective.entity_id)
  if (objective_case() != kEntityId) {
    return nullptr;
  }
  clear_has_objective();
  return _impl_.objective_.entity_id_.Release();
}
inline void Objective::set_allocated_entity_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (has_objective()) {
    clear_objective();
  }
  if (value != nullptr) {
    set_has_entity_id();
    _impl_.objective_.entity_id_.InitAllocated(value, GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.v2.Objective.entity_id)
}

// .anduril.tasks.v2.Point point = 5 [json_name = "point"];
inline bool Objective::has_point() const {
  return objective_case() == kPoint;
}
inline bool Objective::_internal_has_point() const {
  return objective_case() == kPoint;
}
inline void Objective::set_has_point() {
  _impl_._oneof_case_[0] = kPoint;
}
inline void Objective::clear_point() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (objective_case() == kPoint) {
    if (GetArena() == nullptr) {
      delete _impl_.objective_.point_;
    } else if (::google::protobuf::internal::DebugHardenClearOneofMessageOnArena()) {
      ::google::protobuf::internal::MaybePoisonAfterClear(_impl_.objective_.point_);
    }
    clear_has_objective();
  }
}
inline ::anduril::tasks::v2::Point* Objective::release_point() {
  // @@protoc_insertion_point(field_release:anduril.tasks.v2.Objective.point)
  if (objective_case() == kPoint) {
    clear_has_objective();
    auto* temp = _impl_.objective_.point_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.objective_.point_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::anduril::tasks::v2::Point& Objective::_internal_point() const {
  return objective_case() == kPoint ? *_impl_.objective_.point_ : reinterpret_cast<::anduril::tasks::v2::Point&>(::anduril::tasks::v2::_Point_default_instance_);
}
inline const ::anduril::tasks::v2::Point& Objective::point() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.v2.Objective.point)
  return _internal_point();
}
inline ::anduril::tasks::v2::Point* Objective::unsafe_arena_release_point() {
  // @@protoc_insertion_point(field_unsafe_arena_release:anduril.tasks.v2.Objective.point)
  if (objective_case() == kPoint) {
    clear_has_objective();
    auto* temp = _impl_.objective_.point_;
    _impl_.objective_.point_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Objective::unsafe_arena_set_allocated_point(::anduril::tasks::v2::Point* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_objective();
  if (value) {
    set_has_point();
    _impl_.objective_.point_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.tasks.v2.Objective.point)
}
inline ::anduril::tasks::v2::Point* Objective::_internal_mutable_point() {
  if (objective_case() != kPoint) {
    clear_objective();
    set_has_point();
    _impl_.objective_.point_ =
        ::google::protobuf::Message::DefaultConstruct<::anduril::tasks::v2::Point>(GetArena());
  }
  return _impl_.objective_.point_;
}
inline ::anduril::tasks::v2::Point* Objective::mutable_point() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::anduril::tasks::v2::Point* _msg = _internal_mutable_point();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.v2.Objective.point)
  return _msg;
}

// string produced_by_asset_id = 2 [json_name = "producedByAssetId"];
inline void Objective::clear_produced_by_asset_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.produced_by_asset_id_.ClearToEmpty();
}
inline const std::string& Objective::produced_by_asset_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.v2.Objective.produced_by_asset_id)
  return _internal_produced_by_asset_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Objective::set_produced_by_asset_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.produced_by_asset_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.tasks.v2.Objective.produced_by_asset_id)
}
inline std::string* Objective::mutable_produced_by_asset_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_produced_by_asset_id();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.v2.Objective.produced_by_asset_id)
  return _s;
}
inline const std::string& Objective::_internal_produced_by_asset_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.produced_by_asset_id_.Get();
}
inline void Objective::_internal_set_produced_by_asset_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.produced_by_asset_id_.Set(value, GetArena());
}
inline std::string* Objective::_internal_mutable_produced_by_asset_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.produced_by_asset_id_.Mutable( GetArena());
}
inline std::string* Objective::release_produced_by_asset_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.v2.Objective.produced_by_asset_id)
  return _impl_.produced_by_asset_id_.Release();
}
inline void Objective::set_allocated_produced_by_asset_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.produced_by_asset_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.produced_by_asset_id_.IsDefault()) {
          _impl_.produced_by_asset_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.v2.Objective.produced_by_asset_id)
}

inline bool Objective::has_objective() const {
  return objective_case() != OBJECTIVE_NOT_SET;
}
inline void Objective::clear_has_objective() {
  _impl_._oneof_case_[0] = OBJECTIVE_NOT_SET;
}
inline Objective::ObjectiveCase Objective::objective_case() const {
  return Objective::ObjectiveCase(_impl_._oneof_case_[0]);
}
// -------------------------------------------------------------------

// Point

// string reference_name = 1 [json_name = "referenceName"];
inline void Point::clear_reference_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.reference_name_.ClearToEmpty();
}
inline const std::string& Point::reference_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.v2.Point.reference_name)
  return _internal_reference_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Point::set_reference_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.reference_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.tasks.v2.Point.reference_name)
}
inline std::string* Point::mutable_reference_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_reference_name();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.v2.Point.reference_name)
  return _s;
}
inline const std::string& Point::_internal_reference_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.reference_name_.Get();
}
inline void Point::_internal_set_reference_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.reference_name_.Set(value, GetArena());
}
inline std::string* Point::_internal_mutable_reference_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.reference_name_.Mutable( GetArena());
}
inline std::string* Point::release_reference_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.v2.Point.reference_name)
  return _impl_.reference_name_.Release();
}
inline void Point::set_allocated_reference_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.reference_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.reference_name_.IsDefault()) {
          _impl_.reference_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.v2.Point.reference_name)
}

// .anduril.type.LLA lla = 2 [json_name = "lla"];
inline bool Point::has_lla() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.lla_ != nullptr);
  return value;
}
inline const ::anduril::type::LLA& Point::_internal_lla() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::anduril::type::LLA* p = _impl_.lla_;
  return p != nullptr ? *p : reinterpret_cast<const ::anduril::type::LLA&>(::anduril::type::_LLA_default_instance_);
}
inline const ::anduril::type::LLA& Point::lla() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.v2.Point.lla)
  return _internal_lla();
}
inline void Point::unsafe_arena_set_allocated_lla(::anduril::type::LLA* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.lla_);
  }
  _impl_.lla_ = reinterpret_cast<::anduril::type::LLA*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.tasks.v2.Point.lla)
}
inline ::anduril::type::LLA* Point::release_lla() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::type::LLA* released = _impl_.lla_;
  _impl_.lla_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArena() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArena() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::anduril::type::LLA* Point::unsafe_arena_release_lla() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.v2.Point.lla)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::type::LLA* temp = _impl_.lla_;
  _impl_.lla_ = nullptr;
  return temp;
}
inline ::anduril::type::LLA* Point::_internal_mutable_lla() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.lla_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::anduril::type::LLA>(GetArena());
    _impl_.lla_ = reinterpret_cast<::anduril::type::LLA*>(p);
  }
  return _impl_.lla_;
}
inline ::anduril::type::LLA* Point::mutable_lla() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000001u;
  ::anduril::type::LLA* _msg = _internal_mutable_lla();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.v2.Point.lla)
  return _msg;
}
inline void Point::set_allocated_lla(::anduril::type::LLA* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.lla_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }

  _impl_.lla_ = reinterpret_cast<::anduril::type::LLA*>(value);
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.v2.Point.lla)
}

// string backing_entity_id = 3 [json_name = "backingEntityId"];
inline void Point::clear_backing_entity_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.backing_entity_id_.ClearToEmpty();
}
inline const std::string& Point::backing_entity_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.v2.Point.backing_entity_id)
  return _internal_backing_entity_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Point::set_backing_entity_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.backing_entity_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.tasks.v2.Point.backing_entity_id)
}
inline std::string* Point::mutable_backing_entity_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_backing_entity_id();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.v2.Point.backing_entity_id)
  return _s;
}
inline const std::string& Point::_internal_backing_entity_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.backing_entity_id_.Get();
}
inline void Point::_internal_set_backing_entity_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.backing_entity_id_.Set(value, GetArena());
}
inline std::string* Point::_internal_mutable_backing_entity_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.backing_entity_id_.Mutable( GetArena());
}
inline std::string* Point::release_backing_entity_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.v2.Point.backing_entity_id)
  return _impl_.backing_entity_id_.Release();
}
inline void Point::set_allocated_backing_entity_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.backing_entity_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.backing_entity_id_.IsDefault()) {
          _impl_.backing_entity_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.v2.Point.backing_entity_id)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v2
}  // namespace tasks
}  // namespace anduril


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2ftasks_2fv2_2fobjective_2epub_2eproto_2epb_2eh