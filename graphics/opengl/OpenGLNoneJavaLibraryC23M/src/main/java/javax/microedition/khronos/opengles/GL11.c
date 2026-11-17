// Generated Code Do Not Modify
// package javax.microedition.khronos.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/nio/Buffer.h"
// #include "java/nio/FloatBuffer.h"
// #include "java/nio/IntBuffer.h"
#include "javax/microedition/khronos/opengles/GL10.h"

typedef struct GL11 GL11;
struct GL11 {
    void (*glBindBuffer)(void* this, int32_t target, int32_t buffer);
    void (*glBufferData)(void* this, int32_t target, int32_t size, Buffer* data, int32_t usage);
    void (*glBufferSubData)(void* this, int32_t target, int32_t offset, int32_t size, Buffer* data);
    void (*glClipPlanef)(void* this, int32_t plane, float* equation, int32_t offset);
    void (*glClipPlanef)(void* this, int32_t plane, FloatBuffer* equation);
    void (*glColor4ub)(void* this, int8_t red, int8_t green, int8_t blue, int8_t alpha);
    void (*glColorPointer)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
    void (*glDeleteBuffers)(void* this, int32_t n, int32_t* buffers, int32_t offset);
    void (*glDeleteBuffers)(void* this, int32_t n, IntBuffer* buffers);
    void (*glDrawElements)(void* this, int32_t mode, int32_t count, int32_t type, int32_t offset);
    void (*glGenBuffers)(void* this, int32_t n, int32_t* buffers, int32_t offset);
    void (*glGenBuffers)(void* this, int32_t n, IntBuffer* buffers);
    void (*glGetBufferParameteriv)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
    void (*glGetBufferParameteriv)(void* this, int32_t target, int32_t pname, IntBuffer* params);
    void (*glGetClipPlanef)(void* this, int32_t pname, float* eqn, int32_t offset);
    void (*glGetClipPlanef)(void* this, int32_t pname, FloatBuffer* eqn);
    void (*glGetFloatv)(void* this, int32_t pname, float* params, int32_t offset);
    void (*glGetFloatv)(void* this, int32_t pname, FloatBuffer* params);
    void (*glGetLightfv)(void* this, int32_t light, int32_t pname, float* params, int32_t offset);
    void (*glGetLightfv)(void* this, int32_t light, int32_t pname, FloatBuffer* params);
    void (*glGetMaterialfv)(void* this, int32_t face, int32_t pname, float* params, int32_t offset);
    void (*glGetMaterialfv)(void* this, int32_t face, int32_t pname, FloatBuffer* params);
    void (*glGetTexEnviv)(void* this, int32_t env, int32_t pname, int32_t* params, int32_t offset);
    void (*glGetTexEnviv)(void* this, int32_t env, int32_t pname, IntBuffer* params);
    void (*glGetTexParameterfv)(void* this, int32_t target, int32_t pname, float* params, int32_t offset);
    void (*glGetTexParameterfv)(void* this, int32_t target, int32_t pname, FloatBuffer* params);
    void (*glGetTexParameteriv)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
    void (*glGetTexParameteriv)(void* this, int32_t target, int32_t pname, IntBuffer* params);
    bool (*glIsBuffer)(void* this, int32_t buffer);
    bool (*glIsEnabled)(void* this, int32_t cap);
    bool (*glIsTexture)(void* this, int32_t texture);
    void (*glNormalPointer)(void* this, int32_t type, int32_t stride, int32_t offset);
    void (*glPointParameterf)(void* this, int32_t pname, float param);
    void (*glPointParameterfv)(void* this, int32_t pname, float* params, int32_t offset);
    void (*glPointParameterfv)(void* this, int32_t pname, FloatBuffer* params);
    void (*glTexCoordPointer)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
    void (*glTexEnvi)(void* this, int32_t target, int32_t pname, int32_t param);
    void (*glTexEnviv)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
    void (*glTexEnviv)(void* this, int32_t target, int32_t pname, IntBuffer* params);
    void (*glTexParameterfv)(void* this, int32_t target, int32_t pname, float* params, int32_t offset);
    void (*glTexParameterfv)(void* this, int32_t target, int32_t pname, FloatBuffer* params);
    void (*glTexParameteriv)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
    void (*glTexParameteriv)(void* this, int32_t target, int32_t pname, IntBuffer* params);
    void (*glVertexPointer)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
};

