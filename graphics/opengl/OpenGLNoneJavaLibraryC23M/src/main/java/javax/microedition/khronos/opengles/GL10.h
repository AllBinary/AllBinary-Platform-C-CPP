#ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H
#define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H
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
typedef struct GL GL;
#include "java/nio/Buffer.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/IntBuffer.h"
#include "javax/microedition/khronos/opengles/GL.h"

typedef struct GL10 GL10;
struct GL10 {
    void (*glActiveTexture)(void* this, int32_t texture);
    void (*glAlphaFunc)(void* this, int32_t func, float ref);
    void (*glBindTexture)(void* this, int32_t target, int32_t texture);
    void (*glBlendFunc)(void* this, int32_t sfactor, int32_t dfactor);
    void (*glClear)(void* this, int32_t mask);
    void (*glClearColor)(void* this, float red, float green, float blue, float alpha);
    void (*glClearDepthf)(void* this, float depth);
    void (*glClearStencil)(void* this, int32_t s);
    void (*glClientActiveTexture)(void* this, int32_t texture);
    void (*glColor4f)(void* this, float red, float green, float blue, float alpha);
    void (*glColorMask)(void* this, bool red, bool green, bool blue, bool alpha);
    void (*glColorPointer)(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
    void (*glCompressedTexImage2D)(void* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer* data);
    void (*glCompressedTexSubImage2D)(void* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer* data);
    void (*glCopyTexImage2D)(void* this, int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);
    void (*glCopyTexSubImage2D)(void* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);
    void (*glCullFace)(void* this, int32_t mode);
    void (*glDeleteTextures)(void* this, int32_t n, int32_t* textures, int32_t offset);
    void (*glDepthFunc)(void* this, int32_t func);
    void (*glDepthMask)(void* this, bool flag);
    void (*glDepthRangef)(void* this, float zNear, float zFar);
    void (*glDisable)(void* this, int32_t cap);
    void (*glDisableClientState)(void* this, int32_t array);
    void (*glDrawArrays)(void* this, int32_t mode, int32_t first, int32_t count);
    void (*glDrawElements)(void* this, int32_t mode, int32_t count, int32_t type, Buffer* indices);
    void (*glEnable)(void* this, int32_t cap);
    void (*glEnableClientState)(void* this, int32_t array);
    void (*glFinish)(void* this);
    void (*glFlush)(void* this);
    void (*glFogf)(void* this, int32_t pname, float param);
    void (*glFogfv)(void* this, int32_t pname, float* params, int32_t offset);
    void (*glFrontFace)(void* this, int32_t mode);
    void (*glFrustumf)(void* this, float left, float right, float bottom, float top, float zNear, float zFar);
    void (*glGenTextures)(void* this, int32_t n, int32_t* textures, int32_t offset);
    int32_t (*glGetError)(void* this);
    void (*glGetIntegerv)(void* this, int32_t pname, int32_t* params, int32_t offset);
    const char* (*glGetString)(void* this, int32_t name);
    void (*glHint)(void* this, int32_t target, int32_t mode);
    void (*glLightModelf)(void* this, int32_t pname, float param);
    void (*glLightModelfv)(void* this, int32_t pname, float* params, int32_t offset);
    void (*glLightf)(void* this, int32_t light, int32_t pname, float param);
    void (*glLightfv)(void* this, int32_t light, int32_t pname, float* params, int32_t offset);
    void (*glLineWidth)(void* this, float width);
    void (*glLoadIdentity)(void* this);
    void (*glLoadMatrixf)(void* this, float* m, int32_t offset);
    void (*glLogicOp)(void* this, int32_t opcode);
    void (*glMaterialf)(void* this, int32_t face, int32_t pname, float param);
    void (*glMaterialfv)(void* this, int32_t face, int32_t pname, float* params, int32_t offset);
    void (*glMatrixMode)(void* this, int32_t mode);
    void (*glMultMatrixf)(void* this, float* m, int32_t offset);
    void (*glMultiTexCoord4f)(void* this, int32_t target, float s, float t, float r, float q);
    void (*glNormal3f)(void* this, float nx, float ny, float nz);
    void (*glNormalPointer)(void* this, int32_t type, int32_t stride, Buffer* pointer);
    void (*glOrthof)(void* this, float left, float right, float bottom, float top, float zNear, float zFar);
    void (*glPixelStorei)(void* this, int32_t pname, int32_t param);
    void (*glPointSize)(void* this, float size);
    void (*glPolygonOffset)(void* this, float factor, float units);
    void (*glPopMatrix)(void* this);
    void (*glPushMatrix)(void* this);
    void (*glReadPixels)(void* this, int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels);
    void (*glRotatef)(void* this, float angle, float x, float y, float z);
    void (*glRotatex)(void* this, int32_t angle, int32_t x, int32_t y, int32_t z);
    void (*glSampleCoverage)(void* this, float value, bool invert);
    void (*glScalef)(void* this, float x, float y, float z);
    void (*glScalex)(void* this, int32_t x, int32_t y, int32_t z);
    void (*glScissor)(void* this, int32_t x, int32_t y, int32_t width, int32_t height);
    void (*glShadeModel)(void* this, int32_t mode);
    void (*glStencilFunc)(void* this, int32_t func, int32_t ref, int32_t mask);
    void (*glStencilMask)(void* this, int32_t mask);
    void (*glStencilOp)(void* this, int32_t fail, int32_t zfail, int32_t zpass);
    void (*glTexCoordPointer)(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
    void (*glTexEnvf)(void* this, int32_t target, int32_t pname, float param);
    void (*glTexEnvfv)(void* this, int32_t target, int32_t pname, float* params, int32_t offset);
    void (*glTexImage2D)(void* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer* pixels);
    void (*glTexParameterf)(void* this, int32_t target, int32_t pname, float param);
    void (*glTexParameteri)(void* this, int32_t target, int32_t pname, int32_t param);
    void (*glTexSubImage2D)(void* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels);
    void (*glTranslatef)(void* this, float x, float y, float z);
    void (*glVertexPointer)(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
    void (*glViewport)(void* this, int32_t x, int32_t y, int32_t width, int32_t height);
    void (*glBegin)(void* this, int32_t i);
    void (*glEnd)(void* this);
    void (*glVertex3f)(void* this, float f, float f2, float f3);
    void (*glPolygonMode)(void* this, int32_t i, int32_t i1);
};

static constexpr int32_t GL10_GL_ADD = 260;
static constexpr int32_t GL10_GL_ALIASED_LINE_WIDTH_RANGE = 33902;
static constexpr int32_t GL10_GL_ALIASED_POINT_SIZE_RANGE = 33901;
static constexpr int32_t GL10_GL_ALPHA = 6406;
static constexpr int32_t GL10_GL_ALPHA_BITS = 3413;
static constexpr int32_t GL10_GL_ALPHA_TEST = 3008;
static constexpr int32_t GL10_GL_ALWAYS = 519;
static constexpr int32_t GL10_GL_AMBIENT = 4608;
static constexpr int32_t GL10_GL_AMBIENT_AND_DIFFUSE = 5634;
static constexpr int32_t GL10_GL_AND = 5377;
static constexpr int32_t GL10_GL_AND_INVERTED = 5380;
static constexpr int32_t GL10_GL_AND_REVERSE = 5378;
static constexpr int32_t GL10_GL_BACK = 1029;
static constexpr int32_t GL10_GL_BLEND = 3042;
static constexpr int32_t GL10_GL_BLUE_BITS = 3412;
static constexpr int32_t GL10_GL_BYTE = 5120;
static constexpr int32_t GL10_GL_CCW = 2305;
static constexpr int32_t GL10_GL_CLAMP_TO_EDGE = 33071;
static constexpr int32_t GL10_GL_CLEAR = 5376;
static constexpr int32_t GL10_GL_COLOR_ARRAY = 32886;
static constexpr int32_t GL10_GL_COLOR_BUFFER_BIT = 16384;
static constexpr int32_t GL10_GL_COLOR_LOGIC_OP = 3058;
static constexpr int32_t GL10_GL_COLOR_MATERIAL = 2903;
static constexpr int32_t GL10_GL_COMPRESSED_TEXTURE_FORMATS = 34467;
static constexpr int32_t GL10_GL_CONSTANT_ATTENUATION = 4615;
static constexpr int32_t GL10_GL_COPY = 5379;
static constexpr int32_t GL10_GL_COPY_INVERTED = 5388;
static constexpr int32_t GL10_GL_CULL_FACE = 2884;
static constexpr int32_t GL10_GL_CW = 2304;
static constexpr int32_t GL10_GL_DECAL = 8449;
static constexpr int32_t GL10_GL_DECR = 7683;
static constexpr int32_t GL10_GL_DEPTH_BITS = 3414;
static constexpr int32_t GL10_GL_DEPTH_BUFFER_BIT = 256;
static constexpr int32_t GL10_GL_DEPTH_TEST = 2929;
static constexpr int32_t GL10_GL_DIFFUSE = 4609;
static constexpr int32_t GL10_GL_DITHER = 3024;
static constexpr int32_t GL10_GL_DONT_CARE = 4352;
static constexpr int32_t GL10_GL_DST_ALPHA = 772;
static constexpr int32_t GL10_GL_DST_COLOR = 774;
static constexpr int32_t GL10_GL_EMISSION = 5632;
static constexpr int32_t GL10_GL_EQUAL = 514;
static constexpr int32_t GL10_GL_EQUIV = 5385;
static constexpr int32_t GL10_GL_EXP = 2048;
static constexpr int32_t GL10_GL_EXP2 = 2049;
static constexpr int32_t GL10_GL_EXTENSIONS = 7939;
static constexpr int32_t GL10_GL_FALSE = 0;
static constexpr int32_t GL10_GL_FASTEST = 4353;
static constexpr int32_t GL10_GL_FIXED = 5132;
static constexpr int32_t GL10_GL_FLAT = 7424;
static constexpr int32_t GL10_GL_FLOAT = 5126;
static constexpr int32_t GL10_GL_FOG = 2912;
static constexpr int32_t GL10_GL_FOG_COLOR = 2918;
static constexpr int32_t GL10_GL_FOG_DENSITY = 2914;
static constexpr int32_t GL10_GL_FOG_END = 2916;
static constexpr int32_t GL10_GL_FOG_HINT = 3156;
static constexpr int32_t GL10_GL_FOG_MODE = 2917;
static constexpr int32_t GL10_GL_FOG_START = 2915;
static constexpr int32_t GL10_GL_FRONT = 1028;
static constexpr int32_t GL10_GL_FRONT_AND_BACK = 1032;
static constexpr int32_t GL10_GL_GEQUAL = 518;
static constexpr int32_t GL10_GL_GREATER = 516;
static constexpr int32_t GL10_GL_GREEN_BITS = 3411;
static constexpr int32_t GL10_GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES = 35739;
static constexpr int32_t GL10_GL_IMPLEMENTATION_COLOR_READ_TYPE_OES = 35738;
static constexpr int32_t GL10_GL_INCR = 7682;
static constexpr int32_t GL10_GL_INVALID_ENUM = 1280;
static constexpr int32_t GL10_GL_INVALID_OPERATION = 1282;
static constexpr int32_t GL10_GL_INVALID_VALUE = 1281;
static constexpr int32_t GL10_GL_INVERT = 5386;
static constexpr int32_t GL10_GL_KEEP = 7680;
static constexpr int32_t GL10_GL_LEQUAL = 515;
static constexpr int32_t GL10_GL_LESS = 513;
static constexpr int32_t GL10_GL_LIGHT_MODEL_AMBIENT = 2899;
static constexpr int32_t GL10_GL_LIGHT_MODEL_TWO_SIDE = 2898;
static constexpr int32_t GL10_GL_LIGHT0 = 16384;
static constexpr int32_t GL10_GL_LIGHT1 = 16385;
static constexpr int32_t GL10_GL_LIGHT2 = 16386;
static constexpr int32_t GL10_GL_LIGHT3 = 16387;
static constexpr int32_t GL10_GL_LIGHT4 = 16388;
static constexpr int32_t GL10_GL_LIGHT5 = 16389;
static constexpr int32_t GL10_GL_LIGHT6 = 16390;
static constexpr int32_t GL10_GL_LIGHT7 = 16391;
static constexpr int32_t GL10_GL_LIGHTING = 2896;
static constexpr int32_t GL10_GL_LINE_LOOP = 2;
static constexpr int32_t GL10_GL_LINE_SMOOTH = 2848;
static constexpr int32_t GL10_GL_LINE_SMOOTH_HINT = 3154;
static constexpr int32_t GL10_GL_LINE_STRIP = 3;
static constexpr int32_t GL10_GL_LINEAR = 9729;
static constexpr int32_t GL10_GL_LINEAR_ATTENUATION = 4616;
static constexpr int32_t GL10_GL_LINEAR_MIPMAP_LINEAR = 9987;
static constexpr int32_t GL10_GL_LINEAR_MIPMAP_NEAREST = 9985;
static constexpr int32_t GL10_GL_LINES = 1;
static constexpr int32_t GL10_GL_LUMINANCE = 6409;
static constexpr int32_t GL10_GL_LUMINANCE_ALPHA = 6410;
static constexpr int32_t GL10_GL_MAX_ELEMENTS_INDICES = 33001;
static constexpr int32_t GL10_GL_MAX_ELEMENTS_VERTICES = 33000;
static constexpr int32_t GL10_GL_MAX_LIGHTS = 3377;
static constexpr int32_t GL10_GL_MAX_MODELVIEW_STACK_DEPTH = 3382;
static constexpr int32_t GL10_GL_MAX_PROJECTION_STACK_DEPTH = 3384;
static constexpr int32_t GL10_GL_MAX_TEXTURE_SIZE = 3379;
static constexpr int32_t GL10_GL_MAX_TEXTURE_STACK_DEPTH = 3385;
static constexpr int32_t GL10_GL_MAX_TEXTURE_UNITS = 34018;
static constexpr int32_t GL10_GL_MAX_VIEWPORT_DIMS = 3386;
static constexpr int32_t GL10_GL_MODELVIEW = 5888;
static constexpr int32_t GL10_GL_MODULATE = 8448;
static constexpr int32_t GL10_GL_MULTISAMPLE = 32925;
static constexpr int32_t GL10_GL_NAND = 5390;
static constexpr int32_t GL10_GL_NEAREST = 9728;
static constexpr int32_t GL10_GL_NEAREST_MIPMAP_LINEAR = 9986;
static constexpr int32_t GL10_GL_NEAREST_MIPMAP_NEAREST = 9984;
static constexpr int32_t GL10_GL_NEVER = 512;
static constexpr int32_t GL10_GL_NICEST = 4354;
static constexpr int32_t GL10_GL_NO_ERROR = 0;
static constexpr int32_t GL10_GL_NOOP = 5381;
static constexpr int32_t GL10_GL_NOR = 5384;
static constexpr int32_t GL10_GL_NORMAL_ARRAY = 32885;
static constexpr int32_t GL10_GL_NORMALIZE = 2977;
static constexpr int32_t GL10_GL_NOTEQUAL = 517;
static constexpr int32_t GL10_GL_NUM_COMPRESSED_TEXTURE_FORMATS = 34466;
static constexpr int32_t GL10_GL_ONE = 1;
static constexpr int32_t GL10_GL_ONE_MINUS_DST_ALPHA = 773;
static constexpr int32_t GL10_GL_ONE_MINUS_DST_COLOR = 775;
static constexpr int32_t GL10_GL_ONE_MINUS_SRC_ALPHA = 771;
static constexpr int32_t GL10_GL_ONE_MINUS_SRC_COLOR = 769;
static constexpr int32_t GL10_GL_OR = 5383;
static constexpr int32_t GL10_GL_OR_INVERTED = 5389;
static constexpr int32_t GL10_GL_OR_REVERSE = 5387;
static constexpr int32_t GL10_GL_OUT_OF_MEMORY = 1285;
static constexpr int32_t GL10_GL_PACK_ALIGNMENT = 3333;
static constexpr int32_t GL10_GL_PALETTE4_R5_G6_B5_OES = 35730;
static constexpr int32_t GL10_GL_PALETTE4_RGB5_A1_OES = 35732;
static constexpr int32_t GL10_GL_PALETTE4_RGB8_OES = 35728;
static constexpr int32_t GL10_GL_PALETTE4_RGBA4_OES = 35731;
static constexpr int32_t GL10_GL_PALETTE4_RGBA8_OES = 35729;
static constexpr int32_t GL10_GL_PALETTE8_R5_G6_B5_OES = 35735;
static constexpr int32_t GL10_GL_PALETTE8_RGB5_A1_OES = 35737;
static constexpr int32_t GL10_GL_PALETTE8_RGB8_OES = 35733;
static constexpr int32_t GL10_GL_PALETTE8_RGBA4_OES = 35736;
static constexpr int32_t GL10_GL_PALETTE8_RGBA8_OES = 35734;
static constexpr int32_t GL10_GL_PERSPECTIVE_CORRECTION_HINT = 3152;
static constexpr int32_t GL10_GL_POINT_SMOOTH = 2832;
static constexpr int32_t GL10_GL_POINT_SMOOTH_HINT = 3153;
static constexpr int32_t GL10_GL_POINTS = 0;
static constexpr int32_t GL10_GL_POINT_FADE_THRESHOLD_SIZE = 33064;
static constexpr int32_t GL10_GL_POINT_SIZE = 2833;
static constexpr int32_t GL10_GL_POLYGON_OFFSET_FILL = 32823;
static constexpr int32_t GL10_GL_POLYGON_SMOOTH_HINT = 3155;
static constexpr int32_t GL10_GL_POSITION = 4611;
static constexpr int32_t GL10_GL_PROJECTION = 5889;
static constexpr int32_t GL10_GL_QUADRATIC_ATTENUATION = 4617;
static constexpr int32_t GL10_GL_RED_BITS = 3410;
static constexpr int32_t GL10_GL_RENDERER = 7937;
static constexpr int32_t GL10_GL_REPEAT = 10497;
static constexpr int32_t GL10_GL_REPLACE = 7681;
static constexpr int32_t GL10_GL_RESCALE_NORMAL = 32826;
static constexpr int32_t GL10_GL_RGB = 6407;
static constexpr int32_t GL10_GL_RGBA = 6408;
static constexpr int32_t GL10_GL_SAMPLE_ALPHA_TO_COVERAGE = 32926;
static constexpr int32_t GL10_GL_SAMPLE_ALPHA_TO_ONE = 32927;
static constexpr int32_t GL10_GL_SAMPLE_COVERAGE = 32928;
static constexpr int32_t GL10_GL_SCISSOR_TEST = 3089;
static constexpr int32_t GL10_GL_SET = 5391;
static constexpr int32_t GL10_GL_SHININESS = 5633;
static constexpr int32_t GL10_GL_SHORT = 5122;
static constexpr int32_t GL10_GL_SMOOTH = 7425;
static constexpr int32_t GL10_GL_SMOOTH_LINE_WIDTH_RANGE = 2850;
static constexpr int32_t GL10_GL_SMOOTH_POINT_SIZE_RANGE = 2834;
static constexpr int32_t GL10_GL_SPECULAR = 4610;
static constexpr int32_t GL10_GL_SPOT_CUTOFF = 4614;
static constexpr int32_t GL10_GL_SPOT_DIRECTION = 4612;
static constexpr int32_t GL10_GL_SPOT_EXPONENT = 4613;
static constexpr int32_t GL10_GL_SRC_ALPHA = 770;
static constexpr int32_t GL10_GL_SRC_ALPHA_SATURATE = 776;
static constexpr int32_t GL10_GL_SRC_COLOR = 768;
static constexpr int32_t GL10_GL_STACK_OVERFLOW = 1283;
static constexpr int32_t GL10_GL_STACK_UNDERFLOW = 1284;
static constexpr int32_t GL10_GL_STENCIL_BITS = 3415;
static constexpr int32_t GL10_GL_STENCIL_BUFFER_BIT = 1024;
static constexpr int32_t GL10_GL_STENCIL_TEST = 2960;
static constexpr int32_t GL10_GL_SUBPIXEL_BITS = 3408;
static constexpr int32_t GL10_GL_TEXTURE = 5890;
static constexpr int32_t GL10_GL_TEXTURE_2D = 3553;
static constexpr int32_t GL10_GL_TEXTURE_COORD_ARRAY = 32888;
static constexpr int32_t GL10_GL_TEXTURE_ENV = 8960;
static constexpr int32_t GL10_GL_TEXTURE_ENV_COLOR = 8705;
static constexpr int32_t GL10_GL_TEXTURE_ENV_MODE = 8704;
static constexpr int32_t GL10_GL_TEXTURE_MAG_FILTER = 10240;
static constexpr int32_t GL10_GL_TEXTURE_MIN_FILTER = 10241;
static constexpr int32_t GL10_GL_TEXTURE_WRAP_S = 10242;
static constexpr int32_t GL10_GL_TEXTURE_WRAP_T = 10243;
static constexpr int32_t GL10_GL_TEXTURE0 = 33984;
static constexpr int32_t GL10_GL_TEXTURE1 = 33985;
static constexpr int32_t GL10_GL_TEXTURE2 = 33986;
static constexpr int32_t GL10_GL_TEXTURE3 = 33987;
static constexpr int32_t GL10_GL_TEXTURE4 = 33988;
static constexpr int32_t GL10_GL_TEXTURE5 = 33989;
static constexpr int32_t GL10_GL_TEXTURE6 = 33990;
static constexpr int32_t GL10_GL_TEXTURE7 = 33991;
static constexpr int32_t GL10_GL_TEXTURE8 = 33992;
static constexpr int32_t GL10_GL_TEXTURE9 = 33993;
static constexpr int32_t GL10_GL_TEXTURE10 = 33994;
static constexpr int32_t GL10_GL_TEXTURE11 = 33995;
static constexpr int32_t GL10_GL_TEXTURE12 = 33996;
static constexpr int32_t GL10_GL_TEXTURE13 = 33997;
static constexpr int32_t GL10_GL_TEXTURE14 = 33998;
static constexpr int32_t GL10_GL_TEXTURE15 = 33999;
static constexpr int32_t GL10_GL_TEXTURE16 = 34000;
static constexpr int32_t GL10_GL_TEXTURE17 = 34001;
static constexpr int32_t GL10_GL_TEXTURE18 = 34002;
static constexpr int32_t GL10_GL_TEXTURE19 = 34003;
static constexpr int32_t GL10_GL_TEXTURE20 = 34004;
static constexpr int32_t GL10_GL_TEXTURE21 = 34005;
static constexpr int32_t GL10_GL_TEXTURE22 = 34006;
static constexpr int32_t GL10_GL_TEXTURE23 = 34007;
static constexpr int32_t GL10_GL_TEXTURE24 = 34008;
static constexpr int32_t GL10_GL_TEXTURE25 = 34009;
static constexpr int32_t GL10_GL_TEXTURE26 = 34010;
static constexpr int32_t GL10_GL_TEXTURE27 = 34011;
static constexpr int32_t GL10_GL_TEXTURE28 = 34012;
static constexpr int32_t GL10_GL_TEXTURE29 = 34013;
static constexpr int32_t GL10_GL_TEXTURE30 = 34014;
static constexpr int32_t GL10_GL_TEXTURE31 = 34015;
static constexpr int32_t GL10_GL_TRIANGLE_FAN = 6;
static constexpr int32_t GL10_GL_TRIANGLE_STRIP = 5;
static constexpr int32_t GL10_GL_TRIANGLES = 4;
static constexpr int32_t GL10_GL_TRUE = 1;
static constexpr int32_t GL10_GL_UNPACK_ALIGNMENT = 3317;
static constexpr int32_t GL10_GL_UNSIGNED_BYTE = 5121;
static constexpr int32_t GL10_GL_UNSIGNED_SHORT = 5123;
static constexpr int32_t GL10_GL_UNSIGNED_SHORT_4_4_4_4 = 32819;
static constexpr int32_t GL10_GL_UNSIGNED_SHORT_5_5_5_1 = 32820;
static constexpr int32_t GL10_GL_UNSIGNED_SHORT_5_6_5 = 33635;
static constexpr int32_t GL10_GL_VENDOR = 7936;
static constexpr int32_t GL10_GL_VERSION = 7938;
static constexpr int32_t GL10_GL_VERTEX_ARRAY = 32884;
static constexpr int32_t GL10_GL_XOR = 5382;
static constexpr int32_t GL10_GL_ZERO = 0;
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GL10_staticInit(void);

static inline void GL10_glActiveTexture(void* this, int32_t texture) {
    ((__typeof__(((GL10*) nullptr)->glActiveTexture)) java_method_of(this, "glActiveTexture"))(this, texture);
}

static inline void GL10_glAlphaFunc(void* this, int32_t func, float ref) {
    ((__typeof__(((GL10*) nullptr)->glAlphaFunc)) java_method_of(this, "glAlphaFunc"))(this, func, ref);
}

static inline void GL10_glBindTexture(void* this, int32_t target, int32_t texture) {
    ((__typeof__(((GL10*) nullptr)->glBindTexture)) java_method_of(this, "glBindTexture"))(this, target, texture);
}

static inline void GL10_glBlendFunc(void* this, int32_t sfactor, int32_t dfactor) {
    ((__typeof__(((GL10*) nullptr)->glBlendFunc)) java_method_of(this, "glBlendFunc"))(this, sfactor, dfactor);
}

static inline void GL10_glClear(void* this, int32_t mask) {
    ((__typeof__(((GL10*) nullptr)->glClear)) java_method_of(this, "glClear"))(this, mask);
}

static inline void GL10_glClearColor(void* this, float red, float green, float blue, float alpha) {
    ((__typeof__(((GL10*) nullptr)->glClearColor)) java_method_of(this, "glClearColor"))(this, red, green, blue, alpha);
}

static inline void GL10_glClearDepthf(void* this, float depth) {
    ((__typeof__(((GL10*) nullptr)->glClearDepthf)) java_method_of(this, "glClearDepthf"))(this, depth);
}

static inline void GL10_glClearStencil(void* this, int32_t s) {
    ((__typeof__(((GL10*) nullptr)->glClearStencil)) java_method_of(this, "glClearStencil"))(this, s);
}

static inline void GL10_glClientActiveTexture(void* this, int32_t texture) {
    ((__typeof__(((GL10*) nullptr)->glClientActiveTexture)) java_method_of(this, "glClientActiveTexture"))(this, texture);
}

static inline void GL10_glColor4f(void* this, float red, float green, float blue, float alpha) {
    ((__typeof__(((GL10*) nullptr)->glColor4f)) java_method_of(this, "glColor4f"))(this, red, green, blue, alpha);
}

static inline void GL10_glColorMask(void* this, bool red, bool green, bool blue, bool alpha) {
    ((__typeof__(((GL10*) nullptr)->glColorMask)) java_method_of(this, "glColorMask"))(this, red, green, blue, alpha);
}

static inline void GL10_glColorPointer(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
    ((__typeof__(((GL10*) nullptr)->glColorPointer)) java_method_of(this, "glColorPointer"))(this, size, type, stride, pointer);
}

static inline void GL10_glCompressedTexImage2D(void* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer* data) {
    ((__typeof__(((GL10*) nullptr)->glCompressedTexImage2D)) java_method_of(this, "glCompressedTexImage2D"))(this, target, level, internalformat, width, height, border, imageSize, data);
}

static inline void GL10_glCompressedTexSubImage2D(void* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer* data) {
    ((__typeof__(((GL10*) nullptr)->glCompressedTexSubImage2D)) java_method_of(this, "glCompressedTexSubImage2D"))(this, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

static inline void GL10_glCopyTexImage2D(void* this, int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    ((__typeof__(((GL10*) nullptr)->glCopyTexImage2D)) java_method_of(this, "glCopyTexImage2D"))(this, target, level, internalformat, x, y, width, height, border);
}

static inline void GL10_glCopyTexSubImage2D(void* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    ((__typeof__(((GL10*) nullptr)->glCopyTexSubImage2D)) java_method_of(this, "glCopyTexSubImage2D"))(this, target, level, xoffset, yoffset, x, y, width, height);
}

static inline void GL10_glCullFace(void* this, int32_t mode) {
    ((__typeof__(((GL10*) nullptr)->glCullFace)) java_method_of(this, "glCullFace"))(this, mode);
}

static inline void GL10_glDeleteTextures(void* this, int32_t n, int32_t* textures, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glDeleteTextures)) java_method_of(this, "glDeleteTextures"))(this, n, textures, offset);
}

static inline void GL10_glDepthFunc(void* this, int32_t func) {
    ((__typeof__(((GL10*) nullptr)->glDepthFunc)) java_method_of(this, "glDepthFunc"))(this, func);
}

static inline void GL10_glDepthMask(void* this, bool flag) {
    ((__typeof__(((GL10*) nullptr)->glDepthMask)) java_method_of(this, "glDepthMask"))(this, flag);
}

static inline void GL10_glDepthRangef(void* this, float zNear, float zFar) {
    ((__typeof__(((GL10*) nullptr)->glDepthRangef)) java_method_of(this, "glDepthRangef"))(this, zNear, zFar);
}

static inline void GL10_glDisable(void* this, int32_t cap) {
    ((__typeof__(((GL10*) nullptr)->glDisable)) java_method_of(this, "glDisable"))(this, cap);
}

static inline void GL10_glDisableClientState(void* this, int32_t array) {
    ((__typeof__(((GL10*) nullptr)->glDisableClientState)) java_method_of(this, "glDisableClientState"))(this, array);
}

static inline void GL10_glDrawArrays(void* this, int32_t mode, int32_t first, int32_t count) {
    ((__typeof__(((GL10*) nullptr)->glDrawArrays)) java_method_of(this, "glDrawArrays"))(this, mode, first, count);
}

static inline void GL10_glDrawElements(void* this, int32_t mode, int32_t count, int32_t type, Buffer* indices) {
    ((__typeof__(((GL10*) nullptr)->glDrawElements)) java_method_of(this, "glDrawElements"))(this, mode, count, type, indices);
}

static inline void GL10_glEnable(void* this, int32_t cap) {
    ((__typeof__(((GL10*) nullptr)->glEnable)) java_method_of(this, "glEnable"))(this, cap);
}

static inline void GL10_glEnableClientState(void* this, int32_t array) {
    ((__typeof__(((GL10*) nullptr)->glEnableClientState)) java_method_of(this, "glEnableClientState"))(this, array);
}

static inline void GL10_glFinish(void* this) {
    ((__typeof__(((GL10*) nullptr)->glFinish)) java_method_of(this, "glFinish"))(this);
}

static inline void GL10_glFlush(void* this) {
    ((__typeof__(((GL10*) nullptr)->glFlush)) java_method_of(this, "glFlush"))(this);
}

static inline void GL10_glFogf(void* this, int32_t pname, float param) {
    ((__typeof__(((GL10*) nullptr)->glFogf)) java_method_of(this, "glFogf"))(this, pname, param);
}

static inline void GL10_glFogfv(void* this, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glFogfv)) java_method_of(this, "glFogfv"))(this, pname, params, offset);
}

