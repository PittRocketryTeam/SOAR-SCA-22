// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chunk.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_chunk_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_chunk_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_chunk_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_chunk_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_chunk_2eproto;
class Chunk;
class ChunkDefaultTypeInternal;
extern ChunkDefaultTypeInternal _Chunk_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Chunk* Arena::CreateMaybeMessage<::Chunk>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Chunk PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Chunk) */ {
 public:
  inline Chunk() : Chunk(nullptr) {};
  virtual ~Chunk();

  Chunk(const Chunk& from);
  Chunk(Chunk&& from) noexcept
    : Chunk() {
    *this = ::std::move(from);
  }

  inline Chunk& operator=(const Chunk& from) {
    CopyFrom(from);
    return *this;
  }
  inline Chunk& operator=(Chunk&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Chunk& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Chunk* internal_default_instance() {
    return reinterpret_cast<const Chunk*>(
               &_Chunk_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Chunk& a, Chunk& b) {
    a.Swap(&b);
  }
  inline void Swap(Chunk* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Chunk* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Chunk* New() const final {
    return CreateMaybeMessage<Chunk>(nullptr);
  }

  Chunk* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Chunk>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Chunk& from);
  void MergeFrom(const Chunk& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Chunk* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Chunk";
  }
  protected:
  explicit Chunk(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_chunk_2eproto);
    return ::descriptor_table_chunk_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 3,
    kDoneFieldNumber = 1,
    kSizeFieldNumber = 2,
  };
  // optional bytes data = 3 [default = ""];
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_data();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_data(
      std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // optional bool done = 1 [default = false];
  bool has_done() const;
  private:
  bool _internal_has_done() const;
  public:
  void clear_done();
  bool done() const;
  void set_done(bool value);
  private:
  bool _internal_done() const;
  void _internal_set_done(bool value);
  public:

  // optional uint32 size = 2 [default = 0];
  bool has_size() const;
  private:
  bool _internal_has_size() const;
  public:
  void clear_size();
  ::PROTOBUF_NAMESPACE_ID::uint32 size() const;
  void set_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_size() const;
  void _internal_set_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:Chunk)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  bool done_;
  ::PROTOBUF_NAMESPACE_ID::uint32 size_;
  friend struct ::TableStruct_chunk_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Chunk

// optional bool done = 1 [default = false];
inline bool Chunk::_internal_has_done() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Chunk::has_done() const {
  return _internal_has_done();
}
inline void Chunk::clear_done() {
  done_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool Chunk::_internal_done() const {
  return done_;
}
inline bool Chunk::done() const {
  // @@protoc_insertion_point(field_get:Chunk.done)
  return _internal_done();
}
inline void Chunk::_internal_set_done(bool value) {
  _has_bits_[0] |= 0x00000002u;
  done_ = value;
}
inline void Chunk::set_done(bool value) {
  _internal_set_done(value);
  // @@protoc_insertion_point(field_set:Chunk.done)
}

// optional uint32 size = 2 [default = 0];
inline bool Chunk::_internal_has_size() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Chunk::has_size() const {
  return _internal_has_size();
}
inline void Chunk::clear_size() {
  size_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Chunk::_internal_size() const {
  return size_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Chunk::size() const {
  // @@protoc_insertion_point(field_get:Chunk.size)
  return _internal_size();
}
inline void Chunk::_internal_set_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  size_ = value;
}
inline void Chunk::set_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_size(value);
  // @@protoc_insertion_point(field_set:Chunk.size)
}

// optional bytes data = 3 [default = ""];
inline bool Chunk::_internal_has_data() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Chunk::has_data() const {
  return _internal_has_data();
}
inline void Chunk::clear_data() {
  data_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Chunk::data() const {
  // @@protoc_insertion_point(field_get:Chunk.data)
  return _internal_data();
}
inline void Chunk::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:Chunk.data)
}
inline std::string* Chunk::mutable_data() {
  // @@protoc_insertion_point(field_mutable:Chunk.data)
  return _internal_mutable_data();
}
inline const std::string& Chunk::_internal_data() const {
  return data_.Get();
}
inline void Chunk::_internal_set_data(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Chunk::set_data(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Chunk.data)
}
inline void Chunk::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:Chunk.data)
}
inline void Chunk::set_data(const void* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Chunk.data)
}
inline std::string* Chunk::_internal_mutable_data() {
  _has_bits_[0] |= 0x00000001u;
  return data_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Chunk::release_data() {
  // @@protoc_insertion_point(field_release:Chunk.data)
  if (!_internal_has_data()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return data_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Chunk::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Chunk.data)
}
inline std::string* Chunk::unsafe_arena_release_data() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Chunk.data)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000001u;
  return data_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Chunk::unsafe_arena_set_allocated_data(
    std::string* data) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (data != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  data_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      data, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Chunk.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_chunk_2eproto
