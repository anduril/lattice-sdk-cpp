// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/tasks/jadc2/thirdparty/v1/power.pub.proto
// Protobuf C++ Version: 5.28.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5028002
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
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto;
namespace anduril {
namespace tasks {
namespace jadc2 {
namespace thirdparty {
namespace v1 {
class SetPowerState;
struct SetPowerStateDefaultTypeInternal;
extern SetPowerStateDefaultTypeInternal _SetPowerState_default_instance_;
}  // namespace v1
}  // namespace thirdparty
}  // namespace jadc2
}  // namespace tasks
}  // namespace anduril
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace anduril {
namespace tasks {
namespace jadc2 {
namespace thirdparty {
namespace v1 {
enum PowerState : int {
  POWER_STATE_INVALID = 0,
  POWER_STATE_ON = 1,
  POWER_STATE_OFF = 2,
  PowerState_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  PowerState_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool PowerState_IsValid(int value);
extern const uint32_t PowerState_internal_data_[];
constexpr PowerState PowerState_MIN = static_cast<PowerState>(0);
constexpr PowerState PowerState_MAX = static_cast<PowerState>(2);
constexpr int PowerState_ARRAYSIZE = 2 + 1;
const ::google::protobuf::EnumDescriptor*
PowerState_descriptor();
template <typename T>
const std::string& PowerState_Name(T value) {
  static_assert(std::is_same<T, PowerState>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to PowerState_Name().");
  return PowerState_Name(static_cast<PowerState>(value));
}
template <>
inline const std::string& PowerState_Name(PowerState value) {
  return ::google::protobuf::internal::NameOfDenseEnum<PowerState_descriptor,
                                                 0, 2>(
      static_cast<int>(value));
}
inline bool PowerState_Parse(absl::string_view name, PowerState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PowerState>(
      PowerState_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class SetPowerState final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.tasks.jadc2.thirdparty.v1.SetPowerState) */ {
 public:
  inline SetPowerState() : SetPowerState(nullptr) {}
  ~SetPowerState() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR SetPowerState(
      ::google::protobuf::internal::ConstantInitialized);

  inline SetPowerState(const SetPowerState& from) : SetPowerState(nullptr, from) {}
  inline SetPowerState(SetPowerState&& from) noexcept
      : SetPowerState(nullptr, std::move(from)) {}
  inline SetPowerState& operator=(const SetPowerState& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetPowerState& operator=(SetPowerState&& from) noexcept {
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
  static const SetPowerState& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetPowerState* internal_default_instance() {
    return reinterpret_cast<const SetPowerState*>(
        &_SetPowerState_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(SetPowerState& a, SetPowerState& b) { a.Swap(&b); }
  inline void Swap(SetPowerState* other) {
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
  void UnsafeArenaSwap(SetPowerState* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetPowerState* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<SetPowerState>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const SetPowerState& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const SetPowerState& from) { SetPowerState::MergeImpl(*this, from); }

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
  void InternalSwap(SetPowerState* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.tasks.jadc2.thirdparty.v1.SetPowerState"; }

 protected:
  explicit SetPowerState(::google::protobuf::Arena* arena);
  SetPowerState(::google::protobuf::Arena* arena, const SetPowerState& from);
  SetPowerState(::google::protobuf::Arena* arena, SetPowerState&& from) noexcept
      : SetPowerState(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kPowerStateFieldNumber = 1,
  };
  // .anduril.tasks.jadc2.thirdparty.v1.PowerState power_state = 1 [json_name = "powerState"];
  void clear_power_state() ;
  ::anduril::tasks::jadc2::thirdparty::v1::PowerState power_state() const;
  void set_power_state(::anduril::tasks::jadc2::thirdparty::v1::PowerState value);

  private:
  ::anduril::tasks::jadc2::thirdparty::v1::PowerState _internal_power_state() const;
  void _internal_set_power_state(::anduril::tasks::jadc2::thirdparty::v1::PowerState value);

  public:
  // @@protoc_insertion_point(class_scope:anduril.tasks.jadc2.thirdparty.v1.SetPowerState)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_SetPowerState_default_instance_;

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
                          const SetPowerState& from_msg);
    int power_state_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// SetPowerState

// .anduril.tasks.jadc2.thirdparty.v1.PowerState power_state = 1 [json_name = "powerState"];
inline void SetPowerState::clear_power_state() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.power_state_ = 0;
}
inline ::anduril::tasks::jadc2::thirdparty::v1::PowerState SetPowerState::power_state() const {
  // @@protoc_insertion_point(field_get:anduril.tasks.jadc2.thirdparty.v1.SetPowerState.power_state)
  return _internal_power_state();
}
inline void SetPowerState::set_power_state(::anduril::tasks::jadc2::thirdparty::v1::PowerState value) {
  _internal_set_power_state(value);
  // @@protoc_insertion_point(field_set:anduril.tasks.jadc2.thirdparty.v1.SetPowerState.power_state)
}
inline ::anduril::tasks::jadc2::thirdparty::v1::PowerState SetPowerState::_internal_power_state() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return static_cast<::anduril::tasks::jadc2::thirdparty::v1::PowerState>(_impl_.power_state_);
}
inline void SetPowerState::_internal_set_power_state(::anduril::tasks::jadc2::thirdparty::v1::PowerState value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.power_state_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace thirdparty
}  // namespace jadc2
}  // namespace tasks
}  // namespace anduril


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::anduril::tasks::jadc2::thirdparty::v1::PowerState> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::anduril::tasks::jadc2::thirdparty::v1::PowerState>() {
  return ::anduril::tasks::jadc2::thirdparty::v1::PowerState_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2ftasks_2fjadc2_2fthirdparty_2fv1_2fpower_2epub_2eproto_2epb_2eh