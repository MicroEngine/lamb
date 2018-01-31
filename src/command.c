/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: command.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "command.h"
void   lamb_request_init
                     (Request         *message)
{
  static const Request init_value = LAMB_REQUEST_INIT;
  *message = init_value;
}
size_t lamb_request_get_packed_size
                     (const Request *message)
{
  assert(message->base.descriptor == &lamb_request_descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t lamb_request_pack
                     (const Request *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &lamb_request_descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t lamb_request_pack_to_buffer
                     (const Request *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &lamb_request_descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Request *
       lamb_request_unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Request *)
     protobuf_c_message_unpack (&lamb_request_descriptor,
                                allocator, len, data);
}
void   lamb_request_free_unpacked
                     (Request *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &lamb_request_descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   lamb_response_init
                     (Response         *message)
{
  static const Response init_value = LAMB_RESPONSE_INIT;
  *message = init_value;
}
size_t lamb_response_get_packed_size
                     (const Response *message)
{
  assert(message->base.descriptor == &lamb_response_descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t lamb_response_pack
                     (const Response *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &lamb_response_descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t lamb_response_pack_to_buffer
                     (const Response *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &lamb_response_descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Response *
       lamb_response_unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Response *)
     protobuf_c_message_unpack (&lamb_response_descriptor,
                                allocator, len, data);
}
void   lamb_response_free_unpacked
                     (Response *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &lamb_response_descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   lamb_connect_init
                     (Connect         *message)
{
  static const Connect init_value = LAMB_CONNECT_INIT;
  *message = init_value;
}
size_t lamb_connect_get_packed_size
                     (const Connect *message)
{
  assert(message->base.descriptor == &lamb_connect_descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t lamb_connect_pack
                     (const Connect *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &lamb_connect_descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t lamb_connect_pack_to_buffer
                     (const Connect *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &lamb_connect_descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Connect *
       lamb_connect_unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Connect *)
     protobuf_c_message_unpack (&lamb_connect_descriptor,
                                allocator, len, data);
}
void   lamb_connect_free_unpacked
                     (Connect *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &lamb_connect_descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor lamb_request_field_descriptors[3] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Request, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Request, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "addr",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Request, addr),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned lamb_request_field_indices_by_name[] = {
  2,   /* field[2] = addr */
  0,   /* field[0] = id */
  1,   /* field[1] = type */
};
static const ProtobufCIntRange lamb_request_number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor lamb_request_descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Request",
  "Request",
  "Request",
  "",
  sizeof(Request),
  3,
  lamb_request_field_descriptors,
  lamb_request_field_indices_by_name,
  1,  lamb_request_number_ranges,
  (ProtobufCMessageInit) lamb_request_init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor lamb_response_field_descriptors[2] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Response, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "host",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Response, host),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned lamb_response_field_indices_by_name[] = {
  1,   /* field[1] = host */
  0,   /* field[0] = id */
};
static const ProtobufCIntRange lamb_response_number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor lamb_response_descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Response",
  "Response",
  "Response",
  "",
  sizeof(Response),
  2,
  lamb_response_field_descriptors,
  lamb_response_field_indices_by_name,
  1,  lamb_response_number_ranges,
  (ProtobufCMessageInit) lamb_response_init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor lamb_connect_field_descriptors[3] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Connect, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Connect, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "addr",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Connect, addr),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned lamb_connect_field_indices_by_name[] = {
  2,   /* field[2] = addr */
  0,   /* field[0] = id */
  1,   /* field[1] = type */
};
static const ProtobufCIntRange lamb_connect_number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor lamb_connect_descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Connect",
  "Connect",
  "Connect",
  "",
  sizeof(Connect),
  3,
  lamb_connect_field_descriptors,
  lamb_connect_field_indices_by_name,
  1,  lamb_connect_number_ranges,
  (ProtobufCMessageInit) lamb_connect_init,
  NULL,NULL,NULL    /* reserved[123] */
};
