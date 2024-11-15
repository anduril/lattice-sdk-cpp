// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/notification.pub.proto
// Protobuf C++ Version: 5.28.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto_2epb_2eh

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
#include "anduril/entitymanager/v1/entity.pub.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto;
namespace anduril {
namespace entitymanager {
namespace v1 {
class OverrideNotificationPayload;
struct OverrideNotificationPayloadDefaultTypeInternal;
extern OverrideNotificationPayloadDefaultTypeInternal _OverrideNotificationPayload_default_instance_;
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

class OverrideNotificationPayload final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.entitymanager.v1.OverrideNotificationPayload) */ {
 public:
  inline OverrideNotificationPayload() : OverrideNotificationPayload(nullptr) {}
  ~OverrideNotificationPayload() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR OverrideNotificationPayload(
      ::google::protobuf::internal::ConstantInitialized);

  inline OverrideNotificationPayload(const OverrideNotificationPayload& from) : OverrideNotificationPayload(nullptr, from) {}
  inline OverrideNotificationPayload(OverrideNotificationPayload&& from) noexcept
      : OverrideNotificationPayload(nullptr, std::move(from)) {}
  inline OverrideNotificationPayload& operator=(const OverrideNotificationPayload& from) {
    CopyFrom(from);
    return *this;
  }
  inline OverrideNotificationPayload& operator=(OverrideNotificationPayload&& from) noexcept {
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
  static const OverrideNotificationPayload& default_instance() {
    return *internal_default_instance();
  }
  static inline const OverrideNotificationPayload* internal_default_instance() {
    return reinterpret_cast<const OverrideNotificationPayload*>(
        &_OverrideNotificationPayload_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(OverrideNotificationPayload& a, OverrideNotificationPayload& b) { a.Swap(&b); }
  inline void Swap(OverrideNotificationPayload* other) {
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
  void UnsafeArenaSwap(OverrideNotificationPayload* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  OverrideNotificationPayload* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<OverrideNotificationPayload>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const OverrideNotificationPayload& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const OverrideNotificationPayload& from) { OverrideNotificationPayload::MergeImpl(*this, from); }

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
  void InternalSwap(OverrideNotificationPayload* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.entitymanager.v1.OverrideNotificationPayload"; }

 protected:
  explicit OverrideNotificationPayload(::google::protobuf::Arena* arena);
  OverrideNotificationPayload(::google::protobuf::Arena* arena, const OverrideNotificationPayload& from);
  OverrideNotificationPayload(::google::protobuf::Arena* arena, OverrideNotificationPayload&& from) noexcept
      : OverrideNotificationPayload(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kFieldPathFieldNumber = 2,
    kEntityFieldNumber = 1,
    kProvenanceFieldNumber = 3,
  };
  // string field_path = 2 [json_name = "fieldPath"];
  void clear_field_path() ;
  const std::string& field_path() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_field_path(Arg_&& arg, Args_... args);
  std::string* mutable_field_path();
  PROTOBUF_NODISCARD std::string* release_field_path();
  void set_allocated_field_path(std::string* value);

  private:
  const std::string& _internal_field_path() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_field_path(
      const std::string& value);
  std::string* _internal_mutable_field_path();

  public:
  // .anduril.entitymanager.v1.Entity entity = 1 [json_name = "entity"];
  bool has_entity() const;
  void clear_entity() ;
  const ::anduril::entitymanager::v1::Entity& entity() const;
  PROTOBUF_NODISCARD ::anduril::entitymanager::v1::Entity* release_entity();
  ::anduril::entitymanager::v1::Entity* mutable_entity();
  void set_allocated_entity(::anduril::entitymanager::v1::Entity* value);
  void unsafe_arena_set_allocated_entity(::anduril::entitymanager::v1::Entity* value);
  ::anduril::entitymanager::v1::Entity* unsafe_arena_release_entity();

  private:
  const ::anduril::entitymanager::v1::Entity& _internal_entity() const;
  ::anduril::entitymanager::v1::Entity* _internal_mutable_entity();

  public:
  // .anduril.entitymanager.v1.Provenance provenance = 3 [json_name = "provenance"];
  bool has_provenance() const;
  void clear_provenance() ;
  const ::anduril::entitymanager::v1::Provenance& provenance() const;
  PROTOBUF_NODISCARD ::anduril::entitymanager::v1::Provenance* release_provenance();
  ::anduril::entitymanager::v1::Provenance* mutable_provenance();
  void set_allocated_provenance(::anduril::entitymanager::v1::Provenance* value);
  void unsafe_arena_set_allocated_provenance(::anduril::entitymanager::v1::Provenance* value);
  ::anduril::entitymanager::v1::Provenance* unsafe_arena_release_provenance();

  private:
  const ::anduril::entitymanager::v1::Provenance& _internal_provenance() const;
  ::anduril::entitymanager::v1::Provenance* _internal_mutable_provenance();

  public:
  // @@protoc_insertion_point(class_scope:anduril.entitymanager.v1.OverrideNotificationPayload)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 2,
      71, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_OverrideNotificationPayload_default_instance_;

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
                          const OverrideNotificationPayload& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr field_path_;
    ::anduril::entitymanager::v1::Entity* entity_;
    ::anduril::entitymanager::v1::Provenance* provenance_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// OverrideNotificationPayload

// .anduril.entitymanager.v1.Entity entity = 1 [json_name = "entity"];
inline bool OverrideNotificationPayload::has_entity() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.entity_ != nullptr);
  return value;
}
inline const ::anduril::entitymanager::v1::Entity& OverrideNotificationPayload::_internal_entity() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::anduril::entitymanager::v1::Entity* p = _impl_.entity_;
  return p != nullptr ? *p : reinterpret_cast<const ::anduril::entitymanager::v1::Entity&>(::anduril::entitymanager::v1::_Entity_default_instance_);
}
inline const ::anduril::entitymanager::v1::Entity& OverrideNotificationPayload::entity() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.OverrideNotificationPayload.entity)
  return _internal_entity();
}
inline void OverrideNotificationPayload::unsafe_arena_set_allocated_entity(::anduril::entitymanager::v1::Entity* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.entity_);
  }
  _impl_.entity_ = reinterpret_cast<::anduril::entitymanager::v1::Entity*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.entitymanager.v1.OverrideNotificationPayload.entity)
}
inline ::anduril::entitymanager::v1::Entity* OverrideNotificationPayload::release_entity() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::entitymanager::v1::Entity* released = _impl_.entity_;
  _impl_.entity_ = nullptr;
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
inline ::anduril::entitymanager::v1::Entity* OverrideNotificationPayload::unsafe_arena_release_entity() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.entitymanager.v1.OverrideNotificationPayload.entity)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::entitymanager::v1::Entity* temp = _impl_.entity_;
  _impl_.entity_ = nullptr;
  return temp;
}
inline ::anduril::entitymanager::v1::Entity* OverrideNotificationPayload::_internal_mutable_entity() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.entity_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::anduril::entitymanager::v1::Entity>(GetArena());
    _impl_.entity_ = reinterpret_cast<::anduril::entitymanager::v1::Entity*>(p);
  }
  return _impl_.entity_;
}
inline ::anduril::entitymanager::v1::Entity* OverrideNotificationPayload::mutable_entity() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000001u;
  ::anduril::entitymanager::v1::Entity* _msg = _internal_mutable_entity();
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.OverrideNotificationPayload.entity)
  return _msg;
}
inline void OverrideNotificationPayload::set_allocated_entity(::anduril::entitymanager::v1::Entity* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.entity_);
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

  _impl_.entity_ = reinterpret_cast<::anduril::entitymanager::v1::Entity*>(value);
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.OverrideNotificationPayload.entity)
}

