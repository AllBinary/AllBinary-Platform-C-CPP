#ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H
#define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H
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
typedef struct GL10 GL10;
#include "java/nio/Buffer.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/IntBuffer.h"
#include "javax/microedition/khronos/opengles/GL10.h"

typedef struct GL11 GL11;
struct GL11 {
    void (*glBindBuffer)(void* this, int32_t target, int32_t buffer);
    void (*glBufferData)(void* this, int32_t target, int32_t size, Buffer* data, int32_t usage);
    void (*glBufferSubData)(void* this, int32_t target, int32_t offset, int32_t size, Buffer* data);
    void (*glClipPlanef)(void* this, int32_t plane, float* equation, int32_t offset);
    void (*glColor4ub)(void* this, int8_t red, int8_t green, int8_t blue, int8_t alpha);
    void (*glColorPointer)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
    void (*glDeleteBuffers)(void* this, int32_t n, int32_t* buffers, int32_t offset);
    void (*glDrawElements)(void* this, int32_t mode, int32_t count, int32_t type, int32_t offset);
    void (*glGenBuffers)(void* this, int32_t n, int32_t* buffers, int32_t offset);
    void (*glGetBufferParameteriv)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
    void (*glGetClipPlanef)(void* this, int32_t pname, float* eqn, int32_t offset);
    void (*glGetFloatv)(void* this, int32_t pname, float* params, int32_t offset);
    void (*glGetLightfv)(void* this, int32_t light, int32_t pname, float* params, int32_t offset);
    void (*glGetMaterialfv)(void* this, int32_t face, int32_t pname, float* params, int32_t offset);
    void (*glGetTexEnviv)(void* this, int32_t env, int32_t pname, int32_t* params, int32_t offset);
    void (*glGetTexParameterfv)(void* this, int32_t target, int32_t pname, float* params, int32_t offset);
    void (*glGetTexParameteriv)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
    bool (*glIsBuffer)(void* this, int32_t buffer);
    bool (*glIsEnabled)(void* this, int32_t cap);
    bool (*glIsTexture)(void* this, int32_t texture);
    void (*glNormalPointer)(void* this, int32_t type, int32_t stride, int32_t offset);
    void (*glPointParameterf)(void* this, int32_t pname, float param);
    void (*glPointParameterfv)(void* this, int32_t pname, float* params, int32_t offset);
    void (*glTexCoordPointer)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
    void (*glTexEnvi)(void* this, int32_t target, int32_t pname, int32_t param);
    void (*glTexEnviv)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
    void (*glTexParameterfv)(void* this, int32_t target, int32_t pname, float* params, int32_t offset);
    void (*glTexParameteriv)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
    void (*glVertexPointer)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
};

