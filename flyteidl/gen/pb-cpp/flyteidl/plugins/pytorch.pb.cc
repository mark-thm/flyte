// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/plugins/pytorch.proto

#include "flyteidl/plugins/pytorch.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_flyteidl_2fplugins_2fpytorch_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ElasticConfig_flyteidl_2fplugins_2fpytorch_2eproto;
namespace flyteidl {
namespace plugins {
class ElasticConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ElasticConfig> _instance;
} _ElasticConfig_default_instance_;
class DistributedPyTorchTrainingTaskDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DistributedPyTorchTrainingTask> _instance;
} _DistributedPyTorchTrainingTask_default_instance_;
}  // namespace plugins
}  // namespace flyteidl
static void InitDefaultsElasticConfig_flyteidl_2fplugins_2fpytorch_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::flyteidl::plugins::_ElasticConfig_default_instance_;
    new (ptr) ::flyteidl::plugins::ElasticConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::flyteidl::plugins::ElasticConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ElasticConfig_flyteidl_2fplugins_2fpytorch_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsElasticConfig_flyteidl_2fplugins_2fpytorch_2eproto}, {}};

static void InitDefaultsDistributedPyTorchTrainingTask_flyteidl_2fplugins_2fpytorch_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::flyteidl::plugins::_DistributedPyTorchTrainingTask_default_instance_;
    new (ptr) ::flyteidl::plugins::DistributedPyTorchTrainingTask();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::flyteidl::plugins::DistributedPyTorchTrainingTask::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_DistributedPyTorchTrainingTask_flyteidl_2fplugins_2fpytorch_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsDistributedPyTorchTrainingTask_flyteidl_2fplugins_2fpytorch_2eproto}, {
      &scc_info_ElasticConfig_flyteidl_2fplugins_2fpytorch_2eproto.base,}};

void InitDefaults_flyteidl_2fplugins_2fpytorch_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_ElasticConfig_flyteidl_2fplugins_2fpytorch_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_DistributedPyTorchTrainingTask_flyteidl_2fplugins_2fpytorch_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_flyteidl_2fplugins_2fpytorch_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_flyteidl_2fplugins_2fpytorch_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_flyteidl_2fplugins_2fpytorch_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_flyteidl_2fplugins_2fpytorch_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::flyteidl::plugins::ElasticConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::flyteidl::plugins::ElasticConfig, rdzv_backend_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::plugins::ElasticConfig, min_replicas_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::plugins::ElasticConfig, max_replicas_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::plugins::ElasticConfig, nproc_per_node_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::plugins::ElasticConfig, max_restarts_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::flyteidl::plugins::DistributedPyTorchTrainingTask, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::flyteidl::plugins::DistributedPyTorchTrainingTask, workers_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::plugins::DistributedPyTorchTrainingTask, elastic_config_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::flyteidl::plugins::ElasticConfig)},
  { 10, -1, sizeof(::flyteidl::plugins::DistributedPyTorchTrainingTask)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::flyteidl::plugins::_ElasticConfig_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::flyteidl::plugins::_DistributedPyTorchTrainingTask_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_flyteidl_2fplugins_2fpytorch_2eproto = {
  {}, AddDescriptors_flyteidl_2fplugins_2fpytorch_2eproto, "flyteidl/plugins/pytorch.proto", schemas,
  file_default_instances, TableStruct_flyteidl_2fplugins_2fpytorch_2eproto::offsets,
  file_level_metadata_flyteidl_2fplugins_2fpytorch_2eproto, 2, file_level_enum_descriptors_flyteidl_2fplugins_2fpytorch_2eproto, file_level_service_descriptors_flyteidl_2fplugins_2fpytorch_2eproto,
};

const char descriptor_table_protodef_flyteidl_2fplugins_2fpytorch_2eproto[] =
  "\n\036flyteidl/plugins/pytorch.proto\022\020flytei"
  "dl.plugins\"\177\n\rElasticConfig\022\024\n\014rdzv_back"
  "end\030\001 \001(\t\022\024\n\014min_replicas\030\002 \001(\005\022\024\n\014max_r"
  "eplicas\030\003 \001(\005\022\026\n\016nproc_per_node\030\004 \001(\005\022\024\n"
  "\014max_restarts\030\005 \001(\005\"j\n\036DistributedPyTorc"
  "hTrainingTask\022\017\n\007workers\030\001 \001(\005\0227\n\016elasti"
  "c_config\030\002 \001(\0132\037.flyteidl.plugins.Elasti"
  "cConfigB\?Z=github.com/flyteorg/flyte/fly"
  "teidl/gen/pb-go/flyteidl/pluginsb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_flyteidl_2fplugins_2fpytorch_2eproto = {
  false, InitDefaults_flyteidl_2fplugins_2fpytorch_2eproto, 
  descriptor_table_protodef_flyteidl_2fplugins_2fpytorch_2eproto,
  "flyteidl/plugins/pytorch.proto", &assign_descriptors_table_flyteidl_2fplugins_2fpytorch_2eproto, 360,
};