// string field_path = 2 [json_name = "fieldPath"];
inline void OverrideNotificationPayload::clear_field_path() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.field_path_.ClearToEmpty();
}
inline const std::string& OverrideNotificationPayload::field_path() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.OverrideNotificationPayload.field_path)
  return _internal_field_path();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void OverrideNotificationPayload::set_field_path(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.field_path_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.entitymanager.v1.OverrideNotificationPayload.field_path)
}
inline std::string* OverrideNotificationPayload::mutable_field_path() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_field_path();
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.OverrideNotificationPayload.field_path)
  return _s;
}
inline const std::string& OverrideNotificationPayload::_internal_field_path() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.field_path_.Get();
}
inline void OverrideNotificationPayload::_internal_set_field_path(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.field_path_.Set(value, GetArena());
}
inline std::string* OverrideNotificationPayload::_internal_mutable_field_path() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.field_path_.Mutable( GetArena());
}
inline std::string* OverrideNotificationPayload::release_field_path() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.entitymanager.v1.OverrideNotificationPayload.field_path)
  return _impl_.field_path_.Release();
}
inline void OverrideNotificationPayload::set_allocated_field_path(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.field_path_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.field_path_.IsDefault()) {
          _impl_.field_path_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.OverrideNotificationPayload.field_path)
}

