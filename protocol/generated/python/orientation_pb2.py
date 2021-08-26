# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: orientation.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='orientation.proto',
  package='',
  syntax='proto2',
  serialized_options=None,
  serialized_pb=_b('\n\x11orientation.proto\"\x89\x01\n\x0bOrientation\x12\x0c\n\x04quat\x18\x01 \x03(\x11\x12\r\n\x05\x65uler\x18\x02 \x03(\x11\x12\r\n\x05omega\x18\x03 \x03(\x11\x12\r\n\x05\x61\x63\x63\x65l\x18\x04 \x03(\x11\x12\x0f\n\x07magneto\x18\x05 \x03(\x11\x12\x0e\n\x03lon\x18\x06 \x01(\x11:\x01\x30\x12\x0e\n\x03lat\x18\x07 \x01(\x11:\x01\x30\x12\x0e\n\x03\x61lt\x18\x08 \x01(\x11:\x01\x30')
)




_ORIENTATION = _descriptor.Descriptor(
  name='Orientation',
  full_name='Orientation',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='quat', full_name='Orientation.quat', index=0,
      number=1, type=17, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='euler', full_name='Orientation.euler', index=1,
      number=2, type=17, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='omega', full_name='Orientation.omega', index=2,
      number=3, type=17, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='accel', full_name='Orientation.accel', index=3,
      number=4, type=17, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='magneto', full_name='Orientation.magneto', index=4,
      number=5, type=17, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='lon', full_name='Orientation.lon', index=5,
      number=6, type=17, cpp_type=1, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='lat', full_name='Orientation.lat', index=6,
      number=7, type=17, cpp_type=1, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='alt', full_name='Orientation.alt', index=7,
      number=8, type=17, cpp_type=1, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=22,
  serialized_end=159,
)

DESCRIPTOR.message_types_by_name['Orientation'] = _ORIENTATION
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Orientation = _reflection.GeneratedProtocolMessageType('Orientation', (_message.Message,), dict(
  DESCRIPTOR = _ORIENTATION,
  __module__ = 'orientation_pb2'
  # @@protoc_insertion_point(class_scope:Orientation)
  ))
_sym_db.RegisterMessage(Orientation)


# @@protoc_insertion_point(module_scope)
