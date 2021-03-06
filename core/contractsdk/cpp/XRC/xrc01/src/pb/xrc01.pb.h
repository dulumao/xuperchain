// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: xrc01.proto

#ifndef PROTOBUF_INCLUDED_xrc01_2eproto
#define PROTOBUF_INCLUDED_xrc01_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_xrc01_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_xrc01_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
namespace xrc01 {
class asset_info;
class asset_infoDefaultTypeInternal;
extern asset_infoDefaultTypeInternal _asset_info_default_instance_;
class authorize_info;
class authorize_infoDefaultTypeInternal;
extern authorize_infoDefaultTypeInternal _authorize_info_default_instance_;
class token;
class tokenDefaultTypeInternal;
extern tokenDefaultTypeInternal _token_default_instance_;
}  // namespace xrc01
namespace google {
namespace protobuf {
template<> ::xrc01::asset_info* Arena::CreateMaybeMessage<::xrc01::asset_info>(Arena*);
template<> ::xrc01::authorize_info* Arena::CreateMaybeMessage<::xrc01::authorize_info>(Arena*);
template<> ::xrc01::token* Arena::CreateMaybeMessage<::xrc01::token>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace xrc01 {

// ===================================================================

class token :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:xrc01.token) */ {
 public:
  token();
  virtual ~token();

  token(const token& from);

