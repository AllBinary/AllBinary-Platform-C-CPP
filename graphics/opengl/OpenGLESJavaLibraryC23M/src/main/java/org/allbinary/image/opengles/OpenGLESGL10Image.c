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
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/opengles/OpenGLLogUtil.h"
#include "org/allbinary/opengles/GLUtil.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"

typedef struct OpenGLESGL10Image OpenGLESGL10Image;
struct OpenGLESGL10Image {
    OpenGLESImage base;
    FloatBuffer* textureVertexFloatBuffer;
    OpenGLESImageDraw* realOpenGLESImageDraw;
    OpenGLESImageDraw* openGLESImageDraw;
};


OpenGLESGL10Image* OpenGLESGL10Image_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

void OpenGLESGL10Image_init(OpenGLESGL10Image* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);
void OpenGLESGL10Image_initVertices(OpenGLESGL10Image* this);
void OpenGLESGL10Image_set(OpenGLESGL10Image* this, GL* gl);
void OpenGLESGL10Image_drawRegion(OpenGLESGL10Image* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);
void OpenGLESGL10Image_draw(OpenGLESGL10Image* this, GL10* gl, int32_t x, int32_t y, int32_t z);

static void OpenGLESGL10Image_initFields(OpenGLESGL10Image* this) {
    this->textureVertexFloatBuffer = JAVA_CALL(JAVA_CALL(ByteBuffer_allocateDirect(4 * 4 * 2), order, ByteOrder_nativeOrder()), asFloatBuffer);
    this->realOpenGLESImageDraw = OpenGLESImageDraw_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
        this->glUtil = GLUtil_getInstance();
        this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
        this->textureVertexFloatBuffer = this->textureVertexFloatBuffer;
        this->regionTextureRectangleFloatArray = ((float*) java_array_new(sizeof(float), 8));
        this->regionTextureVertexFloatBuffer = JAVA_CALL(JAVA_CALL(ByteBuffer_allocateDirect(4 * 4 * 2), order, ByteOrder_nativeOrder()), asFloatBuffer);
        this->regionRectangleFloatArray = ((float*) java_array_from(sizeof(float), sizeof((float[]){ 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f }) / sizeof(float), (float[]){ 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f }));
        this->regionRectangleVertexFloatBuffer = JAVA_CALL(JAVA_CALL(ByteBuffer_allocateDirect(4 * 4 * 3), order, ByteOrder_nativeOrder()), asFloatBuffer);
        this->openGLESImageProperties = this->openGLESImageProperties;
        

    void OpenGLESGL10Image_drawRegion(OpenGLESGL10Image* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z) {
            int32_t imageWidth = OpenGLESGL10Image_getWidth(this);
            int32_t imageHeight = OpenGLESGL10Image_getHeight(this);
            this->regionRectangleFloatArray[7] = ((float) viewHeight);
            this->regionRectangleFloatArray[1] = this->regionRectangleFloatArray[7] - height;
            this->regionRectangleFloatArray[3] = width;
            this->regionRectangleFloatArray[4] = this->regionRectangleFloatArray[1];
            this->regionRectangleFloatArray[9] = this->regionRectangleFloatArray[3];
            this->regionRectangleFloatArray[10] = this->regionRectangleFloatArray[7];
            this->regionTextureRectangleFloatArray[0] = x_src / imageWidth;
            this->regionTextureRectangleFloatArray[1] = (y_src + height) / imageHeight;
            this->regionTextureRectangleFloatArray[2] = (x_src + width) / imageWidth;
            this->regionTextureRectangleFloatArray[3] = this->regionTextureRectangleFloatArray[1];
            this->regionTextureRectangleFloatArray[4] = this->regionTextureRectangleFloatArray[0];
            this->regionTextureRectangleFloatArray[5] = y_src / imageHeight;
            this->regionTextureRectangleFloatArray[6] = this->regionTextureRectangleFloatArray[2];
            this->regionTextureRectangleFloatArray[7] = this->regionTextureRectangleFloatArray[5];
            float u_center = (this->regionTextureRectangleFloatArray[0] + this->regionTextureRectangleFloatArray[2]) / 2.0f;
            float v_center = (this->regionTextureRectangleFloatArray[5] + this->regionTextureRectangleFloatArray[1]) / 2.0f;
            GLUtil_rotateUVs(this->glUtil, this->regionTextureRectangleFloatArray, ((float) (-this->openGLESImageProperties->angle)), u_center, v_center);
            GL10_glPushMatrix(gl);
            OpenGLESImageProcessor* imageProcessor = this->imageProcessor;
            JAVA_CALL(this->openGLESImageTranslate, translate, gl, this, ((float) x), ((float) (-y)));
            OpenGLESImageProcessor_scale(imageProcessor, gl, this->openGLESImageProperties->scaleX, this->openGLESImageProperties->scaleY);
            OpenGLESImageProcessor_colorMask(imageProcessor, gl, this->openGLESImageProperties->redf, this->openGLESImageProperties->greenf, this->openGLESImageProperties->bluef, this->openGLESImageProperties->alphaf);
            JAVA_CALL(this->openGLESImageTranslate, translate2, gl, this);
            FloatBuffer_put(this->regionRectangleVertexFloatBuffer, this->regionRectangleFloatArray);
            GLUtil_position(this->glUtil, this->regionRectangleVertexFloatBuffer, 0);
            GL10_glVertexPointer(gl, 3, OpenGLESImage_GL10->GL_FLOAT, 0, this->regionRectangleVertexFloatBuffer);
            GL10_glEnableClientState(gl, OpenGLESImage_GL10->GL_VERTEX_ARRAY);
            GL10_glEnable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
            GL10_glBindTexture(gl, OpenGLESImage_GL10->GL_TEXTURE_2D, this->openGLESImageProperties->textureID);
            GL10_glEnableClientState(gl, OpenGLESImage_GL10->GL_TEXTURE_COORD_ARRAY);
            FloatBuffer_put(this->regionTextureVertexFloatBuffer, this->regionTextureRectangleFloatArray);
            GLUtil_position(this->glUtil, this->regionTextureVertexFloatBuffer, 0);
            GL10_glTexCoordPointer(gl, 2, OpenGLESImage_GL10->GL_FLOAT, 0, this->regionTextureVertexFloatBuffer);
            GL10_glDrawArrays(gl, OpenGLESImage_GL10->GL_TRIANGLE_STRIP, 0, 4);
            GL10_glDisableClientState(gl, OpenGLESImage_GL10->GL_VERTEX_ARRAY);
            GL10_glDisableClientState(gl, OpenGLESImage_GL10->GL_TEXTURE_COORD_ARRAY);
            GL10_glDisable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
            GL10_glPopMatrix(gl);
    }
        

    void OpenGLESGL10Image_draw(OpenGLESGL10Image* this, GL10* gl, int32_t x, int32_t y, int32_t z) {
            int32_t width = OpenGLESGL10Image_getWidth(this);
            int32_t height = OpenGLESGL10Image_getHeight(this);
            this->regionRectangleFloatArray[7] = ((float) DisplayInfoSingleton_getLastHeight(this->displayInfoSingleton));
            this->regionRectangleFloatArray[1] = this->regionRectangleFloatArray[7] - height;
            this->regionRectangleFloatArray[3] = ((float) width);
            this->regionRectangleFloatArray[4] = this->regionRectangleFloatArray[1];
            this->regionRectangleFloatArray[9] = this->regionRectangleFloatArray[3];
            this->regionRectangleFloatArray[10] = this->regionRectangleFloatArray[7];
            this->regionTextureRectangleFloatArray[0] = 0.0f;
            this->regionTextureRectangleFloatArray[1] = 1.0f;
            this->regionTextureRectangleFloatArray[2] = 1.0f;
            this->regionTextureRectangleFloatArray[3] = 1.0f;
            this->regionTextureRectangleFloatArray[4] = 0.0f;
            this->regionTextureRectangleFloatArray[5] = 0.0f;
            this->regionTextureRectangleFloatArray[6] = 1.0f;
            this->regionTextureRectangleFloatArray[7] = 0.0f;
            GL10_glPushMatrix(gl);
            JAVA_CALL(this->openGLESImageTranslate, translate, gl, this, ((float) x), ((float) (-y)));
            OpenGLESImageProcessor* imageProcessor = this->imageProcessor;
            OpenGLESImageProcessor_scale(imageProcessor, gl, this->openGLESImageProperties->scaleX, this->openGLESImageProperties->scaleY);
            OpenGLESImageProcessor_colorMask(imageProcessor, gl, this->openGLESImageProperties->redf, this->openGLESImageProperties->greenf, this->openGLESImageProperties->bluef, this->openGLESImageProperties->alphaf);
            JAVA_CALL(this->openGLESImageTranslate, translate2, gl, this);
            FloatBuffer_put(this->regionRectangleVertexFloatBuffer, this->regionRectangleFloatArray);
            GLUtil_position(this->glUtil, this->regionRectangleVertexFloatBuffer, 0);
            GL10_glVertexPointer(gl, 3, OpenGLESImage_GL10->GL_FLOAT, 0, this->regionRectangleVertexFloatBuffer);
            GL10_glEnableClientState(gl, OpenGLESImage_GL10->GL_VERTEX_ARRAY);
            GL10_glEnable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
            GL10_glBindTexture(gl, OpenGLESImage_GL10->GL_TEXTURE_2D, this->openGLESImageProperties->textureID);
            GL10_glEnableClientState(gl, OpenGLESImage_GL10->GL_TEXTURE_COORD_ARRAY);
            GLUtil_rotateUVs(this->glUtil, this->regionTextureRectangleFloatArray, ((float) (-this->openGLESImageProperties->angle)), 0.5f, 0.5f);
            GLUtil_position(this->glUtil, this->textureVertexFloatBuffer, 0);
            FloatBuffer_put(this->textureVertexFloatBuffer, this->regionTextureRectangleFloatArray);
            GLUtil_position(this->glUtil, this->textureVertexFloatBuffer, 0);
            GL10_glTexCoordPointer(gl, 2, OpenGLESImage_GL10->GL_FLOAT, 0, this->textureVertexFloatBuffer);
            GL10_glDrawArrays(gl, OpenGLESImage_GL10->GL_TRIANGLE_STRIP, 0, 4);
            GL10_glDisableClientState(gl, OpenGLESImage_GL10->GL_VERTEX_ARRAY);
            GL10_glDisableClientState(gl, OpenGLESImage_GL10->GL_TEXTURE_COORD_ARRAY);
            GL10_glDisable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
            GL10_glPopMatrix(gl);
    }
#endif
;
    this->openGLESImageDraw = OpenGLESImageDraw_getInstance();
}


