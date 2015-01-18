from classes.Extension import *
from classes.Command import *

def swap(m):
  return dict( (v,k) for k in m for v in m[k] )

def swapMultiMap(n_map):

  rev_map = {}
  for k in n_map:
    val = n_map[k]
    if isinstance(val, (list, tuple)):
      for e in val:
        if (not(e in rev_map)):
          rev_map[e] = []
        rev_map[e].append(k)
    else:
      if (not(val in rev_map)):
          rev_map[val] = []
      rev_map[val].append(k)
  return rev_map

def category(command):

  striped_command = suffixFreeCommandName(command)
  return (command_categories[striped_command] if striped_command in command_categories else "Uncategorized")

categories_command = {
  "Textures": [
      "glActiveTexture",
      "glBindImageTexture",
      "glBindImageTextures",
      "glBindTexture",
      "glBindTextures",
      "glBindTextureUnit",
      "glClearTexImage",
      "glClearTexSubImage",
      "glCompressedTexImage1D",
      "glCompressedTexImage2D",
      "glCompressedTexImage3D",
      "glCompressedTexSubImage1D",
      "glCompressedTexSubImage2D",
      "glCompressedTexSubImage3D",
      "glCopyImageSubData",
      "glCopyTexImage1D",
      "glCopyTexImage2D",
      "glCopyTexSubImage1D",
      "glCopyTexSubImage2D",
      "glCopyTexSubImage3D",
      "glCreateTextures",
      "glDeleteTextures",
      "glGenTextures",
      "glGetCompressedTexImage",
      "glGetCompressedTextureSubImage",
      "glGetTexImage",
      "glGetTexLevelParameter",
      "glGetTexParameter",
      "glGetTextureSubImage",
      "glInvalidateTexImage",
      "glInvalidateTexSubImage",
      "glIsTexture",
      "glTexBuffer",
      "glTexBufferRange",
      "glTexImage1D",
      "glTexImage2D",
      "glTexImage2DMultisample",
      "glTexImage3D",
      "glTexImage3DMultisample",
      "glTexParameter",
      "glTexStorage1D",
      "glTexStorage2D",
      "glTexStorage2DMultisample",
      "glTexStorage3D",
      "glTexStorage3DMultisample",
      "glTexSubImage1D",
      "glTexSubImage2D",
      "glTexSubImage3D",
      "glTextureView",
  ],
  "Rendering": [
      "glClear",
      "glClearBuffer",
      "glClearColor",
      "glClearDepth",
      "glClearDepthf",
      "glClearStencil",
      "glDrawBuffer",
      "glFinish",
      "glFlush",
      "glMultiDrawArrays",
      "glMultiDrawArraysIndirect",
      "glMultiDrawElements",
      "glMultiDrawElementsBaseVertex",
      "glMultiDrawElementsIndirect",
      "glReadBuffer",
      "glReadPixels",
  ],
  "Frame Buffers": [
      "glBindFramebuffer",
      "glBindRenderbuffer",
      "glBlitFramebuffer",
      "glCheckFramebufferStatus",
      "glCreateFramebuffers",
      "glCreateRenderbuffers",
      "glDeleteFramebuffers",
      "glDeleteRenderbuffers",
      "glDrawBuffers",
      "glFramebufferParameteri",
      "glFramebufferRenderbuffer",
      "glFramebufferTexture",
      "glFramebufferTexture2D",
      "glFramebufferTextureLayer",
      "glGenerateMipmap",
      "glGenFramebuffers",
      "glGenRenderbuffers",
      "glGetFramebufferAttachmentParameter",
      "glGetFramebufferAttachmentParameteriv",
      "glGetFramebufferParameter",
      "glGetFramebufferParameteriv",
      "glGetRenderbufferParameter",
      "glGetRenderbufferParameteriv",
      "glInvalidateFramebuffer",
      "glInvalidateSubFramebuffer",
      "glIsFramebuffer",
      "glIsRenderbuffer",
      "glRenderbufferStorage",
      "glRenderbufferStorageMultisample",
      "glSampleMaski",
  ],
  "Shaders": [
      "glAttachShader",
      "glBindAttribLocation",
      "glBindFragDataLocation",
      "glBindFragDataLocationIndexed",
      "glCompileShader",
      "glCreateProgram",
      "glCreateShader",
      "glCreateShaderProgram",
      "glDeleteProgram",
      "glDeleteShader",
      "glDetachShader",
      "glGetActiveAtomicCounterBufferiv",
      "glGetActiveAttrib",
      "glGetActiveSubroutineName",
      "glGetActiveSubroutineUniform",
      "glGetActiveSubroutineUniformName",
      "glGetActiveUniform",
      "glGetActiveUniformBlock",
      "glGetActiveUniformBlockiv",
      "glGetActiveUniformBlockName",
      "glGetActiveUniformName",
      "glGetActiveUniformsiv",
      "glGetAttachedShaders",
      "glGetAttribLocation",
      "glGetFragDataIndex",
      "glGetFragDataLocation",
      "glGetProgram",
      "glGetProgramBinary",
      "glGetProgramInfoLog",
      "glGetProgramiv",
      "glGetProgramResource",
      "glGetProgramResourceIndex",
      "glGetProgramResourceLocation",
      "glGetProgramResourceLocationIndex",
      "glGetProgramResourceName",
      "glGetProgramStage",
      "glGetShader",
      "glGetShaderInfoLog",
      "glGetShaderiv",
      "glGetShaderPrecisionFormat",
      "glGetShaderSource",
      "glGetSubroutineIndex",
      "glGetSubroutineUniformLocation",
      "glGetUniform",
      "glGetUniformBlockIndex",
      "glGetUniformIndices",
      "glGetUniformLocation",
      "glGetUniformSubroutine",
      "glIsProgram",
      "glIsShader",
      "glLinkProgram",
      "glMinSampleShading",
      "glProgramBinary",
      "glProgramParameter",
      "glProgramParameteri",
      "glProgramUniform",
      "glReleaseShaderCompiler",
      "glShaderBinary",
      "glShaderSource",
      "glShaderStorageBlockBinding",
      "glUniform",
      "glUniformBlockBinding",
      "glUniformSubroutines",
      "glUseProgram",
      "glUseProgramStages",
      "glValidateProgram",
  ],
  "Buffer Objects": [
      "glBindBuffer",
      "glBindBufferBase",
      "glBindBufferRange",
      "glBindBuffersBase",
      "glBindBuffersRange",
      "glBindVertexBuffer",
      "glBindVertexBuffers",
      "glBufferData",
      "glBufferStorage",
      "glBufferSubData",
      "glClearBufferData",
      "glClearBufferSubData",
      "glCopyBufferSubData",
      "glCreateBuffers",
      "glCreateVertexArrays",
      "glDeleteBuffers",
      "glDisableVertexAttribArray",
      "glDrawArrays",
      "glDrawArraysIndirect",
      "glDrawArraysInstanced",
      "glDrawArraysInstancedBaseInstance",
      "glDrawElements",
      "glDrawElementsBaseVertex",
      "glDrawElementsIndirect",
      "glDrawElementsInstanced",
      "glDrawElementsInstancedBaseInstance",
      "glDrawElementsInstancedBaseVertex",
      "glDrawElementsInstancedBaseVertexBaseInstance",
      "glDrawRangeElements",
      "glDrawRangeElementsBaseVertex",
      "glEnableVertexAttribArray",
      "glFlushMappedBufferRange",
      "glGenBuffers",
      "glGetBufferParameter",
      "glGetBufferParameteriv",
      "glGetBufferPointerv",
      "glGetBufferSubData",
      "glGetVertexArrayIndexed",
      "glGetVertexArrayiv",
      "glGetVertexAttrib",
      "glGetVertexAttribPointerv",
      "glInvalidateBufferData",
      "glInvalidateBufferSubData",
      "glIsBuffer",
      "glMapBuffer",
      "glMapBufferRange",
      "glPatchParameter",
      "glPrimitiveRestartIndex",
      "glProvokingVertex",
      "glUnmapBuffer",
      "glVertexArrayElementBuffer",
      "glVertexAttrib",
      "glVertexAttribBinding",
      "glVertexAttribDivisor",
      "glVertexAttribFormat",
      "glVertexAttribPointer",
      "glVertexBindingDivisor",
  ],
  "State Management": [
      # Anything that affects the state machine
      "glBlendColor",
      "glBlendEquation",
      "glBlendEquationSeparate",
      "glBlendFunc",
      "glBlendFuncSeparate",
      "glClampColor",
      "glClipControl",
      "glColorMask",
      "glCullFace",
      "glDepthFunc",
      "glDepthMask",
      "glDepthRange",
      "glDepthRangeArray",
      "glDepthRangef",
      "glDepthRangeIndexed",
      "glDisable",
      "glEnable",
      "glFrontFace",
      "glGet",
      "glGetError",
      "glHint",
      "glIsEnabled",
      "glLineWidth",
      "glLogicOp",
      "glPixelStore",
      "glPixelStorei",
      "glPointParameter",
      "glPointSize",
      "glPolygonMode",
      "glPolygonOffset",
      "glSampleCoverage",
      "glScissor",
      "glScissorArray",
      "glScissorIndexed",
      "glStencilFunc",
      "glStencilFuncSeparate",
      "glStencilMask",
      "glStencilMaskSeparate",
      "glStencilOp",
      "glStencilOpSeparate",
      "glViewport",
      "glViewportArray",
      "glViewportIndexed",
  ],
  "Transform Feedback": [
      "glBeginTransformFeedback",
      "glBindTransformFeedback",
      "glCreateTransformFeedbacks",
      "glDeleteTransformFeedbacks",
      "glDrawTransformFeedback",
      "glDrawTransformFeedbackInstanced",
      "glDrawTransformFeedbackStream",
      "glDrawTransformFeedbackStreamInstanced",
      "glEndTransformFeedback",
      "glGenTransformFeedbacks",
      "glGetTransformFeedback",
      "glGetTransformFeedbackVarying",
      "glIsTransformFeedback",
      "glPauseTransformFeedback",
      "glResumeTransformFeedback",
      "glTransformFeedbackBufferBase",
      "glTransformFeedbackBufferRange",
      "glTransformFeedbackVaryings",
  ],
  "Utility": [
     "glDispatchCompute",
     "glDispatchComputeIndirect",
     "glGetGraphicsResetStatus",
     "glGetInternalformat",
     "glGetInternalformativ",
     "glGetMultisample",
     "glGetMultisamplefv",
     "glGetString",
     "glMemoryBarrier",
  ],
  "Queries": [
      "glBeginConditionalRender",
      "glBeginQuery",
      "glBeginQueryIndexed",
      "glCreateQueries",
      "glDeleteQueries",
      "glEndConditionalRender",
      "glEndQuery",
      "glEndQueryIndexed",
      "glGenQueries",
      "glGetQueryIndexed",
      "glGetQueryiv",
      "glGetQueryObject",
      "glGetQueryObjectuiv",
      "glIsQuery",
      "glQueryCounter",
  ],
  "Syncing": [
      "glClientWaitSync",
      "glDeleteSync",
      "glFenceSync",
      "glGetSync",
      "glGetSynciv",
      "glIsSync",
      "glTextureBarrier",
      "glWaitSync"
  ],
  "Vertex Array Objects": [
      "glBindVertexArray",
      "glDeleteVertexArrays",
      "glGenVertexArrays",
      "glIsVertexArray"
  ],
  "Samplers": [
      "glBindSampler",
      "glBindSamplers",
      "glCreateSamplers",
      "glDeleteSamplers",
      "glGenSamplers",
      "glGetSamplerParameter",
      "glIsSampler",
      "glSamplerParameter",
  ],
  "Program Pipelines": [
      "glActiveShaderProgram",
      "glBindProgramPipeline",
      "glCreateProgramPipelines",
      "glDeleteProgramPipelines",
      "glGenProgramPipelines",
      "glGetProgramPipeline",
      "glGetProgramPipelineInfoLog",
      "glIsProgramPipeline",
      "glValidateProgramPipeline"
  ],
  "Immediate Mode": [
      # Stuff you can call between glBegin and glEnd
        "glBegin",
        "glEnd",
        "glVertex",
        "glColor",
        "glTexCoord",
        "glFogCoord",
        "glIndex",
        "glIndexf",
        "glMaterial",
        "glMultiTexCoord",
        "glNormal",
        "glSecondaryColor",
        "glArrayElement",
        "glEvalCoord",
        "glEvalMesh",
        "glEvalPoint"
  ],
  "GL2 Rasterization": [
      # Anything render related that doesn't exist anymore
        "glBitmap",
        "glClearIndex",
        "glClipPlane",
        "glCopyPixels",
        "glDrawPixels",
        "glFeedbackBuffer",
        "glFog",
        "glGetClipPlane",
        "glGetMap",
        "glGetPixelMap",
        "glGetPolygonStipple","glMap1",
        "glInitNames",
        "glLineStipple",
        "glLoadName",
        "glMap2",
        "glMapGrid",
        "glPassThrough",
        "glPixelZoom",
        "glPolygonStipple",
        "glPopName",
        "glPushName",
        "glRasterPos",
        "glRect",
        "glRenderMode",
        "glSelectBuffer",
        "glWindowPos",
  ],
  "Client Arrays": [
      "glColorPointer",
      "glDisableClientState",
      "glEnableClientState",
      "glFogCoordPointer",
      "glIndexPointer",
      "glInterleavedArrays",
      "glNormalPointer",
      "glPopClientAttrib",
      "glPushClientAttrib",
      "glSecondaryColorPointer",
      "glTexCoordPointer",
      "glVertexPointer",
  ],
  "Fixed Function": [
      # Stuff that got moved into shaders
      "glAccum",
      "glAlphaFunc",
      "glClearAccum",
      "glColorMaterial",
      "glEdgeFlag",
      "glEdgeFlagPointer",
      "glGetLight",
      "glGetMaterial",
      "glGetTexEnv",
      "glGetTexGen",
      "glIndexMask",
      "glLight",
      "glLightModel",
      "glPopAttrib",
      "glPushAttrib",
      "glShadeModel"
      "glTexEnv",
      "glTexGen",
  ],
  "Matrix State": [
      "glFrustum",
      "glLoadIdentity",
      "glLoadMatrix",
      "glLoadTransposeMatrix",
      "glMatrixMode",
      "glMultMatrix",
      "glMultTransposeMatrix",
      "glOrtho",
      "glPopMatrix",
      "glPushMatrix",
      "glRotate",
      "glScale",
      "glTranslate"
  ],
  "GL2 Textures": [
      "glAreTexturesResident",
      "glClientActiveTexture",
      "glPixelMap",
      "glPixelTransfer"
      "glPrioritizeTextures",
  ],
  "Call Lists": [
      "glCallList",
      "glCallLists",
      "glDeleteLists",
      "glEndList",
      "glGenLists",
      "glIsList",
      "glListBase"
      "glNewList",
  ],
  # "GLX": [
    #  "glXChooseFBConfig",
    #  "glXChooseVisual",
    #  "glXCopyContext",
    #  "glXCreateContext",
    #  "glXCreateGLXPixmap",
    #  "glXCreateNewContext",
    #  "glXCreatePbuffer",
    #  "glXCreatePixmap",
    #  "glXCreateWindow",
    #  "glXDestroyContext",
    #  "glXDestroyGLXPixmap",
    #  "glXDestroyPbuffer",
    #  "glXDestroyPixmap",
    #  "glXDestroyWindow",
    #  "glXFreeContextEXT",
    #  "glXGetClientString",
    #  "glXGetConfig",
    #  "glXGetContextIDEXT",
    #  "glXGetCurrentContext",
    #  "glXGetCurrentDisplay",
    #  "glXGetCurrentDrawable",
    #  "glXGetCurrentReadDrawable",
    #  "glXGetFBConfigAttrib",
    #  "glXGetFBConfigs",
    #  "glXGetProcAddress",
    #  "glXGetSelectedEvent",
    #  "glXGetVisualFromFBConfig",
    #  "glXImportContextEXT",
    #  "glXIntro",
    #  "glXIsDirect",
    #  "glXMakeContextCurrent",
    #  "glXMakeCurrent",
    #  "glXQueryContextInfoEXT",
    #  "glXQueryContext",
    #  "glXQueryDrawable",
    #  "glXQueryExtensionsString",
    #  "glXQueryExtension",
    #  "glXQueryServerString",
    #  "glXQueryVersion",
    #  "glXSelectEvent",
    #  "glXSwapBuffers",
    #  "glXUseXFont",
    #  "glXWaitGL",
    #  "glXWaitX",
    # ],
   # GLU": [
    #  "gluBeginCurve",
    #  "gluBeginPolygon",
    #  "gluBeginSurface",
    #  "gluBeginTrim",
    #  "gluBuild1DMipmapLevels",
    #  "gluBuild1DMipmaps",
    #  "gluBuild2DMipmapLevels",
    #  "gluBuild2DMipmaps",
    #  "gluBuild3DMipmapLevels",
    #  "gluBuild3DMipmaps",
    #  "gluCheckExtension",
    #  "gluCylinder",
    #  "gluDeleteNurbsRenderer",
    #  "gluDeleteQuadric",
    #  "gluDeleteTess",
    #  "gluDisk",
    #  "gluEndCurve",
    #  "gluEndPolygon",
    #  "gluEndSurface",
    #  "gluEndTrim",
    #  "gluErrorString",
    #  "gluGetNurbsProperty",
    #  "gluGetString",
    #  "gluGetTessProperty",
    #  "gluLoadSamplingMatrices",
    #  "gluLookAt",
    #  "gluNewNurbsRenderer",
    #  "gluNewQuadric",
    #  "gluNewTess",
    #  "gluNextContour",
    #  "gluNurbsCallbackDataEXT",
    #  "gluNurbsCallbackData",
    #  "gluNurbsCallback",
    #  "gluNurbsCurve",
    #  "gluNurbsProperty",
    #  "gluNurbsSurface",
    #  "gluOrtho2D",
    #  "gluPartialDisk",
    #  "gluPerspective",
    #  "gluPickMatrix",
    #  "gluProject",
    #  "gluPwlCurve",
    #  "gluQuadricCallback",
    #  "gluQuadricDrawStyle",
    #  "gluQuadricNormals",
    #  "gluQuadricOrientation",
    #  "gluQuadricTexture",
    #  "gluScaleImage",
    #  "gluSphere",
    #  "gluTessBeginContour",
    #  "gluTessBeginPolygon",
    #  "gluTessCallback",
    #  "gluTessEndContour",
    #  "gluTessEndPolygon",
    #  "gluTessNormal",
    #  "gluTessProperty",
    #  "gluTessVertex",
    #  "gluUnProject4",
    #  "gluUnProject",
  #],
  "Debug": [
    "glDebugMessageCallback",
    "glDebugMessageControl",
    "glDebugMessageInsert",
    "glGetDebugMessageLog",
    "glGetObjectLabel",
    "glGetObjectPtrLabel",
    "glGetPointerv",
    "glGetProgramInterface",
    "glObjectLabel",
    "glObjectPtrLabel",
    "glPopDebugGroup",
    "glPushDebugGroup"
  ],
}

