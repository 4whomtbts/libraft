// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Student.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Student_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Student_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Student_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Student_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Student_2eproto;
namespace student {
class Reply;
class ReplyDefaultTypeInternal;
extern ReplyDefaultTypeInternal _Reply_default_instance_;
class Student;
class StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class Student_PhoneNumber;
class Student_PhoneNumberDefaultTypeInternal;
extern Student_PhoneNumberDefaultTypeInternal _Student_PhoneNumber_default_instance_;
}  // namespace student
PROTOBUF_NAMESPACE_OPEN
template<> ::student::Reply* Arena::CreateMaybeMessage<::student::Reply>(Arena*);
template<> ::student::Student* Arena::CreateMaybeMessage<::student::Student>(Arena*);
template<> ::student::Student_PhoneNumber* Arena::CreateMaybeMessage<::student::Student_PhoneNumber>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace student {

enum Student_PhoneType : int {
  Student_PhoneType_MOBILE = 0,
  Student_PhoneType_HOME = 1,
  Student_PhoneType_LAB = 2,
  Student_PhoneType_Student_PhoneType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Student_PhoneType_Student_PhoneType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Student_PhoneType_IsValid(int value);
constexpr Student_PhoneType Student_PhoneType_PhoneType_MIN = Student_PhoneType_MOBILE;
constexpr Student_PhoneType Student_PhoneType_PhoneType_MAX = Student_PhoneType_LAB;
constexpr int Student_PhoneType_PhoneType_ARRAYSIZE = Student_PhoneType_PhoneType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Student_PhoneType_descriptor();
template<typename T>
inline const std::string& Student_PhoneType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Student_PhoneType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Student_PhoneType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Student_PhoneType_descriptor(), enum_t_value);
}
inline bool Student_PhoneType_Parse(
    const std::string& name, Student_PhoneType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Student_PhoneType>(
    Student_PhoneType_descriptor(), name, value);
}
// ===================================================================

class Student_PhoneNumber :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:student.Student.PhoneNumber) */ {
 public:
  Student_PhoneNumber();
  virtual ~Student_PhoneNumber();

  Student_PhoneNumber(const Student_PhoneNumber& from);
  Student_PhoneNumber(Student_PhoneNumber&& from) noexcept
    : Student_PhoneNumber() {
    *this = ::std::move(from);
  }

  inline Student_PhoneNumber& operator=(const Student_PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student_PhoneNumber& operator=(Student_PhoneNumber&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Student_PhoneNumber& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Student_PhoneNumber* internal_default_instance() {
    return reinterpret_cast<const Student_PhoneNumber*>(
               &_Student_PhoneNumber_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Student_PhoneNumber* other);
  friend void swap(Student_PhoneNumber& a, Student_PhoneNumber& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Student_PhoneNumber* New() const final {
    return CreateMaybeMessage<Student_PhoneNumber>(nullptr);
  }

  Student_PhoneNumber* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student_PhoneNumber>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student_PhoneNumber& from);
  void MergeFrom(const Student_PhoneNumber& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student_PhoneNumber* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "student.Student.PhoneNumber";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Student_2eproto);
    return ::descriptor_table_Student_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string number = 1;
  void clear_number();
  static const int kNumberFieldNumber = 1;
  const std::string& number() const;
  void set_number(const std::string& value);
  void set_number(std::string&& value);
  void set_number(const char* value);
  void set_number(const char* value, size_t size);
  std::string* mutable_number();
  std::string* release_number();
  void set_allocated_number(std::string* number);

  // .student.Student.PhoneType type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::student::Student_PhoneType type() const;
  void set_type(::student::Student_PhoneType value);

  // @@protoc_insertion_point(class_scope:student.Student.PhoneNumber)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr number_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Student_2eproto;
};
// -------------------------------------------------------------------

class Student :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:student.Student) */ {
 public:
  Student();
  virtual ~Student();

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Student& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Student* other);
  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return CreateMaybeMessage<Student>(nullptr);
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "student.Student";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Student_2eproto);
    return ::descriptor_table_Student_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Student_PhoneNumber PhoneNumber;