  inline token& operator=(const token& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  token(token&& from) noexcept
    : token() {
    *this = ::std::move(from);
  }

  inline token& operator=(token&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const token& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const token* internal_default_instance() {
    return reinterpret_cast<const token*>(
               &_token_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(token* other);
  friend void swap(token& a, token& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline token* New() const final {
    return CreateMaybeMessage<token>(nullptr);
  }

  token* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<token>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const token& from);
  void MergeFrom(const token& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(token* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string issue_account = 5;
  void clear_issue_account();
  static const int kIssueAccountFieldNumber = 5;
  const ::std::string& issue_account() const;
  void set_issue_account(const ::std::string& value);
  #if LANG_CXX11
  void set_issue_account(::std::string&& value);
  #endif
  void set_issue_account(const char* value);
  void set_issue_account(const char* value, size_t size);
  ::std::string* mutable_issue_account();
  ::std::string* release_issue_account();
  void set_allocated_issue_account(::std::string* issue_account);

  // string profile_desc = 6;
  void clear_profile_desc();
  static const int kProfileDescFieldNumber = 6;
  const ::std::string& profile_desc() const;
  void set_profile_desc(const ::std::string& value);
  #if LANG_CXX11
  void set_profile_desc(::std::string&& value);
  #endif
  void set_profile_desc(const char* value);
  void set_profile_desc(const char* value, size_t size);
  ::std::string* mutable_profile_desc();
  ::std::string* release_profile_desc();
  void set_allocated_profile_desc(::std::string* profile_desc);

  // uint64 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint64 id() const;
  void set_id(::google::protobuf::uint64 value);

  // uint64 supply = 4;
  void clear_supply();
  static const int kSupplyFieldNumber = 4;
  ::google::protobuf::uint64 supply() const;
  void set_supply(::google::protobuf::uint64 value);

  // bool fungible = 3;
  void clear_fungible();
  static const int kFungibleFieldNumber = 3;
  bool fungible() const;
  void set_fungible(bool value);

  // @@protoc_insertion_point(class_scope:xrc01.token)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr issue_account_;
  ::google::protobuf::internal::ArenaStringPtr profile_desc_;
  ::google::protobuf::uint64 id_;
  ::google::protobuf::uint64 supply_;
  bool fungible_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_xrc01_2eproto;
};
// -------------------------------------------------------------------

class asset_info :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:xrc01.asset_info) */ {
 public:
  asset_info();
  virtual ~asset_info();

  asset_info(const asset_info& from);

  inline asset_info& operator=(const asset_info& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  asset_info(asset_info&& from) noexcept
    : asset_info() {
    *this = ::std::move(from);
  }

  inline asset_info& operator=(asset_info&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const asset_info& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const asset_info* internal_default_instance() {
    return reinterpret_cast<const asset_info*>(
               &_asset_info_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(asset_info* other);
  friend void swap(asset_info& a, asset_info& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline asset_info* New() const final {
    return CreateMaybeMessage<asset_info>(nullptr);
  }

  asset_info* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<asset_info>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const asset_info& from);
  void MergeFrom(const asset_info& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(asset_info* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // string account = 2;
  void clear_account();
  static const int kAccountFieldNumber = 2;
  const ::std::string& account() const;
  void set_account(const ::std::string& value);
  #if LANG_CXX11
  void set_account(::std::string&& value);
  #endif
  void set_account(const char* value);
  void set_account(const char* value, size_t size);
  ::std::string* mutable_account();
  ::std::string* release_account();
  void set_allocated_account(::std::string* account);

  // uint64 token_id = 3;
  void clear_token_id();
  static const int kTokenIdFieldNumber = 3;
  ::google::protobuf::uint64 token_id() const;
  void set_token_id(::google::protobuf::uint64 value);

  // uint64 amount = 4;
  void clear_amount();
  static const int kAmountFieldNumber = 4;
  ::google::protobuf::uint64 amount() const;
  void set_amount(::google::protobuf::uint64 value);

  // uint64 authorized = 5;
  void clear_authorized();
  static const int kAuthorizedFieldNumber = 5;
  ::google::protobuf::uint64 authorized() const;
  void set_authorized(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:xrc01.asset_info)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr account_;
  ::google::protobuf::uint64 token_id_;
  ::google::protobuf::uint64 amount_;
  ::google::protobuf::uint64 authorized_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_xrc01_2eproto;
};
// -------------------------------------------------------------------

class authorize_info :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:xrc01.authorize_info) */ {
 public:
  authorize_info();
  virtual ~authorize_info();

  authorize_info(const authorize_info& from);

  inline authorize_info& operator=(const authorize_info& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  authorize_info(authorize_info&& from) noexcept
    : authorize_info() {
    *this = ::std::move(from);
  }

  inline authorize_info& operator=(authorize_info&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const authorize_info& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const authorize_info* internal_default_instance() {
    return reinterpret_cast<const authorize_info*>(
               &_authorize_info_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(authorize_info* other);
  friend void swap(authorize_info& a, authorize_info& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline authorize_info* New() const final {
    return CreateMaybeMessage<authorize_info>(nullptr);
  }

  authorize_info* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<authorize_info>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const authorize_info& from);
  void MergeFrom(const authorize_info& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(authorize_info* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // string from = 2;
  void clear_from();
  static const int kFromFieldNumber = 2;
  const ::std::string& from() const;
  void set_from(const ::std::string& value);
  #if LANG_CXX11
  void set_from(::std::string&& value);
  #endif
  void set_from(const char* value);
  void set_from(const char* value, size_t size);
  ::std::string* mutable_from();
  ::std::string* release_from();
  void set_allocated_from(::std::string* from);

  // string to = 3;
  void clear_to();
  static const int kToFieldNumber = 3;
  const ::std::string& to() const;
  void set_to(const ::std::string& value);
  #if LANG_CXX11
  void set_to(::std::string&& value);
  #endif
  void set_to(const char* value);
  void set_to(const char* value, size_t size);
  ::std::string* mutable_to();
  ::std::string* release_to();
  void set_allocated_to(::std::string* to);

  // uint64 token_id = 4;
  void clear_token_id();
  static const int kTokenIdFieldNumber = 4;
  ::google::protobuf::uint64 token_id() const;
  void set_token_id(::google::protobuf::uint64 value);

  // uint64 amount = 5;
  void clear_amount();
  static const int kAmountFieldNumber = 5;
  ::google::protobuf::uint64 amount() const;
  void set_amount(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:xrc01.authorize_info)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr from_;
  ::google::protobuf::internal::ArenaStringPtr to_;
  ::google::protobuf::uint64 token_id_;
  ::google::protobuf::uint64 amount_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_xrc01_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// token

// uint64 id = 1;
inline void token::clear_id() {
  id_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 token::id() const {
  // @@protoc_insertion_point(field_get:xrc01.token.id)
  return id_;
}
inline void token::set_id(::google::protobuf::uint64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:xrc01.token.id)
}

// string name = 2;
inline void token::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& token::name() const {
  // @@protoc_insertion_point(field_get:xrc01.token.name)
  return name_.GetNoArena();
}
inline void token::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xrc01.token.name)
}
#if LANG_CXX11
inline void token::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:xrc01.token.name)
}
#endif
inline void token::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xrc01.token.name)
}
inline void token::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xrc01.token.name)
}
inline ::std::string* token::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:xrc01.token.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* token::release_name() {
  // @@protoc_insertion_point(field_release:xrc01.token.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void token::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:xrc01.token.name)
}

// bool fungible = 3;
inline void token::clear_fungible() {
  fungible_ = false;
}
inline bool token::fungible() const {
  // @@protoc_insertion_point(field_get:xrc01.token.fungible)
  return fungible_;
}
inline void token::set_fungible(bool value) {
  
  fungible_ = value;
  // @@protoc_insertion_point(field_set:xrc01.token.fungible)
}

// uint64 supply = 4;
inline void token::clear_supply() {
  supply_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 token::supply() const {
  // @@protoc_insertion_point(field_get:xrc01.token.supply)
  return supply_;
}
inline void token::set_supply(::google::protobuf::uint64 value) {
  
  supply_ = value;
  // @@protoc_insertion_point(field_set:xrc01.token.supply)
}

// string issue_account = 5;
inline void token::clear_issue_account() {
  issue_account_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& token::issue_account() const {
  // @@protoc_insertion_point(field_get:xrc01.token.issue_account)
  return issue_account_.GetNoArena();
}
inline void token::set_issue_account(const ::std::string& value) {
  
  issue_account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xrc01.token.issue_account)
}
#if LANG_CXX11
inline void token::set_issue_account(::std::string&& value) {
  
  issue_account_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:xrc01.token.issue_account)
}
#endif
inline void token::set_issue_account(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  issue_account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xrc01.token.issue_account)
}
inline void token::set_issue_account(const char* value, size_t size) {
  
  issue_account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xrc01.token.issue_account)
}
inline ::std::string* token::mutable_issue_account() {
  
  // @@protoc_insertion_point(field_mutable:xrc01.token.issue_account)
  return issue_account_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* token::release_issue_account() {
  // @@protoc_insertion_point(field_release:xrc01.token.issue_account)
  
  return issue_account_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void token::set_allocated_issue_account(::std::string* issue_account) {
  if (issue_account != nullptr) {
    
  } else {
    
  }
  issue_account_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), issue_account);
  // @@protoc_insertion_point(field_set_allocated:xrc01.token.issue_account)
}

// string profile_desc = 6;
inline void token::clear_profile_desc() {
  profile_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& token::profile_desc() const {
  // @@protoc_insertion_point(field_get:xrc01.token.profile_desc)
  return profile_desc_.GetNoArena();
}
inline void token::set_profile_desc(const ::std::string& value) {
  
  profile_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xrc01.token.profile_desc)
}
#if LANG_CXX11
inline void token::set_profile_desc(::std::string&& value) {
  
  profile_desc_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:xrc01.token.profile_desc)
}
#endif
inline void token::set_profile_desc(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  profile_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xrc01.token.profile_desc)
}
inline void token::set_profile_desc(const char* value, size_t size) {
  
  profile_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xrc01.token.profile_desc)
}
inline ::std::string* token::mutable_profile_desc() {
  
  // @@protoc_insertion_point(field_mutable:xrc01.token.profile_desc)
  return profile_desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* token::release_profile_desc() {
  // @@protoc_insertion_point(field_release:xrc01.token.profile_desc)
  
  return profile_desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void token::set_allocated_profile_desc(::std::string* profile_desc) {
  if (profile_desc != nullptr) {
    
  } else {
    
  }
  profile_desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), profile_desc);
  // @@protoc_insertion_point(field_set_allocated:xrc01.token.profile_desc)
}

// -------------------------------------------------------------------

// asset_info

// string id = 1;
inline void asset_info::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& asset_info::id() const {
  // @@protoc_insertion_point(field_get:xrc01.asset_info.id)
  return id_.GetNoArena();
}
inline void asset_info::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xrc01.asset_info.id)
}
#if LANG_CXX11
inline void asset_info::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:xrc01.asset_info.id)
}
#endif
inline void asset_info::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xrc01.asset_info.id)
}
inline void asset_info::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xrc01.asset_info.id)
}
inline ::std::string* asset_info::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:xrc01.asset_info.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* asset_info::release_id() {
  // @@protoc_insertion_point(field_release:xrc01.asset_info.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void asset_info::set_allocated_id(::std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:xrc01.asset_info.id)
}