// .anduril.entitymanager.v1.Provenance provenance = 3 [json_name = "provenance"];
inline bool OverrideNotificationPayload::has_provenance() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.provenance_ != nullptr);
  return value;
}
inline const ::anduril::entitymanager::v1::Provenance& OverrideNotificationPayload::_internal_provenance() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::anduril::entitymanager::v1::Provenance* p = _impl_.provenance_;
  return p != nullptr ? *p : reinterpret_cast<const ::anduril::entitymanager::v1::Provenance&>(::anduril::entitymanager::v1::_Provenance_default_instance_);
}
inline const ::anduril::entitymanager::v1::Provenance& OverrideNotificationPayload::provenance() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.OverrideNotificationPayload.provenance)
  return _internal_provenance();
}
inline void OverrideNotificationPayload::unsafe_arena_set_allocated_provenance(::anduril::entitymanager::v1::Provenance* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.provenance_);
  }
  _impl_.provenance_ = reinterpret_cast<::anduril::entitymanager::v1::Provenance*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.entitymanager.v1.OverrideNotificationPayload.provenance)
}
inline ::anduril::entitymanager::v1::Provenance* OverrideNotificationPayload::release_provenance() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::anduril::entitymanager::v1::Provenance* released = _impl_.provenance_;
  _impl_.provenance_ = nullptr;
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
inline ::anduril::entitymanager::v1::Provenance* OverrideNotificationPayload::unsafe_arena_release_provenance() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.entitymanager.v1.OverrideNotificationPayload.provenance)

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::anduril::entitymanager::v1::Provenance* temp = _impl_.provenance_;
  _impl_.provenance_ = nullptr;
  return temp;
}
inline ::anduril::entitymanager::v1::Provenance* OverrideNotificationPayload::_internal_mutable_provenance() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.provenance_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::anduril::entitymanager::v1::Provenance>(GetArena());
    _impl_.provenance_ = reinterpret_cast<::anduril::entitymanager::v1::Provenance*>(p);
  }
  return _impl_.provenance_;
}
inline ::anduril::entitymanager::v1::Provenance* OverrideNotificationPayload::mutable_provenance() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000002u;
  ::anduril::entitymanager::v1::Provenance* _msg = _internal_mutable_provenance();
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.OverrideNotificationPayload.provenance)
  return _msg;
}
inline void OverrideNotificationPayload::set_allocated_provenance(::anduril::entitymanager::v1::Provenance* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.provenance_);
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

  _impl_.provenance_ = reinterpret_cast<::anduril::entitymanager::v1::Provenance*>(value);
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.OverrideNotificationPayload.provenance)
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2fnotification_2epub_2eproto_2epb_2eh