static inline void GL10_glFrontFace(void* this, int32_t mode) {
    ((__typeof__(((GL10*) nullptr)->glFrontFace)) java_method_of(this, "glFrontFace"))(this, mode);
}

static inline void GL10_glFrustumf(void* this, float left, float right, float bottom, float top, float zNear, float zFar) {
    ((__typeof__(((GL10*) nullptr)->glFrustumf)) java_method_of(this, "glFrustumf"))(this, left, right, bottom, top, zNear, zFar);
}

static inline void GL10_glGenTextures(void* this, int32_t n, int32_t* textures, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glGenTextures)) java_method_of(this, "glGenTextures"))(this, n, textures, offset);
}

static inline int32_t GL10_glGetError(void* this) {
    return ((__typeof__(((GL10*) nullptr)->glGetError)) java_method_of(this, "glGetError"))(this);
}

static inline void GL10_glGetIntegerv(void* this, int32_t pname, int32_t* params, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glGetIntegerv)) java_method_of(this, "glGetIntegerv"))(this, pname, params, offset);
}

static inline const char* GL10_glGetString(void* this, int32_t name) {
    return ((__typeof__(((GL10*) nullptr)->glGetString)) java_method_of(this, "glGetString"))(this, name);
}

static inline void GL10_glHint(void* this, int32_t target, int32_t mode) {
    ((__typeof__(((GL10*) nullptr)->glHint)) java_method_of(this, "glHint"))(this, target, mode);
}

