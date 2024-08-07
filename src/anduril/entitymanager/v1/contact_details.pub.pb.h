// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: anduril/entitymanager/v1/contact_details.pub.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2fcontact_5fdetails_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2fcontact_5fdetails_2epub_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
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

#define PROTOBUF_INTERNAL_EXPORT_anduril_2fentitymanager_2fv1_2fcontact_5fdetails_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2fentitymanager_2fv1_2fcontact_5fdetails_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2fentitymanager_2fv1_2fcontact_5fdetails_2epub_2eproto;
namespace anduril {
namespace entitymanager {
namespace v1 {
class ContactDetails;
struct ContactDetailsDefaultTypeInternal;
extern ContactDetailsDefaultTypeInternal _ContactDetails_default_instance_;
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

class ContactDetails final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:anduril.entitymanager.v1.ContactDetails) */ {
 public:
  inline ContactDetails() : ContactDetails(nullptr) {}
  ~ContactDetails() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ContactDetails(::google::protobuf::internal::ConstantInitialized);

  inline ContactDetails(const ContactDetails& from)
      : ContactDetails(nullptr, from) {}
  ContactDetails(ContactDetails&& from) noexcept
    : ContactDetails() {
    *this = ::std::move(from);
  }

  inline ContactDetails& operator=(const ContactDetails& from) {
    CopyFrom(from);
    return *this;
  }
  inline ContactDetails& operator=(ContactDetails&& from) noexcept {
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
  static const ContactDetails& default_instance() {
    return *internal_default_instance();
  }
  static inline const ContactDetails* internal_default_instance() {
    return reinterpret_cast<const ContactDetails*>(
               &_ContactDetails_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ContactDetails& a, ContactDetails& b) {
    a.Swap(&b);
  }
  inline void Swap(ContactDetails* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ContactDetails* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ContactDetails* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ContactDetails>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ContactDetails& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const ContactDetails& from) {
    ContactDetails::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(ContactDetails* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "anduril.entitymanager.v1.ContactDetails";
  }
  protected:
  explicit ContactDetails(::google::protobuf::Arena* arena);
  ContactDetails(::google::protobuf::Arena* arena, const ContactDetails& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPhoneNumberFieldNumber = 1,
  };
  // string phone_number = 1 [json_name = "phoneNumber"];
  void clear_phone_number() ;
  const std::string& phone_number() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_phone_number(Arg_&& arg, Args_... args);
  std::string* mutable_phone_number();
  PROTOBUF_NODISCARD std::string* release_phone_number();
  void set_allocated_phone_number(std::string* value);

  private:
  const std::string& _internal_phone_number() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_phone_number(
      const std::string& value);
  std::string* _internal_mutable_phone_number();

  public:
  // @@protoc_insertion_point(class_scope:anduril.entitymanager.v1.ContactDetails)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      60, 2>
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
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr phone_number_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fentitymanager_2fv1_2fcontact_5fdetails_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ContactDetails

// string phone_number = 1 [json_name = "phoneNumber"];
inline void ContactDetails::clear_phone_number() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.phone_number_.ClearToEmpty();
}
inline const std::string& ContactDetails::phone_number() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.ContactDetails.phone_number)
  return _internal_phone_number();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ContactDetails::set_phone_number(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.phone_number_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.entitymanager.v1.ContactDetails.phone_number)
}
inline std::string* ContactDetails::mutable_phone_number() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_phone_number();
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.ContactDetails.phone_number)
  return _s;
}
inline const std::string& ContactDetails::_internal_phone_number() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.phone_number_.Get();
}
inline void ContactDetails::_internal_set_phone_number(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.phone_number_.Set(value, GetArena());
}
inline std::string* ContactDetails::_internal_mutable_phone_number() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.phone_number_.Mutable( GetArena());
}
inline std::string* ContactDetails::release_phone_number() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:anduril.entitymanager.v1.ContactDetails.phone_number)
  return _impl_.phone_number_.Release();
}
inline void ContactDetails::set_allocated_phone_number(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.phone_number_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.phone_number_.IsDefault()) {
          _impl_.phone_number_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.ContactDetails.phone_number)
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2fcontact_5fdetails_2epub_2eproto_2epb_2eh