constexpr int32_t GL11_GL_ACTIVE_TEXTURE = 34016;
constexpr int32_t GL11_GL_ADD_SIGNED = 34164;
constexpr int32_t GL11_GL_ALPHA_SCALE = 3356;
constexpr int32_t GL11_GL_ALPHA_TEST_FUNC = 3009;
constexpr int32_t GL11_GL_ALPHA_TEST_REF = 3010;
constexpr int32_t GL11_GL_ARRAY_BUFFER = 34962;
constexpr int32_t GL11_GL_ARRAY_BUFFER_BINDING = 34964;
constexpr int32_t GL11_GL_BLEND_DST = 3040;
constexpr int32_t GL11_GL_BLEND_SRC = 3041;
constexpr int32_t GL11_GL_BUFFER_ACCESS = 35003;
constexpr int32_t GL11_GL_BUFFER_SIZE = 34660;
constexpr int32_t GL11_GL_BUFFER_USAGE = 34661;
constexpr int32_t GL11_GL_CLIENT_ACTIVE_TEXTURE = 34017;
constexpr int32_t GL11_GL_CLIP_PLANE0 = 12288;
constexpr int32_t GL11_GL_CLIP_PLANE1 = 12289;
constexpr int32_t GL11_GL_CLIP_PLANE2 = 12290;
constexpr int32_t GL11_GL_CLIP_PLANE3 = 12291;
constexpr int32_t GL11_GL_CLIP_PLANE4 = 12292;
constexpr int32_t GL11_GL_CLIP_PLANE5 = 12293;
constexpr int32_t GL11_GL_COLOR_ARRAY_BUFFER_BINDING = 34968;
constexpr int32_t GL11_GL_COLOR_ARRAY_POINTER = 32912;
constexpr int32_t GL11_GL_COLOR_ARRAY_SIZE = 32897;
constexpr int32_t GL11_GL_COLOR_ARRAY_STRIDE = 32899;
constexpr int32_t GL11_GL_COLOR_ARRAY_TYPE = 32898;
constexpr int32_t GL11_GL_COLOR_CLEAR_VALUE = 3106;
constexpr int32_t GL11_GL_COLOR_WRITEMASK = 3107;
constexpr int32_t GL11_GL_COMBINE = 34160;
constexpr int32_t GL11_GL_COMBINE_ALPHA = 34162;
constexpr int32_t GL11_GL_COMBINE_RGB = 34161;
constexpr int32_t GL11_GL_CONSTANT = 34166;
constexpr int32_t GL11_GL_COORD_REPLACE_OES = 34914;
constexpr int32_t GL11_GL_CULL_FACE_MODE = 2885;
constexpr int32_t GL11_GL_CURRENT_COLOR = 2816;
constexpr int32_t GL11_GL_CURRENT_NORMAL = 2818;
constexpr int32_t GL11_GL_CURRENT_TEXTURE_COORDS = 2819;
constexpr int32_t GL11_GL_DEPTH_CLEAR_VALUE = 2931;
constexpr int32_t GL11_GL_DEPTH_FUNC = 2932;
constexpr int32_t GL11_GL_DEPTH_RANGE = 2928;
constexpr int32_t GL11_GL_DEPTH_WRITEMASK = 2930;
constexpr int32_t GL11_GL_DOT3_RGB = 34478;
constexpr int32_t GL11_GL_DOT3_RGBA = 34479;
constexpr int32_t GL11_GL_DYNAMIC_DRAW = 35048;
constexpr int32_t GL11_GL_ELEMENT_ARRAY_BUFFER = 34963;
constexpr int32_t GL11_GL_ELEMENT_ARRAY_BUFFER_BINDING = 34965;
constexpr int32_t GL11_GL_FRONT_FACE = 2886;
constexpr int32_t GL11_GL_GENERATE_MIPMAP = 33169;
constexpr int32_t GL11_GL_GENERATE_MIPMAP_HINT = 33170;
constexpr int32_t GL11_GL_INTERPOLATE = 34165;
constexpr int32_t GL11_GL_LINE_WIDTH = 2849;
constexpr int32_t GL11_GL_LOGIC_OP_MODE = 3056;
constexpr int32_t GL11_GL_MATRIX_MODE = 2976;
constexpr int32_t GL11_GL_MAX_CLIP_PLANES = 3378;
constexpr int32_t GL11_GL_MODELVIEW_MATRIX = 2982;
constexpr int32_t GL11_GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES = 35213;
constexpr int32_t GL11_GL_MODELVIEW_STACK_DEPTH = 2979;
constexpr int32_t GL11_GL_NORMAL_ARRAY_BUFFER_BINDING = 34967;
constexpr int32_t GL11_GL_NORMAL_ARRAY_POINTER = 32911;
constexpr int32_t GL11_GL_NORMAL_ARRAY_STRIDE = 32895;
constexpr int32_t GL11_GL_NORMAL_ARRAY_TYPE = 32894;
constexpr int32_t GL11_GL_OPERAND0_ALPHA = 34200;
constexpr int32_t GL11_GL_OPERAND0_RGB = 34192;
constexpr int32_t GL11_GL_OPERAND1_ALPHA = 34201;
constexpr int32_t GL11_GL_OPERAND1_RGB = 34193;
constexpr int32_t GL11_GL_OPERAND2_ALPHA = 34202;
constexpr int32_t GL11_GL_OPERAND2_RGB = 34194;
constexpr int32_t GL11_GL_POINT_DISTANCE_ATTENUATION = 33065;
constexpr int32_t GL11_GL_POINT_FADE_THRESHOLD_SIZE = 33064;
constexpr int32_t GL11_GL_POINT_SIZE = 2833;
constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES = 35743;
constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_OES = 35740;
constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_POINTER_OES = 35212;
constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_STRIDE_OES = 35211;
constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_TYPE_OES = 35210;
constexpr int32_t GL11_GL_POINT_SIZE_MAX = 33063;
constexpr int32_t GL11_GL_POINT_SIZE_MIN = 33062;
constexpr int32_t GL11_GL_POINT_SPRITE_OES = 34913;
constexpr int32_t GL11_GL_POLYGON_OFFSET_FACTOR = 32824;
constexpr int32_t GL11_GL_POLYGON_OFFSET_UNITS = 10752;
constexpr int32_t GL11_GL_PREVIOUS = 34168;
constexpr int32_t GL11_GL_PRIMARY_COLOR = 34167;
constexpr int32_t GL11_GL_PROJECTION_MATRIX = 2983;
constexpr int32_t GL11_GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES = 35214;
constexpr int32_t GL11_GL_PROJECTION_STACK_DEPTH = 2980;
constexpr int32_t GL11_GL_RGB_SCALE = 34163;
constexpr int32_t GL11_GL_SAMPLE_BUFFERS = 32936;
constexpr int32_t GL11_GL_SAMPLE_COVERAGE_INVERT = 32939;
constexpr int32_t GL11_GL_SAMPLE_COVERAGE_VALUE = 32938;
constexpr int32_t GL11_GL_SAMPLES = 32937;
constexpr int32_t GL11_GL_SCISSOR_BOX = 3088;
constexpr int32_t GL11_GL_SHADE_MODEL = 2900;
constexpr int32_t GL11_GL_SRC0_ALPHA = 34184;
constexpr int32_t GL11_GL_SRC0_RGB = 34176;
constexpr int32_t GL11_GL_SRC1_ALPHA = 34185;
constexpr int32_t GL11_GL_SRC1_RGB = 34177;
constexpr int32_t GL11_GL_SRC2_ALPHA = 34186;
constexpr int32_t GL11_GL_SRC2_RGB = 34178;
constexpr int32_t GL11_GL_STATIC_DRAW = 35044;
constexpr int32_t GL11_GL_STENCIL_CLEAR_VALUE = 2961;
constexpr int32_t GL11_GL_STENCIL_FAIL = 2964;
constexpr int32_t GL11_GL_STENCIL_FUNC = 2962;
constexpr int32_t GL11_GL_STENCIL_PASS_DEPTH_FAIL = 2965;
constexpr int32_t GL11_GL_STENCIL_PASS_DEPTH_PASS = 2966;
constexpr int32_t GL11_GL_STENCIL_REF = 2967;
constexpr int32_t GL11_GL_STENCIL_VALUE_MASK = 2963;
constexpr int32_t GL11_GL_STENCIL_WRITEMASK = 2968;
constexpr int32_t GL11_GL_SUBTRACT = 34023;
constexpr int32_t GL11_GL_TEXTURE_BINDING_2D = 32873;
constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = 34970;
constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_POINTER = 32914;
constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_SIZE = 32904;
constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_STRIDE = 32906;
constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_TYPE = 32905;
constexpr int32_t GL11_GL_TEXTURE_MATRIX = 2984;
constexpr int32_t GL11_GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES = 35215;
constexpr int32_t GL11_GL_TEXTURE_STACK_DEPTH = 2981;
constexpr int32_t GL11_GL_VERTEX_ARRAY_BUFFER_BINDING = 34966;
constexpr int32_t GL11_GL_VERTEX_ARRAY_POINTER = 32910;
constexpr int32_t GL11_GL_VERTEX_ARRAY_SIZE = 32890;
constexpr int32_t GL11_GL_VERTEX_ARRAY_STRIDE = 32892;
constexpr int32_t GL11_GL_VERTEX_ARRAY_TYPE = 32891;
constexpr int32_t GL11_GL_VIEWPORT = 2978;
constexpr int32_t GL11_GL_WRITE_ONLY = 35001;

