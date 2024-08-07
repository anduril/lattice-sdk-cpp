// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/communicationsmanager/v1/cross_domain.pub.proto
// Protobuf C++ Version: 5.27.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2fcommunicationsmanager_2fv1_2fcross_5fdomain_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2fcommunicationsmanager_2fv1_2fcross_5fdomain_2epub_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_anduril_2fcommunicationsmanager_2fv1_2fcross_5fdomain_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2fcommunicationsmanager_2fv1_2fcross_5fdomain_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2fcommunicationsmanager_2fv1_2fcross_5fdomain_2epub_2eproto;
namespace anduril {
namespace communicationsmanager {
namespace v1 {
class CdsDestination;
struct CdsDestinationDefaultTypeInternal;
extern CdsDestinationDefaultTypeInternal _CdsDestination_default_instance_;
class RegisteredCds;
struct RegisteredCdsDefaultTypeInternal;
extern RegisteredCdsDefaultTypeInternal _RegisteredCds_default_instance_;
}  // namespace v1
}  // namespace communicationsmanager
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace anduril {
namespace communicationsmanager {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class RegisteredCds final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.communicationsmanager.v1.RegisteredCds) */ {
 public:
  inline RegisteredCds() : RegisteredCds(nullptr) {}
  ~RegisteredCds() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR RegisteredCds(
      ::google::protobuf::internal::ConstantInitialized);

  inline RegisteredCds(const RegisteredCds& from) : RegisteredCds(nullptr, from) {}
  inline RegisteredCds(RegisteredCds&& from) noexcept
      : RegisteredCds(nullptr, std::move(from)) {}
  inline RegisteredCds& operator=(const RegisteredCds& from) {
    CopyFrom(from);
    return *this;
  }
  inline RegisteredCds& operator=(RegisteredCds&& from) noexcept {
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
  static const RegisteredCds& default_instance() {
    return *internal_default_instance();
  }
  static inline const RegisteredCds* internal_default_instance() {
    return reinterpret_cast<const RegisteredCds*>(
        &_RegisteredCds_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(RegisteredCds& a, RegisteredCds& b) { a.Swap(&b); }
  inline void Swap(RegisteredCds* other) {
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
  void UnsafeArenaSwap(RegisteredCds* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RegisteredCds* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<RegisteredCds>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const RegisteredCds& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const RegisteredCds& from) { RegisteredCds::MergeImpl(*this, from); }

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
  void InternalSwap(RegisteredCds* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.communicationsmanager.v1.RegisteredCds"; }

 protected:
  explicit RegisteredCds(::google::protobuf::Arena* arena);
  RegisteredCds(::google::protobuf::Arena* arena, const RegisteredCds& from);
  RegisteredCds(::google::protobuf::Arena* arena, RegisteredCds&& from) noexcept
      : RegisteredCds(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kHostIdFieldNumber = 1,
    kCdsNameFieldNumber = 2,
  };
  // string host_id = 1 [json_name = "hostId"];
  void clear_host_id() ;
  const std::string& host_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_host_id(Arg_&& arg, Args_... args);
  std::string* mutable_host_id();
  PROTOBUF_NODISCARD std::string* release_host_id();
  void set_allocated_host_id(std::string* value);

  private:
  const std::string& _internal_host_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_host_id(
      const std::string& value);
  std::string* _internal_mutable_host_id();

  public:
  // string cds_name = 2 [json_name = "cdsName"];
  void clear_cds_name() ;
  const std::string& cds_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_cds_name(Arg_&& arg, Args_... args);
  std::string* mutable_cds_name();
  PROTOBUF_NODISCARD std::string* release_cds_name();
  void set_allocated_cds_name(std::string* value);

  private:
  const std::string& _internal_cds_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_cds_name(
      const std::string& value);
  std::string* _internal_mutable_cds_name();

  public:
  // @@protoc_insertion_point(class_scope:anduril.communicationsmanager.v1.RegisteredCds)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      70, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_RegisteredCds_default_instance_;

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
                          const RegisteredCds& from_msg);
    ::google::protobuf::internal::ArenaStringPtr host_id_;
    ::google::protobuf::internal::ArenaStringPtr cds_name_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fcommunicationsmanager_2fv1_2fcross_5fdomain_2epub_2eproto;
};
// -------------------------------------------------------------------

class CdsDestination final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.communicationsmanager.v1.CdsDestination) */ {
 public:
  inline CdsDestination() : CdsDestination(nullptr) {}
  ~CdsDestination() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR CdsDestination(
      ::google::protobuf::internal::ConstantInitialized);

  inline CdsDestination(const CdsDestination& from) : CdsDestination(nullptr, from) {}
  inline CdsDestination(CdsDestination&& from) noexcept
      : CdsDestination(nullptr, std::move(from)) {}
  inline CdsDestination& operator=(const CdsDestination& from) {
    CopyFrom(from);
    return *this;
  }
  inline CdsDestination& operator=(CdsDestination&& from) noexcept {
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
  static const CdsDestination& default_instance() {
    return *internal_default_instance();
  }
  static inline const CdsDestination* internal_default_instance() {
    return reinterpret_cast<const CdsDestination*>(
        &_CdsDestination_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(CdsDestination& a, CdsDestination& b) { a.Swap(&b); }
  inline void Swap(CdsDestination* other) {
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
  void UnsafeArenaSwap(CdsDestination* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CdsDestination* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<CdsDestination>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CdsDestination& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const CdsDestination& from) { CdsDestination::MergeImpl(*this, from); }

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
  void InternalSwap(CdsDestination* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.communicationsmanager.v1.CdsDestination"; }

 protected:
  explicit CdsDestination(::google::protobuf::Arena* arena);
  CdsDestination(::google::protobuf::Arena* arena, const CdsDestination& from);
  CdsDestination(::google::protobuf::Arena* arena, CdsDestination&& from) noexcept
      : CdsDestination(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kRegisteredCdsFieldNumber = 1,
  };
  // .anduril.communicationsmanager.v1.RegisteredCds registered_cds = 1 [json_name = "registeredCds"];
  bool has_registered_cds() const;
  void clear_registered_cds() ;
  const ::anduril::communicationsmanager::v1::RegisteredCds& registered_cds() const;
  PROTOBUF_NODISCARD ::anduril::communicationsmanager::v1::RegisteredCds* release_registered_cds();
  ::anduril::communicationsmanager::v1::RegisteredCds* mutable_registered_cds();
  void set_allocated_registered_cds(::anduril::communicationsmanager::v1::RegisteredCds* value);
  void unsafe_arena_set_allocated_registered_cds(::anduril::communicationsmanager::v1::RegisteredCds* value);
  ::anduril::communicationsmanager::v1::RegisteredCds* unsafe_arena_release_registered_cds();

  private:
  const ::anduril::communicationsmanager::v1::RegisteredCds& _internal_registered_cds() const;
  ::anduril::communicationsmanager::v1::RegisteredCds* _internal_mutable_registered_cds();

  public:
  // @@protoc_insertion_point(class_scope:anduril.communicationsmanager.v1.CdsDestination)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 1,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_CdsDestination_default_instance_;

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
                          const CdsDestination& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::anduril::communicationsmanager::v1::RegisteredCds* registered_cds_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fcommunicationsmanager_2fv1_2fcross_5fdomain_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// RegisteredCds

// string host_id = 1 [json_name = "hostId"];
inline void RegisteredCds::clear_host_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.host_id_.ClearToEmpty();
}
inline const std::string& RegisteredCds::host_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.communicationsmanager.v1.RegisteredCds.host_id)
  return _internal_host_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RegisteredCds::set_host_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.host_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.communicationsmanager.v1.RegisteredCds.host_id)
}
inline std::string* RegisteredCds::mutable_host_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_host_id();
  // @@protoc_insertion_point(field_mutable:anduril.communicationsmanager.v1.RegisteredCds.host_id)
  return _s;
}
inline const std::string& RegisteredCds::_internal_host_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.host_id_.Get();
}
inline void RegisteredCds::_internal_set_host_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.host_id_.Set(value, GetArena());
}
inline std::string* RegisteredCds::_internal_mutable_host_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.host_id_.Mutable( GetArena());
}
inline std::string* RegisteredCds::release_host_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.communicationsmanager.v1.RegisteredCds.host_id)
  return _impl_.host_id_.Release();
}
inline void RegisteredCds::set_allocated_host_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.host_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.host_id_.IsDefault()) {
          _impl_.host_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.communicationsmanager.v1.RegisteredCds.host_id)
}