static constexpr int32_t GL11_GL_ACTIVE_TEXTURE = 34016;
static constexpr int32_t GL11_GL_ADD_SIGNED = 34164;
static constexpr int32_t GL11_GL_ALPHA_SCALE = 3356;
static constexpr int32_t GL11_GL_ALPHA_TEST_FUNC = 3009;
static constexpr int32_t GL11_GL_ALPHA_TEST_REF = 3010;
static constexpr int32_t GL11_GL_ARRAY_BUFFER = 34962;
static constexpr int32_t GL11_GL_ARRAY_BUFFER_BINDING = 34964;
static constexpr int32_t GL11_GL_BLEND_DST = 3040;
static constexpr int32_t GL11_GL_BLEND_SRC = 3041;
static constexpr int32_t GL11_GL_BUFFER_ACCESS = 35003;
static constexpr int32_t GL11_GL_BUFFER_SIZE = 34660;
static constexpr int32_t GL11_GL_BUFFER_USAGE = 34661;
static constexpr int32_t GL11_GL_CLIENT_ACTIVE_TEXTURE = 34017;
static constexpr int32_t GL11_GL_CLIP_PLANE0 = 12288;
static constexpr int32_t GL11_GL_CLIP_PLANE1 = 12289;
static constexpr int32_t GL11_GL_CLIP_PLANE2 = 12290;
static constexpr int32_t GL11_GL_CLIP_PLANE3 = 12291;
static constexpr int32_t GL11_GL_CLIP_PLANE4 = 12292;
static constexpr int32_t GL11_GL_CLIP_PLANE5 = 12293;
static constexpr int32_t GL11_GL_COLOR_ARRAY_BUFFER_BINDING = 34968;
static constexpr int32_t GL11_GL_COLOR_ARRAY_POINTER = 32912;
static constexpr int32_t GL11_GL_COLOR_ARRAY_SIZE = 32897;
static constexpr int32_t GL11_GL_COLOR_ARRAY_STRIDE = 32899;
static constexpr int32_t GL11_GL_COLOR_ARRAY_TYPE = 32898;
static constexpr int32_t GL11_GL_COLOR_CLEAR_VALUE = 3106;
static constexpr int32_t GL11_GL_COLOR_WRITEMASK = 3107;
static constexpr int32_t GL11_GL_COMBINE = 34160;
static constexpr int32_t GL11_GL_COMBINE_ALPHA = 34162;
static constexpr int32_t GL11_GL_COMBINE_RGB = 34161;
static constexpr int32_t GL11_GL_CONSTANT = 34166;
static constexpr int32_t GL11_GL_COORD_REPLACE_OES = 34914;
static constexpr int32_t GL11_GL_CULL_FACE_MODE = 2885;
static constexpr int32_t GL11_GL_CURRENT_COLOR = 2816;
static constexpr int32_t GL11_GL_CURRENT_NORMAL = 2818;
static constexpr int32_t GL11_GL_CURRENT_TEXTURE_COORDS = 2819;
static constexpr int32_t GL11_GL_DEPTH_CLEAR_VALUE = 2931;
static constexpr int32_t GL11_GL_DEPTH_FUNC = 2932;
static constexpr int32_t GL11_GL_DEPTH_RANGE = 2928;
static constexpr int32_t GL11_GL_DEPTH_WRITEMASK = 2930;
static constexpr int32_t GL11_GL_DOT3_RGB = 34478;
static constexpr int32_t GL11_GL_DOT3_RGBA = 34479;
static constexpr int32_t GL11_GL_DYNAMIC_DRAW = 35048;
static constexpr int32_t GL11_GL_ELEMENT_ARRAY_BUFFER = 34963;
static constexpr int32_t GL11_GL_ELEMENT_ARRAY_BUFFER_BINDING = 34965;
static constexpr int32_t GL11_GL_FRONT_FACE = 2886;
static constexpr int32_t GL11_GL_GENERATE_MIPMAP = 33169;
static constexpr int32_t GL11_GL_GENERATE_MIPMAP_HINT = 33170;
static constexpr int32_t GL11_GL_INTERPOLATE = 34165;
static constexpr int32_t GL11_GL_LINE_WIDTH = 2849;
static constexpr int32_t GL11_GL_LOGIC_OP_MODE = 3056;
static constexpr int32_t GL11_GL_MATRIX_MODE = 2976;
static constexpr int32_t GL11_GL_MAX_CLIP_PLANES = 3378;
static constexpr int32_t GL11_GL_MODELVIEW_MATRIX = 2982;
static constexpr int32_t GL11_GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES = 35213;
static constexpr int32_t GL11_GL_MODELVIEW_STACK_DEPTH = 2979;
static constexpr int32_t GL11_GL_NORMAL_ARRAY_BUFFER_BINDING = 34967;
static constexpr int32_t GL11_GL_NORMAL_ARRAY_POINTER = 32911;
static constexpr int32_t GL11_GL_NORMAL_ARRAY_STRIDE = 32895;
static constexpr int32_t GL11_GL_NORMAL_ARRAY_TYPE = 32894;
static constexpr int32_t GL11_GL_OPERAND0_ALPHA = 34200;
static constexpr int32_t GL11_GL_OPERAND0_RGB = 34192;
static constexpr int32_t GL11_GL_OPERAND1_ALPHA = 34201;
static constexpr int32_t GL11_GL_OPERAND1_RGB = 34193;
static constexpr int32_t GL11_GL_OPERAND2_ALPHA = 34202;
static constexpr int32_t GL11_GL_OPERAND2_RGB = 34194;
static constexpr int32_t GL11_GL_POINT_DISTANCE_ATTENUATION = 33065;
static constexpr int32_t GL11_GL_POINT_FADE_THRESHOLD_SIZE = 33064;
static constexpr int32_t GL11_GL_POINT_SIZE = 2833;
static constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES = 35743;
static constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_OES = 35740;
static constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_POINTER_OES = 35212;
static constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_STRIDE_OES = 35211;
static constexpr int32_t GL11_GL_POINT_SIZE_ARRAY_TYPE_OES = 35210;
static constexpr int32_t GL11_GL_POINT_SIZE_MAX = 33063;
static constexpr int32_t GL11_GL_POINT_SIZE_MIN = 33062;
static constexpr int32_t GL11_GL_POINT_SPRITE_OES = 34913;
static constexpr int32_t GL11_GL_POLYGON_OFFSET_FACTOR = 32824;
static constexpr int32_t GL11_GL_POLYGON_OFFSET_UNITS = 10752;
static constexpr int32_t GL11_GL_PREVIOUS = 34168;
static constexpr int32_t GL11_GL_PRIMARY_COLOR = 34167;
static constexpr int32_t GL11_GL_PROJECTION_MATRIX = 2983;
static constexpr int32_t GL11_GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES = 35214;
static constexpr int32_t GL11_GL_PROJECTION_STACK_DEPTH = 2980;
static constexpr int32_t GL11_GL_RGB_SCALE = 34163;
static constexpr int32_t GL11_GL_SAMPLE_BUFFERS = 32936;
static constexpr int32_t GL11_GL_SAMPLE_COVERAGE_INVERT = 32939;
static constexpr int32_t GL11_GL_SAMPLE_COVERAGE_VALUE = 32938;
static constexpr int32_t GL11_GL_SAMPLES = 32937;
static constexpr int32_t GL11_GL_SCISSOR_BOX = 3088;
static constexpr int32_t GL11_GL_SHADE_MODEL = 2900;
static constexpr int32_t GL11_GL_SRC0_ALPHA = 34184;
static constexpr int32_t GL11_GL_SRC0_RGB = 34176;
static constexpr int32_t GL11_GL_SRC1_ALPHA = 34185;
static constexpr int32_t GL11_GL_SRC1_RGB = 34177;
static constexpr int32_t GL11_GL_SRC2_ALPHA = 34186;
static constexpr int32_t GL11_GL_SRC2_RGB = 34178;
static constexpr int32_t GL11_GL_STATIC_DRAW = 35044;
static constexpr int32_t GL11_GL_STENCIL_CLEAR_VALUE = 2961;
static constexpr int32_t GL11_GL_STENCIL_FAIL = 2964;
static constexpr int32_t GL11_GL_STENCIL_FUNC = 2962;
static constexpr int32_t GL11_GL_STENCIL_PASS_DEPTH_FAIL = 2965;
static constexpr int32_t GL11_GL_STENCIL_PASS_DEPTH_PASS = 2966;
static constexpr int32_t GL11_GL_STENCIL_REF = 2967;
static constexpr int32_t GL11_GL_STENCIL_VALUE_MASK = 2963;
static constexpr int32_t GL11_GL_STENCIL_WRITEMASK = 2968;
static constexpr int32_t GL11_GL_SUBTRACT = 34023;
static constexpr int32_t GL11_GL_TEXTURE_BINDING_2D = 32873;
static constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = 34970;
static constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_POINTER = 32914;
static constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_SIZE = 32904;
static constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_STRIDE = 32906;
static constexpr int32_t GL11_GL_TEXTURE_COORD_ARRAY_TYPE = 32905;
static constexpr int32_t GL11_GL_TEXTURE_MATRIX = 2984;
static constexpr int32_t GL11_GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES = 35215;
static constexpr int32_t GL11_GL_TEXTURE_STACK_DEPTH = 2981;
static constexpr int32_t GL11_GL_VERTEX_ARRAY_BUFFER_BINDING = 34966;
static constexpr int32_t GL11_GL_VERTEX_ARRAY_POINTER = 32910;
static constexpr int32_t GL11_GL_VERTEX_ARRAY_SIZE = 32890;
static constexpr int32_t GL11_GL_VERTEX_ARRAY_STRIDE = 32892;
static constexpr int32_t GL11_GL_VERTEX_ARRAY_TYPE = 32891;
static constexpr int32_t GL11_GL_VIEWPORT = 2978;
static constexpr int32_t GL11_GL_WRITE_ONLY = 35001;
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GL11_staticInit(void);