command_categories = swap(categories_command)

categories_command2 = {
  "Render Target": [],
  "Program": [],
  "ROP": [],
  "Texture": [
    "glActiveTexture",
    "glBindImageTexture",
    "glBindImageTextures",
    "glBindTexture",
    "glBindTextures",
    "glBindTextureUnit",
    "glClearTexImage",
    "glClearTexSubImage",
    "glCompressedTexImage1D",
    "glCompressedTexImage2D",
    "glCompressedTexImage3D",
    "glCompressedTexSubImage1D",
    "glCompressedTexSubImage2D",
    "glCompressedTexSubImage3D",
    "glCopyImageSubData",
    "glCopyTexImage1D",
    "glCopyTexImage2D",
    "glCopyTexSubImage1D",
    "glCopyTexSubImage2D",
    "glCopyTexSubImage3D",
    "glCreateTextures",
    "glDeleteTextures",
    "glGenTextures",
    "glGetCompressedTexImage",
    "glGetCompressedTextureSubImage",
    "glGetTexImage",
    "glGetTexLevelParameter",
    "glGetTexParameter",
    "glGetTextureSubImage",
    "glInvalidateTexImage",
    "glInvalidateTexSubImage",
    "glIsTexture",
    "glTexBuffer",
    "glTexBufferRange",
    "glTexImage1D",
    "glTexImage2D",
    "glTexImage2DMultisample",
    "glTexImage3D",
    "glTexImage3DMultisample",
    "glTexParameter",
    "glTexParameterf",
    "glTexParameterfv",
    "glTexParameteri",
    "glTexParameterIiv",
    "glTexParameterIuiv",
    "glTexParameteriv",
    "glTexStorage1D",
    "glTexStorage2D",
    "glTexStorage2DMultisample",
    "glTexStorage3D",
    "glTexStorage3DMultisample",
    "glTexSubImage1D",
    "glTexSubImage2D",
    "glTexSubImage3D",
    "glTextureView",
  ],
  "UBO Binding": [],
  "Vertex Format": [
    "glVertexAttrib1d",
    "glVertexAttrib1dv",
    "glVertexAttrib1f",
    "glVertexAttrib1fv",
    "glVertexAttrib1s",
    "glVertexAttrib1sv",
    "glVertexAttrib2d",
    "glVertexAttrib2dv",
    "glVertexAttrib2f",
    "glVertexAttrib2fv",
    "glVertexAttrib2s",
    "glVertexAttrib2sv",
    "glVertexAttrib3d",
    "glVertexAttrib3dv",
    "glVertexAttrib3f",
    "glVertexAttrib3fv",
    "glVertexAttrib3s",
    "glVertexAttrib3sv",
    "glVertexAttrib4Nbv",
    "glVertexAttrib4Niv",
    "glVertexAttrib4Nsv",
    "glVertexAttrib4Nub",
    "glVertexAttrib4Nubv",
    "glVertexAttrib4Nuiv",
    "glVertexAttrib4Nusv",
    "glVertexAttrib4bv",
    "glVertexAttrib4d",
    "glVertexAttrib4dv",
    "glVertexAttrib4f",
    "glVertexAttrib4fv",
    "glVertexAttrib4iv",
    "glVertexAttrib4s",
    "glVertexAttrib4sv",
    "glVertexAttrib4ubv",
    "glVertexAttrib4uiv",
    "glVertexAttrib4usv",
    "glVertexAttribI1i",
    "glVertexAttribI1iv",
    "glVertexAttribI1ui",
    "glVertexAttribI1uiv",
    "glVertexAttribI2i",
    "glVertexAttribI2iv",
    "glVertexAttribI2ui",
    "glVertexAttribI2uiv",
    "glVertexAttribI3i",
    "glVertexAttribI3iv",
    "glVertexAttribI3ui",
    "glVertexAttribI3uiv",
    "glVertexAttribI4bv",
    "glVertexAttribI4i",
    "glVertexAttribI4iv",
    "glVertexAttribI4sv",
    "glVertexAttribI4ubv",
    "glVertexAttribI4ui",
    "glVertexAttribI4uiv",
    "glVertexAttribI4usv",
    "glVertexAttribIPointer",
    "glVertexAttribPointer",
  ],
  "Uniform Updates": [
    "glUniform1f",
    "glUniform1fv",
    "glUniform1i",
    "glUniform1iv",
    "glUniform1ui",
    "glUniform1uiv",
    "glUniform2f",
    "glUniform2fv",
    "glUniform2i",
    "glUniform2iv",
    "glUniform2ui",
    "glUniform2uiv",
    "glUniform3f",
    "glUniform3fv",
    "glUniform3i",
    "glUniform3iv",
    "glUniform3ui",
    "glUniform3uiv",
    "glUniform4f",
    "glUniform4fv",
    "glUniform4i",
    "glUniform4iv",
    "glUniform4ui",
    "glUniform4uiv",
    "glUniformBlockBinding",
    "glUniformMatrix2fv",
    "glUniformMatrix2x3fv",
    "glUniformMatrix2x4fv",
    "glUniformMatrix3fv",
    "glUniformMatrix3x2fv",
    "glUniformMatrix3x4fv",
    "glUniformMatrix4fv",
    "glUniformMatrix4x2fv",
    "glUniformMatrix4x3fv",
  ],
  "Draw": []
}


