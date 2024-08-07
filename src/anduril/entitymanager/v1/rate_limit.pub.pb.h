// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/rate_limit.pub.proto
// Protobuf C++ Version: 5.27.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto;
namespace anduril {
namespace entitymanager {
namespace v1 {
class RateLimit;
struct RateLimitDefaultTypeInternal;
extern RateLimitDefaultTypeInternal _RateLimit_default_instance_;
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

class RateLimit final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.entitymanager.v1.RateLimit) */ {
 public:
  inline RateLimit() : RateLimit(nullptr) {}
  ~RateLimit() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR RateLimit(
      ::google::protobuf::internal::ConstantInitialized);

  inline RateLimit(const RateLimit& from) : RateLimit(nullptr, from) {}
  inline RateLimit(RateLimit&& from) noexcept
      : RateLimit(nullptr, std::move(from)) {}
  inline RateLimit& operator=(const RateLimit& from) {
    CopyFrom(from);
    return *this;
  }
  inline RateLimit& operator=(RateLimit&& from) noexcept {
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
  static const RateLimit& default_instance() {
    return *internal_default_instance();
  }
  static inline const RateLimit* internal_default_instance() {
    return reinterpret_cast<const RateLimit*>(
        &_RateLimit_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(RateLimit& a, RateLimit& b) { a.Swap(&b); }
  inline void Swap(RateLimit* other) {
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
  void UnsafeArenaSwap(RateLimit* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RateLimit* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<RateLimit>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const RateLimit& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const RateLimit& from) { RateLimit::MergeImpl(*this, from); }

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
  void InternalSwap(RateLimit* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.entitymanager.v1.RateLimit"; }

 protected:
  explicit RateLimit(::google::protobuf::Arena* arena);
  RateLimit(::google::protobuf::Arena* arena, const RateLimit& from);
  RateLimit(::google::protobuf::Arena* arena, RateLimit&& from) noexcept
      : RateLimit(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kUpdatePerEntityLimitMsFieldNumber = 1,
  };
  // uint32 update_per_entity_limit_ms = 1 [json_name = "updatePerEntityLimitMs"];
  void clear_update_per_entity_limit_ms() ;
  ::uint32_t update_per_entity_limit_ms() const;
  void set_update_per_entity_limit_ms(::uint32_t value);

  private:
  ::uint32_t _internal_update_per_entity_limit_ms() const;
  void _internal_set_update_per_entity_limit_ms(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:anduril.entitymanager.v1.RateLimit)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_RateLimit_default_instance_;

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
                          const RateLimit& from_msg);
    ::uint32_t update_per_entity_limit_ms_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// RateLimit

// uint32 update_per_entity_limit_ms = 1 [json_name = "updatePerEntityLimitMs"];
inline void RateLimit::clear_update_per_entity_limit_ms() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.update_per_entity_limit_ms_ = 0u;
}
inline ::uint32_t RateLimit::update_per_entity_limit_ms() const {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.RateLimit.update_per_entity_limit_ms)
  return _internal_update_per_entity_limit_ms();
}
inline void RateLimit::set_update_per_entity_limit_ms(::uint32_t value) {
  _internal_set_update_per_entity_limit_ms(value);
  // @@protoc_insertion_point(field_set:anduril.entitymanager.v1.RateLimit.update_per_entity_limit_ms)
}
inline ::uint32_t RateLimit::_internal_update_per_entity_limit_ms() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.update_per_entity_limit_ms_;
}
inline void RateLimit::_internal_set_update_per_entity_limit_ms(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.update_per_entity_limit_ms_ = value;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2frate_5flimit_2epub_2eproto_2epb_2eh
