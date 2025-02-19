// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/tasks/ads/thirdparty/v1/formation.pub.proto
// Protobuf C++ Version: 5.29.0

#ifndef anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto_2epb_2eh
#define anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029000
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
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "anduril/tasks/v2/objective.pub.pb.h"
#include "google/protobuf/wrappers.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto;
namespace anduril {
namespace tasks {
namespace ads {
namespace thirdparty {
namespace v1 {
class LineFormation;
struct LineFormationDefaultTypeInternal;
extern LineFormationDefaultTypeInternal _LineFormation_default_instance_;
}  // namespace v1
}  // namespace thirdparty
}  // namespace ads
}  // namespace tasks
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace anduril {
namespace tasks {
namespace ads {
namespace thirdparty {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class LineFormation final
    : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.tasks.ads.thirdparty.v1.LineFormation) */ {
 public:
  inline LineFormation() : LineFormation(nullptr) {}
  ~LineFormation() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(LineFormation* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(LineFormation));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR LineFormation(
      ::google::protobuf::internal::ConstantInitialized);

  inline LineFormation(const LineFormation& from) : LineFormation(nullptr, from) {}
  inline LineFormation(LineFormation&& from) noexcept
      : LineFormation(nullptr, std::move(from)) {}
  inline LineFormation& operator=(const LineFormation& from) {
    CopyFrom(from);
    return *this;
  }
  inline LineFormation& operator=(LineFormation&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
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
  static const LineFormation& default_instance() {
    return *internal_default_instance();
  }
  static inline const LineFormation* internal_default_instance() {
    return reinterpret_cast<const LineFormation*>(
        &_LineFormation_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(LineFormation& a, LineFormation& b) { a.Swap(&b); }
  inline void Swap(LineFormation* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LineFormation* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LineFormation* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<LineFormation>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const LineFormation& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const LineFormation& from) { LineFormation::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(LineFormation* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "anduril.tasks.ads.thirdparty.v1.LineFormation"; }

 protected:
  explicit LineFormation(::google::protobuf::Arena* arena);
  LineFormation(::google::protobuf::Arena* arena, const LineFormation& from);
  LineFormation(::google::protobuf::Arena* arena, LineFormation&& from) noexcept
      : LineFormation(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kLineStartFieldNumber = 1,
    kLineEndFieldNumber = 2,
    kSurfaceSpeedMsFieldNumber = 3,
  };
  // .anduril.tasks.v2.Objective line_start = 1 [json_name = "lineStart"];
  bool has_line_start() const;
  void clear_line_start() ;
  const ::anduril::tasks::v2::Objective& line_start() const;
  PROTOBUF_NODISCARD ::anduril::tasks::v2::Objective* release_line_start();
  ::anduril::tasks::v2::Objective* mutable_line_start();
  void set_allocated_line_start(::anduril::tasks::v2::Objective* value);
  void unsafe_arena_set_allocated_line_start(::anduril::tasks::v2::Objective* value);
  ::anduril::tasks::v2::Objective* unsafe_arena_release_line_start();

  private:
  const ::anduril::tasks::v2::Objective& _internal_line_start() const;
  ::anduril::tasks::v2::Objective* _internal_mutable_line_start();

  public:
  // .anduril.tasks.v2.Objective line_end = 2 [json_name = "lineEnd"];
  bool has_line_end() const;
  void clear_line_end() ;
  const ::anduril::tasks::v2::Objective& line_end() const;
  PROTOBUF_NODISCARD ::anduril::tasks::v2::Objective* release_line_end();
  ::anduril::tasks::v2::Objective* mutable_line_end();
  void set_allocated_line_end(::anduril::tasks::v2::Objective* value);
  void unsafe_arena_set_allocated_line_end(::anduril::tasks::v2::Objective* value);
  ::anduril::tasks::v2::Objective* unsafe_arena_release_line_end();

  private:
  const ::anduril::tasks::v2::Objective& _internal_line_end() const;
  ::anduril::tasks::v2::Objective* _internal_mutable_line_end();

  public:
  // .google.protobuf.DoubleValue surface_speed_ms = 3 [json_name = "surfaceSpeedMs"];
  bool has_surface_speed_ms() const;
  void clear_surface_speed_ms() ;
  const ::google::protobuf::DoubleValue& surface_speed_ms() const;
  PROTOBUF_NODISCARD ::google::protobuf::DoubleValue* release_surface_speed_ms();
  ::google::protobuf::DoubleValue* mutable_surface_speed_ms();
  void set_allocated_surface_speed_ms(::google::protobuf::DoubleValue* value);
  void unsafe_arena_set_allocated_surface_speed_ms(::google::protobuf::DoubleValue* value);
  ::google::protobuf::DoubleValue* unsafe_arena_release_surface_speed_ms();

  private:
  const ::google::protobuf::DoubleValue& _internal_surface_speed_ms() const;
  ::google::protobuf::DoubleValue* _internal_mutable_surface_speed_ms();

  public:
  // @@protoc_insertion_point(class_scope:anduril.tasks.ads.thirdparty.v1.LineFormation)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 3,
      0, 2>
      _table_;

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
                          const LineFormation& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    ::anduril::tasks::v2::Objective* line_start_;
    ::anduril::tasks::v2::Objective* line_end_;
    ::google::protobuf::DoubleValue* surface_speed_ms_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// LineFormation

// .anduril.tasks.v2.Objective line_start = 1 [json_name = "lineStart"];
inline bool LineFormation::has_line_start() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.line_start_ != nullptr);
  return value;
}
inline const ::anduril::tasks::v2::Objective& LineFormation::_internal_line_start() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::anduril::tasks::v2::Objective* p = _impl_.line_start_;
  return p != nullptr ? *p : reinterpret_cast<const ::anduril::tasks::v2::Objective&>(::anduril::tasks::v2::_Objective_default_instance_);
}
inline const ::anduril::tasks::v2::Objective& LineFormation::line_start() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.ads.thirdparty.v1.LineFormation.line_start)
  return _internal_line_start();
}
inline void LineFormation::unsafe_arena_set_allocated_line_start(::anduril::tasks::v2::Objective* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.line_start_);
  }
  _impl_.line_start_ = reinterpret_cast<::anduril::tasks::v2::Objective*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.tasks.ads.thirdparty.v1.LineFormation.line_start)
}
inline ::anduril::tasks::v2::Objective* LineFormation::release_line_start() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::tasks::v2::Objective* released = _impl_.line_start_;
  _impl_.line_start_ = nullptr;
  if (::google::protobuf::internal::DebugHardenForceCopyInRelease()) {
    auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    if (GetArena() == nullptr) {
      delete old;
    }
  } else {
    if (GetArena() != nullptr) {
      released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    }
  }
  return released;
}
inline ::anduril::tasks::v2::Objective* LineFormation::unsafe_arena_release_line_start() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.ads.thirdparty.v1.LineFormation.line_start)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::tasks::v2::Objective* temp = _impl_.line_start_;
  _impl_.line_start_ = nullptr;
  return temp;
}
inline ::anduril::tasks::v2::Objective* LineFormation::_internal_mutable_line_start() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.line_start_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::anduril::tasks::v2::Objective>(GetArena());
    _impl_.line_start_ = reinterpret_cast<::anduril::tasks::v2::Objective*>(p);
  }
  return _impl_.line_start_;
}
inline ::anduril::tasks::v2::Objective* LineFormation::mutable_line_start() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000001u;
  ::anduril::tasks::v2::Objective* _msg = _internal_mutable_line_start();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.ads.thirdparty.v1.LineFormation.line_start)
  return _msg;
}
inline void LineFormation::set_allocated_line_start(::anduril::tasks::v2::Objective* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.line_start_);
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

  _impl_.line_start_ = reinterpret_cast<::anduril::tasks::v2::Objective*>(value);
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.ads.thirdparty.v1.LineFormation.line_start)
}

