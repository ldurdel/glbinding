#pragma once

#include <gles2binding/nogles2.h>


namespace gles2
{

enum class GLES2extension : int // GLES2extension is not a type introduced by any Khronos API so far
{
    UNKNOWN = -1,
    GL_AMD_compressed_3DC_texture,
    GL_AMD_compressed_ATC_texture,
    GL_AMD_performance_monitor,
    GL_AMD_program_binary_Z400,
    GL_ANDROID_extension_pack_es31a,
    GL_ANGLE_depth_texture,
    GL_ANGLE_framebuffer_blit,
    GL_ANGLE_framebuffer_multisample,
    GL_ANGLE_instanced_arrays,
    GL_ANGLE_pack_reverse_row_order,
    GL_ANGLE_program_binary,
    GL_ANGLE_texture_compression_dxt3,
    GL_ANGLE_texture_compression_dxt5,
    GL_ANGLE_texture_usage,
    GL_ANGLE_translated_shader_source,
    GL_APPLE_clip_distance,
    GL_APPLE_color_buffer_packed_float,
    GL_APPLE_copy_texture_levels,
    GL_APPLE_framebuffer_multisample,
    GL_APPLE_rgb_422,
    GL_APPLE_sync,
    GL_APPLE_texture_format_BGRA8888,
    GL_APPLE_texture_max_level,
    GL_APPLE_texture_packed_float,
    GL_ARM_mali_program_binary,
    GL_ARM_mali_shader_binary,
    GL_ARM_rgba8,
    GL_ARM_shader_framebuffer_fetch,
    GL_ARM_shader_framebuffer_fetch_depth_stencil,
    GL_DMP_program_binary,
    GL_DMP_shader_binary,
    GL_EXT_YUV_target,
    GL_EXT_base_instance,
    GL_EXT_blend_minmax,
    GL_EXT_buffer_storage,
    GL_EXT_color_buffer_half_float,
    GL_EXT_copy_image,
    GL_EXT_debug_label,
    GL_EXT_debug_marker,
    GL_EXT_discard_framebuffer,
    GL_EXT_disjoint_timer_query,
    GL_EXT_draw_buffers,
    GL_EXT_draw_buffers_indexed,
    GL_EXT_draw_elements_base_vertex,
    GL_EXT_draw_instanced,
    GL_EXT_float_blend,
    GL_EXT_geometry_point_size,
    GL_EXT_geometry_shader,
    GL_EXT_gpu_shader5,
    GL_EXT_instanced_arrays,
    GL_EXT_map_buffer_range,
    GL_EXT_multi_draw_arrays,
    GL_EXT_multi_draw_indirect,
    GL_EXT_multisampled_render_to_texture,
    GL_EXT_multiview_draw_buffers,
    GL_EXT_occlusion_query_boolean,
    GL_EXT_post_depth_coverage,
    GL_EXT_primitive_bounding_box,
    GL_EXT_pvrtc_sRGB,
    GL_EXT_raster_multisample,
    GL_EXT_read_format_bgra,
    GL_EXT_render_snorm,
    GL_EXT_robustness,
    GL_EXT_sRGB,
    GL_EXT_sRGB_write_control,
    GL_EXT_separate_shader_objects,
    GL_EXT_shader_framebuffer_fetch,
    GL_EXT_shader_implicit_conversions,
    GL_EXT_shader_integer_mix,
    GL_EXT_shader_io_blocks,
    GL_EXT_shader_pixel_local_storage,
    GL_EXT_shader_texture_lod,
    GL_EXT_shadow_samplers,
    GL_EXT_sparse_texture,
    GL_EXT_tessellation_point_size,
    GL_EXT_tessellation_shader,
    GL_EXT_texture_border_clamp,
    GL_EXT_texture_buffer,
    GL_EXT_texture_compression_dxt1,
    GL_EXT_texture_compression_s3tc,
    GL_EXT_texture_cube_map_array,
    GL_EXT_texture_filter_anisotropic,
    GL_EXT_texture_filter_minmax,
    GL_EXT_texture_format_BGRA8888,
    GL_EXT_texture_norm16,
    GL_EXT_texture_rg,
    GL_EXT_texture_sRGB_R8,
    GL_EXT_texture_sRGB_RG8,
    GL_EXT_texture_sRGB_decode,
    GL_EXT_texture_storage,
    GL_EXT_texture_type_2_10_10_10_REV,
    GL_EXT_texture_view,
    GL_EXT_unpack_subimage,
    GL_FJ_shader_binary_GCCSO,
    GL_IMG_multisampled_render_to_texture,
    GL_IMG_program_binary,
    GL_IMG_read_format,
    GL_IMG_shader_binary,
    GL_IMG_texture_compression_pvrtc,
    GL_IMG_texture_compression_pvrtc2,
    GL_INTEL_performance_query,
    GL_KHR_blend_equation_advanced,
    GL_KHR_blend_equation_advanced_coherent,
    GL_KHR_context_flush_control,
    GL_KHR_debug,
    GL_KHR_no_error,
    GL_KHR_robust_buffer_access_behavior,
    GL_KHR_robustness,
    GL_KHR_texture_compression_astc_hdr,
    GL_KHR_texture_compression_astc_ldr,
    GL_NV_bindless_texture,
    GL_NV_blend_equation_advanced,
    GL_NV_blend_equation_advanced_coherent,
    GL_NV_conditional_render,
    GL_NV_conservative_raster,
    GL_NV_copy_buffer,
    GL_NV_coverage_sample,
    GL_NV_depth_nonlinear,
    GL_NV_draw_buffers,
    GL_NV_draw_instanced,
    GL_NV_explicit_attrib_location,
    GL_NV_fbo_color_attachments,
    GL_NV_fence,
    GL_NV_fill_rectangle,
    GL_NV_fragment_coverage_to_color,
    GL_NV_fragment_shader_interlock,
    GL_NV_framebuffer_blit,
    GL_NV_framebuffer_mixed_samples,
    GL_NV_framebuffer_multisample,
    GL_NV_generate_mipmap_sRGB,
    GL_NV_geometry_shader_passthrough,
    GL_NV_image_formats,
    GL_NV_instanced_arrays,
    GL_NV_internalformat_sample_query,
    GL_NV_non_square_matrices,
    GL_NV_path_rendering,
    GL_NV_path_rendering_shared_edge,
    GL_NV_polygon_mode,
    GL_NV_read_buffer,
    GL_NV_read_buffer_front,
    GL_NV_read_depth,
    GL_NV_read_depth_stencil,
    GL_NV_read_stencil,
    GL_NV_sRGB_formats,
    GL_NV_sample_locations,
    GL_NV_sample_mask_override_coverage,
    GL_NV_shader_noperspective_interpolation,
    GL_NV_shadow_samplers_array,
    GL_NV_shadow_samplers_cube,
    GL_NV_texture_border_clamp,
    GL_NV_texture_compression_s3tc_update,
    GL_NV_texture_npot_2D_mipmap,
    GL_NV_viewport_array,
    GL_NV_viewport_array2,
    GL_OES_EGL_image,
    GL_OES_EGL_image_external,
    GL_OES_EGL_image_external_essl3,
    GL_OES_compressed_ETC1_RGB8_sub_texture,
    GL_OES_compressed_ETC1_RGB8_texture,
    GL_OES_compressed_paletted_texture,
    GL_OES_copy_image,
    GL_OES_depth24,
    GL_OES_depth32,
    GL_OES_depth_texture,
    GL_OES_draw_buffers_indexed,
    GL_OES_draw_elements_base_vertex,
    GL_OES_element_index_uint,
    GL_OES_fbo_render_mipmap,
    GL_OES_fragment_precision_high,
    GL_OES_geometry_point_size,
    GL_OES_geometry_shader,
    GL_OES_get_program_binary,
    GL_OES_gpu_shader5,
    GL_OES_mapbuffer,
    GL_OES_packed_depth_stencil,
    GL_OES_primitive_bounding_box,
    GL_OES_required_internalformat,
    GL_OES_rgb8_rgba8,
    GL_OES_sample_shading,
    GL_OES_sample_variables,
    GL_OES_shader_image_atomic,
    GL_OES_shader_io_blocks,
    GL_OES_shader_multisample_interpolation,
    GL_OES_standard_derivatives,
    GL_OES_stencil1,
    GL_OES_stencil4,
    GL_OES_surfaceless_context,
    GL_OES_tessellation_point_size,
    GL_OES_tessellation_shader,
    GL_OES_texture_3D,
    GL_OES_texture_border_clamp,
    GL_OES_texture_buffer,
    GL_OES_texture_compression_astc,
    GL_OES_texture_cube_map_array,
    GL_OES_texture_float,
    GL_OES_texture_float_linear,
    GL_OES_texture_half_float,
    GL_OES_texture_half_float_linear,
    GL_OES_texture_npot,
    GL_OES_texture_stencil8,
    GL_OES_texture_storage_multisample_2d_array,
    GL_OES_texture_view,
    GL_OES_vertex_array_object,
    GL_OES_vertex_half_float,
    GL_OES_vertex_type_10_10_10_2,
    GL_OVR_multiview,
    GL_OVR_multiview2,
    GL_QCOM_alpha_test,
    GL_QCOM_binning_control,
    GL_QCOM_driver_control,
    GL_QCOM_extended_get,
    GL_QCOM_extended_get2,
    GL_QCOM_perfmon_global_mode,
    GL_QCOM_tiled_rendering,
    GL_QCOM_writeonly_rendering,
    GL_VIV_shader_binary
};

} // namespace gles2
