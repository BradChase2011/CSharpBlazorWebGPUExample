#include "lib_webgpu.h"

#ifdef __cplusplus
extern "C" {
#endif

WGpuRenderPipelineDescriptor GetWGPU_RENDER_PIPELINE_DESCRIPTOR_DEFAULT_INITIALIZER()
{
    return WGPU_RENDER_PIPELINE_DESCRIPTOR_DEFAULT_INITIALIZER;
}

WGpuCanvasConfiguration GetWGPU_CANVAS_CONFIGURATION_DEFAULT_INITIALIZER()
{
    return WGPU_CANVAS_CONFIGURATION_DEFAULT_INITIALIZER;
}

WGpuColorTargetState GetWGPU_COLOR_TARGET_STATE_DEFAULT_INITIALIZER()
{
    return WGPU_COLOR_TARGET_STATE_DEFAULT_INITIALIZER;
}

WGpuRenderPassColorAttachment GetWGPU_RENDER_PASS_COLOR_ATTACHMENT_DEFAULT_INITIALIZER()
{
    return WGPU_RENDER_PASS_COLOR_ATTACHMENT_DEFAULT_INITIALIZER;
}

WGpuTextureDescriptor GetWGPU_TEXTURE_DESCRIPTOR_DEFAULT_INITIALIZER()
{
    return WGPU_TEXTURE_DESCRIPTOR_DEFAULT_INITIALIZER;
}

EM_JS(int, canvas_get_width, (), {
    return canvas.width;
    });

EM_JS(int, canvas_get_height, (), {
    return canvas.height;
    });

const char *wgpu_compilation_message_type_to_string(WGPU_COMPILATION_MESSAGE_TYPE type)
{
  return type == WGPU_COMPILATION_MESSAGE_TYPE_WARNING ? "warning"
        : (type == WGPU_COMPILATION_MESSAGE_TYPE_INFO ? "info" : "error");
}

#ifdef __cplusplus
} // ~extern "C"
#endif
