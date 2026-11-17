/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "java/nio/Buffer.h"
// #include "java/nio/FloatBuffer.h"
// #include "java/nio/IntBuffer.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct NullGL10 NullGL10;
struct NullGL10 {
    GL10 GL10_interface;
};

NullGL10* NullGL10_NULL_GL10;

NullGL10* NullGL10_new(void);
void NullGL10_glActiveTexture(NullGL10* this, int32_t texture);
void NullGL10_glAlphaFunc(NullGL10* this, int32_t func, float ref);
void NullGL10_glBindTexture(NullGL10* this, int32_t target, int32_t texture);
void NullGL10_glBlendFunc(NullGL10* this, int32_t sfactor, int32_t dfactor);
void NullGL10_glClear(NullGL10* this, int32_t mask);
void NullGL10_glClearColor(NullGL10* this, float red, float green, float blue, float alpha);
void NullGL10_glClearDepthf(NullGL10* this, float depth);
void NullGL10_glClearStencil(NullGL10* this, int32_t s);
void NullGL10_glClientActiveTexture(NullGL10* this, int32_t texture);
void NullGL10_glColor4f(NullGL10* this, float red, float green, float blue, float alpha);
void NullGL10_glColorMask(NullGL10* this, bool red, bool green, bool blue, bool alpha);
void NullGL10_glColorPointer(NullGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
void NullGL10_glCompressedTexImage2D(NullGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer* data);
void NullGL10_glCompressedTexSubImage2D(NullGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer* data);
void NullGL10_glCopyTexImage2D(NullGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);
void NullGL10_glCopyTexSubImage2D(NullGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);
void NullGL10_glCullFace(NullGL10* this, int32_t mode);
void NullGL10_glDeleteTextures(NullGL10* this, int32_t n, int32_t* textures, int32_t offset);
void NullGL10_glDeleteTextures(NullGL10* this, int32_t n, IntBuffer* textures);
void NullGL10_glDepthFunc(NullGL10* this, int32_t func);
void NullGL10_glDepthMask(NullGL10* this, bool flag);
void NullGL10_glDepthRangef(NullGL10* this, float zNear, float zFar);
void NullGL10_glDisable(NullGL10* this, int32_t cap);
void NullGL10_glDisableClientState(NullGL10* this, int32_t array);
void NullGL10_glDrawArrays(NullGL10* this, int32_t mode, int32_t first, int32_t count);
void NullGL10_glDrawElements(NullGL10* this, int32_t mode, int32_t count, int32_t type, Buffer* indices);
void NullGL10_glEnable(NullGL10* this, int32_t cap);
void NullGL10_glEnableClientState(NullGL10* this, int32_t array);
void NullGL10_glFinish(NullGL10* this);
void NullGL10_glFlush(NullGL10* this);
void NullGL10_glFogf(NullGL10* this, int32_t pname, float param);
void NullGL10_glFogfv(NullGL10* this, int32_t pname, float* params, int32_t offset);
void NullGL10_glFogfv(NullGL10* this, int32_t pname, FloatBuffer* params);
void NullGL10_glFrontFace(NullGL10* this, int32_t mode);
void NullGL10_glFrustumf(NullGL10* this, float left, float right, float bottom, float top, float zNear, float zFar);
void NullGL10_glGenTextures(NullGL10* this, int32_t n, int32_t* textures, int32_t offset);
void NullGL10_glGenTextures(NullGL10* this, int32_t n, IntBuffer* textures);
int32_t NullGL10_glGetError(NullGL10* this);
void NullGL10_glGetIntegerv(NullGL10* this, int32_t pname, int32_t* params, int32_t offset);
void NullGL10_glGetIntegerv(NullGL10* this, int32_t pname, IntBuffer* params);
const char* NullGL10_glGetString(NullGL10* this, int32_t name);
void NullGL10_glHint(NullGL10* this, int32_t target, int32_t mode);
void NullGL10_glLightModelf(NullGL10* this, int32_t pname, float param);
void NullGL10_glLightModelfv(NullGL10* this, int32_t pname, float* params, int32_t offset);
void NullGL10_glLightModelfv(NullGL10* this, int32_t pname, FloatBuffer* params);
void NullGL10_glLightf(NullGL10* this, int32_t light, int32_t pname, float param);
void NullGL10_glLightfv(NullGL10* this, int32_t light, int32_t pname, float* params, int32_t offset);
void NullGL10_glLightfv(NullGL10* this, int32_t light, int32_t pname, FloatBuffer* params);
void NullGL10_glLineWidth(NullGL10* this, float width);
void NullGL10_glLoadIdentity(NullGL10* this);
void NullGL10_glLoadMatrixf(NullGL10* this, float* m, int32_t offset);
void NullGL10_glLoadMatrixf(NullGL10* this, FloatBuffer* m);
void NullGL10_glLogicOp(NullGL10* this, int32_t opcode);
void NullGL10_glMaterialf(NullGL10* this, int32_t face, int32_t pname, float param);
void NullGL10_glMaterialfv(NullGL10* this, int32_t face, int32_t pname, float* params, int32_t offset);
void NullGL10_glMaterialfv(NullGL10* this, int32_t face, int32_t pname, FloatBuffer* params);
void NullGL10_glMatrixMode(NullGL10* this, int32_t mode);
void NullGL10_glMultMatrixf(NullGL10* this, float* m, int32_t offset);
void NullGL10_glMultMatrixf(NullGL10* this, FloatBuffer* m);
void NullGL10_glMultiTexCoord4f(NullGL10* this, int32_t target, float s, float t, float r, float q);
void NullGL10_glNormal3f(NullGL10* this, float nx, float ny, float nz);
void NullGL10_glNormalPointer(NullGL10* this, int32_t type, int32_t stride, Buffer* pointer);
void NullGL10_glOrthof(NullGL10* this, float left, float right, float bottom, float top, float zNear, float zFar);
void NullGL10_glPixelStorei(NullGL10* this, int32_t pname, int32_t param);
void NullGL10_glPointSize(NullGL10* this, float size);
void NullGL10_glPolygonOffset(NullGL10* this, float factor, float units);
void NullGL10_glPopMatrix(NullGL10* this);
void NullGL10_glPushMatrix(NullGL10* this);
void NullGL10_glReadPixels(NullGL10* this, int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels);
void NullGL10_glRotatef(NullGL10* this, float angle, float x, float y, float z);
void NullGL10_glRotatex(NullGL10* this, int32_t angle, int32_t x, int32_t y, int32_t z);
void NullGL10_glSampleCoverage(NullGL10* this, float value, bool invert);
void NullGL10_glScalef(NullGL10* this, float x, float y, float z);
void NullGL10_glScalex(NullGL10* this, int32_t x, int32_t y, int32_t z);
void NullGL10_glScissor(NullGL10* this, int32_t x, int32_t y, int32_t width, int32_t height);
void NullGL10_glShadeModel(NullGL10* this, int32_t mode);
void NullGL10_glStencilFunc(NullGL10* this, int32_t func, int32_t ref, int32_t mask);
void NullGL10_glStencilMask(NullGL10* this, int32_t mask);
void NullGL10_glStencilOp(NullGL10* this, int32_t fail, int32_t zfail, int32_t zpass);
void NullGL10_glTexCoordPointer(NullGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
void NullGL10_glTexEnvf(NullGL10* this, int32_t target, int32_t pname, float param);
void NullGL10_glTexEnvfv(NullGL10* this, int32_t target, int32_t pname, float* params, int32_t offset);
void NullGL10_glTexEnvfv(NullGL10* this, int32_t target, int32_t pname, FloatBuffer* params);
void NullGL10_glTexImage2D(NullGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer* pixels);
void NullGL10_glTexParameterf(NullGL10* this, int32_t target, int32_t pname, float param);
void NullGL10_glTexParameteri(NullGL10* this, int32_t target, int32_t pname, int32_t param);
void NullGL10_glTexSubImage2D(NullGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels);
void NullGL10_glTranslatef(NullGL10* this, float x, float y, float z);
void NullGL10_glVertexPointer(NullGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
void NullGL10_glViewport(NullGL10* this, int32_t x, int32_t y, int32_t width, int32_t height);
void NullGL10_glBegin(NullGL10* this, int32_t i);
void NullGL10_glEnd(NullGL10* this);
void NullGL10_glVertex3f(NullGL10* this, float f, float f2, float f3);
void NullGL10_glPolygonMode(NullGL10* this, int32_t i, int32_t i1);

// Static fields with runtime initializers: call this once at startup
void NullGL10_staticInit(void) {
    NullGL10_NULL_GL10 = NullGL10_new();
}

void NullGL10_init(NullGL10* this) {
}

NullGL10* NullGL10_new(void) {
    NullGL10* this = calloc(1, sizeof(NullGL10));
    NullGL10_init(this);
    return this;
}


void NullGL10_glActiveTexture(NullGL10* this, int32_t texture) {
        return;
}


void NullGL10_glAlphaFunc(NullGL10* this, int32_t func, float ref) {
        return;
}


void NullGL10_glBindTexture(NullGL10* this, int32_t target, int32_t texture) {
        return;
}


void NullGL10_glBlendFunc(NullGL10* this, int32_t sfactor, int32_t dfactor) {
        return;
}


void NullGL10_glClear(NullGL10* this, int32_t mask) {
        return;
}


void NullGL10_glClearColor(NullGL10* this, float red, float green, float blue, float alpha) {
        return;
}


void NullGL10_glClearDepthf(NullGL10* this, float depth) {
        return;
}


void NullGL10_glClearStencil(NullGL10* this, int32_t s) {
        return;
}


void NullGL10_glClientActiveTexture(NullGL10* this, int32_t texture) {
        return;
}


void NullGL10_glColor4f(NullGL10* this, float red, float green, float blue, float alpha) {
        return;
}


void NullGL10_glColorMask(NullGL10* this, bool red, bool green, bool blue, bool alpha) {
        return;
}


void NullGL10_glColorPointer(NullGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
        return;
}


void NullGL10_glCompressedTexImage2D(NullGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer* data) {
        return;
}


void NullGL10_glCompressedTexSubImage2D(NullGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer* data) {
        return;
}


void NullGL10_glCopyTexImage2D(NullGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
        return;
}


void NullGL10_glCopyTexSubImage2D(NullGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
        return;
}


void NullGL10_glCullFace(NullGL10* this, int32_t mode) {
        return;
}


void NullGL10_glDeleteTextures(NullGL10* this, int32_t n, int32_t* textures, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glDeleteTextures(NullGL10* this, int32_t n, IntBuffer* textures) {
        return;
}


void NullGL10_glDepthFunc(NullGL10* this, int32_t func) {
        return;
}


void NullGL10_glDepthMask(NullGL10* this, bool flag) {
        return;
}


void NullGL10_glDepthRangef(NullGL10* this, float zNear, float zFar) {
        return;
}


void NullGL10_glDisable(NullGL10* this, int32_t cap) {
        return;
}


void NullGL10_glDisableClientState(NullGL10* this, int32_t array) {
        return;
}


void NullGL10_glDrawArrays(NullGL10* this, int32_t mode, int32_t first, int32_t count) {
        return;
}


void NullGL10_glDrawElements(NullGL10* this, int32_t mode, int32_t count, int32_t type, Buffer* indices) {
        return;
}


void NullGL10_glEnable(NullGL10* this, int32_t cap) {
        return;
}


void NullGL10_glEnableClientState(NullGL10* this, int32_t array) {
        return;
}


void NullGL10_glFinish(NullGL10* this) {
        return;
}


void NullGL10_glFlush(NullGL10* this) {
        return;
}


void NullGL10_glFogf(NullGL10* this, int32_t pname, float param) {
        return;
}


void NullGL10_glFogfv(NullGL10* this, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glFogfv(NullGL10* this, int32_t pname, FloatBuffer* params) {
        return;
}


void NullGL10_glFrontFace(NullGL10* this, int32_t mode) {
        return;
}


void NullGL10_glFrustumf(NullGL10* this, float left, float right, float bottom, float top, float zNear, float zFar) {
        return;
}


void NullGL10_glGenTextures(NullGL10* this, int32_t n, int32_t* textures, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glGenTextures(NullGL10* this, int32_t n, IntBuffer* textures) {
        return;
}


int32_t NullGL10_glGetError(NullGL10* this) {
        return 0;
}


void NullGL10_glGetIntegerv(NullGL10* this, int32_t pname, int32_t* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glGetIntegerv(NullGL10* this, int32_t pname, IntBuffer* params) {
        return;
}


const char* NullGL10_glGetString(NullGL10* this, int32_t name) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


void NullGL10_glHint(NullGL10* this, int32_t target, int32_t mode) {
        return;
}


void NullGL10_glLightModelf(NullGL10* this, int32_t pname, float param) {
        return;
}


void NullGL10_glLightModelfv(NullGL10* this, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glLightModelfv(NullGL10* this, int32_t pname, FloatBuffer* params) {
        return;
}


void NullGL10_glLightf(NullGL10* this, int32_t light, int32_t pname, float param) {
        return;
}


void NullGL10_glLightfv(NullGL10* this, int32_t light, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glLightfv(NullGL10* this, int32_t light, int32_t pname, FloatBuffer* params) {
        return;
}


void NullGL10_glLineWidth(NullGL10* this, float width) {
        return;
}


void NullGL10_glLoadIdentity(NullGL10* this) {
        return;
}


void NullGL10_glLoadMatrixf(NullGL10* this, float* m, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glLoadMatrixf(NullGL10* this, FloatBuffer* m) {
        return;
}


void NullGL10_glLogicOp(NullGL10* this, int32_t opcode) {
        return;
}


void NullGL10_glMaterialf(NullGL10* this, int32_t face, int32_t pname, float param) {
        return;
}


void NullGL10_glMaterialfv(NullGL10* this, int32_t face, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glMaterialfv(NullGL10* this, int32_t face, int32_t pname, FloatBuffer* params) {
        return;
}


void NullGL10_glMatrixMode(NullGL10* this, int32_t mode) {
        return;
}


void NullGL10_glMultMatrixf(NullGL10* this, float* m, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glMultMatrixf(NullGL10* this, FloatBuffer* m) {
        return;
}


void NullGL10_glMultiTexCoord4f(NullGL10* this, int32_t target, float s, float t, float r, float q) {
        return;
}


void NullGL10_glNormal3f(NullGL10* this, float nx, float ny, float nz) {
        return;
}


void NullGL10_glNormalPointer(NullGL10* this, int32_t type, int32_t stride, Buffer* pointer) {
        return;
}


void NullGL10_glOrthof(NullGL10* this, float left, float right, float bottom, float top, float zNear, float zFar) {
        return;
}


void NullGL10_glPixelStorei(NullGL10* this, int32_t pname, int32_t param) {
        return;
}


void NullGL10_glPointSize(NullGL10* this, float size) {
        return;
}


void NullGL10_glPolygonOffset(NullGL10* this, float factor, float units) {
        return;
}


void NullGL10_glPopMatrix(NullGL10* this) {
        return;
}


void NullGL10_glPushMatrix(NullGL10* this) {
        return;
}


void NullGL10_glReadPixels(NullGL10* this, int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels) {
        return;
}


void NullGL10_glRotatef(NullGL10* this, float angle, float x, float y, float z) {
        return;
}


void NullGL10_glRotatex(NullGL10* this, int32_t angle, int32_t x, int32_t y, int32_t z) {
        return;
}


void NullGL10_glSampleCoverage(NullGL10* this, float value, bool invert) {
        return;
}


void NullGL10_glScalef(NullGL10* this, float x, float y, float z) {
        return;
}


void NullGL10_glScalex(NullGL10* this, int32_t x, int32_t y, int32_t z) {
        return;
}


void NullGL10_glScissor(NullGL10* this, int32_t x, int32_t y, int32_t width, int32_t height) {
        return;
}


void NullGL10_glShadeModel(NullGL10* this, int32_t mode) {
        return;
}


void NullGL10_glStencilFunc(NullGL10* this, int32_t func, int32_t ref, int32_t mask) {
        return;
}


void NullGL10_glStencilMask(NullGL10* this, int32_t mask) {
        return;
}


void NullGL10_glStencilOp(NullGL10* this, int32_t fail, int32_t zfail, int32_t zpass) {
        return;
}


void NullGL10_glTexCoordPointer(NullGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
        return;
}


void NullGL10_glTexEnvf(NullGL10* this, int32_t target, int32_t pname, float param) {
        return;
}


void NullGL10_glTexEnvfv(NullGL10* this, int32_t target, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glTexEnvfv(NullGL10* this, int32_t target, int32_t pname, FloatBuffer* params) {
        return;
}


void NullGL10_glTexImage2D(NullGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer* pixels) {
        return;
}


void NullGL10_glTexParameterf(NullGL10* this, int32_t target, int32_t pname, float param) {
        return;
}


void NullGL10_glTexParameteri(NullGL10* this, int32_t target, int32_t pname, int32_t param) {
        return;
}


void NullGL10_glTexSubImage2D(NullGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels) {
        return;
}


void NullGL10_glTranslatef(NullGL10* this, float x, float y, float z) {
        return;
}


void NullGL10_glVertexPointer(NullGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
        return;
}


void NullGL10_glViewport(NullGL10* this, int32_t x, int32_t y, int32_t width, int32_t height) {
        return;
}


void NullGL10_glBegin(NullGL10* this, int32_t i) {
        return;
}


void NullGL10_glEnd(NullGL10* this) {
        return;
}


void NullGL10_glVertex3f(NullGL10* this, float f, float f2, float f3) {
        return;
}


void NullGL10_glPolygonMode(NullGL10* this, int32_t i, int32_t i1) {
        return;
}