// .anduril.tasks.v2.Objective line_end = 2 [json_name = "lineEnd"];
inline bool LineFormation::has_line_end() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.line_end_ != nullptr);
  return value;
}
inline const ::anduril::tasks::v2::Objective& LineFormation::_internal_line_end() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::anduril::tasks::v2::Objective* p = _impl_.line_end_;
  return p != nullptr ? *p : reinterpret_cast<const ::anduril::tasks::v2::Objective&>(::anduril::tasks::v2::_Objective_default_instance_);
}
inline const ::anduril::tasks::v2::Objective& LineFormation::line_end() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.ads.thirdparty.v1.LineFormation.line_end)
  return _internal_line_end();
}
inline void LineFormation::unsafe_arena_set_allocated_line_end(::anduril::tasks::v2::Objective* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.line_end_);
  }
  _impl_.line_end_ = reinterpret_cast<::anduril::tasks::v2::Objective*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.tasks.ads.thirdparty.v1.LineFormation.line_end)
}
inline ::anduril::tasks::v2::Objective* LineFormation::release_line_end() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::anduril::tasks::v2::Objective* released = _impl_.line_end_;
  _impl_.line_end_ = nullptr;
  if (::google::protobuf::internal::DebugHardenForceCopyInRelease()) {
    auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    if (GetArena() == nullptr) {
      delete old;
    }
  } else {
    if (GetArena() != nullptr) {
      released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    }
  }
  return released;
}
inline ::anduril::tasks::v2::Objective* LineFormation::unsafe_arena_release_line_end() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.ads.thirdparty.v1.LineFormation.line_end)

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::anduril::tasks::v2::Objective* temp = _impl_.line_end_;
  _impl_.line_end_ = nullptr;
  return temp;
}
inline ::anduril::tasks::v2::Objective* LineFormation::_internal_mutable_line_end() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.line_end_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::anduril::tasks::v2::Objective>(GetArena());
    _impl_.line_end_ = reinterpret_cast<::anduril::tasks::v2::Objective*>(p);
  }
  return _impl_.line_end_;
}
inline ::anduril::tasks::v2::Objective* LineFormation::mutable_line_end() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000002u;
  ::anduril::tasks::v2::Objective* _msg = _internal_mutable_line_end();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.ads.thirdparty.v1.LineFormation.line_end)
  return _msg;
}
inline void LineFormation::set_allocated_line_end(::anduril::tasks::v2::Objective* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.line_end_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }

  _impl_.line_end_ = reinterpret_cast<::anduril::tasks::v2::Objective*>(value);
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.ads.thirdparty.v1.LineFormation.line_end)
}