// string cds_name = 2 [json_name = "cdsName"];
inline void RegisteredCds::clear_cds_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cds_name_.ClearToEmpty();
}
inline const std::string& RegisteredCds::cds_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.communicationsmanager.v1.RegisteredCds.cds_name)
  return _internal_cds_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RegisteredCds::set_cds_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cds_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.communicationsmanager.v1.RegisteredCds.cds_name)
}
inline std::string* RegisteredCds::mutable_cds_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_cds_name();
  // @@protoc_insertion_point(field_mutable:anduril.communicationsmanager.v1.RegisteredCds.cds_name)
  return _s;
}
inline const std::string& RegisteredCds::_internal_cds_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.cds_name_.Get();
}
inline void RegisteredCds::_internal_set_cds_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cds_name_.Set(value, GetArena());
}
inline std::string* RegisteredCds::_internal_mutable_cds_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.cds_name_.Mutable( GetArena());
}
inline std::string* RegisteredCds::release_cds_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.communicationsmanager.v1.RegisteredCds.cds_name)
  return _impl_.cds_name_.Release();
}
inline void RegisteredCds::set_allocated_cds_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cds_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.cds_name_.IsDefault()) {
          _impl_.cds_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.communicationsmanager.v1.RegisteredCds.cds_name)
}

