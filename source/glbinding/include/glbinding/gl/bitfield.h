#pragma once

#include <glbinding/nogl.h>

#include <khrapi/SharedBitfield.h>

namespace gl
{

enum class AttribMask : unsigned int
{
    GL_NONE_BIT             = 0x0, // Generic GL_NONE_BIT
    GL_ALL_ATTRIB_BITS      = 0,
    GL_CURRENT_BIT          = 1,
    GL_POINT_BIT            = 2,
    GL_LINE_BIT             = 4,
    GL_POLYGON_BIT          = 8,
    GL_POLYGON_STIPPLE_BIT  = 10,
    GL_PIXEL_MODE_BIT       = 20,
    GL_LIGHTING_BIT         = 40,
    GL_FOG_BIT              = 80,
    GL_DEPTH_BUFFER_BIT     = 100,
    GL_ACCUM_BUFFER_BIT     = 200,
    GL_STENCIL_BUFFER_BIT   = 400,
    GL_VIEWPORT_BIT         = 800,
    GL_TRANSFORM_BIT        = 1000,
    GL_ENABLE_BIT           = 2000,
    GL_COLOR_BUFFER_BIT     = 4000,
    GL_HINT_BIT             = 8000,
    GL_EVAL_BIT             = 10000,
    GL_LIST_BIT             = 20000,
    GL_TEXTURE_BIT          = 40000,
    GL_SCISSOR_BIT          = 80000,
    GL_MULTISAMPLE_BIT      = 20000000,
    GL_MULTISAMPLE_BIT_3DFX = 20000000,
    GL_MULTISAMPLE_BIT_ARB  = 20000000,
    GL_MULTISAMPLE_BIT_EXT  = 20000000,
};


enum class BufferAccessMask : unsigned int
{
    GL_NONE_BIT                  = 0x0, // Generic GL_NONE_BIT
    GL_MAP_READ_BIT              = 1,
    GL_MAP_WRITE_BIT             = 2,
    GL_MAP_INVALIDATE_RANGE_BIT  = 4,
    GL_MAP_INVALIDATE_BUFFER_BIT = 8,
    GL_MAP_FLUSH_EXPLICIT_BIT    = 10,
    GL_MAP_UNSYNCHRONIZED_BIT    = 20,
    GL_MAP_PERSISTENT_BIT        = 40,
    GL_MAP_COHERENT_BIT          = 80,
};


enum class BufferStorageMask : unsigned int
{
    GL_NONE_BIT            = 0x0, // Generic GL_NONE_BIT
    GL_MAP_READ_BIT        = 1, // reuse from BufferAccessMask
    GL_MAP_WRITE_BIT       = 2, // reuse from BufferAccessMask
    GL_MAP_PERSISTENT_BIT  = 40, // reuse from BufferAccessMask
    GL_MAP_COHERENT_BIT    = 80, // reuse from BufferAccessMask
    GL_DYNAMIC_STORAGE_BIT = 100,
    GL_CLIENT_STORAGE_BIT  = 200,
};


enum class ClearBufferMask : unsigned int
{
    GL_NONE_BIT               = 0x0, // Generic GL_NONE_BIT
    GL_DEPTH_BUFFER_BIT       = 100, // reuse from AttribMask
    GL_ACCUM_BUFFER_BIT       = 200, // reuse from AttribMask
    GL_STENCIL_BUFFER_BIT     = 400, // reuse from AttribMask
    GL_COLOR_BUFFER_BIT       = 4000, // reuse from AttribMask
    GL_COVERAGE_BUFFER_BIT_NV = 8000,
};


enum class ClientAttribMask : unsigned int
{
    GL_NONE_BIT                = 0x0, // Generic GL_NONE_BIT
    GL_CLIENT_ALL_ATTRIB_BITS  = 0,
    GL_CLIENT_PIXEL_STORE_BIT  = 1,
    GL_CLIENT_VERTEX_ARRAY_BIT = 2,
};


enum class ContextFlagMask : unsigned int
{
    GL_NONE_BIT                            = 0x0, // Generic GL_NONE_BIT
    GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 1,
    GL_CONTEXT_FLAG_DEBUG_BIT              = 2,
    GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT      = 4,
    GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB  = 4,
    GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR       = 8,
};


enum class ContextProfileMask : unsigned int
{
    GL_NONE_BIT                          = 0x0, // Generic GL_NONE_BIT
    GL_CONTEXT_CORE_PROFILE_BIT          = 1,
    GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 2,
};


enum class FfdMaskSGIX : unsigned int
{
    GL_NONE_BIT                      = 0x0, // Generic GL_NONE_BIT
    GL_TEXTURE_DEFORMATION_BIT_SGIX  = 1,
    GL_GEOMETRY_DEFORMATION_BIT_SGIX = 2,
};


enum class FragmentShaderColorModMaskATI : unsigned int
{
    GL_NONE_BIT       = 0x0, // Generic GL_NONE_BIT
    GL_COMP_BIT_ATI   = 2,
    GL_NEGATE_BIT_ATI = 4,
    GL_BIAS_BIT_ATI   = 8,
};


enum class FragmentShaderDestMaskATI : unsigned int
{
    GL_NONE_BIT      = 0x0, // Generic GL_NONE_BIT
    GL_RED_BIT_ATI   = 1,
    GL_GREEN_BIT_ATI = 2,
    GL_BLUE_BIT_ATI  = 4,
};


enum class FragmentShaderDestModMaskATI : unsigned int
{
    GL_NONE_BIT         = 0x0, // Generic GL_NONE_BIT
    GL_2X_BIT_ATI       = 1,
    GL_4X_BIT_ATI       = 2,
    GL_8X_BIT_ATI       = 4,
    GL_HALF_BIT_ATI     = 8,
    GL_QUARTER_BIT_ATI  = 10,
    GL_EIGHTH_BIT_ATI   = 20,
    GL_SATURATE_BIT_ATI = 40,
};


enum class MapBufferUsageMask : unsigned int
{
    GL_NONE_BIT                  = 0x0, // Generic GL_NONE_BIT
    GL_MAP_READ_BIT              = 1, // reuse from BufferAccessMask
    GL_MAP_WRITE_BIT             = 2, // reuse from BufferAccessMask
    GL_MAP_INVALIDATE_RANGE_BIT  = 4, // reuse from BufferAccessMask
    GL_MAP_INVALIDATE_BUFFER_BIT = 8, // reuse from BufferAccessMask
    GL_MAP_FLUSH_EXPLICIT_BIT    = 10, // reuse from BufferAccessMask
    GL_MAP_UNSYNCHRONIZED_BIT    = 20, // reuse from BufferAccessMask
    GL_MAP_PERSISTENT_BIT        = 40, // reuse from BufferAccessMask
    GL_MAP_COHERENT_BIT          = 80, // reuse from BufferAccessMask
    GL_DYNAMIC_STORAGE_BIT       = 100, // reuse from BufferStorageMask
    GL_CLIENT_STORAGE_BIT        = 200, // reuse from BufferStorageMask
    GL_SPARSE_STORAGE_BIT_ARB    = 400,
};


enum class MemoryBarrierMask : unsigned int
{
    GL_NONE_BIT                            = 0x0, // Generic GL_NONE_BIT
    GL_ALL_BARRIER_BITS                    = 0,
    GL_ALL_BARRIER_BITS_EXT                = 0,
    GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT     = 1,
    GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = 1,
    GL_ELEMENT_ARRAY_BARRIER_BIT           = 2,
    GL_ELEMENT_ARRAY_BARRIER_BIT_EXT       = 2,
    GL_UNIFORM_BARRIER_BIT                 = 4,
    GL_UNIFORM_BARRIER_BIT_EXT             = 4,
    GL_TEXTURE_FETCH_BARRIER_BIT           = 8,
    GL_TEXTURE_FETCH_BARRIER_BIT_EXT       = 8,
    GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = 10,
    GL_SHADER_IMAGE_ACCESS_BARRIER_BIT     = 20,
    GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = 20,
    GL_COMMAND_BARRIER_BIT                 = 40,
    GL_COMMAND_BARRIER_BIT_EXT             = 40,
    GL_PIXEL_BUFFER_BARRIER_BIT            = 80,
    GL_PIXEL_BUFFER_BARRIER_BIT_EXT        = 80,
    GL_TEXTURE_UPDATE_BARRIER_BIT          = 100,
    GL_TEXTURE_UPDATE_BARRIER_BIT_EXT      = 100,
    GL_BUFFER_UPDATE_BARRIER_BIT           = 200,
    GL_BUFFER_UPDATE_BARRIER_BIT_EXT       = 200,
    GL_FRAMEBUFFER_BARRIER_BIT             = 400,
    GL_FRAMEBUFFER_BARRIER_BIT_EXT         = 400,
    GL_TRANSFORM_FEEDBACK_BARRIER_BIT      = 800,
    GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT  = 800,
    GL_ATOMIC_COUNTER_BARRIER_BIT          = 1000,
    GL_ATOMIC_COUNTER_BARRIER_BIT_EXT      = 1000,
    GL_SHADER_STORAGE_BARRIER_BIT          = 2000,
    GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT    = 4000,
    GL_QUERY_BUFFER_BARRIER_BIT            = 8000,
};


enum class PathFontStyle : unsigned int
{
    GL_NONE_BIT      = 0x0, // Generic GL_NONE_BIT
    GL_BOLD_BIT_NV   = 1,
    GL_ITALIC_BIT_NV = 2,
};


enum class PathRenderingMaskNV : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_BOLD_BIT_NV                             = 1, // reuse from PathFontStyle
    GL_GLYPH_WIDTH_BIT_NV                      = 1,
    GL_GLYPH_HEIGHT_BIT_NV                     = 2,
    GL_ITALIC_BIT_NV                           = 2, // reuse from PathFontStyle
    GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV       = 4,
    GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV       = 8,
    GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 10,
    GL_GLYPH_VERTICAL_BEARING_X_BIT_NV         = 20,
    GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV         = 40,
    GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV   = 80,
    GL_GLYPH_HAS_KERNING_BIT_NV                = 100,
    GL_FONT_X_MIN_BOUNDS_BIT_NV                = 10000,
    GL_FONT_Y_MIN_BOUNDS_BIT_NV                = 20000,
    GL_FONT_X_MAX_BOUNDS_BIT_NV                = 40000,
    GL_FONT_Y_MAX_BOUNDS_BIT_NV                = 80000,
    GL_FONT_UNITS_PER_EM_BIT_NV                = 100000,
    GL_FONT_ASCENDER_BIT_NV                    = 200000,
    GL_FONT_DESCENDER_BIT_NV                   = 400000,
    GL_FONT_HEIGHT_BIT_NV                      = 800000,
    GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV           = 1000000,
    GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV          = 2000000,
    GL_FONT_UNDERLINE_POSITION_BIT_NV          = 4000000,
    GL_FONT_UNDERLINE_THICKNESS_BIT_NV         = 8000000,
    GL_FONT_HAS_KERNING_BIT_NV                 = 10000000,
    GL_FONT_NUM_GLYPH_INDICES_BIT_NV           = 20000000,
};