static inline void GL10_glLightModelf(void* this, int32_t pname, float param) {
    ((__typeof__(((GL10*) nullptr)->glLightModelf)) java_method_of(this, "glLightModelf"))(this, pname, param);
}

static inline void GL10_glLightModelfv(void* this, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glLightModelfv)) java_method_of(this, "glLightModelfv"))(this, pname, params, offset);
}

static inline void GL10_glLightf(void* this, int32_t light, int32_t pname, float param) {
    ((__typeof__(((GL10*) nullptr)->glLightf)) java_method_of(this, "glLightf"))(this, light, pname, param);
}

static inline void GL10_glLightfv(void* this, int32_t light, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glLightfv)) java_method_of(this, "glLightfv"))(this, light, pname, params, offset);
}

static inline void GL10_glLineWidth(void* this, float width) {
    ((__typeof__(((GL10*) nullptr)->glLineWidth)) java_method_of(this, "glLineWidth"))(this, width);
}

static inline void GL10_glLoadIdentity(void* this) {
    ((__typeof__(((GL10*) nullptr)->glLoadIdentity)) java_method_of(this, "glLoadIdentity"))(this);
}

static inline void GL10_glLoadMatrixf(void* this, float* m, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glLoadMatrixf)) java_method_of(this, "glLoadMatrixf"))(this, m, offset);
}