  typedef Student_PhoneType PhoneType;
  static constexpr PhoneType MOBILE =
    Student_PhoneType_MOBILE;
  static constexpr PhoneType HOME =
    Student_PhoneType_HOME;
  static constexpr PhoneType LAB =
    Student_PhoneType_LAB;
  static inline bool PhoneType_IsValid(int value) {
    return Student_PhoneType_IsValid(value);
  }
  static constexpr PhoneType PhoneType_MIN =
    Student_PhoneType_PhoneType_MIN;
  static constexpr PhoneType PhoneType_MAX =
    Student_PhoneType_PhoneType_MAX;
  static constexpr int PhoneType_ARRAYSIZE =
    Student_PhoneType_PhoneType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PhoneType_descriptor() {
    return Student_PhoneType_descriptor();
  }
  template<typename T>
  static inline const std::string& PhoneType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PhoneType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PhoneType_Name.");
    return Student_PhoneType_Name(enum_t_value);
  }
  static inline bool PhoneType_Parse(const std::string& name,
      PhoneType* value) {
    return Student_PhoneType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .student.Student.PhoneNumber phones = 6;
  int phones_size() const;
  void clear_phones();
  static const int kPhonesFieldNumber = 6;
  ::student::Student_PhoneNumber* mutable_phones(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::student::Student_PhoneNumber >*
      mutable_phones();
  const ::student::Student_PhoneNumber& phones(int index) const;
  ::student::Student_PhoneNumber* add_phones();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::student::Student_PhoneNumber >&
      phones() const;

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // string dept = 3;
  void clear_dept();
  static const int kDeptFieldNumber = 3;
  const std::string& dept() const;
  void set_dept(const std::string& value);
  void set_dept(std::string&& value);
  void set_dept(const char* value);
  void set_dept(const char* value, size_t size);
  std::string* mutable_dept();
  std::string* release_dept();
  void set_allocated_dept(std::string* dept);

  // string major = 4;
  void clear_major();
  static const int kMajorFieldNumber = 4;
  const std::string& major() const;
  void set_major(const std::string& value);
  void set_major(std::string&& value);
  void set_major(const char* value);
  void set_major(const char* value, size_t size);
  std::string* mutable_major();
  std::string* release_major();
  void set_allocated_major(std::string* major);

  // string GPA = 5;
  void clear_gpa();
  static const int kGPAFieldNumber = 5;
  const std::string& gpa() const;
  void set_gpa(const std::string& value);
  void set_gpa(std::string&& value);
  void set_gpa(const char* value);
  void set_gpa(const char* value, size_t size);
  std::string* mutable_gpa();
  std::string* release_gpa();
  void set_allocated_gpa(std::string* gpa);

  // int64 studentID = 1;
  void clear_studentid();
  static const int kStudentIDFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int64 studentid() const;
  void set_studentid(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:student.Student)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::student::Student_PhoneNumber > phones_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr dept_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr major_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr gpa_;
  ::PROTOBUF_NAMESPACE_ID::int64 studentid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Student_2eproto;
};
// -------------------------------------------------------------------

class Reply :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:student.Reply) */ {
 public:
  Reply();
  virtual ~Reply();

  Reply(const Reply& from);
  Reply(Reply&& from) noexcept
    : Reply() {
    *this = ::std::move(from);
  }

