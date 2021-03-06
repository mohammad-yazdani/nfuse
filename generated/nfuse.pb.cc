// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nfuse.proto

#include "nfuse.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace nfuse {
class CallDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Call>
      _instance;
} _Call_default_instance_;
class TagDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Tag>
      _instance;
} _Tag_default_instance_;
}  // namespace nfuse
namespace protobuf_nfuse_2eproto {
static void InitDefaultsCall() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::nfuse::_Call_default_instance_;
    new (ptr) ::nfuse::Call();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::nfuse::Call::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Call =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCall}, {}};

static void InitDefaultsTag() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::nfuse::_Tag_default_instance_;
    new (ptr) ::nfuse::Tag();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::nfuse::Tag::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Tag =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTag}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Call.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Tag.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::nfuse::Call, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::nfuse::Call, stamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::nfuse::Call, opcode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::nfuse::Call, tags_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::nfuse::Call, value_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::nfuse::Tag, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::nfuse::Tag, stamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::nfuse::Tag, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::nfuse::Tag, value_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::nfuse::Call)},
  { 9, -1, sizeof(::nfuse::Tag)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::nfuse::_Call_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::nfuse::_Tag_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "nfuse.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013nfuse.proto\022\005nfuse\"B\n\004Call\022\r\n\005stamp\030\001 "
      "\001(\003\022\016\n\006opcode\030\002 \001(\005\022\014\n\004tags\030\003 \001(\003\022\r\n\005val"
      "ue\030\004 \001(\t\"1\n\003Tag\022\r\n\005stamp\030\001 \001(\003\022\014\n\004type\030\002"
      " \001(\005\022\r\n\005value\030\003 \001(\t21\n\007IOSpace\022&\n\010NullPi"
      "ng\022\013.nfuse.Call\032\013.nfuse.Call\"\000B\022\n\nnfuse."
      "grpc\242\002\003HLWb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 218);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "nfuse.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_nfuse_2eproto
namespace nfuse {

// ===================================================================

void Call::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Call::kStampFieldNumber;
const int Call::kOpcodeFieldNumber;
const int Call::kTagsFieldNumber;
const int Call::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Call::Call()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_nfuse_2eproto::scc_info_Call.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:nfuse.Call)
}
Call::Call(const Call& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.value().size() > 0) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  ::memcpy(&stamp_, &from.stamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&opcode_) -
    reinterpret_cast<char*>(&stamp_)) + sizeof(opcode_));
  // @@protoc_insertion_point(copy_constructor:nfuse.Call)
}

void Call::SharedCtor() {
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&stamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&opcode_) -
      reinterpret_cast<char*>(&stamp_)) + sizeof(opcode_));
}

Call::~Call() {
  // @@protoc_insertion_point(destructor:nfuse.Call)
  SharedDtor();
}

void Call::SharedDtor() {
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Call::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Call::descriptor() {
  ::protobuf_nfuse_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_nfuse_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Call& Call::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_nfuse_2eproto::scc_info_Call.base);
  return *internal_default_instance();
}


void Call::Clear() {
// @@protoc_insertion_point(message_clear_start:nfuse.Call)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&stamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&opcode_) -
      reinterpret_cast<char*>(&stamp_)) + sizeof(opcode_));
  _internal_metadata_.Clear();
}

bool Call::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:nfuse.Call)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 stamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &stamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 opcode = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &opcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 tags = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &tags_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string value = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->value().data(), static_cast<int>(this->value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "nfuse.Call.value"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:nfuse.Call)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:nfuse.Call)
  return false;
#undef DO_
}

void Call::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:nfuse.Call)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 stamp = 1;
  if (this->stamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->stamp(), output);
  }

  // int32 opcode = 2;
  if (this->opcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->opcode(), output);
  }

  // int64 tags = 3;
  if (this->tags() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->tags(), output);
  }

  // string value = 4;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), static_cast<int>(this->value().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "nfuse.Call.value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:nfuse.Call)
}

::google::protobuf::uint8* Call::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:nfuse.Call)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 stamp = 1;
  if (this->stamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->stamp(), target);
  }

  // int32 opcode = 2;
  if (this->opcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->opcode(), target);
  }

  // int64 tags = 3;
  if (this->tags() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->tags(), target);
  }

  // string value = 4;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), static_cast<int>(this->value().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "nfuse.Call.value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:nfuse.Call)
  return target;
}