enum class PerformanceQueryCapsMaskINTEL : unsigned int
{
    GL_NONE_BIT                       = 0x0, // Generic GL_NONE_BIT
    GL_PERFQUERY_SINGLE_CONTEXT_INTEL = 0,
    GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = 1,
};


enum class SyncObjectMask : unsigned int
{
    GL_NONE_BIT                = 0x0, // Generic GL_NONE_BIT
    GL_SYNC_FLUSH_COMMANDS_BIT = 1,
};


enum class TextureStorageMaskAMD : unsigned int
{
    GL_NONE_BIT                       = 0x0, // Generic GL_NONE_BIT
    GL_TEXTURE_STORAGE_SPARSE_BIT_AMD = 1,
};


enum class UnusedMask : unsigned int
{
    GL_NONE_BIT   = 0x0, // Generic GL_NONE_BIT
    GL_UNUSED_BIT = 0,
};


enum class UseProgramStageMask : unsigned int
{
    GL_NONE_BIT                   = 0x0, // Generic GL_NONE_BIT
    GL_ALL_SHADER_BITS            = 0,
    GL_VERTEX_SHADER_BIT          = 1,
    GL_FRAGMENT_SHADER_BIT        = 2,
    GL_GEOMETRY_SHADER_BIT        = 4,
    GL_TESS_CONTROL_SHADER_BIT    = 8,
    GL_TESS_EVALUATION_SHADER_BIT = 10,
    GL_COMPUTE_SHADER_BIT         = 20,
};