// -------------------------------------------------------------------

// CdsDestination

// .anduril.communicationsmanager.v1.RegisteredCds registered_cds = 1 [json_name = "registeredCds"];
inline bool CdsDestination::has_registered_cds() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.registered_cds_ != nullptr);
  return value;
}
inline void CdsDestination::clear_registered_cds() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.registered_cds_ != nullptr) _impl_.registered_cds_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const ::anduril::communicationsmanager::v1::RegisteredCds& CdsDestination::_internal_registered_cds() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::anduril::communicationsmanager::v1::RegisteredCds* p = _impl_.registered_cds_;
  return p != nullptr ? *p : reinterpret_cast<const ::anduril::communicationsmanager::v1::RegisteredCds&>(::anduril::communicationsmanager::v1::_RegisteredCds_default_instance_);
}
inline const ::anduril::communicationsmanager::v1::RegisteredCds& CdsDestination::registered_cds() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.communicationsmanager.v1.CdsDestination.registered_cds)
  return _internal_registered_cds();
}
inline void CdsDestination::unsafe_arena_set_allocated_registered_cds(::anduril::communicationsmanager::v1::RegisteredCds* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.registered_cds_);
  }
  _impl_.registered_cds_ = reinterpret_cast<::anduril::communicationsmanager::v1::RegisteredCds*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.communicationsmanager.v1.CdsDestination.registered_cds)
}
inline ::anduril::communicationsmanager::v1::RegisteredCds* CdsDestination::release_registered_cds() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::communicationsmanager::v1::RegisteredCds* released = _impl_.registered_cds_;
  _impl_.registered_cds_ = nullptr;
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
inline ::anduril::communicationsmanager::v1::RegisteredCds* CdsDestination::unsafe_arena_release_registered_cds() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.communicationsmanager.v1.CdsDestination.registered_cds)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::anduril::communicationsmanager::v1::RegisteredCds* temp = _impl_.registered_cds_;
  _impl_.registered_cds_ = nullptr;
  return temp;
}
inline ::anduril::communicationsmanager::v1::RegisteredCds* CdsDestination::_internal_mutable_registered_cds() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.registered_cds_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::anduril::communicationsmanager::v1::RegisteredCds>(GetArena());
    _impl_.registered_cds_ = reinterpret_cast<::anduril::communicationsmanager::v1::RegisteredCds*>(p);
  }
  return _impl_.registered_cds_;
}
inline ::anduril::communicationsmanager::v1::RegisteredCds* CdsDestination::mutable_registered_cds() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000001u;
  ::anduril::communicationsmanager::v1::RegisteredCds* _msg = _internal_mutable_registered_cds();
  // @@protoc_insertion_point(field_mutable:anduril.communicationsmanager.v1.CdsDestination.registered_cds)
  return _msg;
}
inline void CdsDestination::set_allocated_registered_cds(::anduril::communicationsmanager::v1::RegisteredCds* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete (_impl_.registered_cds_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = (value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }

  _impl_.registered_cds_ = reinterpret_cast<::anduril::communicationsmanager::v1::RegisteredCds*>(value);
  // @@protoc_insertion_point(field_set_allocated:anduril.communicationsmanager.v1.CdsDestination.registered_cds)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace communicationsmanager
}  // namespace anduril


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2fcommunicationsmanager_2fv1_2fcross_5fdomain_2epub_2eproto_2epb_2eh