static inline void GL10_glLogicOp(void* this, int32_t opcode) {
    ((__typeof__(((GL10*) nullptr)->glLogicOp)) java_method_of(this, "glLogicOp"))(this, opcode);
}

static inline void GL10_glMaterialf(void* this, int32_t face, int32_t pname, float param) {
    ((__typeof__(((GL10*) nullptr)->glMaterialf)) java_method_of(this, "glMaterialf"))(this, face, pname, param);
}

static inline void GL10_glMaterialfv(void* this, int32_t face, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glMaterialfv)) java_method_of(this, "glMaterialfv"))(this, face, pname, params, offset);
}

static inline void GL10_glMatrixMode(void* this, int32_t mode) {
    ((__typeof__(((GL10*) nullptr)->glMatrixMode)) java_method_of(this, "glMatrixMode"))(this, mode);
}

static inline void GL10_glMultMatrixf(void* this, float* m, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glMultMatrixf)) java_method_of(this, "glMultMatrixf"))(this, m, offset);
}

static inline void GL10_glMultiTexCoord4f(void* this, int32_t target, float s, float t, float r, float q) {
    ((__typeof__(((GL10*) nullptr)->glMultiTexCoord4f)) java_method_of(this, "glMultiTexCoord4f"))(this, target, s, t, r, q);
}