enum class VertexHintsMaskPGI : unsigned int
{
    GL_NONE_BIT                        = 0x0, // Generic GL_NONE_BIT
    GL_VERTEX23_BIT_PGI                = 4,
    GL_VERTEX4_BIT_PGI                 = 8,
    GL_COLOR3_BIT_PGI                  = 10000,
    GL_COLOR4_BIT_PGI                  = 20000,
    GL_EDGEFLAG_BIT_PGI                = 40000,
    GL_INDEX_BIT_PGI                   = 80000,
    GL_MAT_AMBIENT_BIT_PGI             = 100000,
    GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = 200000,
    GL_MAT_DIFFUSE_BIT_PGI             = 400000,
    GL_MAT_EMISSION_BIT_PGI            = 800000,
    GL_MAT_COLOR_INDEXES_BIT_PGI       = 1000000,
    GL_MAT_SHININESS_BIT_PGI           = 2000000,
    GL_MAT_SPECULAR_BIT_PGI            = 4000000,
    GL_NORMAL_BIT_PGI                  = 8000000,
    GL_TEXCOORD1_BIT_PGI               = 10000000,
    GL_TEXCOORD2_BIT_PGI               = 20000000,
    GL_TEXCOORD3_BIT_PGI               = 40000000,
    GL_TEXCOORD4_BIT_PGI               = 80000000,
};



