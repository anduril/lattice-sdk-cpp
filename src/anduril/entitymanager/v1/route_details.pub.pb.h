// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/route_details.pub.proto
// Protobuf C++ Version: 5.27.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto_2epb_2eh

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
#include "google/protobuf/timestamp.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto;
namespace anduril {
namespace entitymanager {
namespace v1 {
class RouteDetails;
struct RouteDetailsDefaultTypeInternal;
extern RouteDetailsDefaultTypeInternal _RouteDetails_default_instance_;
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

class RouteDetails final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.entitymanager.v1.RouteDetails) */ {
 public:
  inline RouteDetails() : RouteDetails(nullptr) {}
  ~RouteDetails() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR RouteDetails(
      ::google::protobuf::internal::ConstantInitialized);

  inline RouteDetails(const RouteDetails& from) : RouteDetails(nullptr, from) {}
  inline RouteDetails(RouteDetails&& from) noexcept
      : RouteDetails(nullptr, std::move(from)) {}
  inline RouteDetails& operator=(const RouteDetails& from) {
    CopyFrom(from);
    return *this;
  }
  inline RouteDetails& operator=(RouteDetails&& from) noexcept {
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
  static const RouteDetails& default_instance() {
    return *internal_default_instance();
  }
  static inline const RouteDetails* internal_default_instance() {
    return reinterpret_cast<const RouteDetails*>(
        &_RouteDetails_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(RouteDetails& a, RouteDetails& b) { a.Swap(&b); }
  inline void Swap(RouteDetails* other) {
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
  void UnsafeArenaSwap(RouteDetails* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RouteDetails* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<RouteDetails>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const RouteDetails& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const RouteDetails& from) { RouteDetails::MergeImpl(*this, from); }

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
  void InternalSwap(RouteDetails* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.entitymanager.v1.RouteDetails"; }

 protected:
  explicit RouteDetails(::google::protobuf::Arena* arena);
  RouteDetails(::google::protobuf::Arena* arena, const RouteDetails& from);
  RouteDetails(::google::protobuf::Arena* arena, RouteDetails&& from) noexcept
      : RouteDetails(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kDestinationNameFieldNumber = 1,
    kEstimatedArrivalTimeFieldNumber = 2,
  };
  // string destination_name = 1 [json_name = "destinationName"];
  void clear_destination_name() ;
  const std::string& destination_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_destination_name(Arg_&& arg, Args_... args);
  std::string* mutable_destination_name();
  PROTOBUF_NODISCARD std::string* release_destination_name();
  void set_allocated_destination_name(std::string* value);

  private:
  const std::string& _internal_destination_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_destination_name(
      const std::string& value);
  std::string* _internal_mutable_destination_name();

  public:
  // .google.protobuf.Timestamp estimated_arrival_time = 2 [json_name = "estimatedArrivalTime"];
  bool has_estimated_arrival_time() const;
  void clear_estimated_arrival_time() ;
  const ::google::protobuf::Timestamp& estimated_arrival_time() const;
  PROTOBUF_NODISCARD ::google::protobuf::Timestamp* release_estimated_arrival_time();
  ::google::protobuf::Timestamp* mutable_estimated_arrival_time();
  void set_allocated_estimated_arrival_time(::google::protobuf::Timestamp* value);
  void unsafe_arena_set_allocated_estimated_arrival_time(::google::protobuf::Timestamp* value);
  ::google::protobuf::Timestamp* unsafe_arena_release_estimated_arrival_time();

  private:
  const ::google::protobuf::Timestamp& _internal_estimated_arrival_time() const;
  ::google::protobuf::Timestamp* _internal_mutable_estimated_arrival_time();

  public:
  // @@protoc_insertion_point(class_scope:anduril.entitymanager.v1.RouteDetails)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 1,
      62, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_RouteDetails_default_instance_;

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
                          const RouteDetails& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr destination_name_;
    ::google::protobuf::Timestamp* estimated_arrival_time_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// RouteDetails

// string destination_name = 1 [json_name = "destinationName"];
inline void RouteDetails::clear_destination_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.destination_name_.ClearToEmpty();
}
inline const std::string& RouteDetails::destination_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.RouteDetails.destination_name)
  return _internal_destination_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RouteDetails::set_destination_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.destination_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.entitymanager.v1.RouteDetails.destination_name)
}
inline std::string* RouteDetails::mutable_destination_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_destination_name();
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.RouteDetails.destination_name)
  return _s;
}
inline const std::string& RouteDetails::_internal_destination_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.destination_name_.Get();
}
inline void RouteDetails::_internal_set_destination_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.destination_name_.Set(value, GetArena());
}
inline std::string* RouteDetails::_internal_mutable_destination_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.destination_name_.Mutable( GetArena());
}
inline std::string* RouteDetails::release_destination_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.entitymanager.v1.RouteDetails.destination_name)
  return _impl_.destination_name_.Release();
}
inline void RouteDetails::set_allocated_destination_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.destination_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.destination_name_.IsDefault()) {
          _impl_.destination_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.RouteDetails.destination_name)
}

