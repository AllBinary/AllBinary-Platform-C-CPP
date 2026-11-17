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
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/khronos/opengles/GL11.h"
// #include "javax/microedition/khronos/opengles/GL11Ext.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/opengles/OpenGLLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"

//Many devices don't support this even though it is supposed to
typedef struct OpenGLESGL11ExtImage OpenGLESGL11ExtImage;
struct OpenGLESGL11ExtImage {
    OpenGLESImage base;
    LogUtil* logUtil;
    int32_t a;
    int32_t* rectangle;
};


OpenGLESGL11ExtImage* OpenGLESGL11ExtImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

void OpenGLESGL11ExtImage_init(OpenGLESGL11ExtImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);
void OpenGLESGL11ExtImage_onDisplayChangeEvent(OpenGLESGL11ExtImage* this, DisplayChangeEvent* displayChangeEvent);
void OpenGLESGL11ExtImage_set(OpenGLESGL11ExtImage* this, GL* gl);
void OpenGLESGL11ExtImage_draw(OpenGLESGL11ExtImage* this, GL10* gl, int32_t x, int32_t y, int32_t z);

static void OpenGLESGL11ExtImage_initFields(OpenGLESGL11ExtImage* this) {
    this->logUtil = LogUtil_getInstance();
    this->a = 0;
    
}


void OpenGLESGL11ExtImage_init(OpenGLESGL11ExtImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
        OpenGLESImage_init(&this->base, image, bitmapFactory, textureFactory);
        OpenGLESGL11ExtImage_initFields(this);
        OpenGLESGL11ExtImage_onDisplayChangeEvent(this, DisplayInfoSingleton_getInstance()->displayChangeEvent);
        this->rectangle = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 0, OpenGLESGL11ExtImage_getHeight(this), OpenGLESGL11ExtImage_getWidth(this), -OpenGLESGL11ExtImage_getHeight(this) }) / sizeof(int32_t), (int32_t[]){ 0, OpenGLESGL11ExtImage_getHeight(this), OpenGLESGL11ExtImage_getWidth(this), -OpenGLESGL11ExtImage_getHeight(this) }));
}

OpenGLESGL11ExtImage* OpenGLESGL11ExtImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
    OpenGLESGL11ExtImage* this = calloc(1, sizeof(OpenGLESGL11ExtImage));
    OpenGLESGL11ExtImage_init(this, image, bitmapFactory, textureFactory);
    return this;
}


void OpenGLESGL11ExtImage_onDisplayChangeEvent(OpenGLESGL11ExtImage* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "onResize");
            this->a = DisplayInfoSingleton_getLastHeight(DisplayInfoSingleton_getInstance()) - OpenGLESGL11ExtImage_getHeight(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "onResize", e);
        } JAVA_END_TRY;
}


void OpenGLESGL11ExtImage_set(OpenGLESGL11ExtImage* this, GL* gl) {
        OpenGLESGL11ExtImage_onDisplayChangeEvent(this, DisplayInfoSingleton_getInstance()->displayChangeEvent);
        GL11* gl11 = ((GL11*) gl);
        if (OpenGLESImage_initTexture((&this->base), gl11)) {
            PlatformTextureBaseFactory_load(this->textureFactory, gl11, OpenGLESImage_GL10->GL_TEXTURE_2D, 0, this, 0, true);
            GL11_glTexParameteriv(gl11, OpenGLESImage_GL10->GL_TEXTURE_2D, GL11Ext_GL_TEXTURE_CROP_RECT_OES, this->rectangle, 0);
            GL11_glDisable(gl11, OpenGLESImage_GL10->GL_TEXTURE_2D);
            OpenGLLogUtil_logError(OpenGLLogUtil_getInstance(), gl11, this);
        }
}


void OpenGLESGL11ExtImage_draw(OpenGLESGL11ExtImage* this, GL10* gl, int32_t x, int32_t y, int32_t z) {
        GL_glEnable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
        GL_glBindTexture(gl, OpenGLESImage_GL10->GL_TEXTURE_2D, this->openGLESImageProperties->textureID);
        GL11Ext* gl11Ext = ((GL11Ext*) gl);
        GL11Ext_glDrawTexfOES(gl11Ext, ((float) x), ((float) (this->a - y)), ((float) z), ((float) OpenGLESGL11ExtImage_getWidth(this)), ((float) OpenGLESGL11ExtImage_getHeight(this)));
        GL_glDisable(gl, OpenGLESImage_GL10->GL_TEXTURE_2D);
}