void AddDescriptors_flyteidl_2fplugins_2fpytorch_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_flyteidl_2fplugins_2fpytorch_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_flyteidl_2fplugins_2fpytorch_2eproto = []() { AddDescriptors_flyteidl_2fplugins_2fpytorch_2eproto(); return true; }();
namespace flyteidl {
namespace plugins {

// ===================================================================

void ElasticConfig::InitAsDefaultInstance() {
}
class ElasticConfig::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ElasticConfig::kRdzvBackendFieldNumber;
const int ElasticConfig::kMinReplicasFieldNumber;
const int ElasticConfig::kMaxReplicasFieldNumber;
const int ElasticConfig::kNprocPerNodeFieldNumber;
const int ElasticConfig::kMaxRestartsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ElasticConfig::ElasticConfig()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:flyteidl.plugins.ElasticConfig)
}
ElasticConfig::ElasticConfig(const ElasticConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  rdzv_backend_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.rdzv_backend().size() > 0) {
    rdzv_backend_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rdzv_backend_);
  }
  ::memcpy(&min_replicas_, &from.min_replicas_,
    static_cast<size_t>(reinterpret_cast<char*>(&max_restarts_) -
    reinterpret_cast<char*>(&min_replicas_)) + sizeof(max_restarts_));
  // @@protoc_insertion_point(copy_constructor:flyteidl.plugins.ElasticConfig)
}

void ElasticConfig::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ElasticConfig_flyteidl_2fplugins_2fpytorch_2eproto.base);
  rdzv_backend_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&min_replicas_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&max_restarts_) -
      reinterpret_cast<char*>(&min_replicas_)) + sizeof(max_restarts_));
}

ElasticConfig::~ElasticConfig() {
  // @@protoc_insertion_point(destructor:flyteidl.plugins.ElasticConfig)
  SharedDtor();
}

void ElasticConfig::SharedDtor() {
  rdzv_backend_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ElasticConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ElasticConfig& ElasticConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ElasticConfig_flyteidl_2fplugins_2fpytorch_2eproto.base);
  return *internal_default_instance();
}


void ElasticConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:flyteidl.plugins.ElasticConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rdzv_backend_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&min_replicas_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&max_restarts_) -
      reinterpret_cast<char*>(&min_replicas_)) + sizeof(max_restarts_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ElasticConfig::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ElasticConfig*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string rdzv_backend = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("flyteidl.plugins.ElasticConfig.rdzv_backend");
        object = msg->mutable_rdzv_backend();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // int32 min_replicas = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_min_replicas(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 max_replicas = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 24) goto handle_unusual;
        msg->set_max_replicas(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 nproc_per_node = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 32) goto handle_unusual;
        msg->set_nproc_per_node(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 max_restarts = 5;
      case 5: {
        if (static_cast<::google::protobuf::uint8>(tag) != 40) goto handle_unusual;
        msg->set_max_restarts(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ElasticConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:flyteidl.plugins.ElasticConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string rdzv_backend = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_rdzv_backend()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->rdzv_backend().data(), static_cast<int>(this->rdzv_backend().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "flyteidl.plugins.ElasticConfig.rdzv_backend"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 min_replicas = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &min_replicas_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 max_replicas = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (24 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_replicas_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nproc_per_node = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (32 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nproc_per_node_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 max_restarts = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (40 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_restarts_)));
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
  // @@protoc_insertion_point(parse_success:flyteidl.plugins.ElasticConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:flyteidl.plugins.ElasticConfig)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ElasticConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:flyteidl.plugins.ElasticConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string rdzv_backend = 1;
  if (this->rdzv_backend().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rdzv_backend().data(), static_cast<int>(this->rdzv_backend().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.plugins.ElasticConfig.rdzv_backend");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->rdzv_backend(), output);
  }

  // int32 min_replicas = 2;
  if (this->min_replicas() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->min_replicas(), output);
  }

  // int32 max_replicas = 3;
  if (this->max_replicas() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->max_replicas(), output);
  }

  // int32 nproc_per_node = 4;
  if (this->nproc_per_node() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->nproc_per_node(), output);
  }

  // int32 max_restarts = 5;
  if (this->max_restarts() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->max_restarts(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:flyteidl.plugins.ElasticConfig)
}

::google::protobuf::uint8* ElasticConfig::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:flyteidl.plugins.ElasticConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string rdzv_backend = 1;
  if (this->rdzv_backend().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rdzv_backend().data(), static_cast<int>(this->rdzv_backend().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.plugins.ElasticConfig.rdzv_backend");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->rdzv_backend(), target);
  }

  // int32 min_replicas = 2;
  if (this->min_replicas() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->min_replicas(), target);
  }

  // int32 max_replicas = 3;
  if (this->max_replicas() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->max_replicas(), target);
  }

  // int32 nproc_per_node = 4;
  if (this->nproc_per_node() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->nproc_per_node(), target);
  }

  // int32 max_restarts = 5;
  if (this->max_restarts() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->max_restarts(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:flyteidl.plugins.ElasticConfig)
  return target;
}

size_t ElasticConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:flyteidl.plugins.ElasticConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string rdzv_backend = 1;
  if (this->rdzv_backend().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->rdzv_backend());
  }

  // int32 min_replicas = 2;
  if (this->min_replicas() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->min_replicas());
  }

  // int32 max_replicas = 3;
  if (this->max_replicas() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->max_replicas());
  }

  // int32 nproc_per_node = 4;
  if (this->nproc_per_node() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nproc_per_node());
  }

  // int32 max_restarts = 5;
  if (this->max_restarts() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->max_restarts());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ElasticConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:flyteidl.plugins.ElasticConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const ElasticConfig* source =
      ::google::protobuf::DynamicCastToGenerated<ElasticConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:flyteidl.plugins.ElasticConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:flyteidl.plugins.ElasticConfig)
    MergeFrom(*source);
  }
}

void ElasticConfig::MergeFrom(const ElasticConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:flyteidl.plugins.ElasticConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.rdzv_backend().size() > 0) {

    rdzv_backend_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rdzv_backend_);
  }
  if (from.min_replicas() != 0) {
    set_min_replicas(from.min_replicas());
  }
  if (from.max_replicas() != 0) {
    set_max_replicas(from.max_replicas());
  }
  if (from.nproc_per_node() != 0) {
    set_nproc_per_node(from.nproc_per_node());
  }
  if (from.max_restarts() != 0) {
    set_max_restarts(from.max_restarts());
  }
}

void ElasticConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:flyteidl.plugins.ElasticConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ElasticConfig::CopyFrom(const ElasticConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:flyteidl.plugins.ElasticConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ElasticConfig::IsInitialized() const {
  return true;
}

void ElasticConfig::Swap(ElasticConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ElasticConfig::InternalSwap(ElasticConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  rdzv_backend_.Swap(&other->rdzv_backend_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(min_replicas_, other->min_replicas_);
  swap(max_replicas_, other->max_replicas_);
  swap(nproc_per_node_, other->nproc_per_node_);
  swap(max_restarts_, other->max_restarts_);
}

::google::protobuf::Metadata ElasticConfig::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_flyteidl_2fplugins_2fpytorch_2eproto);
  return ::file_level_metadata_flyteidl_2fplugins_2fpytorch_2eproto[kIndexInFileMessages];
}


// ===================================================================

void DistributedPyTorchTrainingTask::InitAsDefaultInstance() {
  ::flyteidl::plugins::_DistributedPyTorchTrainingTask_default_instance_._instance.get_mutable()->elastic_config_ = const_cast< ::flyteidl::plugins::ElasticConfig*>(
      ::flyteidl::plugins::ElasticConfig::internal_default_instance());
}
class DistributedPyTorchTrainingTask::HasBitSetters {
 public:
  static const ::flyteidl::plugins::ElasticConfig& elastic_config(const DistributedPyTorchTrainingTask* msg);
};

const ::flyteidl::plugins::ElasticConfig&
DistributedPyTorchTrainingTask::HasBitSetters::elastic_config(const DistributedPyTorchTrainingTask* msg) {
  return *msg->elastic_config_;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DistributedPyTorchTrainingTask::kWorkersFieldNumber;
const int DistributedPyTorchTrainingTask::kElasticConfigFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DistributedPyTorchTrainingTask::DistributedPyTorchTrainingTask()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:flyteidl.plugins.DistributedPyTorchTrainingTask)
}
DistributedPyTorchTrainingTask::DistributedPyTorchTrainingTask(const DistributedPyTorchTrainingTask& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_elastic_config()) {
    elastic_config_ = new ::flyteidl::plugins::ElasticConfig(*from.elastic_config_);
  } else {
    elastic_config_ = nullptr;
  }
  workers_ = from.workers_;
  // @@protoc_insertion_point(copy_constructor:flyteidl.plugins.DistributedPyTorchTrainingTask)
}

void DistributedPyTorchTrainingTask::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_DistributedPyTorchTrainingTask_flyteidl_2fplugins_2fpytorch_2eproto.base);
  ::memset(&elastic_config_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&workers_) -
      reinterpret_cast<char*>(&elastic_config_)) + sizeof(workers_));
}

DistributedPyTorchTrainingTask::~DistributedPyTorchTrainingTask() {
  // @@protoc_insertion_point(destructor:flyteidl.plugins.DistributedPyTorchTrainingTask)
  SharedDtor();
}

void DistributedPyTorchTrainingTask::SharedDtor() {
  if (this != internal_default_instance()) delete elastic_config_;
}

void DistributedPyTorchTrainingTask::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DistributedPyTorchTrainingTask& DistributedPyTorchTrainingTask::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_DistributedPyTorchTrainingTask_flyteidl_2fplugins_2fpytorch_2eproto.base);
  return *internal_default_instance();
}