// import bitfields to namespace

static const khrapi::SharedBitfield<gl::AttribMask, gl::BufferAccessMask, gl::BufferStorageMask, gl::ClearBufferMask, gl::ClientAttribMask, gl::ContextFlagMask, gl::ContextProfileMask, gl::FfdMaskSGIX, gl::FragmentShaderColorModMaskATI, gl::FragmentShaderDestMaskATI, gl::FragmentShaderDestModMaskATI, gl::MapBufferUsageMask, gl::MemoryBarrierMask, gl::PathFontStyle, gl::PathRenderingMaskNV, gl::PerformanceQueryCapsMaskINTEL, gl::SyncObjectMask, gl::TextureStorageMaskAMD, gl::UnusedMask, gl::UseProgramStageMask, gl::VertexHintsMaskPGI> GL_NONE_BIT = gl::AttribMask::GL_NONE_BIT;
static const AttribMask GL_ALL_ATTRIB_BITS = AttribMask::GL_ALL_ATTRIB_BITS;
static const MemoryBarrierMask GL_ALL_BARRIER_BITS = MemoryBarrierMask::GL_ALL_BARRIER_BITS;
static const MemoryBarrierMask GL_ALL_BARRIER_BITS_EXT = MemoryBarrierMask::GL_ALL_BARRIER_BITS_EXT;
static const UseProgramStageMask GL_ALL_SHADER_BITS = UseProgramStageMask::GL_ALL_SHADER_BITS;
static const ClientAttribMask GL_CLIENT_ALL_ATTRIB_BITS = ClientAttribMask::GL_CLIENT_ALL_ATTRIB_BITS;
static const PerformanceQueryCapsMaskINTEL GL_PERFQUERY_SINGLE_CONTEXT_INTEL = PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL;
static const UnusedMask GL_UNUSED_BIT = UnusedMask::GL_UNUSED_BIT;
static const FragmentShaderDestModMaskATI GL_2X_BIT_ATI = FragmentShaderDestModMaskATI::GL_2X_BIT_ATI;
static const khrapi::SharedBitfield<PathFontStyle, PathRenderingMaskNV> GL_BOLD_BIT_NV = PathFontStyle::GL_BOLD_BIT_NV;
static const ClientAttribMask GL_CLIENT_PIXEL_STORE_BIT = ClientAttribMask::GL_CLIENT_PIXEL_STORE_BIT;
static const ContextProfileMask GL_CONTEXT_CORE_PROFILE_BIT = ContextProfileMask::GL_CONTEXT_CORE_PROFILE_BIT;
static const ContextFlagMask GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;
static const AttribMask GL_CURRENT_BIT = AttribMask::GL_CURRENT_BIT;
static const PathRenderingMaskNV GL_GLYPH_WIDTH_BIT_NV = PathRenderingMaskNV::GL_GLYPH_WIDTH_BIT_NV;
static const khrapi::SharedBitfield<BufferAccessMask, BufferStorageMask, MapBufferUsageMask> GL_MAP_READ_BIT = BufferAccessMask::GL_MAP_READ_BIT;
static const PerformanceQueryCapsMaskINTEL GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL;
static const FragmentShaderDestMaskATI GL_RED_BIT_ATI = FragmentShaderDestMaskATI::GL_RED_BIT_ATI;
static const SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT = SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT;
static const FfdMaskSGIX GL_TEXTURE_DEFORMATION_BIT_SGIX = FfdMaskSGIX::GL_TEXTURE_DEFORMATION_BIT_SGIX;
static const TextureStorageMaskAMD GL_TEXTURE_STORAGE_SPARSE_BIT_AMD = TextureStorageMaskAMD::GL_TEXTURE_STORAGE_SPARSE_BIT_AMD;
static const MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
static const MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT;
static const UseProgramStageMask GL_VERTEX_SHADER_BIT = UseProgramStageMask::GL_VERTEX_SHADER_BIT;
static const FragmentShaderDestModMaskATI GL_4X_BIT_ATI = FragmentShaderDestModMaskATI::GL_4X_BIT_ATI;
static const ClientAttribMask GL_CLIENT_VERTEX_ARRAY_BIT = ClientAttribMask::GL_CLIENT_VERTEX_ARRAY_BIT;
static const FragmentShaderColorModMaskATI GL_COMP_BIT_ATI = FragmentShaderColorModMaskATI::GL_COMP_BIT_ATI;
static const ContextProfileMask GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = ContextProfileMask::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;
static const ContextFlagMask GL_CONTEXT_FLAG_DEBUG_BIT = ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT;
static const MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT = MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT;
static const MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT_EXT = MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT_EXT;
static const UseProgramStageMask GL_FRAGMENT_SHADER_BIT = UseProgramStageMask::GL_FRAGMENT_SHADER_BIT;
static const FfdMaskSGIX GL_GEOMETRY_DEFORMATION_BIT_SGIX = FfdMaskSGIX::GL_GEOMETRY_DEFORMATION_BIT_SGIX;
static const PathRenderingMaskNV GL_GLYPH_HEIGHT_BIT_NV = PathRenderingMaskNV::GL_GLYPH_HEIGHT_BIT_NV;
static const FragmentShaderDestMaskATI GL_GREEN_BIT_ATI = FragmentShaderDestMaskATI::GL_GREEN_BIT_ATI;
static const khrapi::SharedBitfield<PathFontStyle, PathRenderingMaskNV> GL_ITALIC_BIT_NV = PathFontStyle::GL_ITALIC_BIT_NV;
static const khrapi::SharedBitfield<BufferAccessMask, BufferStorageMask, MapBufferUsageMask> GL_MAP_WRITE_BIT = BufferAccessMask::GL_MAP_WRITE_BIT;
static const AttribMask GL_POINT_BIT = AttribMask::GL_POINT_BIT;
static const FragmentShaderDestModMaskATI GL_8X_BIT_ATI = FragmentShaderDestModMaskATI::GL_8X_BIT_ATI;
static const FragmentShaderDestMaskATI GL_BLUE_BIT_ATI = FragmentShaderDestMaskATI::GL_BLUE_BIT_ATI;
static const ContextFlagMask GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT;
static const ContextFlagMask GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB;
static const UseProgramStageMask GL_GEOMETRY_SHADER_BIT = UseProgramStageMask::GL_GEOMETRY_SHADER_BIT;
static const PathRenderingMaskNV GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV = PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV;
static const AttribMask GL_LINE_BIT = AttribMask::GL_LINE_BIT;
static const khrapi::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_INVALIDATE_RANGE_BIT = BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT;
static const FragmentShaderColorModMaskATI GL_NEGATE_BIT_ATI = FragmentShaderColorModMaskATI::GL_NEGATE_BIT_ATI;
static const MemoryBarrierMask GL_UNIFORM_BARRIER_BIT = MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT;
static const MemoryBarrierMask GL_UNIFORM_BARRIER_BIT_EXT = MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT_EXT;
static const VertexHintsMaskPGI GL_VERTEX23_BIT_PGI = VertexHintsMaskPGI::GL_VERTEX23_BIT_PGI;
static const FragmentShaderColorModMaskATI GL_BIAS_BIT_ATI = FragmentShaderColorModMaskATI::GL_BIAS_BIT_ATI;
static const ContextFlagMask GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR = ContextFlagMask::GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR;
static const PathRenderingMaskNV GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV;
static const FragmentShaderDestModMaskATI GL_HALF_BIT_ATI = FragmentShaderDestModMaskATI::GL_HALF_BIT_ATI;
static const khrapi::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_INVALIDATE_BUFFER_BIT = BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT;
static const AttribMask GL_POLYGON_BIT = AttribMask::GL_POLYGON_BIT;
static const UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT = UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT;
static const MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT = MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT;
static const MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT_EXT = MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT_EXT;
static const VertexHintsMaskPGI GL_VERTEX4_BIT_PGI = VertexHintsMaskPGI::GL_VERTEX4_BIT_PGI;
static const PathRenderingMaskNV GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV;
static const khrapi::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_FLUSH_EXPLICIT_BIT = BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT;
static const AttribMask GL_POLYGON_STIPPLE_BIT = AttribMask::GL_POLYGON_STIPPLE_BIT;
static const FragmentShaderDestModMaskATI GL_QUARTER_BIT_ATI = FragmentShaderDestModMaskATI::GL_QUARTER_BIT_ATI;
static const MemoryBarrierMask GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = MemoryBarrierMask::GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV;
static const UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT = UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT;
static const UseProgramStageMask GL_COMPUTE_SHADER_BIT = UseProgramStageMask::GL_COMPUTE_SHADER_BIT;
static const FragmentShaderDestModMaskATI GL_EIGHTH_BIT_ATI = FragmentShaderDestModMaskATI::GL_EIGHTH_BIT_ATI;
static const PathRenderingMaskNV GL_GLYPH_VERTICAL_BEARING_X_BIT_NV = PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV;
static const khrapi::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_UNSYNCHRONIZED_BIT = BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT;
static const AttribMask GL_PIXEL_MODE_BIT = AttribMask::GL_PIXEL_MODE_BIT;
static const MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
static const MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT;
static const MemoryBarrierMask GL_COMMAND_BARRIER_BIT = MemoryBarrierMask::GL_COMMAND_BARRIER_BIT;
static const MemoryBarrierMask GL_COMMAND_BARRIER_BIT_EXT = MemoryBarrierMask::GL_COMMAND_BARRIER_BIT_EXT;
static const PathRenderingMaskNV GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV = PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV;
static const AttribMask GL_LIGHTING_BIT = AttribMask::GL_LIGHTING_BIT;
static const khrapi::SharedBitfield<BufferAccessMask, BufferStorageMask, MapBufferUsageMask> GL_MAP_PERSISTENT_BIT = BufferAccessMask::GL_MAP_PERSISTENT_BIT;
static const FragmentShaderDestModMaskATI GL_SATURATE_BIT_ATI = FragmentShaderDestModMaskATI::GL_SATURATE_BIT_ATI;
static const AttribMask GL_FOG_BIT = AttribMask::GL_FOG_BIT;
static const PathRenderingMaskNV GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV;
static const khrapi::SharedBitfield<BufferAccessMask, BufferStorageMask, MapBufferUsageMask> GL_MAP_COHERENT_BIT = BufferAccessMask::GL_MAP_COHERENT_BIT;
static const MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT = MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT;
static const MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT_EXT = MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT_EXT;
static const khrapi::SharedBitfield<AttribMask, ClearBufferMask> GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
static const khrapi::SharedBitfield<BufferStorageMask, MapBufferUsageMask> GL_DYNAMIC_STORAGE_BIT = BufferStorageMask::GL_DYNAMIC_STORAGE_BIT;
static const PathRenderingMaskNV GL_GLYPH_HAS_KERNING_BIT_NV = PathRenderingMaskNV::GL_GLYPH_HAS_KERNING_BIT_NV;
static const MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT = MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT;
static const MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT_EXT = MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT_EXT;
static const khrapi::SharedBitfield<AttribMask, ClearBufferMask> GL_ACCUM_BUFFER_BIT = AttribMask::GL_ACCUM_BUFFER_BIT;
static const MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT = MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT;
static const MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT_EXT = MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT_EXT;
static const khrapi::SharedBitfield<BufferStorageMask, MapBufferUsageMask> GL_CLIENT_STORAGE_BIT = BufferStorageMask::GL_CLIENT_STORAGE_BIT;
static const MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT = MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT;
static const MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT_EXT = MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT_EXT;
static const MapBufferUsageMask GL_SPARSE_STORAGE_BIT_ARB = MapBufferUsageMask::GL_SPARSE_STORAGE_BIT_ARB;
static const khrapi::SharedBitfield<AttribMask, ClearBufferMask> GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
static const MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT = MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
static const MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT;
static const AttribMask GL_VIEWPORT_BIT = AttribMask::GL_VIEWPORT_BIT;
static const MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT = MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT;
static const MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT_EXT = MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT_EXT;
static const AttribMask GL_TRANSFORM_BIT = AttribMask::GL_TRANSFORM_BIT;
static const AttribMask GL_ENABLE_BIT = AttribMask::GL_ENABLE_BIT;
static const MemoryBarrierMask GL_SHADER_STORAGE_BARRIER_BIT = MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT;
static const MemoryBarrierMask GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT;
static const khrapi::SharedBitfield<AttribMask, ClearBufferMask> GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;
static const ClearBufferMask GL_COVERAGE_BUFFER_BIT_NV = ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV;
static const AttribMask GL_HINT_BIT = AttribMask::GL_HINT_BIT;
static const MemoryBarrierMask GL_QUERY_BUFFER_BARRIER_BIT = MemoryBarrierMask::GL_QUERY_BUFFER_BARRIER_BIT;
static const VertexHintsMaskPGI GL_COLOR3_BIT_PGI = VertexHintsMaskPGI::GL_COLOR3_BIT_PGI;
static const AttribMask GL_EVAL_BIT = AttribMask::GL_EVAL_BIT;
static const PathRenderingMaskNV GL_FONT_X_MIN_BOUNDS_BIT_NV = PathRenderingMaskNV::GL_FONT_X_MIN_BOUNDS_BIT_NV;
static const VertexHintsMaskPGI GL_COLOR4_BIT_PGI = VertexHintsMaskPGI::GL_COLOR4_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_Y_MIN_BOUNDS_BIT_NV = PathRenderingMaskNV::GL_FONT_Y_MIN_BOUNDS_BIT_NV;
static const AttribMask GL_LIST_BIT = AttribMask::GL_LIST_BIT;
static const VertexHintsMaskPGI GL_EDGEFLAG_BIT_PGI = VertexHintsMaskPGI::GL_EDGEFLAG_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_X_MAX_BOUNDS_BIT_NV = PathRenderingMaskNV::GL_FONT_X_MAX_BOUNDS_BIT_NV;
static const AttribMask GL_TEXTURE_BIT = AttribMask::GL_TEXTURE_BIT;
static const PathRenderingMaskNV GL_FONT_Y_MAX_BOUNDS_BIT_NV = PathRenderingMaskNV::GL_FONT_Y_MAX_BOUNDS_BIT_NV;
static const VertexHintsMaskPGI GL_INDEX_BIT_PGI = VertexHintsMaskPGI::GL_INDEX_BIT_PGI;
static const AttribMask GL_SCISSOR_BIT = AttribMask::GL_SCISSOR_BIT;
static const PathRenderingMaskNV GL_FONT_UNITS_PER_EM_BIT_NV = PathRenderingMaskNV::GL_FONT_UNITS_PER_EM_BIT_NV;
static const VertexHintsMaskPGI GL_MAT_AMBIENT_BIT_PGI = VertexHintsMaskPGI::GL_MAT_AMBIENT_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_ASCENDER_BIT_NV = PathRenderingMaskNV::GL_FONT_ASCENDER_BIT_NV;
static const VertexHintsMaskPGI GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = VertexHintsMaskPGI::GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_DESCENDER_BIT_NV = PathRenderingMaskNV::GL_FONT_DESCENDER_BIT_NV;
static const VertexHintsMaskPGI GL_MAT_DIFFUSE_BIT_PGI = VertexHintsMaskPGI::GL_MAT_DIFFUSE_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_HEIGHT_BIT_NV = PathRenderingMaskNV::GL_FONT_HEIGHT_BIT_NV;
static const VertexHintsMaskPGI GL_MAT_EMISSION_BIT_PGI = VertexHintsMaskPGI::GL_MAT_EMISSION_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV = PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV;
static const VertexHintsMaskPGI GL_MAT_COLOR_INDEXES_BIT_PGI = VertexHintsMaskPGI::GL_MAT_COLOR_INDEXES_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV = PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV;
static const VertexHintsMaskPGI GL_MAT_SHININESS_BIT_PGI = VertexHintsMaskPGI::GL_MAT_SHININESS_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_UNDERLINE_POSITION_BIT_NV = PathRenderingMaskNV::GL_FONT_UNDERLINE_POSITION_BIT_NV;
static const VertexHintsMaskPGI GL_MAT_SPECULAR_BIT_PGI = VertexHintsMaskPGI::GL_MAT_SPECULAR_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_UNDERLINE_THICKNESS_BIT_NV = PathRenderingMaskNV::GL_FONT_UNDERLINE_THICKNESS_BIT_NV;
static const VertexHintsMaskPGI GL_NORMAL_BIT_PGI = VertexHintsMaskPGI::GL_NORMAL_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_HAS_KERNING_BIT_NV = PathRenderingMaskNV::GL_FONT_HAS_KERNING_BIT_NV;
static const VertexHintsMaskPGI GL_TEXCOORD1_BIT_PGI = VertexHintsMaskPGI::GL_TEXCOORD1_BIT_PGI;
static const PathRenderingMaskNV GL_FONT_NUM_GLYPH_INDICES_BIT_NV = PathRenderingMaskNV::GL_FONT_NUM_GLYPH_INDICES_BIT_NV;
static const AttribMask GL_MULTISAMPLE_BIT = AttribMask::GL_MULTISAMPLE_BIT;
static const AttribMask GL_MULTISAMPLE_BIT_3DFX = AttribMask::GL_MULTISAMPLE_BIT_3DFX;
static const AttribMask GL_MULTISAMPLE_BIT_ARB = AttribMask::GL_MULTISAMPLE_BIT_ARB;
static const AttribMask GL_MULTISAMPLE_BIT_EXT = AttribMask::GL_MULTISAMPLE_BIT_EXT;
static const VertexHintsMaskPGI GL_TEXCOORD2_BIT_PGI = VertexHintsMaskPGI::GL_TEXCOORD2_BIT_PGI;
static const VertexHintsMaskPGI GL_TEXCOORD3_BIT_PGI = VertexHintsMaskPGI::GL_TEXCOORD3_BIT_PGI;
static const VertexHintsMaskPGI GL_TEXCOORD4_BIT_PGI = VertexHintsMaskPGI::GL_TEXCOORD4_BIT_PGI;

} // namespace gl
