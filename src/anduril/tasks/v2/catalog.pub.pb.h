// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: anduril/tasks/v2/catalog.pub.proto
// Protobuf C++ Version: 5.28.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto;
namespace anduril {
namespace tasks {
namespace v2 {
class TaskCatalog;
struct TaskCatalogDefaultTypeInternal;
extern TaskCatalogDefaultTypeInternal _TaskCatalog_default_instance_;
class TaskDefinition;
struct TaskDefinitionDefaultTypeInternal;
extern TaskDefinitionDefaultTypeInternal _TaskDefinition_default_instance_;
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

class TaskDefinition final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.tasks.v2.TaskDefinition) */ {
 public:
  inline TaskDefinition() : TaskDefinition(nullptr) {}
  ~TaskDefinition() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR TaskDefinition(
      ::google::protobuf::internal::ConstantInitialized);

  inline TaskDefinition(const TaskDefinition& from) : TaskDefinition(nullptr, from) {}
  inline TaskDefinition(TaskDefinition&& from) noexcept
      : TaskDefinition(nullptr, std::move(from)) {}
  inline TaskDefinition& operator=(const TaskDefinition& from) {
    CopyFrom(from);
    return *this;
  }
  inline TaskDefinition& operator=(TaskDefinition&& from) noexcept {
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
  static const TaskDefinition& default_instance() {
    return *internal_default_instance();
  }
  static inline const TaskDefinition* internal_default_instance() {
    return reinterpret_cast<const TaskDefinition*>(
        &_TaskDefinition_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(TaskDefinition& a, TaskDefinition& b) { a.Swap(&b); }
  inline void Swap(TaskDefinition* other) {
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
  void UnsafeArenaSwap(TaskDefinition* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TaskDefinition* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<TaskDefinition>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const TaskDefinition& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const TaskDefinition& from) { TaskDefinition::MergeImpl(*this, from); }

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
  void InternalSwap(TaskDefinition* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.tasks.v2.TaskDefinition"; }

 protected:
  explicit TaskDefinition(::google::protobuf::Arena* arena);
  TaskDefinition(::google::protobuf::Arena* arena, const TaskDefinition& from);
  TaskDefinition(::google::protobuf::Arena* arena, TaskDefinition&& from) noexcept
      : TaskDefinition(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kTaskSpecificationUrlFieldNumber = 1,
    kDisplayNameFieldNumber = 2,
  };
  // string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
  void clear_task_specification_url() ;
  const std::string& task_specification_url() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_task_specification_url(Arg_&& arg, Args_... args);
  std::string* mutable_task_specification_url();
  PROTOBUF_NODISCARD std::string* release_task_specification_url();
  void set_allocated_task_specification_url(std::string* value);

  private:
  const std::string& _internal_task_specification_url() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_task_specification_url(
      const std::string& value);
  std::string* _internal_mutable_task_specification_url();

  public:
  // string display_name = 2 [json_name = "displayName"];
  void clear_display_name() ;
  const std::string& display_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_display_name(Arg_&& arg, Args_... args);
  std::string* mutable_display_name();
  PROTOBUF_NODISCARD std::string* release_display_name();
  void set_allocated_display_name(std::string* value);

  private:
  const std::string& _internal_display_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_display_name(
      const std::string& value);
  std::string* _internal_mutable_display_name();

  public:
  // @@protoc_insertion_point(class_scope:anduril.tasks.v2.TaskDefinition)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      74, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_TaskDefinition_default_instance_;

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
                          const TaskDefinition& from_msg);
    ::google::protobuf::internal::ArenaStringPtr task_specification_url_;
    ::google::protobuf::internal::ArenaStringPtr display_name_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto;
};
// -------------------------------------------------------------------

class TaskCatalog final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:anduril.tasks.v2.TaskCatalog) */ {
 public:
  inline TaskCatalog() : TaskCatalog(nullptr) {}
  ~TaskCatalog() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR TaskCatalog(
      ::google::protobuf::internal::ConstantInitialized);

  inline TaskCatalog(const TaskCatalog& from) : TaskCatalog(nullptr, from) {}
  inline TaskCatalog(TaskCatalog&& from) noexcept
      : TaskCatalog(nullptr, std::move(from)) {}
  inline TaskCatalog& operator=(const TaskCatalog& from) {
    CopyFrom(from);
    return *this;
  }
  inline TaskCatalog& operator=(TaskCatalog&& from) noexcept {
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
  static const TaskCatalog& default_instance() {
    return *internal_default_instance();
  }
  static inline const TaskCatalog* internal_default_instance() {
    return reinterpret_cast<const TaskCatalog*>(
        &_TaskCatalog_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(TaskCatalog& a, TaskCatalog& b) { a.Swap(&b); }
  inline void Swap(TaskCatalog* other) {
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
  void UnsafeArenaSwap(TaskCatalog* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TaskCatalog* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<TaskCatalog>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const TaskCatalog& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const TaskCatalog& from) { TaskCatalog::MergeImpl(*this, from); }

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
  void InternalSwap(TaskCatalog* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "anduril.tasks.v2.TaskCatalog"; }

 protected:
  explicit TaskCatalog(::google::protobuf::Arena* arena);
  TaskCatalog(::google::protobuf::Arena* arena, const TaskCatalog& from);
  TaskCatalog(::google::protobuf::Arena* arena, TaskCatalog&& from) noexcept
      : TaskCatalog(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kTaskDefinitionsFieldNumber = 1,
  };
  // repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
  int task_definitions_size() const;
  private:
  int _internal_task_definitions_size() const;

  public:
  void clear_task_definitions() ;
  ::anduril::tasks::v2::TaskDefinition* mutable_task_definitions(int index);
  ::google::protobuf::RepeatedPtrField<::anduril::tasks::v2::TaskDefinition>* mutable_task_definitions();

  private:
  const ::google::protobuf::RepeatedPtrField<::anduril::tasks::v2::TaskDefinition>& _internal_task_definitions() const;
  ::google::protobuf::RepeatedPtrField<::anduril::tasks::v2::TaskDefinition>* _internal_mutable_task_definitions();
  public:
  const ::anduril::tasks::v2::TaskDefinition& task_definitions(int index) const;
  ::anduril::tasks::v2::TaskDefinition* add_task_definitions();
  const ::google::protobuf::RepeatedPtrField<::anduril::tasks::v2::TaskDefinition>& task_definitions() const;
  // @@protoc_insertion_point(class_scope:anduril.tasks.v2.TaskCatalog)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 1,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_TaskCatalog_default_instance_;

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
                          const TaskCatalog& from_msg);
    ::google::protobuf::RepeatedPtrField< ::anduril::tasks::v2::TaskDefinition > task_definitions_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// TaskCatalog

// repeated .anduril.tasks.v2.TaskDefinition task_definitions = 1 [json_name = "taskDefinitions"];
inline int TaskCatalog::_internal_task_definitions_size() const {
  return _internal_task_definitions().size();
}
inline int TaskCatalog::task_definitions_size() const {
  return _internal_task_definitions_size();
}
inline void TaskCatalog::clear_task_definitions() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.task_definitions_.Clear();
}
inline ::anduril::tasks::v2::TaskDefinition* TaskCatalog::mutable_task_definitions(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:anduril.tasks.v2.TaskCatalog.task_definitions)
  return _internal_mutable_task_definitions()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::anduril::tasks::v2::TaskDefinition>* TaskCatalog::mutable_task_definitions()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:anduril.tasks.v2.TaskCatalog.task_definitions)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_task_definitions();
}
inline const ::anduril::tasks::v2::TaskDefinition& TaskCatalog::task_definitions(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.v2.TaskCatalog.task_definitions)
  return _internal_task_definitions().Get(index);
}
inline ::anduril::tasks::v2::TaskDefinition* TaskCatalog::add_task_definitions() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::anduril::tasks::v2::TaskDefinition* _add = _internal_mutable_task_definitions()->Add();
  // @@protoc_insertion_point(field_add:anduril.tasks.v2.TaskCatalog.task_definitions)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::anduril::tasks::v2::TaskDefinition>& TaskCatalog::task_definitions() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:anduril.tasks.v2.TaskCatalog.task_definitions)
  return _internal_task_definitions();
}
inline const ::google::protobuf::RepeatedPtrField<::anduril::tasks::v2::TaskDefinition>&
TaskCatalog::_internal_task_definitions() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.task_definitions_;
}
inline ::google::protobuf::RepeatedPtrField<::anduril::tasks::v2::TaskDefinition>*
TaskCatalog::_internal_mutable_task_definitions() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.task_definitions_;
}

// -------------------------------------------------------------------

// TaskDefinition

// string task_specification_url = 1 [json_name = "taskSpecificationUrl"];
inline void TaskDefinition::clear_task_specification_url() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.task_specification_url_.ClearToEmpty();
}
inline const std::string& TaskDefinition::task_specification_url() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.v2.TaskDefinition.task_specification_url)
  return _internal_task_specification_url();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void TaskDefinition::set_task_specification_url(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.task_specification_url_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.tasks.v2.TaskDefinition.task_specification_url)
}
inline std::string* TaskDefinition::mutable_task_specification_url() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_task_specification_url();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.v2.TaskDefinition.task_specification_url)
  return _s;
}
inline const std::string& TaskDefinition::_internal_task_specification_url() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.task_specification_url_.Get();
}
inline void TaskDefinition::_internal_set_task_specification_url(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.task_specification_url_.Set(value, GetArena());
}
inline std::string* TaskDefinition::_internal_mutable_task_specification_url() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.task_specification_url_.Mutable( GetArena());
}
inline std::string* TaskDefinition::release_task_specification_url() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.v2.TaskDefinition.task_specification_url)
  return _impl_.task_specification_url_.Release();
}
inline void TaskDefinition::set_allocated_task_specification_url(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.task_specification_url_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.task_specification_url_.IsDefault()) {
          _impl_.task_specification_url_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.v2.TaskDefinition.task_specification_url)
}