// .google.protobuf.DoubleValue surface_speed_ms = 3 [json_name = "surfaceSpeedMs"];
inline bool LineFormation::has_surface_speed_ms() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.surface_speed_ms_ != nullptr);
  return value;
}
inline const ::google::protobuf::DoubleValue& LineFormation::_internal_surface_speed_ms() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::google::protobuf::DoubleValue* p = _impl_.surface_speed_ms_;
  return p != nullptr ? *p : reinterpret_cast<const ::google::protobuf::DoubleValue&>(::google::protobuf::_DoubleValue_default_instance_);
}
inline const ::google::protobuf::DoubleValue& LineFormation::surface_speed_ms() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.ads.thirdparty.v1.LineFormation.surface_speed_ms)
  return _internal_surface_speed_ms();
}
inline void LineFormation::unsafe_arena_set_allocated_surface_speed_ms(::google::protobuf::DoubleValue* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.surface_speed_ms_);
  }
  _impl_.surface_speed_ms_ = reinterpret_cast<::google::protobuf::DoubleValue*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.tasks.ads.thirdparty.v1.LineFormation.surface_speed_ms)
}
inline ::google::protobuf::DoubleValue* LineFormation::release_surface_speed_ms() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000004u;
  ::google::protobuf::DoubleValue* released = _impl_.surface_speed_ms_;
  _impl_.surface_speed_ms_ = nullptr;
  if (::google::protobuf::internal::DebugHardenForceCopyInRelease()) {
    auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    if (GetArena() == nullptr) {
      delete old;
    }
  } else {
    if (GetArena() != nullptr) {
      released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    }
  }
  return released;
}
inline ::google::protobuf::DoubleValue* LineFormation::unsafe_arena_release_surface_speed_ms() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.ads.thirdparty.v1.LineFormation.surface_speed_ms)

  _impl_._has_bits_[0] &= ~0x00000004u;
  ::google::protobuf::DoubleValue* temp = _impl_.surface_speed_ms_;
  _impl_.surface_speed_ms_ = nullptr;
  return temp;
}
inline ::google::protobuf::DoubleValue* LineFormation::_internal_mutable_surface_speed_ms() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.surface_speed_ms_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::google::protobuf::DoubleValue>(GetArena());
    _impl_.surface_speed_ms_ = reinterpret_cast<::google::protobuf::DoubleValue*>(p);
  }
  return _impl_.surface_speed_ms_;
}
inline ::google::protobuf::DoubleValue* LineFormation::mutable_surface_speed_ms() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000004u;
  ::google::protobuf::DoubleValue* _msg = _internal_mutable_surface_speed_ms();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.ads.thirdparty.v1.LineFormation.surface_speed_ms)
  return _msg;
}
inline void LineFormation::set_allocated_surface_speed_ms(::google::protobuf::DoubleValue* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.surface_speed_ms_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }

  _impl_.surface_speed_ms_ = reinterpret_cast<::google::protobuf::DoubleValue*>(value);
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.ads.thirdparty.v1.LineFormation.surface_speed_ms)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace thirdparty
}  // namespace ads
}  // namespace tasks
}  // namespace anduril


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // anduril_2ftasks_2fads_2fthirdparty_2fv1_2fformation_2epub_2eproto_2epb_2eh