static inline void GL10_glNormal3f(void* this, float nx, float ny, float nz) {
    ((__typeof__(((GL10*) nullptr)->glNormal3f)) java_method_of(this, "glNormal3f"))(this, nx, ny, nz);
}

static inline void GL10_glNormalPointer(void* this, int32_t type, int32_t stride, Buffer* pointer) {
    ((__typeof__(((GL10*) nullptr)->glNormalPointer)) java_method_of(this, "glNormalPointer"))(this, type, stride, pointer);
}

static inline void GL10_glOrthof(void* this, float left, float right, float bottom, float top, float zNear, float zFar) {
    ((__typeof__(((GL10*) nullptr)->glOrthof)) java_method_of(this, "glOrthof"))(this, left, right, bottom, top, zNear, zFar);
}

static inline void GL10_glPixelStorei(void* this, int32_t pname, int32_t param) {
    ((__typeof__(((GL10*) nullptr)->glPixelStorei)) java_method_of(this, "glPixelStorei"))(this, pname, param);
}

static inline void GL10_glPointSize(void* this, float size) {
    ((__typeof__(((GL10*) nullptr)->glPointSize)) java_method_of(this, "glPointSize"))(this, size);
}

static inline void GL10_glPolygonOffset(void* this, float factor, float units) {
    ((__typeof__(((GL10*) nullptr)->glPolygonOffset)) java_method_of(this, "glPolygonOffset"))(this, factor, units);
}