void DistributedPyTorchTrainingTask::Clear() {
// @@protoc_insertion_point(message_clear_start:flyteidl.plugins.DistributedPyTorchTrainingTask)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && elastic_config_ != nullptr) {
    delete elastic_config_;
  }
  elastic_config_ = nullptr;
  workers_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* DistributedPyTorchTrainingTask::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<DistributedPyTorchTrainingTask*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 workers = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_workers(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // .flyteidl.plugins.ElasticConfig elastic_config = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::flyteidl::plugins::ElasticConfig::_InternalParse;
        object = msg->mutable_elastic_config();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool DistributedPyTorchTrainingTask::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:flyteidl.plugins.DistributedPyTorchTrainingTask)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 workers = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &workers_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .flyteidl.plugins.ElasticConfig elastic_config = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_elastic_config()));
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
  // @@protoc_insertion_point(parse_success:flyteidl.plugins.DistributedPyTorchTrainingTask)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:flyteidl.plugins.DistributedPyTorchTrainingTask)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void DistributedPyTorchTrainingTask::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:flyteidl.plugins.DistributedPyTorchTrainingTask)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 workers = 1;
  if (this->workers() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->workers(), output);
  }

  // .flyteidl.plugins.ElasticConfig elastic_config = 2;
  if (this->has_elastic_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::elastic_config(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:flyteidl.plugins.DistributedPyTorchTrainingTask)
}

::google::protobuf::uint8* DistributedPyTorchTrainingTask::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:flyteidl.plugins.DistributedPyTorchTrainingTask)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 workers = 1;
  if (this->workers() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->workers(), target);
  }

  // .flyteidl.plugins.ElasticConfig elastic_config = 2;
  if (this->has_elastic_config()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::elastic_config(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:flyteidl.plugins.DistributedPyTorchTrainingTask)
  return target;
}

size_t DistributedPyTorchTrainingTask::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:flyteidl.plugins.DistributedPyTorchTrainingTask)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .flyteidl.plugins.ElasticConfig elastic_config = 2;
  if (this->has_elastic_config()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *elastic_config_);
  }

  // int32 workers = 1;
  if (this->workers() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->workers());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DistributedPyTorchTrainingTask::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:flyteidl.plugins.DistributedPyTorchTrainingTask)
  GOOGLE_DCHECK_NE(&from, this);
  const DistributedPyTorchTrainingTask* source =
      ::google::protobuf::DynamicCastToGenerated<DistributedPyTorchTrainingTask>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:flyteidl.plugins.DistributedPyTorchTrainingTask)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:flyteidl.plugins.DistributedPyTorchTrainingTask)
    MergeFrom(*source);
  }
}

void DistributedPyTorchTrainingTask::MergeFrom(const DistributedPyTorchTrainingTask& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:flyteidl.plugins.DistributedPyTorchTrainingTask)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_elastic_config()) {
    mutable_elastic_config()->::flyteidl::plugins::ElasticConfig::MergeFrom(from.elastic_config());
  }
  if (from.workers() != 0) {
    set_workers(from.workers());
  }
}

void DistributedPyTorchTrainingTask::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:flyteidl.plugins.DistributedPyTorchTrainingTask)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DistributedPyTorchTrainingTask::CopyFrom(const DistributedPyTorchTrainingTask& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:flyteidl.plugins.DistributedPyTorchTrainingTask)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DistributedPyTorchTrainingTask::IsInitialized() const {
  return true;
}

void DistributedPyTorchTrainingTask::Swap(DistributedPyTorchTrainingTask* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DistributedPyTorchTrainingTask::InternalSwap(DistributedPyTorchTrainingTask* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(elastic_config_, other->elastic_config_);
  swap(workers_, other->workers_);
}

::google::protobuf::Metadata DistributedPyTorchTrainingTask::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_flyteidl_2fplugins_2fpytorch_2eproto);
  return ::file_level_metadata_flyteidl_2fplugins_2fpytorch_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace plugins
}  // namespace flyteidl
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::flyteidl::plugins::ElasticConfig* Arena::CreateMaybeMessage< ::flyteidl::plugins::ElasticConfig >(Arena* arena) {
  return Arena::CreateInternal< ::flyteidl::plugins::ElasticConfig >(arena);
}
template<> PROTOBUF_NOINLINE ::flyteidl::plugins::DistributedPyTorchTrainingTask* Arena::CreateMaybeMessage< ::flyteidl::plugins::DistributedPyTorchTrainingTask >(Arena* arena) {
  return Arena::CreateInternal< ::flyteidl::plugins::DistributedPyTorchTrainingTask >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>