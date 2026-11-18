#ifndef JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H
#define JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H
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
#include "java/nio/ShortBuffer.h"
#include "javax/microedition/khronos/opengles/GL.h"

typedef struct GL11Ext GL11Ext;
struct GL11Ext {
    void (*glTexParameterfv)(void* this, int32_t target, int32_t pname, float* param, int32_t offset);
    void (*glCurrentPaletteMatrixOES)(void* this, int32_t matrixpaletteindex);
    void (*glDrawTexfOES)(void* this, float x, float y, float z, float width, float height);
    void (*glDrawTexfvOES)(void* this, float* coords, int32_t offset);
    void (*glDrawTexiOES)(void* this, int32_t x, int32_t y, int32_t z, int32_t width, int32_t height);
    void (*glDrawTexivOES)(void* this, int32_t* coords, int32_t offset);
    void (*glDrawTexsOES)(void* this, int16_t x, int16_t y, int16_t z, int16_t width, int16_t height);
    void (*glDrawTexsvOES)(void* this, int16_t* coords, int32_t offset);
    void (*glDrawTexxOES)(void* this, int32_t x, int32_t y, int32_t z, int32_t width, int32_t height);
    void (*glDrawTexxvOES)(void* this, int32_t* coords, int32_t offset);
    void (*glEnable)(void* this, int32_t cap);
    void (*glEnableClientState)(void* this, int32_t array);
    void (*glLoadPaletteFromModelViewMatrixOES)(void* this);
    void (*glMatrixIndexPointerOES)(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
    void (*glWeightPointerOES)(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
};

static constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES = 35742;
static constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_OES = 34884;
static constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_POINTER_OES = 34889;
static constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_SIZE_OES = 34886;
static constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_STRIDE_OES = 34888;
static constexpr int32_t GL11Ext_GL_MATRIX_INDEX_ARRAY_TYPE_OES = 34887;
static constexpr int32_t GL11Ext_GL_MATRIX_PALETTE_OES = 34880;
static constexpr int32_t GL11Ext_GL_MAX_PALETTE_MATRICES_OES = 34882;
static constexpr int32_t GL11Ext_GL_MAX_VERTEX_UNITS_OES = 34468;
static constexpr int32_t GL11Ext_GL_TEXTURE_CROP_RECT_OES = 35741;
static constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_BUFFER_BINDING_OES = 34974;
static constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_OES = 34477;
static constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_POINTER_OES = 34476;
static constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_SIZE_OES = 34475;
static constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_STRIDE_OES = 34474;
static constexpr int32_t GL11Ext_GL_WEIGHT_ARRAY_TYPE_OES = 34473;
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GL11Ext_staticInit(void);

static inline void GL11Ext_glTexParameterfv(void* this, int32_t target, int32_t pname, float* param, int32_t offset) {
    ((__typeof__(((GL11Ext*) nullptr)->glTexParameterfv)) java_method_of(this, "glTexParameterfv"))(this, target, pname, param, offset);
}

static inline void GL11Ext_glCurrentPaletteMatrixOES(void* this, int32_t matrixpaletteindex) {
    ((__typeof__(((GL11Ext*) nullptr)->glCurrentPaletteMatrixOES)) java_method_of(this, "glCurrentPaletteMatrixOES"))(this, matrixpaletteindex);
}

static inline void GL11Ext_glDrawTexfOES(void* this, float x, float y, float z, float width, float height) {
    ((__typeof__(((GL11Ext*) nullptr)->glDrawTexfOES)) java_method_of(this, "glDrawTexfOES"))(this, x, y, z, width, height);
}

static inline void GL11Ext_glDrawTexfvOES(void* this, float* coords, int32_t offset) {
    ((__typeof__(((GL11Ext*) nullptr)->glDrawTexfvOES)) java_method_of(this, "glDrawTexfvOES"))(this, coords, offset);
}

static inline void GL11Ext_glDrawTexiOES(void* this, int32_t x, int32_t y, int32_t z, int32_t width, int32_t height) {
    ((__typeof__(((GL11Ext*) nullptr)->glDrawTexiOES)) java_method_of(this, "glDrawTexiOES"))(this, x, y, z, width, height);
}

static inline void GL11Ext_glDrawTexivOES(void* this, int32_t* coords, int32_t offset) {
    ((__typeof__(((GL11Ext*) nullptr)->glDrawTexivOES)) java_method_of(this, "glDrawTexivOES"))(this, coords, offset);
}

static inline void GL11Ext_glDrawTexsOES(void* this, int16_t x, int16_t y, int16_t z, int16_t width, int16_t height) {
    ((__typeof__(((GL11Ext*) nullptr)->glDrawTexsOES)) java_method_of(this, "glDrawTexsOES"))(this, x, y, z, width, height);
}

static inline void GL11Ext_glDrawTexsvOES(void* this, int16_t* coords, int32_t offset) {
    ((__typeof__(((GL11Ext*) nullptr)->glDrawTexsvOES)) java_method_of(this, "glDrawTexsvOES"))(this, coords, offset);
}

static inline void GL11Ext_glDrawTexxOES(void* this, int32_t x, int32_t y, int32_t z, int32_t width, int32_t height) {
    ((__typeof__(((GL11Ext*) nullptr)->glDrawTexxOES)) java_method_of(this, "glDrawTexxOES"))(this, x, y, z, width, height);
}

static inline void GL11Ext_glDrawTexxvOES(void* this, int32_t* coords, int32_t offset) {
    ((__typeof__(((GL11Ext*) nullptr)->glDrawTexxvOES)) java_method_of(this, "glDrawTexxvOES"))(this, coords, offset);
}

static inline void GL11Ext_glEnable(void* this, int32_t cap) {
    ((__typeof__(((GL11Ext*) nullptr)->glEnable)) java_method_of(this, "glEnable"))(this, cap);
}

static inline void GL11Ext_glEnableClientState(void* this, int32_t array) {
    ((__typeof__(((GL11Ext*) nullptr)->glEnableClientState)) java_method_of(this, "glEnableClientState"))(this, array);
}

static inline void GL11Ext_glLoadPaletteFromModelViewMatrixOES(void* this) {
    ((__typeof__(((GL11Ext*) nullptr)->glLoadPaletteFromModelViewMatrixOES)) java_method_of(this, "glLoadPaletteFromModelViewMatrixOES"))(this);
}

static inline void GL11Ext_glMatrixIndexPointerOES(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
    ((__typeof__(((GL11Ext*) nullptr)->glMatrixIndexPointerOES)) java_method_of(this, "glMatrixIndexPointerOES"))(this, size, type, stride, pointer);
}

static inline void GL11Ext_glWeightPointerOES(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
    ((__typeof__(((GL11Ext*) nullptr)->glWeightPointerOES)) java_method_of(this, "glWeightPointerOES"))(this, size, type, stride, pointer);
}

static inline void GL11Ext_glDrawTexfvOES3(void* this, float* coords, int32_t offset) {
    ((void (*)(void* this, float* coords, int32_t offset)) java_method_of(this, "glDrawTexfvOES@3"))(this, coords, offset);
}
#define GL11Ext_glDrawTexfvOES(...) JAVA_OVERLOADED(GL11Ext_glDrawTexfvOES, __VA_ARGS__)

static inline void GL11Ext_glDrawTexfvOES2(void* this, FloatBuffer* coords) {
    ((void (*)(void* this, FloatBuffer* coords)) java_method_of(this, "glDrawTexfvOES@2"))(this, coords);
}

static inline void GL11Ext_glDrawTexivOES3(void* this, int32_t* coords, int32_t offset) {
    ((void (*)(void* this, int32_t* coords, int32_t offset)) java_method_of(this, "glDrawTexivOES@3"))(this, coords, offset);
}
#define GL11Ext_glDrawTexivOES(...) JAVA_OVERLOADED(GL11Ext_glDrawTexivOES, __VA_ARGS__)

static inline void GL11Ext_glDrawTexivOES2(void* this, IntBuffer* coords) {
    ((void (*)(void* this, IntBuffer* coords)) java_method_of(this, "glDrawTexivOES@2"))(this, coords);
}

static inline void GL11Ext_glDrawTexsvOES3(void* this, int16_t* coords, int32_t offset) {
    ((void (*)(void* this, int16_t* coords, int32_t offset)) java_method_of(this, "glDrawTexsvOES@3"))(this, coords, offset);
}
#define GL11Ext_glDrawTexsvOES(...) JAVA_OVERLOADED(GL11Ext_glDrawTexsvOES, __VA_ARGS__)

static inline void GL11Ext_glDrawTexsvOES2(void* this, ShortBuffer* coords) {
    ((void (*)(void* this, ShortBuffer* coords)) java_method_of(this, "glDrawTexsvOES@2"))(this, coords);
}

static inline void GL11Ext_glDrawTexxvOES3(void* this, int32_t* coords, int32_t offset) {
    ((void (*)(void* this, int32_t* coords, int32_t offset)) java_method_of(this, "glDrawTexxvOES@3"))(this, coords, offset);
}
#define GL11Ext_glDrawTexxvOES(...) JAVA_OVERLOADED(GL11Ext_glDrawTexxvOES, __VA_ARGS__)

static inline void GL11Ext_glDrawTexxvOES2(void* this, IntBuffer* coords) {
    ((void (*)(void* this, IntBuffer* coords)) java_method_of(this, "glDrawTexxvOES@2"))(this, coords);
}

static inline void GL11Ext_glMatrixIndexPointerOES5_1(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
    ((void (*)(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer)) java_method_of(this, "glMatrixIndexPointerOES@5_1"))(this, size, type, stride, pointer);
}
#define GL11Ext_glMatrixIndexPointerOES(...) JAVA_OVERLOADED(GL11Ext_glMatrixIndexPointerOES, __VA_ARGS__)
#define GL11Ext_glMatrixIndexPointerOES5(a1, a2, a3, a4, a5) _Generic((a5), Buffer*: GL11Ext_glMatrixIndexPointerOES5_1, default: GL11Ext_glMatrixIndexPointerOES5_2)(a1, a2, a3, a4, a5)

static inline void GL11Ext_glMatrixIndexPointerOES5_2(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset) {
    ((void (*)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset)) java_method_of(this, "glMatrixIndexPointerOES@5_2"))(this, size, type, stride, offset);
}

static inline void GL11Ext_glWeightPointerOES5_1(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
    ((void (*)(void* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer)) java_method_of(this, "glWeightPointerOES@5_1"))(this, size, type, stride, pointer);
}
#define GL11Ext_glWeightPointerOES(...) JAVA_OVERLOADED(GL11Ext_glWeightPointerOES, __VA_ARGS__)
#define GL11Ext_glWeightPointerOES5(a1, a2, a3, a4, a5) _Generic((a5), Buffer*: GL11Ext_glWeightPointerOES5_1, default: GL11Ext_glWeightPointerOES5_2)(a1, a2, a3, a4, a5)

static inline void GL11Ext_glWeightPointerOES5_2(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset) {
    ((void (*)(void* this, int32_t size, int32_t type, int32_t stride, int32_t offset)) java_method_of(this, "glWeightPointerOES@5_2"))(this, size, type, stride, offset);
}


#endif // JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_H
