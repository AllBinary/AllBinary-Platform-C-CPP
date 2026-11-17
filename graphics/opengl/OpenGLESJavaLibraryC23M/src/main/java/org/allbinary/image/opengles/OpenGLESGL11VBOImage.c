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
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/nio/ByteBuffer.h"
// #include "java/nio/ByteOrder.h"
// #include "java/nio/FloatBuffer.h"
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/opengles/OpenGLLogUtil.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/opengles/GLUtil.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"

//This is not actually VBO impl
typedef struct OpenGLESGL11VBOImage OpenGLESGL11VBOImage;
struct OpenGLESGL11VBOImage {
    OpenGLESImage base;
    GLUtil* glUtil;
    FloatBuffer* textureVertexFloatBuffer;
    float* regionRectangleFloatArray;
    FloatBuffer* regionRectangleVertexFloatBuffer;
    float* regionTextureRectangleFloatArray;
    FloatBuffer* regionTextureVertexFloatBuffer;
};


OpenGLESGL11VBOImage* OpenGLESGL11VBOImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

void OpenGLESGL11VBOImage_init(OpenGLESGL11VBOImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);
void OpenGLESGL11VBOImage_initVertices(OpenGLESGL11VBOImage* this);
void OpenGLESGL11VBOImage_set(OpenGLESGL11VBOImage* this, GL* gl);
void OpenGLESGL11VBOImage_drawRegion(OpenGLESGL11VBOImage* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);
void OpenGLESGL11VBOImage_draw(OpenGLESGL11VBOImage* this, GL10* gl, int32_t x, int32_t y, int32_t z);

static void OpenGLESGL11VBOImage_initFields(OpenGLESGL11VBOImage* this) {
    this->glUtil = GLUtil_getInstance();
    this->textureVertexFloatBuffer = JAVA_CALL(JAVA_CALL(ByteBuffer_allocateDirect(4 * 4 * 2), order, ByteOrder_nativeOrder()), asFloatBuffer);
    this->regionRectangleFloatArray = ((float*) java_array_from(sizeof(float), sizeof((float[]){ 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f }) / sizeof(float), (float[]){ 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f }));
    this->regionRectangleVertexFloatBuffer = JAVA_CALL(JAVA_CALL(ByteBuffer_allocateDirect(4 * 4 * 3), order, ByteOrder_nativeOrder()), asFloatBuffer);
    this->regionTextureRectangleFloatArray = ((float*) java_array_new(sizeof(float), 8));
    this->regionTextureVertexFloatBuffer = JAVA_CALL(JAVA_CALL(ByteBuffer_allocateDirect(4 * 4 * 2), order, ByteOrder_nativeOrder()), asFloatBuffer);
}


void OpenGLESGL11VBOImage_init(OpenGLESGL11VBOImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
        OpenGLESImage_init(&this->base, image, bitmapFactory, textureFactory);
        OpenGLESGL11VBOImage_initFields(this);
        OpenGLESGL11VBOImage_initVertices(this);
        FloatBuffer_put(this->regionRectangleVertexFloatBuffer, FloatBuffer_wrap(this->regionRectangleFloatArray));
        FloatBuffer_put(this->regionTextureVertexFloatBuffer, FloatBuffer_wrap(this->regionTextureRectangleFloatArray));
}

OpenGLESGL11VBOImage* OpenGLESGL11VBOImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
    OpenGLESGL11VBOImage* this = calloc(1, sizeof(OpenGLESGL11VBOImage));
    OpenGLESGL11VBOImage_init(this, image, bitmapFactory, textureFactory);
    return this;
}


void OpenGLESGL11VBOImage_initVertices(OpenGLESGL11VBOImage* this) {
        FloatBuffer_put(this->textureVertexFloatBuffer, 0.0f);
        FloatBuffer_put(this->textureVertexFloatBuffer, 1.0f);
        FloatBuffer_put(this->textureVertexFloatBuffer, 1.0f);
        FloatBuffer_put(this->textureVertexFloatBuffer, 1.0f);
        FloatBuffer_put(this->textureVertexFloatBuffer, 0.0f);
        FloatBuffer_put(this->textureVertexFloatBuffer, 0.0f);
        FloatBuffer_put(this->textureVertexFloatBuffer, 1.0f);
        FloatBuffer_put(this->textureVertexFloatBuffer, 0.0f);
        FloatBuffer_rewind(this->textureVertexFloatBuffer);
}


void OpenGLESGL11VBOImage_set(OpenGLESGL11VBOImage* this, GL* gl) {
        GL10* gl10 = ((GL10*) gl);
        if (OpenGLESImage_initTexture((&this->base), gl10)) {
            PlatformTextureBaseFactory_load(this->textureFactory, gl10, OpenGLESImage_GL10->GL_TEXTURE_2D, 0, this, 0, true);
            GL10_glDisable(gl10, OpenGLESImage_GL10->GL_TEXTURE_2D);
            OpenGLLogUtil_logError(OpenGLLogUtil_getInstance(), gl10, this);
        }
}


