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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"

typedef struct OpenGLESStrings OpenGLESStrings;
struct OpenGLESStrings {
    char unused;
};


OpenGLESStrings* OpenGLESStrings_new(void);
void OpenGLESStrings_set(OpenGLESStrings* this, GL10* gl);
void OpenGLESStrings_initFont(OpenGLESStrings* this, GL10* gl, int32_t width, int32_t height);
void OpenGLESStrings_update(OpenGLESStrings* this, GL10* gl, int32_t width, int32_t height);
void OpenGLESStrings_drawChar(OpenGLESStrings* this, GL10* gl, Graphics* graphics, uint16_t character, int32_t x, int32_t y, int32_t anchor);
void OpenGLESStrings_drawChars(OpenGLESStrings* this, GL10* gl, Graphics* graphics, uint16_t* data, int32_t offset, int32_t length, int32_t x, int32_t y, int32_t anchor);
void OpenGLESStrings_drawString(OpenGLESStrings* this, GL10* gl, Graphics* graphics, const char* string, int32_t x, int32_t y, int32_t anchor);
void OpenGLESStrings_drawSubstring(OpenGLESStrings* this, GL10* gl, Graphics* graphics, const char* string, int32_t offset, int32_t len, int32_t x, int32_t y, int32_t anchor);
int32_t OpenGLESStrings_charWidth(OpenGLESStrings* this, uint16_t ch);
int32_t OpenGLESStrings_charsWidth(OpenGLESStrings* this, uint16_t* ch, int32_t offset, int32_t length);
int32_t OpenGLESStrings_stringWidth(OpenGLESStrings* this, const char* string);
int32_t OpenGLESStrings_stringWidth(OpenGLESStrings* this, const char* string, int32_t offset, int32_t len);

void OpenGLESStrings_init(OpenGLESStrings* this) {
}

OpenGLESStrings* OpenGLESStrings_new(void) {
    OpenGLESStrings* this = calloc(1, sizeof(OpenGLESStrings));
    OpenGLESStrings_init(this);
    return this;
}


// throws Exception
void OpenGLESStrings_set(OpenGLESStrings* this, GL10* gl) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void OpenGLESStrings_initFont(OpenGLESStrings* this, GL10* gl, int32_t width, int32_t height) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void OpenGLESStrings_update(OpenGLESStrings* this, GL10* gl, int32_t width, int32_t height) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void OpenGLESStrings_drawChar(OpenGLESStrings* this, GL10* gl, Graphics* graphics, uint16_t character, int32_t x, int32_t y, int32_t anchor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void OpenGLESStrings_drawChars(OpenGLESStrings* this, GL10* gl, Graphics* graphics, uint16_t* data, int32_t offset, int32_t length, int32_t x, int32_t y, int32_t anchor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void OpenGLESStrings_drawString(OpenGLESStrings* this, GL10* gl, Graphics* graphics, const char* string, int32_t x, int32_t y, int32_t anchor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void OpenGLESStrings_drawSubstring(OpenGLESStrings* this, GL10* gl, Graphics* graphics, const char* string, int32_t offset, int32_t len, int32_t x, int32_t y, int32_t anchor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t OpenGLESStrings_charWidth(OpenGLESStrings* this, uint16_t ch) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t OpenGLESStrings_charsWidth(OpenGLESStrings* this, uint16_t* ch, int32_t offset, int32_t length) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t OpenGLESStrings_stringWidth(OpenGLESStrings* this, const char* string) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// Java overloaded method: C needs a different name
int32_t OpenGLESStrings_stringWidth(OpenGLESStrings* this, const char* string, int32_t offset, int32_t len) {
        java_throw(java_exception_new("RuntimeException", ""));
}

