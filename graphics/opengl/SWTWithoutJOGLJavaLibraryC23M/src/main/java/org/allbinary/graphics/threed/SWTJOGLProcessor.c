/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.graphics.threed

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/midlet/MIDlet.h"
#include "org/allbinary/graphics/threed/Runnable.h"

//SWTWithoutJOGL
typedef struct SWTJOGLProcessor SWTJOGLProcessor;
struct SWTJOGLProcessor {
    Runnable Runnable_interface;
    GLHolder* glHolder;
};

static SWTJOGLProcessor* SWTJOGLProcessor_instance;

SWTJOGLProcessor* SWTJOGLProcessor_new(void);
SWTJOGLProcessor* SWTJOGLProcessor_getInstance(void);
void SWTJOGLProcessor_init(SWTJOGLProcessor* this, Any* display, Any* comp);
bool SWTJOGLProcessor_isHolderCreated(SWTJOGLProcessor* this);
void SWTJOGLProcessor_setRenderer(SWTJOGLProcessor* this, Any* renderer);
bool SWTJOGLProcessor_isJOGL(SWTJOGLProcessor* this);
void SWTJOGLProcessor_createSurface(SWTJOGLProcessor* this);
void SWTJOGLProcessor_onSurfaceCreated(SWTJOGLProcessor* this);
void SWTJOGLProcessor_onSurfaceChangedForEvent(SWTJOGLProcessor* this, Any* event);
void SWTJOGLProcessor_onSurfaceChanged(SWTJOGLProcessor* this);
void SWTJOGLProcessor_onSurfaceChangedWH(SWTJOGLProcessor* this, int32_t width, int32_t height);
void SWTJOGLProcessor_addListener(SWTJOGLProcessor* this);
void SWTJOGLProcessor_addListeners(SWTJOGLProcessor* this, MIDlet* midlet);
void SWTJOGLProcessor_run(SWTJOGLProcessor* this);
void SWTJOGLProcessor_clear(SWTJOGLProcessor* this);
void SWTJOGLProcessor_setCustom(SWTJOGLProcessor* this, int32_t width, int32_t height, float ratio);
void SWTJOGLProcessor_setRatioProcessor(SWTJOGLProcessor* this, RatioProcessor* ratioProcessor);
int32_t SWTJOGLProcessor_charWidth(SWTJOGLProcessor* this, Font* font, uint16_t ch);
int32_t SWTJOGLProcessor_charsWidth(SWTJOGLProcessor* this, Font* font, uint16_t* ch, int32_t offset, int32_t length);
int32_t SWTJOGLProcessor_stringWidth(SWTJOGLProcessor* this, Font* font, const char* str);
int32_t SWTJOGLProcessor_substringWidth(SWTJOGLProcessor* this, Font* font, const char* str, int32_t offset, int32_t len);

// Static fields with runtime initializers: call this once at startup
void SWTJOGLProcessor_staticInit(void) {
    SWTJOGLProcessor_instance = SWTJOGLProcessor_new();
}

static void SWTJOGLProcessor_initFields(SWTJOGLProcessor* this) {
    this->glHolder = GLHolder_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
        

    void SWTJOGLProcessor_run(SWTJOGLProcessor* this, Any* renderer) {
    }
#endif
;
}

void SWTJOGLProcessor_init(SWTJOGLProcessor* this) {
    SWTJOGLProcessor_initFields(this);
}

SWTJOGLProcessor* SWTJOGLProcessor_new(void) {
    SWTJOGLProcessor* this = calloc(1, sizeof(SWTJOGLProcessor));
    SWTJOGLProcessor_init(this);
    return this;
}


SWTJOGLProcessor* SWTJOGLProcessor_getInstance(void) {
        return SWTJOGLProcessor_instance;
}


void SWTJOGLProcessor_init(SWTJOGLProcessor* this, Any* display, Any* comp) {
}


bool SWTJOGLProcessor_isHolderCreated(SWTJOGLProcessor* this) {
        return this->glHolder->isCreated;
}


void SWTJOGLProcessor_setRenderer(SWTJOGLProcessor* this, Any* renderer) {
}


bool SWTJOGLProcessor_isJOGL(SWTJOGLProcessor* this) {
        return false;
}


void SWTJOGLProcessor_createSurface(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_onSurfaceCreated(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_onSurfaceChangedForEvent(SWTJOGLProcessor* this, Any* event) {
}


void SWTJOGLProcessor_onSurfaceChanged(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_onSurfaceChangedWH(SWTJOGLProcessor* this, int32_t width, int32_t height) {
}


void SWTJOGLProcessor_addListener(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_addListeners(SWTJOGLProcessor* this, MIDlet* midlet) {
}


void SWTJOGLProcessor_run(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_clear(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_setCustom(SWTJOGLProcessor* this, int32_t width, int32_t height, float ratio) {
}


void SWTJOGLProcessor_setRatioProcessor(SWTJOGLProcessor* this, RatioProcessor* ratioProcessor) {
}


int32_t SWTJOGLProcessor_charWidth(SWTJOGLProcessor* this, Font* font, uint16_t ch) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t SWTJOGLProcessor_charsWidth(SWTJOGLProcessor* this, Font* font, uint16_t* ch, int32_t offset, int32_t length) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t SWTJOGLProcessor_stringWidth(SWTJOGLProcessor* this, Font* font, const char* str) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t SWTJOGLProcessor_substringWidth(SWTJOGLProcessor* this, Font* font, const char* str, int32_t offset, int32_t len) {
        java_throw(java_exception_new("RuntimeException", ""));
}