static inline void GL10_glPopMatrix(void* this) {
    ((__typeof__(((GL10*) nullptr)->glPopMatrix)) java_method_of(this, "glPopMatrix"))(this);
}

static inline void GL10_glPushMatrix(void* this) {
    ((__typeof__(((GL10*) nullptr)->glPushMatrix)) java_method_of(this, "glPushMatrix"))(this);
}

static inline void GL10_glReadPixels(void* this, int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels) {
    ((__typeof__(((GL10*) nullptr)->glReadPixels)) java_method_of(this, "glReadPixels"))(this, x, y, width, height, format, type, pixels);
}

static inline void GL10_glRotatef(void* this, float angle, float x, float y, float z) {
    ((__typeof__(((GL10*) nullptr)->glRotatef)) java_method_of(this, "glRotatef"))(this, angle, x, y, z);
}

static inline void GL10_glRotatex(void* this, int32_t angle, int32_t x, int32_t y, int32_t z) {
    ((__typeof__(((GL10*) nullptr)->glRotatex)) java_method_of(this, "glRotatex"))(this, angle, x, y, z);
}

static inline void GL10_glSampleCoverage(void* this, float value, bool invert) {
    ((__typeof__(((GL10*) nullptr)->glSampleCoverage)) java_method_of(this, "glSampleCoverage"))(this, value, invert);
}

