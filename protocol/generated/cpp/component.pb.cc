// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: component.proto

#include "component.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_component_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_component_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_component_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_component_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_component_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017component.proto*5\n\006CompId\022\007\n\003BAR\020\000\022\007\n\003"
  "IMU\020\001\022\007\n\003GPS\020\002\022\007\n\003SDC\020\003\022\007\n\003SER\020\004*>\n\nComp"
  "Status\022\013\n\007OFFLINE\020\000\022\014\n\010DISABLED\020\001\022\n\n\006ONL"
  "INE\020\002\022\t\n\005ERROR\020\003"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_component_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_component_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_component_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_component_2eproto = {
  false, false, descriptor_table_protodef_component_2eproto, "component.proto", 136,
  &descriptor_table_component_2eproto_once, descriptor_table_component_2eproto_sccs, descriptor_table_component_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_component_2eproto::offsets,
  file_level_metadata_component_2eproto, 0, file_level_enum_descriptors_component_2eproto, file_level_service_descriptors_component_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_component_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_component_2eproto)), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CompId_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_component_2eproto);
  return file_level_enum_descriptors_component_2eproto[0];
}
bool CompId_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CompStatus_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_component_2eproto);
  return file_level_enum_descriptors_component_2eproto[1];
}
bool CompStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>