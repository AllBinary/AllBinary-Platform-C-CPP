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
// #include "java/nio/ShortBuffer.h"
#include "javax/microedition/khronos/opengles/GL.h"

typedef struct GL11Ext GL11Ext;
struct GL11Ext {
    void (*glTexParameterfv)(void* this, int32_t target, int32_t pname, float* param, int32_t offset);
    void (*glCurrentPaletteMatrixOES)(void* this, int32_t matrixpaletteindex);
    void (*glDrawTexfOES)(void* this, float x, float y, float z, float width, float height);
    void (*glDrawTexfvOES)(void* this, float* coords, int32_t offset);
    void (*glDrawTexfvOES)(void* this, FloatBuffer* coords);
    void (*glDrawTexiOES)(void* this, int32_t x, int32_t y, int32_t z, int32_t width, int32_t height);
    void (*glDrawTexivOES)(void* this, int32_t* coords, int32_t offset);
    void (*glDrawTexivOES)(void* this, IntBuffer* coords);
    void (*glDrawTexsOES)(void* this, int16_t x, int16_t y, int16_t z, int16_t width, int16_t height);
    void (*glDrawTexsvOES)(void* this, int16_t* coords, int32_t offset);
    void (*glDrawTexsvOES)(void* this, ShortBuffer* coords);
    void (*glDrawTexxOES)(void* this, int32_t x, int32_t y, int32_t z, int32_t width, int32_t height);
    void (*glDrawTexxvOES)(void* this, int32_t* coords, int32_t offset);
    void (*glDrawTexxvOES)(void* this, IntBuffer* coords);
    void (*glEnable)(void* this, int32_t cap);
    void (*glEnableClientState)(void* this, int32_t array);
    void (*glLoadPaletteFromModelViewMatrixOES)(void* this);
    void (*glMatrixIndexPointerOES)(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
    void (*glMatrixIndexPointerOES)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
    void (*glWeightPointerOES)(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
    void (*glWeightPointerOES)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
};

constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES = 35742;
constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_OES = 34884;
constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_POINTER_OES = 34889;
constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_SIZE_OES = 34886;
constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_STRIDE_OES = 34888;
constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_TYPE_OES = 34887;
constexpr int32_t GL11Ext_GL_MATRIX_PALETTE_OES = 34880;
constexpr int32_t GL11Ext_GL_MAX_PALETTE_MATRICES_OES = 34882;
constexpr int32_t GL11Ext_GL_MAX_VERTEX_UNITS_OES = 34468;
constexpr int32_t GL11Ext_GL_TEXTURE_CROP_RECT_OES = 35741;
constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_BUFFER_BINDING_OES = 34974;
constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_OES = 34477;
constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_POINTER_OES = 34476;
constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_SIZE_OES = 34475;
constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_STRIDE_OES = 34474;
constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_TYPE_OES = 34473;