  inline Reply& operator=(const Reply& from) {
    CopyFrom(from);
    return *this;
  }
  inline Reply& operator=(Reply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Reply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Reply* internal_default_instance() {
    return reinterpret_cast<const Reply*>(
               &_Reply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Reply* other);
  friend void swap(Reply& a, Reply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Reply* New() const final {
    return CreateMaybeMessage<Reply>(nullptr);
  }

  Reply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Reply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Reply& from);
  void MergeFrom(const Reply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Reply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "student.Reply";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Student_2eproto);
    return ::descriptor_table_Student_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 1;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);

  // @@protoc_insertion_point(class_scope:student.Reply)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Student_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Student_PhoneNumber

// string number = 1;
inline void Student_PhoneNumber::clear_number() {
  number_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Student_PhoneNumber::number() const {
  // @@protoc_insertion_point(field_get:student.Student.PhoneNumber.number)
  return number_.GetNoArena();
}
inline void Student_PhoneNumber::set_number(const std::string& value) {
  
  number_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:student.Student.PhoneNumber.number)
}
inline void Student_PhoneNumber::set_number(std::string&& value) {
  
  number_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:student.Student.PhoneNumber.number)
}
inline void Student_PhoneNumber::set_number(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  number_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:student.Student.PhoneNumber.number)
}
inline void Student_PhoneNumber::set_number(const char* value, size_t size) {
  
  number_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:student.Student.PhoneNumber.number)
}
inline std::string* Student_PhoneNumber::mutable_number() {
  
  // @@protoc_insertion_point(field_mutable:student.Student.PhoneNumber.number)
  return number_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Student_PhoneNumber::release_number() {
  // @@protoc_insertion_point(field_release:student.Student.PhoneNumber.number)
  
  return number_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Student_PhoneNumber::set_allocated_number(std::string* number) {
  if (number != nullptr) {
    
  } else {
    
  }
  number_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), number);
  // @@protoc_insertion_point(field_set_allocated:student.Student.PhoneNumber.number)
}

// .student.Student.PhoneType type = 2;
inline void Student_PhoneNumber::clear_type() {
  type_ = 0;
}
inline ::student::Student_PhoneType Student_PhoneNumber::type() const {
  // @@protoc_insertion_point(field_get:student.Student.PhoneNumber.type)
  return static_cast< ::student::Student_PhoneType >(type_);
}
inline void Student_PhoneNumber::set_type(::student::Student_PhoneType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:student.Student.PhoneNumber.type)
}

// -------------------------------------------------------------------

// Student

// int64 studentID = 1;
inline void Student::clear_studentid() {
  studentid_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Student::studentid() const {
  // @@protoc_insertion_point(field_get:student.Student.studentID)
  return studentid_;
}
inline void Student::set_studentid(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  studentid_ = value;
  // @@protoc_insertion_point(field_set:student.Student.studentID)
}

// string name = 2;
inline void Student::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Student::name() const {
  // @@protoc_insertion_point(field_get:student.Student.name)
  return name_.GetNoArena();
}
inline void Student::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:student.Student.name)
}
inline void Student::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:student.Student.name)
}
inline void Student::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:student.Student.name)
}
inline void Student::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:student.Student.name)
}
inline std::string* Student::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:student.Student.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Student::release_name() {
  // @@protoc_insertion_point(field_release:student.Student.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Student::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:student.Student.name)
}

// string dept = 3;
inline void Student::clear_dept() {
  dept_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Student::dept() const {
  // @@protoc_insertion_point(field_get:student.Student.dept)
  return dept_.GetNoArena();
}
inline void Student::set_dept(const std::string& value) {
  
  dept_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:student.Student.dept)
}
inline void Student::set_dept(std::string&& value) {
  
  dept_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:student.Student.dept)
}
inline void Student::set_dept(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  dept_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:student.Student.dept)
}
inline void Student::set_dept(const char* value, size_t size) {
  
  dept_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:student.Student.dept)
}
inline std::string* Student::mutable_dept() {
  
  // @@protoc_insertion_point(field_mutable:student.Student.dept)
  return dept_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Student::release_dept() {
  // @@protoc_insertion_point(field_release:student.Student.dept)
  
  return dept_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Student::set_allocated_dept(std::string* dept) {
  if (dept != nullptr) {
    
  } else {
    
  }
  dept_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), dept);
  // @@protoc_insertion_point(field_set_allocated:student.Student.dept)
}

