// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/entitymanager/v1/schedule.pub.proto
// Protobuf C++ Version: 5.27.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto_2epb_2eh

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
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto;
namespace anduril {
namespace entitymanager {
namespace v1 {
class CronWindow;
struct CronWindowDefaultTypeInternal;
extern CronWindowDefaultTypeInternal _CronWindow_default_instance_;
class Schedule;
struct ScheduleDefaultTypeInternal;
extern ScheduleDefaultTypeInternal _Schedule_default_instance_;
class Schedules;
struct SchedulesDefaultTypeInternal;
extern SchedulesDefaultTypeInternal _Schedules_default_instance_;
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
enum ScheduleType : int {
  SCHEDULE_TYPE_INVALID = 0,
  SCHEDULE_TYPE_ZONE_ENABLED = 1,
  SCHEDULE_TYPE_ZONE_TEMP_ENABLED = 2,
  ScheduleType_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  ScheduleType_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool ScheduleType_IsValid(int value);
extern const uint32_t ScheduleType_internal_data_[];
constexpr ScheduleType ScheduleType_MIN = static_cast<ScheduleType>(0);
constexpr ScheduleType ScheduleType_MAX = static_cast<ScheduleType>(2);
constexpr int ScheduleType_ARRAYSIZE = 2 + 1;
const ::google::protobuf::EnumDescriptor*
ScheduleType_descriptor();
template <typename T>
const std::string& ScheduleType_Name(T value) {
  static_assert(std::is_same<T, ScheduleType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to ScheduleType_Name().");
  return ScheduleType_Name(static_cast<ScheduleType>(value));
}
template <>
inline const std::string& ScheduleType_Name(ScheduleType value) {
  return ::google::protobuf::internal::NameOfDenseEnum<ScheduleType_descriptor,
                                                 0, 2>(
      static_cast<int>(value));
}
inline bool ScheduleType_Parse(absl::string_view name, ScheduleType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ScheduleType>(
      ScheduleType_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class CronWindow final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.entitymanager.v1.CronWindow) */ {
 public:
  inline CronWindow() : CronWindow(nullptr) {}
  ~CronWindow() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR CronWindow(
      ::google::protobuf::internal::ConstantInitialized);

  inline CronWindow(const CronWindow& from) : CronWindow(nullptr, from) {}
  inline CronWindow(CronWindow&& from) noexcept
      : CronWindow(nullptr, std::move(from)) {}
  inline CronWindow& operator=(const CronWindow& from) {
    CopyFrom(from);
    return *this;
  }
  inline CronWindow& operator=(CronWindow&& from) noexcept {
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
  static const CronWindow& default_instance() {
    return *internal_default_instance();
  }
  static inline const CronWindow* internal_default_instance() {
    return reinterpret_cast<const CronWindow*>(
        &_CronWindow_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 2;
  friend void swap(CronWindow& a, CronWindow& b) { a.Swap(&b); }
  inline void Swap(CronWindow* other) {
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
  void UnsafeArenaSwap(CronWindow* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CronWindow* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<CronWindow>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CronWindow& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const CronWindow& from) { CronWindow::MergeImpl(*this, from); }

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
  void InternalSwap(CronWindow* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.entitymanager.v1.CronWindow"; }

 protected:
  explicit CronWindow(::google::protobuf::Arena* arena);
  CronWindow(::google::protobuf::Arena* arena, const CronWindow& from);
  CronWindow(::google::protobuf::Arena* arena, CronWindow&& from) noexcept
      : CronWindow(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kCronExpressionFieldNumber = 1,
    kDurationMillisFieldNumber = 2,
  };
  // string cron_expression = 1 [json_name = "cronExpression"];
  void clear_cron_expression() ;
  const std::string& cron_expression() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_cron_expression(Arg_&& arg, Args_... args);
  std::string* mutable_cron_expression();
  PROTOBUF_NODISCARD std::string* release_cron_expression();
  void set_allocated_cron_expression(std::string* value);

  private:
  const std::string& _internal_cron_expression() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_cron_expression(
      const std::string& value);
  std::string* _internal_mutable_cron_expression();

  public:
  // uint64 duration_millis = 2 [json_name = "durationMillis"];
  void clear_duration_millis() ;
  ::uint64_t duration_millis() const;
  void set_duration_millis(::uint64_t value);

  private:
  ::uint64_t _internal_duration_millis() const;
  void _internal_set_duration_millis(::uint64_t value);

  public:
  // @@protoc_insertion_point(class_scope:anduril.entitymanager.v1.CronWindow)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      59, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_CronWindow_default_instance_;

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
                          const CronWindow& from_msg);
    ::google::protobuf::internal::ArenaStringPtr cron_expression_;
    ::uint64_t duration_millis_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto;
};
// -------------------------------------------------------------------

class Schedule final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.entitymanager.v1.Schedule) */ {
 public:
  inline Schedule() : Schedule(nullptr) {}
  ~Schedule() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Schedule(
      ::google::protobuf::internal::ConstantInitialized);

  inline Schedule(const Schedule& from) : Schedule(nullptr, from) {}
  inline Schedule(Schedule&& from) noexcept
      : Schedule(nullptr, std::move(from)) {}
  inline Schedule& operator=(const Schedule& from) {
    CopyFrom(from);
    return *this;
  }
  inline Schedule& operator=(Schedule&& from) noexcept {
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
  static const Schedule& default_instance() {
    return *internal_default_instance();
  }
  static inline const Schedule* internal_default_instance() {
    return reinterpret_cast<const Schedule*>(
        &_Schedule_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(Schedule& a, Schedule& b) { a.Swap(&b); }
  inline void Swap(Schedule* other) {
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
  void UnsafeArenaSwap(Schedule* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Schedule* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Schedule>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Schedule& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Schedule& from) { Schedule::MergeImpl(*this, from); }

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
  void InternalSwap(Schedule* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.entitymanager.v1.Schedule"; }

 protected:
  explicit Schedule(::google::protobuf::Arena* arena);
  Schedule(::google::protobuf::Arena* arena, const Schedule& from);
  Schedule(::google::protobuf::Arena* arena, Schedule&& from) noexcept
      : Schedule(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kWindowsFieldNumber = 1,
    kScheduleIdFieldNumber = 2,
    kScheduleTypeFieldNumber = 3,
  };
  // repeated .anduril.entitymanager.v1.CronWindow windows = 1 [json_name = "windows"];
  int windows_size() const;
  private:
  int _internal_windows_size() const;

  public:
  void clear_windows() ;
  ::anduril::entitymanager::v1::CronWindow* mutable_windows(int index);
  ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::CronWindow>* mutable_windows();

  private:
  const ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::CronWindow>& _internal_windows() const;
  ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::CronWindow>* _internal_mutable_windows();
  public:
  const ::anduril::entitymanager::v1::CronWindow& windows(int index) const;
  ::anduril::entitymanager::v1::CronWindow* add_windows();
  const ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::CronWindow>& windows() const;
  // string schedule_id = 2 [json_name = "scheduleId"];
  void clear_schedule_id() ;
  const std::string& schedule_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_schedule_id(Arg_&& arg, Args_... args);
  std::string* mutable_schedule_id();
  PROTOBUF_NODISCARD std::string* release_schedule_id();
  void set_allocated_schedule_id(std::string* value);

  private:
  const std::string& _internal_schedule_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_schedule_id(
      const std::string& value);
  std::string* _internal_mutable_schedule_id();

  public:
  // .anduril.entitymanager.v1.ScheduleType schedule_type = 3 [json_name = "scheduleType"];
  void clear_schedule_type() ;
  ::anduril::entitymanager::v1::ScheduleType schedule_type() const;
  void set_schedule_type(::anduril::entitymanager::v1::ScheduleType value);

  private:
  ::anduril::entitymanager::v1::ScheduleType _internal_schedule_type() const;
  void _internal_set_schedule_type(::anduril::entitymanager::v1::ScheduleType value);

  public:
  // @@protoc_insertion_point(class_scope:anduril.entitymanager.v1.Schedule)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 1,
      53, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Schedule_default_instance_;

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
                          const Schedule& from_msg);
    ::google::protobuf::RepeatedPtrField< ::anduril::entitymanager::v1::CronWindow > windows_;
    ::google::protobuf::internal::ArenaStringPtr schedule_id_;
    int schedule_type_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto;
};
// -------------------------------------------------------------------

class Schedules final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.entitymanager.v1.Schedules) */ {
 public:
  inline Schedules() : Schedules(nullptr) {}
  ~Schedules() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Schedules(
      ::google::protobuf::internal::ConstantInitialized);

  inline Schedules(const Schedules& from) : Schedules(nullptr, from) {}
  inline Schedules(Schedules&& from) noexcept
      : Schedules(nullptr, std::move(from)) {}
  inline Schedules& operator=(const Schedules& from) {
    CopyFrom(from);
    return *this;
  }
  inline Schedules& operator=(Schedules&& from) noexcept {
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
  static const Schedules& default_instance() {
    return *internal_default_instance();
  }
  static inline const Schedules* internal_default_instance() {
    return reinterpret_cast<const Schedules*>(
        &_Schedules_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Schedules& a, Schedules& b) { a.Swap(&b); }
  inline void Swap(Schedules* other) {
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
  void UnsafeArenaSwap(Schedules* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Schedules* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Schedules>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Schedules& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Schedules& from) { Schedules::MergeImpl(*this, from); }

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
  void InternalSwap(Schedules* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.entitymanager.v1.Schedules"; }

 protected:
  explicit Schedules(::google::protobuf::Arena* arena);
  Schedules(::google::protobuf::Arena* arena, const Schedules& from);
  Schedules(::google::protobuf::Arena* arena, Schedules&& from) noexcept
      : Schedules(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kSchedulesFieldNumber = 1,
  };
  // repeated .anduril.entitymanager.v1.Schedule schedules = 1 [json_name = "schedules"];
  int schedules_size() const;
  private:
  int _internal_schedules_size() const;

  public:
  void clear_schedules() ;
  ::anduril::entitymanager::v1::Schedule* mutable_schedules(int index);
  ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::Schedule>* mutable_schedules();

  private:
  const ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::Schedule>& _internal_schedules() const;
  ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::Schedule>* _internal_mutable_schedules();
  public:
  const ::anduril::entitymanager::v1::Schedule& schedules(int index) const;
  ::anduril::entitymanager::v1::Schedule* add_schedules();
  const ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::Schedule>& schedules() const;
  // @@protoc_insertion_point(class_scope:anduril.entitymanager.v1.Schedules)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 1,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Schedules_default_instance_;

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
                          const Schedules& from_msg);
    ::google::protobuf::RepeatedPtrField< ::anduril::entitymanager::v1::Schedule > schedules_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Schedules

// repeated .anduril.entitymanager.v1.Schedule schedules = 1 [json_name = "schedules"];
inline int Schedules::_internal_schedules_size() const {
  return _internal_schedules().size();
}
inline int Schedules::schedules_size() const {
  return _internal_schedules_size();
}
inline void Schedules::clear_schedules() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.schedules_.Clear();
}
inline ::anduril::entitymanager::v1::Schedule* Schedules::mutable_schedules(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.Schedules.schedules)
  return _internal_mutable_schedules()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::Schedule>* Schedules::mutable_schedules()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:anduril.entitymanager.v1.Schedules.schedules)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_schedules();
}
inline const ::anduril::entitymanager::v1::Schedule& Schedules::schedules(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.Schedules.schedules)
  return _internal_schedules().Get(index);
}
inline ::anduril::entitymanager::v1::Schedule* Schedules::add_schedules() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::anduril::entitymanager::v1::Schedule* _add = _internal_mutable_schedules()->Add();
  // @@protoc_insertion_point(field_add:anduril.entitymanager.v1.Schedules.schedules)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::Schedule>& Schedules::schedules() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:anduril.entitymanager.v1.Schedules.schedules)
  return _internal_schedules();
}
inline const ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::Schedule>&
Schedules::_internal_schedules() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.schedules_;
}
inline ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::Schedule>*
Schedules::_internal_mutable_schedules() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.schedules_;
}

// -------------------------------------------------------------------

// Schedule

// repeated .anduril.entitymanager.v1.CronWindow windows = 1 [json_name = "windows"];
inline int Schedule::_internal_windows_size() const {
  return _internal_windows().size();
}
inline int Schedule::windows_size() const {
  return _internal_windows_size();
}
inline void Schedule::clear_windows() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.windows_.Clear();
}
inline ::anduril::entitymanager::v1::CronWindow* Schedule::mutable_windows(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.Schedule.windows)
  return _internal_mutable_windows()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::CronWindow>* Schedule::mutable_windows()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:anduril.entitymanager.v1.Schedule.windows)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_windows();
}
inline const ::anduril::entitymanager::v1::CronWindow& Schedule::windows(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.Schedule.windows)
  return _internal_windows().Get(index);
}
inline ::anduril::entitymanager::v1::CronWindow* Schedule::add_windows() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::anduril::entitymanager::v1::CronWindow* _add = _internal_mutable_windows()->Add();
  // @@protoc_insertion_point(field_add:anduril.entitymanager.v1.Schedule.windows)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::CronWindow>& Schedule::windows() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:anduril.entitymanager.v1.Schedule.windows)
  return _internal_windows();
}
inline const ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::CronWindow>&
Schedule::_internal_windows() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.windows_;
}
inline ::google::protobuf::RepeatedPtrField<::anduril::entitymanager::v1::CronWindow>*
Schedule::_internal_mutable_windows() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.windows_;
}

// string schedule_id = 2 [json_name = "scheduleId"];
inline void Schedule::clear_schedule_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.schedule_id_.ClearToEmpty();
}
inline const std::string& Schedule::schedule_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.Schedule.schedule_id)
  return _internal_schedule_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Schedule::set_schedule_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.schedule_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.entitymanager.v1.Schedule.schedule_id)
}
inline std::string* Schedule::mutable_schedule_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_schedule_id();
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.Schedule.schedule_id)
  return _s;
}
inline const std::string& Schedule::_internal_schedule_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.schedule_id_.Get();
}
inline void Schedule::_internal_set_schedule_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.schedule_id_.Set(value, GetArena());
}
inline std::string* Schedule::_internal_mutable_schedule_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.schedule_id_.Mutable( GetArena());
}
inline std::string* Schedule::release_schedule_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.entitymanager.v1.Schedule.schedule_id)
  return _impl_.schedule_id_.Release();
}
inline void Schedule::set_allocated_schedule_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.schedule_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.schedule_id_.IsDefault()) {
          _impl_.schedule_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.Schedule.schedule_id)
}

