/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *   
 */
// Generated Code Do Not Modify
// package org.allbinary.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/nio/Buffer.h"
// #include "java/nio/ByteBuffer.h"
// #include "java/nio/ByteOrder.h"
// #include "java/nio/FloatBuffer.h"

typedef struct GLUtil GLUtil;
struct GLUtil {
    int32_t BYTES_PER_FLOAT;
    FloatBuffer* NULL_FLOAT_BUFFER;
};

static GLUtil* GLUtil_instance;

GLUtil* GLUtil_new(void);
GLUtil* GLUtil_getInstance(void);
FloatBuffer* GLUtil_makeFloatBuffer3(GLUtil* this, float p_a, float p_b, float p_c);
FloatBuffer* GLUtil_makeFloatBuffer4(GLUtil* this, float p_a, float p_b, float p_c, float p_d);
FloatBuffer* GLUtil_makeFloatBuffer(GLUtil* this, ByteBuffer* byteBuffer);
Buffer* GLUtil_position(GLUtil* this, Buffer* buffer, int32_t newPosition);
void GLUtil_rotateUVs(GLUtil* this, float* uvs, float angleDegrees, float pivotU, float pivotV);

// Static fields with runtime initializers: call this once at startup
void GLUtil_staticInit(void) {
    GLUtil_instance = GLUtil_new();
}

static void GLUtil_initFields(GLUtil* this) {
    this->BYTES_PER_FLOAT = 4;
    this->NULL_FLOAT_BUFFER = JAVA_CALL(ByteBuffer_allocateDirect(0), asFloatBuffer);
}

void GLUtil_init(GLUtil* this) {
    GLUtil_initFields(this);
}

GLUtil* GLUtil_new(void) {
    GLUtil* this = calloc(1, sizeof(GLUtil));
    GLUtil_init(this);
    return this;
}


GLUtil* GLUtil_getInstance(void) {
        return GLUtil_instance;
}


FloatBuffer* GLUtil_makeFloatBuffer3(GLUtil* this, float p_a, float p_b, float p_c) {
        ByteBuffer* b = ByteBuffer_allocateDirect(3 * this->BYTES_PER_FLOAT);
        ByteBuffer_order(b, ByteOrder_nativeOrder());
        FloatBuffer* buffer = ByteBuffer_asFloatBuffer(b);
        FloatBuffer_put(buffer, p_a);
        FloatBuffer_put(buffer, p_b);
        FloatBuffer_put(buffer, p_c);
        GLUtil_position(this, buffer, 0);
        return buffer;
}


FloatBuffer* GLUtil_makeFloatBuffer4(GLUtil* this, float p_a, float p_b, float p_c, float p_d) {
        ByteBuffer* b = ByteBuffer_allocateDirect(4 * this->BYTES_PER_FLOAT);
        ByteBuffer_order(b, ByteOrder_nativeOrder());
        FloatBuffer* buffer = ByteBuffer_asFloatBuffer(b);
        FloatBuffer_put(buffer, p_a);
        FloatBuffer_put(buffer, p_b);
        FloatBuffer_put(buffer, p_c);
        FloatBuffer_put(buffer, p_d);
        GLUtil_position(this, buffer, 0);
        return buffer;
}


FloatBuffer* GLUtil_makeFloatBuffer(GLUtil* this, ByteBuffer* byteBuffer) {
        ByteBuffer* b = ByteBuffer_allocateDirect(ByteBuffer_limit(byteBuffer) * this->BYTES_PER_FLOAT);
        ByteBuffer_order(b, ByteOrder_nativeOrder());
        FloatBuffer* buffer = ByteBuffer_asFloatBuffer(b);
        int32_t unsigned_ = 0;
        float v = 0.0f;
        while (ByteBuffer_hasRemaining(byteBuffer)) {
            unsigned_ = (((int32_t) ByteBuffer_get(byteBuffer))) & 0xFF;
            v = (((float) unsigned_)) / 255.0f;
            FloatBuffer_put(buffer, v);
        }
        GLUtil_position(this, buffer, 0);
        return buffer;
}


Buffer* GLUtil_position(GLUtil* this, Buffer* buffer, int32_t newPosition) {
        return FloatBuffer_position(buffer, newPosition);
}


void GLUtil_rotateUVs(GLUtil* this, float* uvs, float angleDegrees, float pivotU, float pivotV) {
        double angleRad = ((((double) angleDegrees)) * 3.14159265358979323846 / 180.0);
        double cosA = cos(angleRad);
        double sinA = sin(angleRad);
        for (int32_t i = 0; i < java_array_length(uvs); i += 2) {
            float u = uvs[i];
            float v = uvs[i + 1];
            float du = u - pivotU;
            float dv = v - pivotV;
            float ru = ((float) (((double) du) * cosA - ((double) dv) * sinA)) + pivotU;
            float rv = ((float) (((double) du) * sinA + ((double) dv) * cosA)) + pivotV;
            uvs[i] = ru;
            uvs[i + 1] = rv;
        }
}