void OpenGLESGL10Image_init(OpenGLESGL10Image* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
        OpenGLESImage_init(&this->base, image, bitmapFactory, textureFactory);
        OpenGLESGL10Image_initFields(this);
        OpenGLESGL10Image_initVertices(this);
}

OpenGLESGL10Image* OpenGLESGL10Image_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
    OpenGLESGL10Image* this = calloc(1, sizeof(OpenGLESGL10Image));
    OpenGLESGL10Image_init(this, image, bitmapFactory, textureFactory);
    return this;
}


void OpenGLESGL10Image_initVertices(OpenGLESGL10Image* this) {
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


void OpenGLESGL10Image_set(OpenGLESGL10Image* this, GL* gl) {
        GL10* gl10 = ((GL10*) gl);
        if (OpenGLESImage_initTexture((&this->base), gl10)) {
            PlatformTextureBaseFactory_load(this->textureFactory, gl10, OpenGLESImage_GL10->GL_TEXTURE_2D, 0, this, 0, true);
            GL10_glDisable(gl10, OpenGLESImage_GL10->GL_TEXTURE_2D);
            this->openGLESImageDraw = this->realOpenGLESImageDraw;
            OpenGLLogUtil_logError(OpenGLLogUtil_getInstance(), gl10, this);
        }
}


void OpenGLESGL10Image_drawRegion(OpenGLESGL10Image* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z) {
        OpenGLESImageDraw_drawRegion(this->openGLESImageDraw, gl, viewHeight, x_src, y_src, width, height, x, y, z);
}


void OpenGLESGL10Image_draw(OpenGLESGL10Image* this, GL10* gl, int32_t x, int32_t y, int32_t z) {
        OpenGLESImageDraw_draw(this->openGLESImageDraw, gl, x, y, z);
}