// .anduril.entitymanager.v1.ScheduleType schedule_type = 3 [json_name = "scheduleType"];
inline void Schedule::clear_schedule_type() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.schedule_type_ = 0;
}
inline ::anduril::entitymanager::v1::ScheduleType Schedule::schedule_type() const {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.Schedule.schedule_type)
  return _internal_schedule_type();
}
inline void Schedule::set_schedule_type(::anduril::entitymanager::v1::ScheduleType value) {
  _internal_set_schedule_type(value);
  // @@protoc_insertion_point(field_set:anduril.entitymanager.v1.Schedule.schedule_type)
}
inline ::anduril::entitymanager::v1::ScheduleType Schedule::_internal_schedule_type() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return static_cast<::anduril::entitymanager::v1::ScheduleType>(_impl_.schedule_type_);
}
inline void Schedule::_internal_set_schedule_type(::anduril::entitymanager::v1::ScheduleType value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.schedule_type_ = value;
}

// -------------------------------------------------------------------

// CronWindow

// string cron_expression = 1 [json_name = "cronExpression"];
inline void CronWindow::clear_cron_expression() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cron_expression_.ClearToEmpty();
}
inline const std::string& CronWindow::cron_expression() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.CronWindow.cron_expression)
  return _internal_cron_expression();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CronWindow::set_cron_expression(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cron_expression_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.entitymanager.v1.CronWindow.cron_expression)
}
inline std::string* CronWindow::mutable_cron_expression() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_cron_expression();
  // @@protoc_insertion_point(field_mutable:anduril.entitymanager.v1.CronWindow.cron_expression)
  return _s;
}
inline const std::string& CronWindow::_internal_cron_expression() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.cron_expression_.Get();
}
inline void CronWindow::_internal_set_cron_expression(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cron_expression_.Set(value, GetArena());
}
inline std::string* CronWindow::_internal_mutable_cron_expression() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.cron_expression_.Mutable( GetArena());
}
inline std::string* CronWindow::release_cron_expression() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.entitymanager.v1.CronWindow.cron_expression)
  return _impl_.cron_expression_.Release();
}
inline void CronWindow::set_allocated_cron_expression(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cron_expression_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.cron_expression_.IsDefault()) {
          _impl_.cron_expression_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.entitymanager.v1.CronWindow.cron_expression)
}

// uint64 duration_millis = 2 [json_name = "durationMillis"];
inline void CronWindow::clear_duration_millis() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.duration_millis_ = ::uint64_t{0u};
}
inline ::uint64_t CronWindow::duration_millis() const {
  // @@protoc_insertion_point(field_get:anduril.entitymanager.v1.CronWindow.duration_millis)
  return _internal_duration_millis();
}
inline void CronWindow::set_duration_millis(::uint64_t value) {
  _internal_set_duration_millis(value);
  // @@protoc_insertion_point(field_set:anduril.entitymanager.v1.CronWindow.duration_millis)
}
inline ::uint64_t CronWindow::_internal_duration_millis() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.duration_millis_;
}
inline void CronWindow::_internal_set_duration_millis(::uint64_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.duration_millis_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace entitymanager
}  // namespace anduril


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::anduril::entitymanager::v1::ScheduleType> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::anduril::entitymanager::v1::ScheduleType>() {
  return ::anduril::entitymanager::v1::ScheduleType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2fentitymanager_2fv1_2fschedule_2epub_2eproto_2epb_2eh
