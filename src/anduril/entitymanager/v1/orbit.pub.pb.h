// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/orbit.pub.proto
// Protobuf C++ Version: 5.28.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5028003
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
#include "anduril/type/orbit.pub.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto;
namespace anduril {
namespace entitymanager {
namespace v1 {
class Orbit;
struct OrbitDefaultTypeInternal;
extern OrbitDefaultTypeInternal _Orbit_default_instance_;
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace anduril {
namespace entitymanager {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class Orbit final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.entitymanager.v1.Orbit) */ {
 public:
  inline Orbit() : Orbit(nullptr) {}
  ~Orbit() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Orbit(
      ::google::protobuf::internal::ConstantInitialized);

  inline Orbit(const Orbit& from) : Orbit(nullptr, from) {}
  inline Orbit(Orbit&& from) noexcept
      : Orbit(nullptr, std::move(from)) {}
  inline Orbit& operator=(const Orbit& from) {
    CopyFrom(from);
    return *this;
  }
  inline Orbit& operator=(Orbit&& from) noexcept {
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
  static const Orbit& default_instance() {
    return *internal_default_instance();
  }
  static inline const Orbit* internal_default_instance() {
    return reinterpret_cast<const Orbit*>(
        &_Orbit_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Orbit& a, Orbit& b) { a.Swap(&b); }
  inline void Swap(Orbit* other) {
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
  void UnsafeArenaSwap(Orbit* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Orbit* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<Orbit>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Orbit& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Orbit& from) { Orbit::MergeImpl(*this, from); }

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
  void SharedDtor();
  void InternalSwap(Orbit* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.entitymanager.v1.Orbit"; }

 protected:
  explicit Orbit(::google::protobuf::Arena* arena);
  Orbit(::google::protobuf::Arena* arena, const Orbit& from);
  Orbit(::google::protobuf::Arena* arena, Orbit&& from) noexcept
      : Orbit(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kOrbitMeanElementsFieldNumber = 1,
  };
  // .anduril.type.OrbitMeanElements orbit_mean_elements = 1 [json_name = "orbitMeanElements"];
  bool has_orbit_mean_elements() const;
  void clear_orbit_mean_elements() ;
  const ::anduril::type::OrbitMeanElements& orbit_mean_elements() const;
  PROTOBUF_NODISCARD ::anduril::type::OrbitMeanElements* release_orbit_mean_elements();
  ::anduril::type::OrbitMeanElements* mutable_orbit_mean_elements();
  void set_allocated_orbit_mean_elements(::anduril::type::OrbitMeanElements* value);
  void unsafe_arena_set_allocated_orbit_mean_elements(::anduril::type::OrbitMeanElements* value);
  ::anduril::type::OrbitMeanElements* unsafe_arena_release_orbit_mean_elements();

  private:
  const ::anduril::type::OrbitMeanElements& _internal_orbit_mean_elements() const;
  ::anduril::type::OrbitMeanElements* _internal_mutable_orbit_mean_elements();

  public:
  // @@protoc_insertion_point(class_scope:anduril.entitymanager.v1.Orbit)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 1,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Orbit_default_instance_;

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
                          const Orbit& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::anduril::type::OrbitMeanElements* orbit_mean_elements_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Orbit

// .anduril.type.OrbitMeanElements orbit_mean_elements = 1 [json_name = "orbitMeanElements"];
inline bool Orbit::has_orbit_mean_elements() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.orbit_mean_elements_ != nullptr);
  return value;
}
inline const ::anduril::type::OrbitMeanElements& Orbit::_internal_orbit_mean_elements() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::anduril::type::OrbitMeanElements* p = _impl_.orbit_mean_elements_;
  return p != nullptr ? *p : reinterpret_cast<const ::anduril::type::OrbitMeanElements&>(::anduril::type::_OrbitMeanElements_default_instance_);
}
inline const ::anduril::type::OrbitMeanElements& Orbit::orbit_mean_elements() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.Orbit.orbit_mean_elements)
  return _internal_orbit_mean_elements();
}
inline void Orbit::unsafe_arena_set_allocated_orbit_mean_elements(::anduril::type::OrbitMeanElements* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.orbit_mean_elements_);
  }
  _impl_.orbit_mean_elements_ = reinterpret_cast<::anduril::type::OrbitMeanElements*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.entitymanager.v1.Orbit.orbit_mean_elements)
}
inline ::anduril::type::OrbitMeanElements* Orbit::release_orbit_mean_elements() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::type::OrbitMeanElements* released = _impl_.orbit_mean_elements_;
  _impl_.orbit_mean_elements_ = nullptr;
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
inline ::anduril::type::OrbitMeanElements* Orbit::unsafe_arena_release_orbit_mean_elements() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.entitymanager.v1.Orbit.orbit_mean_elements)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::type::OrbitMeanElements* temp = _impl_.orbit_mean_elements_;
  _impl_.orbit_mean_elements_ = nullptr;
  return temp;
}
inline ::anduril::type::OrbitMeanElements* Orbit::_internal_mutable_orbit_mean_elements() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.orbit_mean_elements_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::anduril::type::OrbitMeanElements>(GetArena());
    _impl_.orbit_mean_elements_ = reinterpret_cast<::anduril::type::OrbitMeanElements*>(p);
  }
  return _impl_.orbit_mean_elements_;
}
inline ::anduril::type::OrbitMeanElements* Orbit::mutable_orbit_mean_elements() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000001u;
  ::anduril::type::OrbitMeanElements* _msg = _internal_mutable_orbit_mean_elements();
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.Orbit.orbit_mean_elements)
  return _msg;
}
inline void Orbit::set_allocated_orbit_mean_elements(::anduril::type::OrbitMeanElements* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.orbit_mean_elements_);
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

  _impl_.orbit_mean_elements_ = reinterpret_cast<::anduril::type::OrbitMeanElements*>(value);
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.Orbit.orbit_mean_elements)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2forbit_2epub_2eproto_2epb_2eh