// string major = 4;
inline void Student::clear_major() {
  major_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Student::major() const {
  // @@protoc_insertion_point(field_get:student.Student.major)
  return major_.GetNoArena();
}
inline void Student::set_major(const std::string& value) {
  
  major_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:student.Student.major)
}
inline void Student::set_major(std::string&& value) {
  
  major_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:student.Student.major)
}
inline void Student::set_major(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  major_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:student.Student.major)
}
inline void Student::set_major(const char* value, size_t size) {
  
  major_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:student.Student.major)
}
inline std::string* Student::mutable_major() {
  
  // @@protoc_insertion_point(field_mutable:student.Student.major)
  return major_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Student::release_major() {
  // @@protoc_insertion_point(field_release:student.Student.major)
  
  return major_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Student::set_allocated_major(std::string* major) {
  if (major != nullptr) {
    
  } else {
    
  }
  major_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), major);
  // @@protoc_insertion_point(field_set_allocated:student.Student.major)
}

// string GPA = 5;
inline void Student::clear_gpa() {
  gpa_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Student::gpa() const {
  // @@protoc_insertion_point(field_get:student.Student.GPA)
  return gpa_.GetNoArena();
}
inline void Student::set_gpa(const std::string& value) {
  
  gpa_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:student.Student.GPA)
}
inline void Student::set_gpa(std::string&& value) {
  
  gpa_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:student.Student.GPA)
}
inline void Student::set_gpa(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  gpa_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:student.Student.GPA)
}
inline void Student::set_gpa(const char* value, size_t size) {
  
  gpa_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:student.Student.GPA)
}
inline std::string* Student::mutable_gpa() {
  
  // @@protoc_insertion_point(field_mutable:student.Student.GPA)
  return gpa_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Student::release_gpa() {
  // @@protoc_insertion_point(field_release:student.Student.GPA)
  
  return gpa_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Student::set_allocated_gpa(std::string* gpa) {
  if (gpa != nullptr) {
    
  } else {
    
  }
  gpa_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), gpa);
  // @@protoc_insertion_point(field_set_allocated:student.Student.GPA)
}

// repeated .student.Student.PhoneNumber phones = 6;
inline int Student::phones_size() const {
  return phones_.size();
}
inline void Student::clear_phones() {
  phones_.Clear();
}
inline ::student::Student_PhoneNumber* Student::mutable_phones(int index) {
  // @@protoc_insertion_point(field_mutable:student.Student.phones)
  return phones_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::student::Student_PhoneNumber >*
Student::mutable_phones() {
  // @@protoc_insertion_point(field_mutable_list:student.Student.phones)
  return &phones_;
}
inline const ::student::Student_PhoneNumber& Student::phones(int index) const {
  // @@protoc_insertion_point(field_get:student.Student.phones)
  return phones_.Get(index);
}
inline ::student::Student_PhoneNumber* Student::add_phones() {
  // @@protoc_insertion_point(field_add:student.Student.phones)
  return phones_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::student::Student_PhoneNumber >&
Student::phones() const {
  // @@protoc_insertion_point(field_list:student.Student.phones)
  return phones_;
}

// -------------------------------------------------------------------

// Reply

// string message = 1;
inline void Reply::clear_message() {
  message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Reply::message() const {
  // @@protoc_insertion_point(field_get:student.Reply.message)
  return message_.GetNoArena();
}
inline void Reply::set_message(const std::string& value) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:student.Reply.message)
}
inline void Reply::set_message(std::string&& value) {
  
  message_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:student.Reply.message)
}
inline void Reply::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:student.Reply.message)
}
inline void Reply::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:student.Reply.message)
}
inline std::string* Reply::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:student.Reply.message)
  return message_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Reply::release_message() {
  // @@protoc_insertion_point(field_release:student.Reply.message)
  
  return message_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Reply::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:student.Reply.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace student

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::student::Student_PhoneType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::student::Student_PhoneType>() {
  return ::student::Student_PhoneType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Student_2eproto