static inline void GL11_glBindBuffer(void* this, int32_t target, int32_t buffer) {
    ((__typeof__(((GL11*) nullptr)->glBindBuffer)) java_method_of(this, "glBindBuffer"))(this, target, buffer);
}

static inline void GL11_glBufferData(void* this, int32_t target, int32_t size, Buffer* data, int32_t usage) {
    ((__typeof__(((GL11*) nullptr)->glBufferData)) java_method_of(this, "glBufferData"))(this, target, size, data, usage);
}

static inline void GL11_glBufferSubData(void* this, int32_t target, int32_t offset, int32_t size, Buffer* data) {
    ((__typeof__(((GL11*) nullptr)->glBufferSubData)) java_method_of(this, "glBufferSubData"))(this, target, offset, size, data);
}

static inline void GL11_glClipPlanef(void* this, int32_t plane, float* equation, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glClipPlanef)) java_method_of(this, "glClipPlanef"))(this, plane, equation, offset);
}

static inline void GL11_glColor4ub(void* this, int8_t red, int8_t green, int8_t blue, int8_t alpha) {
    ((__typeof__(((GL11*) nullptr)->glColor4ub)) java_method_of(this, "glColor4ub"))(this, red, green, blue, alpha);
}

static inline void GL11_glColorPointer(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glColorPointer)) java_method_of(this, "glColorPointer"))(this, size, type, stride, offset);
}