void OpenGLESGL11VBOImage_drawRegion(OpenGLESGL11VBOImage* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z) {
        this->regionRectangleFloatArray[0] = ((float) x);
        this->regionRectangleFloatArray[7] = ((float) (viewHeight - y));
        this->regionRectangleFloatArray[1] = this->regionRectangleFloatArray[7] - height;
        this->regionRectangleFloatArray[3] = ((float) x) + width;
        this->regionRectangleFloatArray[4] = this->regionRectangleFloatArray[1];
        this->regionRectangleFloatArray[6] = ((float) x);
        this->regionRectangleFloatArray[9] = this->regionRectangleFloatArray[3];
        this->regionRectangleFloatArray[10] = this->regionRectangleFloatArray[7];
        this->regionTextureRectangleFloatArray[0] = x_src / OpenGLESGL11VBOImage_getWidth(this);
        this->regionTextureRectangleFloatArray[1] = (y_src + height) / OpenGLESGL11VBOImage_getHeight(this);
        this->regionTextureRectangleFloatArray[2] = (x_src + width) / OpenGLESGL11VBOImage_getWidth(this);
        this->regionTextureRectangleFloatArray[3] = this->regionTextureRectangleFloatArray[1];
        this->regionTextureRectangleFloatArray[4] = this->regionTextureRectangleFloatArray[0];
        this->regionTextureRectangleFloatArray[5] = y_src / OpenGLESGL11VBOImage_getHeight(this);
        this->regionTextureRectangleFloatArray[6] = this->regionTextureRectangleFloatArray[2];
        this->regionTextureRectangleFloatArray[7] = this->regionTextureRectangleFloatArray[5];
        GLUtil_position(this->glUtil, this->regionRectangleVertexFloatBuffer, 0);
        GL_glVertexPointer(gl, 3, OpenGLESImage_GL10->GL_FLOAT, 0, this->regionRectangleVertexFloatBuffer);
        GL_glEnableClientState(gl, OpenGLESImage_GL10->GL_VERTEX_ARRAY);
        GL_glEnable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
        GL_glBindTexture(gl, OpenGLESImage_GL10->GL_TEXTURE_2D, this->openGLESImageProperties->textureID);
        GL_glEnableClientState(gl, OpenGLESImage_GL10->GL_TEXTURE_COORD_ARRAY);
        GLUtil_position(this->glUtil, this->regionTextureVertexFloatBuffer, 0);
        GL_glTexCoordPointer(gl, 2, OpenGLESImage_GL10->GL_FLOAT, 0, this->regionTextureVertexFloatBuffer);
        GL_glDrawArrays(gl, OpenGLESImage_GL10->GL_TRIANGLE_STRIP, 0, 4);
        GL_glDisableClientState(gl, OpenGLESImage_GL10->GL_VERTEX_ARRAY);
        GL_glDisableClientState(gl, OpenGLESImage_GL10->GL_TEXTURE_COORD_ARRAY);
        GL_glDisable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
}


void OpenGLESGL11VBOImage_draw(OpenGLESGL11VBOImage* this, GL10* gl, int32_t x, int32_t y, int32_t z) {
        this->regionRectangleFloatArray[0] = ((float) x);
        this->regionRectangleFloatArray[7] = ((float) (DisplayInfoSingleton_getLastHeight(DisplayInfoSingleton_getInstance()) - y));
        this->regionRectangleFloatArray[1] = this->regionRectangleFloatArray[7] - OpenGLESGL11VBOImage_getHeight(this);
        this->regionRectangleFloatArray[3] = ((float) (x + OpenGLESGL11VBOImage_getWidth(this)));
        this->regionRectangleFloatArray[4] = this->regionRectangleFloatArray[1];
        this->regionRectangleFloatArray[6] = ((float) x);
        this->regionRectangleFloatArray[9] = this->regionRectangleFloatArray[3];
        this->regionRectangleFloatArray[10] = this->regionRectangleFloatArray[7];
        GLUtil_position(this->glUtil, this->regionRectangleVertexFloatBuffer, 0);
        GL_glVertexPointer(gl, 3, OpenGLESImage_GL10->GL_FLOAT, 0, this->regionRectangleVertexFloatBuffer);
        GL_glEnableClientState(gl, OpenGLESImage_GL10->GL_VERTEX_ARRAY);
        GL_glEnable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
        GL_glBindTexture(gl, OpenGLESImage_GL10->GL_TEXTURE_2D, this->openGLESImageProperties->textureID);
        GL_glEnableClientState(gl, OpenGLESImage_GL10->GL_TEXTURE_COORD_ARRAY);
        GLUtil_position(this->glUtil, this->textureVertexFloatBuffer, 0);
        GL_glTexCoordPointer(gl, 2, OpenGLESImage_GL10->GL_FLOAT, 0, this->textureVertexFloatBuffer);
        GL_glDrawArrays(gl, OpenGLESImage_GL10->GL_TRIANGLE_STRIP, 0, 4);
        GL_glDisableClientState(gl, OpenGLESImage_GL10->GL_VERTEX_ARRAY);
        GL_glDisableClientState(gl, OpenGLESImage_GL10->GL_TEXTURE_COORD_ARRAY);
        GL_glDisable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
}

