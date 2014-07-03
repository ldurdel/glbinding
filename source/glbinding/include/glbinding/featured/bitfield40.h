#pragma once

#include <glbinding/types.h>


namespace gl40
{

using namespace gl;

enum class GLbitfield : unsigned int
{
    // AttribMask
    GL_CURRENT_BIT = 0x00000001,
    GL_POINT_BIT = 0x00000002,
    GL_LINE_BIT = 0x00000004,
    GL_POLYGON_BIT = 0x00000008,
    GL_POLYGON_STIPPLE_BIT = 0x00000010,
    GL_PIXEL_MODE_BIT = 0x00000020,
    GL_LIGHTING_BIT = 0x00000040,
    GL_FOG_BIT = 0x00000080,
    GL_DEPTH_BUFFER_BIT = 0x00000100,
    GL_ACCUM_BUFFER_BIT = 0x00000200,
    GL_STENCIL_BUFFER_BIT = 0x00000400,
    GL_VIEWPORT_BIT = 0x00000800,
    GL_TRANSFORM_BIT = 0x00001000,
    GL_ENABLE_BIT = 0x00002000,
    GL_COLOR_BUFFER_BIT = 0x00004000,
    GL_HINT_BIT = 0x00008000,
    GL_EVAL_BIT = 0x00010000,
    GL_LIST_BIT = 0x00020000,
    GL_TEXTURE_BIT = 0x00040000,
    GL_SCISSOR_BIT = 0x00080000,
    GL_MULTISAMPLE_BIT = 0x20000000,
    GL_ALL_ATTRIB_BITS = 0xFFFFFFFF,

    // ClientAttribMask
    GL_CLIENT_PIXEL_STORE_BIT = 0x00000001,
    GL_CLIENT_VERTEX_ARRAY_BIT = 0x00000002,
    GL_CLIENT_ALL_ATTRIB_BITS = 0xFFFFFFFF,

    // ContextFlagMask
    GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001,

    // ContextProfileMask
    GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001,
    GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002,

    // MapBufferUsageMask
    GL_MAP_READ_BIT = 0x0001,
    GL_MAP_WRITE_BIT = 0x0002,
    GL_MAP_INVALIDATE_RANGE_BIT = 0x0004,
    GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008,
    GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010,
    GL_MAP_UNSYNCHRONIZED_BIT = 0x0020,

    // SyncObjectMask
    GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001,
};

// import bitfields to namespace

// AttribMask
static const GLbitfield GL_CURRENT_BIT = GLbitfield::GL_CURRENT_BIT;
static const GLbitfield GL_POINT_BIT = GLbitfield::GL_POINT_BIT;
static const GLbitfield GL_LINE_BIT = GLbitfield::GL_LINE_BIT;
static const GLbitfield GL_POLYGON_BIT = GLbitfield::GL_POLYGON_BIT;
static const GLbitfield GL_POLYGON_STIPPLE_BIT = GLbitfield::GL_POLYGON_STIPPLE_BIT;
static const GLbitfield GL_PIXEL_MODE_BIT = GLbitfield::GL_PIXEL_MODE_BIT;
static const GLbitfield GL_LIGHTING_BIT = GLbitfield::GL_LIGHTING_BIT;
static const GLbitfield GL_FOG_BIT = GLbitfield::GL_FOG_BIT;
static const GLbitfield GL_DEPTH_BUFFER_BIT = GLbitfield::GL_DEPTH_BUFFER_BIT;
static const GLbitfield GL_ACCUM_BUFFER_BIT = GLbitfield::GL_ACCUM_BUFFER_BIT;
static const GLbitfield GL_STENCIL_BUFFER_BIT = GLbitfield::GL_STENCIL_BUFFER_BIT;
static const GLbitfield GL_VIEWPORT_BIT = GLbitfield::GL_VIEWPORT_BIT;
static const GLbitfield GL_TRANSFORM_BIT = GLbitfield::GL_TRANSFORM_BIT;
static const GLbitfield GL_ENABLE_BIT = GLbitfield::GL_ENABLE_BIT;
static const GLbitfield GL_COLOR_BUFFER_BIT = GLbitfield::GL_COLOR_BUFFER_BIT;
static const GLbitfield GL_HINT_BIT = GLbitfield::GL_HINT_BIT;
static const GLbitfield GL_EVAL_BIT = GLbitfield::GL_EVAL_BIT;
static const GLbitfield GL_LIST_BIT = GLbitfield::GL_LIST_BIT;
static const GLbitfield GL_TEXTURE_BIT = GLbitfield::GL_TEXTURE_BIT;
static const GLbitfield GL_SCISSOR_BIT = GLbitfield::GL_SCISSOR_BIT;
static const GLbitfield GL_MULTISAMPLE_BIT = GLbitfield::GL_MULTISAMPLE_BIT;
static const GLbitfield GL_ALL_ATTRIB_BITS = GLbitfield::GL_ALL_ATTRIB_BITS;

// ClientAttribMask
static const GLbitfield GL_CLIENT_PIXEL_STORE_BIT = GLbitfield::GL_CLIENT_PIXEL_STORE_BIT;
static const GLbitfield GL_CLIENT_VERTEX_ARRAY_BIT = GLbitfield::GL_CLIENT_VERTEX_ARRAY_BIT;
static const GLbitfield GL_CLIENT_ALL_ATTRIB_BITS = GLbitfield::GL_CLIENT_ALL_ATTRIB_BITS;

// ContextFlagMask
static const GLbitfield GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = GLbitfield::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;

// ContextProfileMask
static const GLbitfield GL_CONTEXT_CORE_PROFILE_BIT = GLbitfield::GL_CONTEXT_CORE_PROFILE_BIT;
static const GLbitfield GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = GLbitfield::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;

// MapBufferUsageMask
static const GLbitfield GL_MAP_READ_BIT = GLbitfield::GL_MAP_READ_BIT;
static const GLbitfield GL_MAP_WRITE_BIT = GLbitfield::GL_MAP_WRITE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT;
static const GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT;
static const GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT;

// SyncObjectMask
static const GLbitfield GL_SYNC_FLUSH_COMMANDS_BIT = GLbitfield::GL_SYNC_FLUSH_COMMANDS_BIT;

} // namespace gl40