static inline void GL10_glScalef(void* this, float x, float y, float z) {
    ((__typeof__(((GL10*) nullptr)->glScalef)) java_method_of(this, "glScalef"))(this, x, y, z);
}

static inline void GL10_glScalex(void* this, int32_t x, int32_t y, int32_t z) {
    ((__typeof__(((GL10*) nullptr)->glScalex)) java_method_of(this, "glScalex"))(this, x, y, z);
}

static inline void GL10_glScissor(void* this, int32_t x, int32_t y, int32_t width, int32_t height) {
    ((__typeof__(((GL10*) nullptr)->glScissor)) java_method_of(this, "glScissor"))(this, x, y, width, height);
}

static inline void GL10_glShadeModel(void* this, int32_t mode) {
    ((__typeof__(((GL10*) nullptr)->glShadeModel)) java_method_of(this, "glShadeModel"))(this, mode);
}

static inline void GL10_glStencilFunc(void* this, int32_t func, int32_t ref, int32_t mask) {
    ((__typeof__(((GL10*) nullptr)->glStencilFunc)) java_method_of(this, "glStencilFunc"))(this, func, ref, mask);
}

static inline void GL10_glStencilMask(void* this, int32_t mask) {
    ((__typeof__(((GL10*) nullptr)->glStencilMask)) java_method_of(this, "glStencilMask"))(this, mask);
}

static inline void GL10_glStencilOp(void* this, int32_t fail, int32_t zfail, int32_t zpass) {
    ((__typeof__(((GL10*) nullptr)->glStencilOp)) java_method_of(this, "glStencilOp"))(this, fail, zfail, zpass);
}

static inline void GL10_glTexCoordPointer(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
    ((__typeof__(((GL10*) nullptr)->glTexCoordPointer)) java_method_of(this, "glTexCoordPointer"))(this, size, type, stride, pointer);
}

static inline void GL10_glTexEnvf(void* this, int32_t target, int32_t pname, float param) {
    ((__typeof__(((GL10*) nullptr)->glTexEnvf)) java_method_of(this, "glTexEnvf"))(this, target, pname, param);
}

static inline void GL10_glTexEnvfv(void* this, int32_t target, int32_t pname, float* params, int32_t offset) {
    ((__typeof__(((GL10*) nullptr)->glTexEnvfv)) java_method_of(this, "glTexEnvfv"))(this, target, pname, params, offset);
}

static inline void GL10_glTexImage2D(void* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer* pixels) {
    ((__typeof__(((GL10*) nullptr)->glTexImage2D)) java_method_of(this, "glTexImage2D"))(this, target, level, internalformat, width, height, border, format, type, pixels);
}

static inline void GL10_glTexParameterf(void* this, int32_t target, int32_t pname, float param) {
    ((__typeof__(((GL10*) nullptr)->glTexParameterf)) java_method_of(this, "glTexParameterf"))(this, target, pname, param);
}

static inline void GL10_glTexParameteri(void* this, int32_t target, int32_t pname, int32_t param) {
    ((__typeof__(((GL10*) nullptr)->glTexParameteri)) java_method_of(this, "glTexParameteri"))(this, target, pname, param);
}