static inline void GL11_glDeleteBuffers(void* this, int32_t n, int32_t* buffers, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glDeleteBuffers)) java_method_of(this, "glDeleteBuffers"))(this, n, buffers, offset);
}

static inline void GL11_glDrawElements(void* this, int32_t mode, int32_t count, int32_t type, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glDrawElements)) java_method_of(this, "glDrawElements"))(this, mode, count, type, offset);
}

static inline void GL11_glGenBuffers(void* this, int32_t n, int32_t* buffers, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glGenBuffers)) java_method_of(this, "glGenBuffers"))(this, n, buffers, offset);
}

static inline void GL11_glGetBufferParameteriv(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glGetBufferParameteriv)) java_method_of(this, "glGetBufferParameteriv"))(this, target, pname, params, offset);
}

static inline void GL11_glGetClipPlanef(void* this, int32_t pname, float* eqn, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glGetClipPlanef)) java_method_of(this, "glGetClipPlanef"))(this, pname, eqn, offset);
}

static inline void GL11_glGetFloatv(void* this, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glGetFloatv)) java_method_of(this, "glGetFloatv"))(this, pname, params, offset);
}

static inline void GL11_glGetLightfv(void* this, int32_t light, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glGetLightfv)) java_method_of(this, "glGetLightfv"))(this, light, pname, params, offset);
}

static inline void GL11_glGetMaterialfv(void* this, int32_t face, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glGetMaterialfv)) java_method_of(this, "glGetMaterialfv"))(this, face, pname, params, offset);
}

static inline void GL11_glGetTexEnviv(void* this, int32_t env, int32_t pname, int32_t* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glGetTexEnviv)) java_method_of(this, "glGetTexEnviv"))(this, env, pname, params, offset);
}

static inline void GL11_glGetTexParameterfv(void* this, int32_t target, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glGetTexParameterfv)) java_method_of(this, "glGetTexParameterfv"))(this, target, pname, params, offset);
}

static inline void GL11_glGetTexParameteriv(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glGetTexParameteriv)) java_method_of(this, "glGetTexParameteriv"))(this, target, pname, params, offset);
}

static inline bool GL11_glIsBuffer(void* this, int32_t buffer) {
    return ((__typeof__(((GL11*) nullptr)->glIsBuffer)) java_method_of(this, "glIsBuffer"))(this, buffer);
}