// string account = 2;
inline void asset_info::clear_account() {
  account_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& asset_info::account() const {
  // @@protoc_insertion_point(field_get:xrc01.asset_info.account)
  return account_.GetNoArena();
}
inline void asset_info::set_account(const ::std::string& value) {
  
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xrc01.asset_info.account)
}
#if LANG_CXX11
inline void asset_info::set_account(::std::string&& value) {
  
  account_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:xrc01.asset_info.account)
}
#endif
inline void asset_info::set_account(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xrc01.asset_info.account)
}
inline void asset_info::set_account(const char* value, size_t size) {
  
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xrc01.asset_info.account)
}
inline ::std::string* asset_info::mutable_account() {
  
  // @@protoc_insertion_point(field_mutable:xrc01.asset_info.account)
  return account_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* asset_info::release_account() {
  // @@protoc_insertion_point(field_release:xrc01.asset_info.account)
  
  return account_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void asset_info::set_allocated_account(::std::string* account) {
  if (account != nullptr) {
    
  } else {
    
  }
  account_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), account);
  // @@protoc_insertion_point(field_set_allocated:xrc01.asset_info.account)
}

// uint64 token_id = 3;
inline void asset_info::clear_token_id() {
  token_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 asset_info::token_id() const {
  // @@protoc_insertion_point(field_get:xrc01.asset_info.token_id)
  return token_id_;
}
inline void asset_info::set_token_id(::google::protobuf::uint64 value) {
  
  token_id_ = value;
  // @@protoc_insertion_point(field_set:xrc01.asset_info.token_id)
}

// uint64 amount = 4;
inline void asset_info::clear_amount() {
  amount_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 asset_info::amount() const {
  // @@protoc_insertion_point(field_get:xrc01.asset_info.amount)
  return amount_;
}
inline void asset_info::set_amount(::google::protobuf::uint64 value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:xrc01.asset_info.amount)
}

// uint64 authorized = 5;
inline void asset_info::clear_authorized() {
  authorized_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 asset_info::authorized() const {
  // @@protoc_insertion_point(field_get:xrc01.asset_info.authorized)
  return authorized_;
}
inline void asset_info::set_authorized(::google::protobuf::uint64 value) {
  
  authorized_ = value;
  // @@protoc_insertion_point(field_set:xrc01.asset_info.authorized)
}

// -------------------------------------------------------------------

// authorize_info

// string id = 1;
inline void authorize_info::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& authorize_info::id() const {
  // @@protoc_insertion_point(field_get:xrc01.authorize_info.id)
  return id_.GetNoArena();
}
inline void authorize_info::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xrc01.authorize_info.id)
}
#if LANG_CXX11
inline void authorize_info::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:xrc01.authorize_info.id)
}
#endif
inline void authorize_info::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xrc01.authorize_info.id)
}
inline void authorize_info::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xrc01.authorize_info.id)
}
inline ::std::string* authorize_info::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:xrc01.authorize_info.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* authorize_info::release_id() {
  // @@protoc_insertion_point(field_release:xrc01.authorize_info.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void authorize_info::set_allocated_id(::std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:xrc01.authorize_info.id)
}