static inline void GL10_glTexSubImage2D(void* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels) {
    ((__typeof__(((GL10*) nullptr)->glTexSubImage2D)) java_method_of(this, "glTexSubImage2D"))(this, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

static inline void GL10_glTranslatef(void* this, float x, float y, float z) {
    ((__typeof__(((GL10*) nullptr)->glTranslatef)) java_method_of(this, "glTranslatef"))(this, x, y, z);
}

static inline void GL10_glVertexPointer(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
    ((__typeof__(((GL10*) nullptr)->glVertexPointer)) java_method_of(this, "glVertexPointer"))(this, size, type, stride, pointer);
}

static inline void GL10_glViewport(void* this, int32_t x, int32_t y, int32_t width, int32_t height) {
    ((__typeof__(((GL10*) nullptr)->glViewport)) java_method_of(this, "glViewport"))(this, x, y, width, height);
}

static inline void GL10_glBegin(void* this, int32_t i) {
    ((__typeof__(((GL10*) nullptr)->glBegin)) java_method_of(this, "glBegin"))(this, i);
}

static inline void GL10_glEnd(void* this) {
    ((__typeof__(((GL10*) nullptr)->glEnd)) java_method_of(this, "glEnd"))(this);
}

static inline void GL10_glVertex3f(void* this, float f, float f2, float f3) {
    ((__typeof__(((GL10*) nullptr)->glVertex3f)) java_method_of(this, "glVertex3f"))(this, f, f2, f3);
}

static inline void GL10_glPolygonMode(void* this, int32_t i, int32_t i1) {
    ((__typeof__(((GL10*) nullptr)->glPolygonMode)) java_method_of(this, "glPolygonMode"))(this, i, i1);
}

static inline void GL10_glDeleteTextures4(void* this, int32_t n, int32_t* textures, int32_t offset) {
    ((void (*)(void* this, int32_t n, int32_t* textures, int32_t offset)) java_method_of(this, "glDeleteTextures@4"))(this, n, textures, offset);
}
#define GL10_glDeleteTextures(...) JAVA_OVERLOADED(GL10_glDeleteTextures, __VA_ARGS__)

static inline void GL10_glDeleteTextures3(void* this, int32_t n, IntBuffer* textures) {
    ((void (*)(void* this, int32_t n, IntBuffer* textures)) java_method_of(this, "glDeleteTextures@3"))(this, n, textures);
}

static inline void GL10_glFogfv4(void* this, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glFogfv@4"))(this, pname, params, offset);
}
#define GL10_glFogfv(...) JAVA_OVERLOADED(GL10_glFogfv, __VA_ARGS__)

static inline void GL10_glFogfv3(void* this, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t pname, FloatBuffer* params)) java_method_of(this, "glFogfv@3"))(this, pname, params);
}

static inline void GL10_glGenTextures4(void* this, int32_t n, int32_t* textures, int32_t offset) {
    ((void (*)(void* this, int32_t n, int32_t* textures, int32_t offset)) java_method_of(this, "glGenTextures@4"))(this, n, textures, offset);
}
#define GL10_glGenTextures(...) JAVA_OVERLOADED(GL10_glGenTextures, __VA_ARGS__)

static inline void GL10_glGenTextures3(void* this, int32_t n, IntBuffer* textures) {
    ((void (*)(void* this, int32_t n, IntBuffer* textures)) java_method_of(this, "glGenTextures@3"))(this, n, textures);
}

static inline void GL10_glGetIntegerv4(void* this, int32_t pname, int32_t* params, int32_t offset) {
    ((void (*)(void* this, int32_t pname, int32_t* params, int32_t offset)) java_method_of(this, "glGetIntegerv@4"))(this, pname, params, offset);
}
#define GL10_glGetIntegerv(...) JAVA_OVERLOADED(GL10_glGetIntegerv, __VA_ARGS__)

static inline void GL10_glGetIntegerv3(void* this, int32_t pname, IntBuffer* params) {
    ((void (*)(void* this, int32_t pname, IntBuffer* params)) java_method_of(this, "glGetIntegerv@3"))(this, pname, params);
}

static inline void GL10_glLightModelfv4(void* this, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glLightModelfv@4"))(this, pname, params, offset);
}
#define GL10_glLightModelfv(...) JAVA_OVERLOADED(GL10_glLightModelfv, __VA_ARGS__)

static inline void GL10_glLightModelfv3(void* this, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t pname, FloatBuffer* params)) java_method_of(this, "glLightModelfv@3"))(this, pname, params);
}

static inline void GL10_glLightfv5(void* this, int32_t light, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t light, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glLightfv@5"))(this, light, pname, params, offset);
}
#define GL10_glLightfv(...) JAVA_OVERLOADED(GL10_glLightfv, __VA_ARGS__)

static inline void GL10_glLightfv4(void* this, int32_t light, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t light, int32_t pname, FloatBuffer* params)) java_method_of(this, "glLightfv@4"))(this, light, pname, params);
}

static inline void GL10_glLoadMatrixf3(void* this, float* m, int32_t offset) {
    ((void (*)(void* this, float* m, int32_t offset)) java_method_of(this, "glLoadMatrixf@3"))(this, m, offset);
}
#define GL10_glLoadMatrixf(...) JAVA_OVERLOADED(GL10_glLoadMatrixf, __VA_ARGS__)

static inline void GL10_glLoadMatrixf2(void* this, FloatBuffer* m) {
    ((void (*)(void* this, FloatBuffer* m)) java_method_of(this, "glLoadMatrixf@2"))(this, m);
}

static inline void GL10_glMaterialfv5(void* this, int32_t face, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t face, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glMaterialfv@5"))(this, face, pname, params, offset);
}
#define GL10_glMaterialfv(...) JAVA_OVERLOADED(GL10_glMaterialfv, __VA_ARGS__)

static inline void GL10_glMaterialfv4(void* this, int32_t face, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t face, int32_t pname, FloatBuffer* params)) java_method_of(this, "glMaterialfv@4"))(this, face, pname, params);
}

static inline void GL10_glMultMatrixf3(void* this, float* m, int32_t offset) {
    ((void (*)(void* this, float* m, int32_t offset)) java_method_of(this, "glMultMatrixf@3"))(this, m, offset);
}
#define GL10_glMultMatrixf(...) JAVA_OVERLOADED(GL10_glMultMatrixf, __VA_ARGS__)

static inline void GL10_glMultMatrixf2(void* this, FloatBuffer* m) {
    ((void (*)(void* this, FloatBuffer* m)) java_method_of(this, "glMultMatrixf@2"))(this, m);
}

static inline void GL10_glTexEnvfv5(void* this, int32_t target, int32_t pname, float* params, int32_t offset) {
    ((void (*)(void* this, int32_t target, int32_t pname, float* params, int32_t offset)) java_method_of(this, "glTexEnvfv@5"))(this, target, pname, params, offset);
}
#define GL10_glTexEnvfv(...) JAVA_OVERLOADED(GL10_glTexEnvfv, __VA_ARGS__)

static inline void GL10_glTexEnvfv4(void* this, int32_t target, int32_t pname, FloatBuffer* params) {
    ((void (*)(void* this, int32_t target, int32_t pname, FloatBuffer* params)) java_method_of(this, "glTexEnvfv@4"))(this, target, pname, params);
}


#endif // JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10_H