static inline bool GL11_glIsEnabled(void* this, int32_t cap) {
    return ((__typeof__(((GL11*) nullptr)->glIsEnabled)) java_method_of(this, "glIsEnabled"))(this, cap);
}

static inline bool GL11_glIsTexture(void* this, int32_t texture) {
    return ((__typeof__(((GL11*) nullptr)->glIsTexture)) java_method_of(this, "glIsTexture"))(this, texture);
}

static inline void GL11_glNormalPointer(void* this, int32_t type, int32_t stride, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glNormalPointer)) java_method_of(this, "glNormalPointer"))(this, type, stride, offset);
}

static inline void GL11_glPointParameterf(void* this, int32_t pname, float param) {
    ((__typeof__(((GL11*) nullptr)->glPointParameterf)) java_method_of(this, "glPointParameterf"))(this, pname, param);
}

static inline void GL11_glPointParameterfv(void* this, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glPointParameterfv)) java_method_of(this, "glPointParameterfv"))(this, pname, params, offset);
}

static inline void GL11_glTexCoordPointer(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glTexCoordPointer)) java_method_of(this, "glTexCoordPointer"))(this, size, type, stride, offset);
}

static inline void GL11_glTexEnvi(void* this, int32_t target, int32_t pname, int32_t param) {
    ((__typeof__(((GL11*) nullptr)->glTexEnvi)) java_method_of(this, "glTexEnvi"))(this, target, pname, param);
}

static inline void GL11_glTexEnviv(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glTexEnviv)) java_method_of(this, "glTexEnviv"))(this, target, pname, params, offset);
}

static inline void GL11_glTexParameterfv(void* this, int32_t target, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glTexParameterfv)) java_method_of(this, "glTexParameterfv"))(this, target, pname, params, offset);
}

static inline void GL11_glTexParameteriv(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glTexParameteriv)) java_method_of(this, "glTexParameteriv"))(this, target, pname, params, offset);
}