size_t Call::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:nfuse.Call)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string value = 4;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  // int64 stamp = 1;
  if (this->stamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->stamp());
  }

  // int64 tags = 3;
  if (this->tags() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->tags());
  }

  // int32 opcode = 2;
  if (this->opcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->opcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Call::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:nfuse.Call)
  GOOGLE_DCHECK_NE(&from, this);
  const Call* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Call>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:nfuse.Call)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:nfuse.Call)
    MergeFrom(*source);
  }
}

void Call::MergeFrom(const Call& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:nfuse.Call)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  if (from.stamp() != 0) {
    set_stamp(from.stamp());
  }
  if (from.tags() != 0) {
    set_tags(from.tags());
  }
  if (from.opcode() != 0) {
    set_opcode(from.opcode());
  }
}

void Call::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:nfuse.Call)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Call::CopyFrom(const Call& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:nfuse.Call)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Call::IsInitialized() const {
  return true;
}

void Call::Swap(Call* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Call::InternalSwap(Call* other) {
  using std::swap;
  value_.Swap(&other->value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(stamp_, other->stamp_);
  swap(tags_, other->tags_);
  swap(opcode_, other->opcode_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Call::GetMetadata() const {
  protobuf_nfuse_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_nfuse_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Tag::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Tag::kStampFieldNumber;
const int Tag::kTypeFieldNumber;
const int Tag::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Tag::Tag()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_nfuse_2eproto::scc_info_Tag.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:nfuse.Tag)
}
Tag::Tag(const Tag& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.value().size() > 0) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  ::memcpy(&stamp_, &from.stamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&stamp_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:nfuse.Tag)
}

void Tag::SharedCtor() {
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&stamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&stamp_)) + sizeof(type_));
}

Tag::~Tag() {
  // @@protoc_insertion_point(destructor:nfuse.Tag)
  SharedDtor();
}

void Tag::SharedDtor() {
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Tag::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Tag::descriptor() {
  ::protobuf_nfuse_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_nfuse_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Tag& Tag::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_nfuse_2eproto::scc_info_Tag.base);
  return *internal_default_instance();
}


void Tag::Clear() {
// @@protoc_insertion_point(message_clear_start:nfuse.Tag)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&stamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&stamp_)) + sizeof(type_));
  _internal_metadata_.Clear();
}

bool Tag::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:nfuse.Tag)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 stamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &stamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string value = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->value().data(), static_cast<int>(this->value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "nfuse.Tag.value"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:nfuse.Tag)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:nfuse.Tag)
  return false;
#undef DO_
}

void Tag::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:nfuse.Tag)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 stamp = 1;
  if (this->stamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->stamp(), output);
  }

  // int32 type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->type(), output);
  }

  // string value = 3;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), static_cast<int>(this->value().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "nfuse.Tag.value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:nfuse.Tag)
}

::google::protobuf::uint8* Tag::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:nfuse.Tag)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 stamp = 1;
  if (this->stamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->stamp(), target);
  }

  // int32 type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->type(), target);
  }

  // string value = 3;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), static_cast<int>(this->value().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "nfuse.Tag.value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:nfuse.Tag)
  return target;
}

size_t Tag::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:nfuse.Tag)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string value = 3;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  // int64 stamp = 1;
  if (this->stamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->stamp());
  }

  // int32 type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Tag::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:nfuse.Tag)
  GOOGLE_DCHECK_NE(&from, this);
  const Tag* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Tag>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:nfuse.Tag)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:nfuse.Tag)
    MergeFrom(*source);
  }
}

void Tag::MergeFrom(const Tag& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:nfuse.Tag)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  if (from.stamp() != 0) {
    set_stamp(from.stamp());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void Tag::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:nfuse.Tag)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Tag::CopyFrom(const Tag& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:nfuse.Tag)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Tag::IsInitialized() const {
  return true;
}

void Tag::Swap(Tag* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Tag::InternalSwap(Tag* other) {
  using std::swap;
  value_.Swap(&other->value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(stamp_, other->stamp_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Tag::GetMetadata() const {
  protobuf_nfuse_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_nfuse_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace nfuse
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::nfuse::Call* Arena::CreateMaybeMessage< ::nfuse::Call >(Arena* arena) {
  return Arena::CreateInternal< ::nfuse::Call >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::nfuse::Tag* Arena::CreateMaybeMessage< ::nfuse::Tag >(Arena* arena) {
  return Arena::CreateInternal< ::nfuse::Tag >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