// string from = 2;
inline void authorize_info::clear_from() {
  from_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& authorize_info::from() const {
  // @@protoc_insertion_point(field_get:xrc01.authorize_info.from)
  return from_.GetNoArena();
}
inline void authorize_info::set_from(const ::std::string& value) {
  
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xrc01.authorize_info.from)
}
#if LANG_CXX11
inline void authorize_info::set_from(::std::string&& value) {
  
  from_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:xrc01.authorize_info.from)
}
#endif
inline void authorize_info::set_from(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xrc01.authorize_info.from)
}
inline void authorize_info::set_from(const char* value, size_t size) {
  
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xrc01.authorize_info.from)
}
inline ::std::string* authorize_info::mutable_from() {
  
  // @@protoc_insertion_point(field_mutable:xrc01.authorize_info.from)
  return from_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* authorize_info::release_from() {
  // @@protoc_insertion_point(field_release:xrc01.authorize_info.from)
  
  return from_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void authorize_info::set_allocated_from(::std::string* from) {
  if (from != nullptr) {
    
  } else {
    
  }
  from_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from);
  // @@protoc_insertion_point(field_set_allocated:xrc01.authorize_info.from)
}

// string to = 3;
inline void authorize_info::clear_to() {
  to_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& authorize_info::to() const {
  // @@protoc_insertion_point(field_get:xrc01.authorize_info.to)
  return to_.GetNoArena();
}
inline void authorize_info::set_to(const ::std::string& value) {
  
  to_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xrc01.authorize_info.to)
}
#if LANG_CXX11
inline void authorize_info::set_to(::std::string&& value) {
  
  to_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:xrc01.authorize_info.to)
}
#endif
inline void authorize_info::set_to(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  to_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xrc01.authorize_info.to)
}
inline void authorize_info::set_to(const char* value, size_t size) {
  
  to_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xrc01.authorize_info.to)
}
inline ::std::string* authorize_info::mutable_to() {
  
  // @@protoc_insertion_point(field_mutable:xrc01.authorize_info.to)
  return to_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* authorize_info::release_to() {
  // @@protoc_insertion_point(field_release:xrc01.authorize_info.to)
  
  return to_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void authorize_info::set_allocated_to(::std::string* to) {
  if (to != nullptr) {
    
  } else {
    
  }
  to_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), to);
  // @@protoc_insertion_point(field_set_allocated:xrc01.authorize_info.to)
}

// uint64 token_id = 4;
inline void authorize_info::clear_token_id() {
  token_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 authorize_info::token_id() const {
  // @@protoc_insertion_point(field_get:xrc01.authorize_info.token_id)
  return token_id_;
}
inline void authorize_info::set_token_id(::google::protobuf::uint64 value) {
  
  token_id_ = value;
  // @@protoc_insertion_point(field_set:xrc01.authorize_info.token_id)
}

// uint64 amount = 5;
inline void authorize_info::clear_amount() {
  amount_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 authorize_info::amount() const {
  // @@protoc_insertion_point(field_get:xrc01.authorize_info.amount)
  return amount_;
}
inline void authorize_info::set_amount(::google::protobuf::uint64 value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:xrc01.authorize_info.amount)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace xrc01

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_xrc01_2eproto