static inline void GL11_glVertexPointer(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset) {
    ((__typeof__(((GL11*) nullptr)->glVertexPointer)) java_method_of(this, "glVertexPointer"))(this, size, type, stride, offset);
}
#define GL11_glActiveTexture GL10_glActiveTexture
#define GL11_glAlphaFunc GL10_glAlphaFunc
#define GL11_glBindTexture GL10_glBindTexture
#define GL11_glBlendFunc GL10_glBlendFunc
#define GL11_glClear GL10_glClear
#define GL11_glClearColor GL10_glClearColor
#define GL11_glClearDepthf GL10_glClearDepthf
#define GL11_glClearStencil GL10_glClearStencil
#define GL11_glClientActiveTexture GL10_glClientActiveTexture
#define GL11_glColor4f GL10_glColor4f
#define GL11_glColorMask GL10_glColorMask
#define GL11_glCompressedTexImage2D GL10_glCompressedTexImage2D
#define GL11_glCompressedTexSubImage2D GL10_glCompressedTexSubImage2D
#define GL11_glCopyTexImage2D GL10_glCopyTexImage2D
#define GL11_glCopyTexSubImage2D GL10_glCopyTexSubImage2D
#define GL11_glCullFace GL10_glCullFace
#define GL11_glDeleteTextures GL10_glDeleteTextures
#define GL11_glDeleteTextures GL10_glDeleteTextures
#define GL11_glDepthFunc GL10_glDepthFunc
#define GL11_glDepthMask GL10_glDepthMask
#define GL11_glDepthRangef GL10_glDepthRangef
#define GL11_glDisable GL10_glDisable
#define GL11_glDisableClientState GL10_glDisableClientState
#define GL11_glDrawArrays GL10_glDrawArrays
#define GL11_glEnable GL10_glEnable
#define GL11_glEnableClientState GL10_glEnableClientState
#define GL11_glFinish GL10_glFinish
#define GL11_glFlush GL10_glFlush
#define GL11_glFogf GL10_glFogf
#define GL11_glFogfv GL10_glFogfv
#define GL11_glFogfv GL10_glFogfv
#define GL11_glFrontFace GL10_glFrontFace
#define GL11_glFrustumf GL10_glFrustumf
#define GL11_glGenTextures GL10_glGenTextures
#define GL11_glGenTextures GL10_glGenTextures
#define GL11_glGetError GL10_glGetError
#define GL11_glGetIntegerv GL10_glGetIntegerv
#define GL11_glGetIntegerv GL10_glGetIntegerv
#define GL11_glGetString GL10_glGetString
#define GL11_glHint GL10_glHint
#define GL11_glLightModelf GL10_glLightModelf
#define GL11_glLightModelfv GL10_glLightModelfv
#define GL11_glLightModelfv GL10_glLightModelfv
#define GL11_glLightf GL10_glLightf
#define GL11_glLightfv GL10_glLightfv
#define GL11_glLightfv GL10_glLightfv
#define GL11_glLineWidth GL10_glLineWidth
#define GL11_glLoadIdentity GL10_glLoadIdentity
#define GL11_glLoadMatrixf GL10_glLoadMatrixf
#define GL11_glLoadMatrixf GL10_glLoadMatrixf
#define GL11_glLogicOp GL10_glLogicOp
#define GL11_glMaterialf GL10_glMaterialf
#define GL11_glMaterialfv GL10_glMaterialfv
#define GL11_glMaterialfv GL10_glMaterialfv
#define GL11_glMatrixMode GL10_glMatrixMode
#define GL11_glMultMatrixf GL10_glMultMatrixf
#define GL11_glMultMatrixf GL10_glMultMatrixf
#define GL11_glMultiTexCoord4f GL10_glMultiTexCoord4f
#define GL11_glNormal3f GL10_glNormal3f
#define GL11_glOrthof GL10_glOrthof
#define GL11_glPixelStorei GL10_glPixelStorei
#define GL11_glPointSize GL10_glPointSize
#define GL11_glPolygonOffset GL10_glPolygonOffset
#define GL11_glPopMatrix GL10_glPopMatrix
#define GL11_glPushMatrix GL10_glPushMatrix
#define GL11_glReadPixels GL10_glReadPixels
#define GL11_glRotatef GL10_glRotatef
#define GL11_glRotatex GL10_glRotatex
#define GL11_glSampleCoverage GL10_glSampleCoverage
#define GL11_glScalef GL10_glScalef
#define GL11_glScalex GL10_glScalex
#define GL11_glScissor GL10_glScissor
#define GL11_glShadeModel GL10_glShadeModel
#define GL11_glStencilFunc GL10_glStencilFunc
#define GL11_glStencilMask GL10_glStencilMask
#define GL11_glStencilOp GL10_glStencilOp
#define GL11_glTexEnvf GL10_glTexEnvf
#define GL11_glTexEnvfv GL10_glTexEnvfv
#define GL11_glTexEnvfv GL10_glTexEnvfv
#define GL11_glTexImage2D GL10_glTexImage2D
#define GL11_glTexParameterf GL10_glTexParameterf
#define GL11_glTexParameteri GL10_glTexParameteri
#define GL11_glTexSubImage2D GL10_glTexSubImage2D
#define GL11_glTranslatef GL10_glTranslatef
#define GL11_glViewport GL10_glViewport
#define GL11_glBegin GL10_glBegin
#define GL11_glEnd GL10_glEnd
#define GL11_glVertex3f GL10_glVertex3f
#define GL11_glPolygonMode GL10_glPolygonMode

static inline void GL11_glClipPlanef4(void* this, int32_t plane, float* equation, int32_t offset) {
    ((void (*)(void* this, int32_t plane, float* equation, int32_t offset)) java_method_of(this, "glClipPlanef@4"))(this, plane, equation, offset);
}
#define GL11_glClipPlanef(...) JAVA_OVERLOADED(GL11_glClipPlanef, __VA_ARGS__)

static inline void GL11_glClipPlanef3(void* this, int32_t plane, FloatBuffer* equation) {
    ((void (*)(void* this, int32_t plane, FloatBuffer* equation)) java_method_of(this, "glClipPlanef@3"))(this, plane, equation);
}

