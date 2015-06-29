#pragma once

#include <eglbinding/noegl.h>

#include <eglbinding/egl/enum.h>


namespace egl15ext
{

// import enums to namespace


// __UNGROUPED__

using egl::EGL_NO_FILE_DESCRIPTOR_KHR;
using egl::EGL_NO_NATIVE_FENCE_FD_ANDROID;
using egl::EGL_DEPTH_ENCODING_NONE_NV;
using egl::EGL_NO_DEVICE_EXT;
using egl::EGL_NO_IMAGE_KHR;
using egl::EGL_NO_OUTPUT_LAYER_EXT;
using egl::EGL_NO_OUTPUT_PORT_EXT;
using egl::EGL_NO_STREAM_KHR;
using egl::EGL_ALREADY_SIGNALED_NV;
using egl::EGL_BITMAP_PIXEL_ALPHA_OFFSET_KHR;
using egl::EGL_BITMAP_PIXEL_BLUE_OFFSET_KHR;
using egl::EGL_BITMAP_PIXEL_GREEN_OFFSET_KHR;
using egl::EGL_BITMAP_PIXEL_LUMINANCE_OFFSET_KHR;
using egl::EGL_CONDITION_SATISFIED_NV;
using egl::EGL_CONTEXT_FLAGS_KHR;
using egl::EGL_LOWER_LEFT_KHR;
using egl::EGL_POST_SUB_BUFFER_SUPPORTED_NV;
using egl::EGL_SYNC_CONDITION_NV;
using egl::EGL_SYNC_FENCE_NV;
using egl::EGL_SYNC_REUSABLE_KHR;
using egl::EGL_SYNC_TYPE_NV;
using egl::EGL_TIMEOUT_EXPIRED_NV;
using egl::EGL_UPPER_LEFT_KHR;
using egl::EGL_VG_PARENT_IMAGE_KHR;
using egl::EGL_STREAM_FIFO_LENGTH_KHR;
using egl::EGL_STREAM_TIME_CONSUMER_KHR;
using egl::EGL_STREAM_TIME_NOW_KHR;
using egl::EGL_STREAM_TIME_PRODUCER_KHR;
using egl::EGL_COVERAGE_BUFFERS_NV;
using egl::EGL_FORMAT_RGB_565_EXACT_KHR;
using egl::EGL_NATIVE_PIXMAP_KHR;
using egl::EGL_COVERAGE_SAMPLES_NV;
using egl::EGL_FORMAT_RGB_565_KHR;
using egl::EGL_DEPTH_ENCODING_NV;
using egl::EGL_FORMAT_RGBA_8888_EXACT_KHR;
using egl::EGL_IMAGE_PRESERVED_KHR;
using egl::EGL_DEPTH_ENCODING_NONLINEAR_NV;
using egl::EGL_FORMAT_RGBA_8888_KHR;
using egl::EGL_MAP_PRESERVE_PIXELS_KHR;
using egl::EGL_LOCK_USAGE_HINT_KHR;
using egl::EGL_BITMAP_POINTER_KHR;
using egl::EGL_SYNC_PRIOR_COMMANDS_COMPLETE_NV;
using egl::EGL_BITMAP_PITCH_KHR;
using egl::EGL_SYNC_STATUS_NV;
using egl::EGL_Y_INVERTED_NOK;
using egl::EGL_BITMAP_ORIGIN_KHR;
using egl::EGL_SIGNALED_NV;
using egl::EGL_BITMAP_PIXEL_RED_OFFSET_KHR;
using egl::EGL_UNSIGNALED_NV;
using egl::EGL_DRM_BUFFER_FORMAT_MESA;
using egl::EGL_DRM_BUFFER_USE_MESA;
using egl::EGL_DRM_BUFFER_FORMAT_ARGB32_MESA;
using egl::EGL_BUFFER_AGE_EXT;
using egl::EGL_BUFFER_AGE_KHR;
using egl::EGL_CONTEXT_OPENGL_NO_ERROR_KHR;
using egl::EGL_DRM_BUFFER_MESA;
using egl::EGL_PLATFORM_DEVICE_EXT;
using egl::EGL_DRM_BUFFER_STRIDE_MESA;
using egl::EGL_PLATFORM_X11_EXT;
using egl::EGL_PLATFORM_X11_KHR;
using egl::EGL_PLATFORM_X11_SCREEN_EXT;
using egl::EGL_PLATFORM_X11_SCREEN_KHR;
using egl::EGL_PLATFORM_GBM_KHR;
using egl::EGL_PLATFORM_GBM_MESA;
using egl::EGL_PLATFORM_WAYLAND_EXT;
using egl::EGL_PLATFORM_WAYLAND_KHR;
using egl::EGL_NATIVE_BUFFER_TIZEN;
using egl::EGL_PROTECTED_CONTENT_EXT;
using egl::EGL_BAD_STATE_KHR;
using egl::EGL_BAD_STREAM_KHR;
using egl::EGL_CONSUMER_ACQUIRE_TIMEOUT_USEC_KHR;
using egl::EGL_NATIVE_SURFACE_TIZEN;
using egl::EGL_STREAM_STATE_DISCONNECTED_KHR;
using egl::EGL_SYNC_NEW_FRAME_NV;
using egl::EGL_BAD_DEVICE_EXT;
using egl::EGL_BAD_OUTPUT_LAYER_EXT;
using egl::EGL_BAD_OUTPUT_PORT_EXT;
using egl::EGL_DEVICE_EXT;
using egl::EGL_SWAP_INTERVAL_EXT;
using egl::EGL_CUDA_DEVICE_NV;
using egl::EGL_CUDA_EVENT_HANDLE_NV;
using egl::EGL_SYNC_CUDA_EVENT_COMPLETE_NV;
using egl::EGL_SYNC_CUDA_EVENT_NV;
using egl::EGL_DMA_BUF_PLANE2_PITCH_EXT;
using egl::EGL_ITU_REC601_EXT;
using egl::EGL_SAMPLE_RANGE_HINT_EXT;
using egl::EGL_YUV_CHROMA_HORIZONTAL_SITING_HINT_EXT;
using egl::EGL_YUV_CHROMA_VERTICAL_SITING_HINT_EXT;
using egl::EGL_YUV_COLOR_SPACE_HINT_EXT;
using egl::EGL_D3D9_DEVICE_ANGLE;
using egl::EGL_YUV_CSC_STANDARD_2020_EXT;
using egl::EGL_YUV_CSC_STANDARD_601_EXT;
using egl::EGL_YUV_CSC_STANDARD_709_EXT;
using egl::EGL_YUV_CSC_STANDARD_EXT;
using egl::EGL_D3D11_DEVICE_ANGLE;
using egl::EGL_YUV_PLANE_BPP_0_EXT;
using egl::EGL_YUV_PLANE_BPP_10_EXT;
using egl::EGL_YUV_PLANE_BPP_8_EXT;
using egl::EGL_YUV_PLANE_BPP_EXT;
using egl::EGL_COLOR_FORMAT_HI;
using egl::EGL_COLOR_RGB_HI;
using egl::EGL_COLOR_RGBA_HI;
using egl::EGL_COLOR_ARGB_HI;
using egl::EGL_CLIENT_PIXMAP_POINTER_HI;
using egl::EGL_CONFORMANT_KHR;
using egl::EGL_MATCH_FORMAT_KHR;
using egl::EGL_CONTEXT_PRIORITY_LEVEL_IMG;
using egl::EGL_CONTEXT_PRIORITY_HIGH_IMG;
using egl::EGL_CONTEXT_PRIORITY_MEDIUM_IMG;
using egl::EGL_CONTEXT_PRIORITY_LOW_IMG;
using egl::EGL_BITMAP_PIXEL_SIZE_KHR;
using egl::EGL_COVERAGE_SAMPLE_RESOLVE_NV;
using egl::EGL_COVERAGE_SAMPLE_RESOLVE_DEFAULT_NV;
using egl::EGL_COVERAGE_SAMPLE_RESOLVE_NONE_NV;
using egl::EGL_MULTIVIEW_VIEW_COUNT_EXT;
using egl::EGL_AUTO_STEREO_NV;
using egl::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_EXT;
using egl::EGL_NATIVE_BUFFER_ANDROID;
using egl::EGL_PLATFORM_ANDROID_KHR;
using egl::EGL_RECORDABLE_ANDROID;
using egl::EGL_SYNC_NATIVE_FENCE_ANDROID;
using egl::EGL_SYNC_NATIVE_FENCE_FD_ANDROID;
using egl::EGL_SYNC_NATIVE_FENCE_SIGNALED_ANDROID;
using egl::EGL_FRAMEBUFFER_TARGET_ANDROID;
using egl::EGL_D3D_TEXTURE_2D_SHARE_HANDLE_ANGLE;
using egl::EGL_FIXED_SIZE_ANGLE;
using egl::EGL_CONSUMER_LATENCY_USEC_KHR;
using egl::EGL_PRODUCER_FRAME_KHR;
using egl::EGL_CONSUMER_FRAME_KHR;
using egl::EGL_STREAM_STATE_KHR;
using egl::EGL_STREAM_STATE_CREATED_KHR;
using egl::EGL_STREAM_STATE_CONNECTING_KHR;
using egl::EGL_STREAM_STATE_EMPTY_KHR;
using egl::EGL_STREAM_STATE_NEW_FRAME_AVAILABLE_KHR;
using egl::EGL_STREAM_STATE_OLD_FRAME_AVAILABLE_KHR;
using egl::EGL_DRM_DEVICE_FILE_EXT;
using egl::EGL_DRM_CRTC_EXT;
using egl::EGL_DRM_PLANE_EXT;
using egl::EGL_DRM_CONNECTOR_EXT;
using egl::EGL_OPENWF_DEVICE_ID_EXT;
using egl::EGL_OPENWF_PIPELINE_ID_EXT;
using egl::EGL_OPENWF_PORT_ID_EXT;
using egl::EGL_LINUX_DMA_BUF_EXT;
using egl::EGL_LINUX_DRM_FOURCC_EXT;
using egl::EGL_DMA_BUF_PLANE0_FD_EXT;
using egl::EGL_DMA_BUF_PLANE0_OFFSET_EXT;
using egl::EGL_DMA_BUF_PLANE0_PITCH_EXT;
using egl::EGL_DMA_BUF_PLANE1_FD_EXT;
using egl::EGL_DMA_BUF_PLANE1_OFFSET_EXT;
using egl::EGL_DMA_BUF_PLANE1_PITCH_EXT;
using egl::EGL_DMA_BUF_PLANE2_FD_EXT;
using egl::EGL_DMA_BUF_PLANE2_OFFSET_EXT;
using egl::EGL_ITU_REC709_EXT;
using egl::EGL_ITU_REC2020_EXT;
using egl::EGL_YUV_FULL_RANGE_EXT;
using egl::EGL_YUV_NARROW_RANGE_EXT;
using egl::EGL_YUV_CHROMA_SITING_0_EXT;
using egl::EGL_YUV_CHROMA_SITING_0_5_EXT;
using egl::EGL_DISCARD_SAMPLES_ARM;
using egl::EGL_YUV_BUFFER_EXT;
using egl::EGL_YUV_ORDER_EXT;
using egl::EGL_YUV_ORDER_YUV_EXT;
using egl::EGL_YUV_ORDER_YVU_EXT;
using egl::EGL_YUV_ORDER_YUYV_EXT;
using egl::EGL_YUV_ORDER_UYVY_EXT;
using egl::EGL_YUV_ORDER_YVYU_EXT;
using egl::EGL_YUV_ORDER_VYUY_EXT;
using egl::EGL_YUV_ORDER_AYUV_EXT;
using egl::EGL_YUV_NUMBER_OF_PLANES_EXT;
using egl::EGL_YUV_SUBSAMPLE_EXT;
using egl::EGL_YUV_SUBSAMPLE_4_2_0_EXT;
using egl::EGL_YUV_SUBSAMPLE_4_2_2_EXT;
using egl::EGL_YUV_SUBSAMPLE_4_4_4_EXT;
using egl::EGL_YUV_DEPTH_RANGE_EXT;
using egl::EGL_YUV_DEPTH_RANGE_LIMITED_EXT;
using egl::EGL_YUV_DEPTH_RANGE_FULL_EXT;

} // namespace egl15ext