// .google.protobuf.Timestamp estimated_arrival_time = 2 [json_name = "estimatedArrivalTime"];
inline bool RouteDetails::has_estimated_arrival_time() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.estimated_arrival_time_ != nullptr);
  return value;
}
inline const ::google::protobuf::Timestamp& RouteDetails::_internal_estimated_arrival_time() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::google::protobuf::Timestamp* p = _impl_.estimated_arrival_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::google::protobuf::Timestamp&>(::google::protobuf::_Timestamp_default_instance_);
}
inline const ::google::protobuf::Timestamp& RouteDetails::estimated_arrival_time() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.RouteDetails.estimated_arrival_time)
  return _internal_estimated_arrival_time();
}
inline void RouteDetails::unsafe_arena_set_allocated_estimated_arrival_time(::google::protobuf::Timestamp* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.estimated_arrival_time_);
  }
  _impl_.estimated_arrival_time_ = reinterpret_cast<::google::protobuf::Timestamp*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:anduril.entitymanager.v1.RouteDetails.estimated_arrival_time)
}
inline ::google::protobuf::Timestamp* RouteDetails::release_estimated_arrival_time() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::google::protobuf::Timestamp* released = _impl_.estimated_arrival_time_;
  _impl_.estimated_arrival_time_ = nullptr;
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
inline ::google::protobuf::Timestamp* RouteDetails::unsafe_arena_release_estimated_arrival_time() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.entitymanager.v1.RouteDetails.estimated_arrival_time)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::google::protobuf::Timestamp* temp = _impl_.estimated_arrival_time_;
  _impl_.estimated_arrival_time_ = nullptr;
  return temp;
}
inline ::google::protobuf::Timestamp* RouteDetails::_internal_mutable_estimated_arrival_time() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.estimated_arrival_time_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::google::protobuf::Timestamp>(GetArena());
    _impl_.estimated_arrival_time_ = reinterpret_cast<::google::protobuf::Timestamp*>(p);
  }
  return _impl_.estimated_arrival_time_;
}
inline ::google::protobuf::Timestamp* RouteDetails::mutable_estimated_arrival_time() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000001u;
  ::google::protobuf::Timestamp* _msg = _internal_mutable_estimated_arrival_time();
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.RouteDetails.estimated_arrival_time)
  return _msg;
}
inline void RouteDetails::set_allocated_estimated_arrival_time(::google::protobuf::Timestamp* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.estimated_arrival_time_);
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

  _impl_.estimated_arrival_time_ = reinterpret_cast<::google::protobuf::Timestamp*>(value);
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.RouteDetails.estimated_arrival_time)
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2froute_5fdetails_2epub_2eproto_2epb_2eh