static inline void GL11_glDeleteBuffers4(void* this, int32_t n, int32_t* buffers, int32_t offset) {
    ((void (*)(void* this, int32_t n, int32_t* buffers, int32_t offset)) java_method_of(this, "glDeleteBuffers@4"))(this, n, buffers, offset);
}
#define GL11_glDeleteBuffers(...) JAVA_OVERLOADED(GL11_glDeleteBuffers, __VA_ARGS__)

static inline void GL11_glDeleteBuffers3(void* this, int32_t n, IntBuffer* buffers) {
    ((void (*)(void* this, int32_t n, IntBuffer* buffers)) java_method_of(this, "glDeleteBuffers@3"))(this, n, buffers);
}

static inline void GL11_glGenBuffers4(void* this, int32_t n, int32_t* buffers, int32_t offset) {
    ((void (*)(void* this, int32_t n, int32_t* buffers, int32_t offset)) java_method_of(this, "glGenBuffers@4"))(this, n, buffers, offset);
}
#define GL11_glGenBuffers(...) JAVA_OVERLOADED(GL11_glGenBuffers, __VA_ARGS__)

static inline void GL11_glGenBuffers3(void* this, int32_t n, IntBuffer* buffers) {
    ((void (*)(void* this, int32_t n, IntBuffer* buffers)) java_method_of(this, "glGenBuffers@3"))(this, n, buffers);
}

static inline void GL11_glGetBufferParameteriv5(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
    ((void (*)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset)) java_method_of(this, "glGetBufferParameteriv@5"))(this, target, pname, params, offset);
}
#define GL11_glGetBufferParameteriv(...) JAVA_OVERLOADED(GL11_glGetBufferParameteriv, __VA_ARGS__)

static inline void GL11_glGetBufferParameteriv4(void* this, int32_t target, int32_t pname, IntBuffer* params) {
    ((void (*)(void* this, int32_t target, int32_t pname, IntBuffer* params)) java_method_of(this, "glGetBufferParameteriv@4"))(this, target, pname, params);
}

static inline void GL11_glGetClipPlanef4(void* this, int32_t pname, float* eqn, int32_t offset) {
    ((void (*)(void* this, int32_t pname, float* eqn, int32_t offset)) java_method_of(this, "glGetClipPlanef@4"))(this, pname, eqn, offset);
}
#define GL11_glGetClipPlanef(...) JAVA_OVERLOADED(GL11_glGetClipPlanef, __VA_ARGS__)

static inline void GL11_glGetClipPlanef3(void* this, int32_t pname, FloatBuffer* eqn) {
    ((void (*)(void* this, int32_t pname, FloatBuffer* eqn)) java_method_of(this, "glGetClipPlanef@3"))(this, pname, eqn);
}

static inline void GL11_glGetFloatv4(void* this, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glGetFloatv@4"))(this, pname, params, offset);
}
#define GL11_glGetFloatv(...) JAVA_OVERLOADED(GL11_glGetFloatv, __VA_ARGS__)

static inline void GL11_glGetFloatv3(void* this, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t pname, FloatBuffer* params)) java_method_of(this, "glGetFloatv@3"))(this, pname, params);
}

static inline void GL11_glGetLightfv5(void* this, int32_t light, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t light, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glGetLightfv@5"))(this, light, pname, params, offset);
}
#define GL11_glGetLightfv(...) JAVA_OVERLOADED(GL11_glGetLightfv, __VA_ARGS__)

static inline void GL11_glGetLightfv4(void* this, int32_t light, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t light, int32_t pname, FloatBuffer* params)) java_method_of(this, "glGetLightfv@4"))(this, light, pname, params);
}

static inline void GL11_glGetMaterialfv5(void* this, int32_t face, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t face, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glGetMaterialfv@5"))(this, face, pname, params, offset);
}
#define GL11_glGetMaterialfv(...) JAVA_OVERLOADED(GL11_glGetMaterialfv, __VA_ARGS__)

static inline void GL11_glGetMaterialfv4(void* this, int32_t face, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t face, int32_t pname, FloatBuffer* params)) java_method_of(this, "glGetMaterialfv@4"))(this, face, pname, params);
}