// string display_name = 2 [json_name = "displayName"];
inline void TaskDefinition::clear_display_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.display_name_.ClearToEmpty();
}
inline const std::string& TaskDefinition::display_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:anduril.tasks.v2.TaskDefinition.display_name)
  return _internal_display_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void TaskDefinition::set_display_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.display_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:anduril.tasks.v2.TaskDefinition.display_name)
}
inline std::string* TaskDefinition::mutable_display_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_display_name();
  // @@protoc_insertion_point(field_mutable:anduril.tasks.v2.TaskDefinition.display_name)
  return _s;
}
inline const std::string& TaskDefinition::_internal_display_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.display_name_.Get();
}
inline void TaskDefinition::_internal_set_display_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.display_name_.Set(value, GetArena());
}
inline std::string* TaskDefinition::_internal_mutable_display_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.display_name_.Mutable( GetArena());
}
inline std::string* TaskDefinition::release_display_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:anduril.tasks.v2.TaskDefinition.display_name)
  return _impl_.display_name_.Release();
}
inline void TaskDefinition::set_allocated_display_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.display_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.display_name_.IsDefault()) {
          _impl_.display_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:anduril.tasks.v2.TaskDefinition.display_name)
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_anduril_2ftasks_2fv2_2fcatalog_2epub_2eproto_2epb_2eh