static inline void GL11_glGetTexEnviv5(void* this, int32_t env, int32_t pname, int32_t* params, int32_t offset) {
    ((void (*)(void* this, int32_t env, int32_t pname, int32_t* params, int32_t offset)) java_method_of(this, "glGetTexEnviv@5"))(this, env, pname, params, offset);
}
#define GL11_glGetTexEnviv(...) JAVA_OVERLOADED(GL11_glGetTexEnviv, __VA_ARGS__)

static inline void GL11_glGetTexEnviv4(void* this, int32_t env, int32_t pname, IntBuffer* params) {
    ((void (*)(void* this, int32_t env, int32_t pname, IntBuffer* params)) java_method_of(this, "glGetTexEnviv@4"))(this, env, pname, params);
}

static inline void GL11_glGetTexParameterfv5(void* this, int32_t target, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t target, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glGetTexParameterfv@5"))(this, target, pname, params, offset);
}
#define GL11_glGetTexParameterfv(...) JAVA_OVERLOADED(GL11_glGetTexParameterfv, __VA_ARGS__)

static inline void GL11_glGetTexParameterfv4(void* this, int32_t target, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t target, int32_t pname, FloatBuffer* params)) java_method_of(this, "glGetTexParameterfv@4"))(this, target, pname, params);
}

static inline void GL11_glGetTexParameteriv5(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
    ((void (*)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset)) java_method_of(this, "glGetTexParameteriv@5"))(this, target, pname, params, offset);
}
#define GL11_glGetTexParameteriv(...) JAVA_OVERLOADED(GL11_glGetTexParameteriv, __VA_ARGS__)

static inline void GL11_glGetTexParameteriv4(void* this, int32_t target, int32_t pname, IntBuffer* params) {
    ((void (*)(void* this, int32_t target, int32_t pname, IntBuffer* params)) java_method_of(this, "glGetTexParameteriv@4"))(this, target, pname, params);
}

static inline void GL11_glPointParameterfv4(void* this, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glPointParameterfv@4"))(this, pname, params, offset);
}
#define GL11_glPointParameterfv(...) JAVA_OVERLOADED(GL11_glPointParameterfv, __VA_ARGS__)

static inline void GL11_glPointParameterfv3(void* this, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t pname, FloatBuffer* params)) java_method_of(this, "glPointParameterfv@3"))(this, pname, params);
}

static inline void GL11_glTexEnviv5(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
    ((void (*)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset)) java_method_of(this, "glTexEnviv@5"))(this, target, pname, params, offset);
}
#define GL11_glTexEnviv(...) JAVA_OVERLOADED(GL11_glTexEnviv, __VA_ARGS__)

static inline void GL11_glTexEnviv4(void* this, int32_t target, int32_t pname, IntBuffer* params) {
    ((void (*)(void* this, int32_t target, int32_t pname, IntBuffer* params)) java_method_of(this, "glTexEnviv@4"))(this, target, pname, params);
}

static inline void GL11_glTexParameterfv5(void* this, int32_t target, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t target, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glTexParameterfv@5"))(this, target, pname, params, offset);
}
#define GL11_glTexParameterfv(...) JAVA_OVERLOADED(GL11_glTexParameterfv, __VA_ARGS__)

static inline void GL11_glTexParameterfv4(void* this, int32_t target, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t target, int32_t pname, FloatBuffer* params)) java_method_of(this, "glTexParameterfv@4"))(this, target, pname, params);
}

static inline void GL11_glTexParameteriv5(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
    ((void (*)(void* this, int32_t target, int32_t pname, int32_t* params, int32_t offset)) java_method_of(this, "glTexParameteriv@5"))(this, target, pname, params, offset);
}
#define GL11_glTexParameteriv(...) JAVA_OVERLOADED(GL11_glTexParameteriv, __VA_ARGS__)

static inline void GL11_glTexParameteriv4(void* this, int32_t target, int32_t pname, IntBuffer* params) {
    ((void (*)(void* this, int32_t target, int32_t pname, IntBuffer* params)) java_method_of(this, "glTexParameteriv@4"))(this, target, pname, params);
}


#endif // JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11_H
