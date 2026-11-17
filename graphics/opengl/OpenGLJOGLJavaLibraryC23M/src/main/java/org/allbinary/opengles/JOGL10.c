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
#include "com/jogamp/opengl/glu/GLU.h"
#include "org/allbinary/opengles/GL10.h"

//JOGLEToKhronosGL10
typedef struct JOGL10 JOGL10;
struct JOGL10 {
    GL10 GL10_interface;
    const char* RED;
    const char* GREEN;
    const char* BLUE;
    const char* ALPHA;
    const char* PNAME;
    const char* _PNAME;
    const char* PARAM;
    const char* PARAMS;
    const char* LIGHT;
    const char* FACE;
    const char* TARGET;
    GL2* gl10;
    GLU* glu;
    int32_t GL_LINE;
    int32_t GL_QUAD_STRIP;
};


JOGL10* JOGL10_new(GL* gl, GL2* gl2);

void JOGL10_init(JOGL10* this, GL* gl, GL2* gl2);
GL2* JOGL10_getJOGLGL(JOGL10* this);
void JOGL10_glActiveTexture(JOGL10* this, int32_t texture);
void JOGL10_glAlphaFunc(JOGL10* this, int32_t func, float ref);
void JOGL10_glBindTexture(JOGL10* this, int32_t target, int32_t texture);
void JOGL10_glBlendFunc(JOGL10* this, int32_t sfactor, int32_t dfactor);
void JOGL10_glClear(JOGL10* this, int32_t mask);
void JOGL10_glClearColor(JOGL10* this, float red, float green, float blue, float alpha);
void JOGL10_glClearDepthf(JOGL10* this, float depth);
void JOGL10_glClearStencil(JOGL10* this, int32_t s);
void JOGL10_glClientActiveTexture(JOGL10* this, int32_t texture);
void JOGL10_glColor4f(JOGL10* this, float red, float green, float blue, float alpha);
void JOGL10_glColorMask(JOGL10* this, bool red, bool green, bool blue, bool alpha);
void JOGL10_glColorPointer(JOGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
void JOGL10_glCompressedTexImage2D(JOGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer* data);
void JOGL10_glCompressedTexSubImage2D(JOGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer* data);
void JOGL10_glCopyTexImage2D(JOGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);
void JOGL10_glCopyTexSubImage2D(JOGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);
void JOGL10_glCullFace(JOGL10* this, int32_t mode);
void JOGL10_glDeleteTextures(JOGL10* this, int32_t n, int32_t* textures, int32_t offset);
void JOGL10_glDeleteTextures(JOGL10* this, int32_t n, IntBuffer* textures);
void JOGL10_glDepthFunc(JOGL10* this, int32_t func);
void JOGL10_glDepthMask(JOGL10* this, bool flag);
void JOGL10_glDepthRangef(JOGL10* this, float zNear, float zFar);
void JOGL10_glDisable(JOGL10* this, int32_t cap);
void JOGL10_glDisableClientState(JOGL10* this, int32_t array);
void JOGL10_glDrawArrays(JOGL10* this, int32_t mode, int32_t first, int32_t count);
void JOGL10_glDrawElements(JOGL10* this, int32_t mode, int32_t count, int32_t type, Buffer* indices);
void JOGL10_glEnable(JOGL10* this, int32_t cap);
void JOGL10_glEnableClientState(JOGL10* this, int32_t array);
void JOGL10_glFinish(JOGL10* this);
void JOGL10_glFlush(JOGL10* this);
void JOGL10_glFogf(JOGL10* this, int32_t pname, float param);
void JOGL10_glFogfv(JOGL10* this, int32_t pname, float* params, int32_t offset);
void JOGL10_glFogfv(JOGL10* this, int32_t pname, FloatBuffer* params);
void JOGL10_glFrontFace(JOGL10* this, int32_t mode);
void JOGL10_glFrustumf(JOGL10* this, float left, float right, float bottom, float top, float zNear, float zFar);
void JOGL10_glGenTextures(JOGL10* this, int32_t n, int32_t* textures, int32_t offset);
void JOGL10_glGenTextures(JOGL10* this, int32_t n, IntBuffer* textures);
int32_t JOGL10_glGetError(JOGL10* this);
void JOGL10_glGetIntegerv(JOGL10* this, int32_t pname, int32_t* params, int32_t offset);
void JOGL10_glGetIntegerv(JOGL10* this, int32_t pname, IntBuffer* params);
const char* JOGL10_glGetString(JOGL10* this, int32_t name);
void JOGL10_glHint(JOGL10* this, int32_t target, int32_t mode);
void JOGL10_glLightModelf(JOGL10* this, int32_t pname, float param);
void JOGL10_glLightModelfv(JOGL10* this, int32_t pname, float* params, int32_t offset);
void JOGL10_glLightModelfv(JOGL10* this, int32_t pname, FloatBuffer* params);
void JOGL10_glLightf(JOGL10* this, int32_t light, int32_t pname, float param);
void JOGL10_glLightfv(JOGL10* this, int32_t light, int32_t pname, float* params, int32_t offset);
void JOGL10_glLightfv(JOGL10* this, int32_t light, int32_t pname, FloatBuffer* params);
void JOGL10_glLineWidth(JOGL10* this, float width);
void JOGL10_glLoadIdentity(JOGL10* this);
void JOGL10_glLoadMatrixf(JOGL10* this, float* m, int32_t offset);
void JOGL10_glLoadMatrixf(JOGL10* this, FloatBuffer* m);
void JOGL10_glLogicOp(JOGL10* this, int32_t opcode);
void JOGL10_glMaterialf(JOGL10* this, int32_t face, int32_t pname, float param);
void JOGL10_glMaterialfv(JOGL10* this, int32_t face, int32_t pname, float* params, int32_t offset);
void JOGL10_glMaterialfv(JOGL10* this, int32_t face, int32_t pname, FloatBuffer* params);
void JOGL10_glMatrixMode(JOGL10* this, int32_t mode);
void JOGL10_glMultMatrixf(JOGL10* this, float* m, int32_t offset);
void JOGL10_glMultMatrixf(JOGL10* this, FloatBuffer* m);
void JOGL10_glMultiTexCoord4f(JOGL10* this, int32_t target, float s, float t, float r, float q);
void JOGL10_glNormal3f(JOGL10* this, float nx, float ny, float nz);
void JOGL10_glNormalPointer(JOGL10* this, int32_t type, int32_t stride, Buffer* pointer);
void JOGL10_glOrthof(JOGL10* this, float left, float right, float bottom, float top, float zNear, float zFar);
void JOGL10_glPixelStorei(JOGL10* this, int32_t pname, int32_t param);
void JOGL10_glPointSize(JOGL10* this, float size);
void JOGL10_glPolygonOffset(JOGL10* this, float factor, float units);
void JOGL10_glPopMatrix(JOGL10* this);
void JOGL10_glPushMatrix(JOGL10* this);
void JOGL10_glReadPixels(JOGL10* this, int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels);
void JOGL10_glRotatef(JOGL10* this, float angle, float x, float y, float z);
void JOGL10_glRotatex(JOGL10* this, int32_t angle, int32_t x, int32_t y, int32_t z);
void JOGL10_glSampleCoverage(JOGL10* this, float value, bool invert);
void JOGL10_glScalef(JOGL10* this, float x, float y, float z);
void JOGL10_glScalex(JOGL10* this, int32_t x, int32_t y, int32_t z);
void JOGL10_glScissor(JOGL10* this, int32_t x, int32_t y, int32_t width, int32_t height);
void JOGL10_glShadeModel(JOGL10* this, int32_t mode);
void JOGL10_glStencilFunc(JOGL10* this, int32_t func, int32_t ref, int32_t mask);
void JOGL10_glStencilMask(JOGL10* this, int32_t mask);
void JOGL10_glStencilOp(JOGL10* this, int32_t fail, int32_t zfail, int32_t zpass);
void JOGL10_glTexCoordPointer(JOGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
void JOGL10_glTexEnvf(JOGL10* this, int32_t target, int32_t pname, float param);
void JOGL10_glTexEnvfv(JOGL10* this, int32_t target, int32_t pname, float* params, int32_t offset);
void JOGL10_glTexEnvfv(JOGL10* this, int32_t target, int32_t pname, FloatBuffer* params);
void JOGL10_glTexImage2D(JOGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer* pixels);
void JOGL10_glTexParameterf(JOGL10* this, int32_t target, int32_t pname, float param);
void JOGL10_glTexParameteri(JOGL10* this, int32_t target, int32_t pname, int32_t param);
void JOGL10_glTexSubImage2D(JOGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels);
void JOGL10_glTranslatef(JOGL10* this, float x, float y, float z);
void JOGL10_glVertexPointer(JOGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer);
void JOGL10_glViewport(JOGL10* this, int32_t x, int32_t y, int32_t width, int32_t height);
void JOGL10_glBegin(JOGL10* this, int32_t i);
void JOGL10_glEnd(JOGL10* this);
void JOGL10_glVertex3f(JOGL10* this, float f, float f2, float f3);
void JOGL10_glPolygonMode(JOGL10* this, int32_t i, int32_t i1);

static void JOGL10_initFields(JOGL10* this) {
    this->RED = "red: ";
    this->GREEN = " green: ";
    this->BLUE = " blue: ";
    this->ALPHA = " alpha: ";
    this->PNAME = "pname: ";
    this->_PNAME = " pname: ";
    this->PARAM = " param: ";
    this->PARAMS = " params: ";
    this->LIGHT = "light: ";
    this->FACE = "face: ";
    this->TARGET = "target: ";
    
    
    
    
}


void JOGL10_init(JOGL10* this, GL* gl, GL2* gl2) {
    JOGL10_initFields(this);
        this->gl10 = gl2;
        this->glu = GLU_createGLU(this->gl10);
        this->GL_LINE = com_jogamp->opengl->GL2->GL_LINE;
        this->GL_QUAD_STRIP = com_jogamp->opengl->GL2->GL_QUAD_STRIP;
}

JOGL10* JOGL10_new(GL* gl, GL2* gl2) {
    JOGL10* this = calloc(1, sizeof(JOGL10));
    JOGL10_init(this, gl, gl2);
    return this;
}


GL2* JOGL10_getJOGLGL(JOGL10* this) {
        return this->gl10;
}


void JOGL10_glActiveTexture(JOGL10* this, int32_t texture) {
        GL2_glActiveTexture(this->gl10, texture);
}


void JOGL10_glAlphaFunc(JOGL10* this, int32_t func, float ref) {
        GL2_glAlphaFunc(this->gl10, func, ref);
}


void JOGL10_glBindTexture(JOGL10* this, int32_t target, int32_t texture) {
        GL2_glBindTexture(this->gl10, target, texture);
}


void JOGL10_glBlendFunc(JOGL10* this, int32_t sfactor, int32_t dfactor) {
        GL2_glBlendFunc(this->gl10, sfactor, dfactor);
}


void JOGL10_glClear(JOGL10* this, int32_t mask) {
        GL2_glClear(this->gl10, mask);
}


void JOGL10_glClearColor(JOGL10* this, float red, float green, float blue, float alpha) {
        GL2_glClearColor(this->gl10, red, green, blue, alpha);
}


void JOGL10_glClearDepthf(JOGL10* this, float depth) {
        GL2_glClearDepthf(this->gl10, depth);
}


void JOGL10_glClearStencil(JOGL10* this, int32_t s) {
        GL2_glClearStencil(this->gl10, s);
}


void JOGL10_glClientActiveTexture(JOGL10* this, int32_t texture) {
        GL2_glClientActiveTexture(this->gl10, texture);
}


void JOGL10_glColor4f(JOGL10* this, float red, float green, float blue, float alpha) {
        GL2_glColor4f(this->gl10, red, green, blue, alpha);
}


void JOGL10_glColorMask(JOGL10* this, bool red, bool green, bool blue, bool alpha) {
        GL2_glColorMask(this->gl10, red, green, blue, alpha);
}


void JOGL10_glColorPointer(JOGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
        GL2_glColorPointer(this->gl10, size, type, stride, pointer);
}


void JOGL10_glCompressedTexImage2D(JOGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer* data) {
        GL2_glCompressedTexImage2D(this->gl10, target, level, internalformat, width, height, border, imageSize, data);
}


void JOGL10_glCompressedTexSubImage2D(JOGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer* data) {
        GL2_glCompressedTexSubImage2D(this->gl10, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}


void JOGL10_glCopyTexImage2D(JOGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
        GL2_glCopyTexImage2D(this->gl10, target, level, internalformat, x, y, width, height, border);
}


void JOGL10_glCopyTexSubImage2D(JOGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
        GL2_glCopyTexSubImage2D(this->gl10, target, level, xoffset, yoffset, x, y, width, height);
}


void JOGL10_glCullFace(JOGL10* this, int32_t mode) {
        GL2_glCullFace(this->gl10, mode);
}


void JOGL10_glDeleteTextures(JOGL10* this, int32_t n, int32_t* textures, int32_t offset) {
        GL2_glDeleteTextures(this->gl10, n, textures, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glDeleteTextures(JOGL10* this, int32_t n, IntBuffer* textures) {
        GL2_glDeleteTextures(this->gl10, n, textures);
}


void JOGL10_glDepthFunc(JOGL10* this, int32_t func) {
        GL2_glDepthFunc(this->gl10, func);
}


void JOGL10_glDepthMask(JOGL10* this, bool flag) {
        GL2_glDepthMask(this->gl10, flag);
}


void JOGL10_glDepthRangef(JOGL10* this, float zNear, float zFar) {
        GL2_glDepthRangef(this->gl10, zNear, zFar);
}


void JOGL10_glDisable(JOGL10* this, int32_t cap) {
        GL2_glDisable(this->gl10, cap);
}


void JOGL10_glDisableClientState(JOGL10* this, int32_t array) {
        GL2_glDisableClientState(this->gl10, array);
}


void JOGL10_glDrawArrays(JOGL10* this, int32_t mode, int32_t first, int32_t count) {
        GL2_glDrawArrays(this->gl10, mode, first, count);
}


void JOGL10_glDrawElements(JOGL10* this, int32_t mode, int32_t count, int32_t type, Buffer* indices) {
        GL2_glDrawElements(this->gl10, mode, count, type, indices);
}


void JOGL10_glEnable(JOGL10* this, int32_t cap) {
        GL2_glEnable(this->gl10, cap);
}


void JOGL10_glEnableClientState(JOGL10* this, int32_t array) {
        GL2_glEnableClientState(this->gl10, array);
}


void JOGL10_glFinish(JOGL10* this) {
        GL2_glFinish(this->gl10);
}


void JOGL10_glFlush(JOGL10* this) {
        GL2_glFlush(this->gl10);
}


void JOGL10_glFogf(JOGL10* this, int32_t pname, float param) {
        GL2_glFogf(this->gl10, pname, param);
}


void JOGL10_glFogfv(JOGL10* this, int32_t pname, float* params, int32_t offset) {
        GL2_glFogfv(this->gl10, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glFogfv(JOGL10* this, int32_t pname, FloatBuffer* params) {
        GL2_glFogfv(this->gl10, pname, params);
}


void JOGL10_glFrontFace(JOGL10* this, int32_t mode) {
        GL2_glFrontFace(this->gl10, mode);
}


void JOGL10_glFrustumf(JOGL10* this, float left, float right, float bottom, float top, float zNear, float zFar) {
        GL2_glFrustumf(this->gl10, left, right, bottom, top, zNear, zFar);
}


void JOGL10_glGenTextures(JOGL10* this, int32_t n, int32_t* textures, int32_t offset) {
        GL2_glGenTextures(this->gl10, n, textures, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glGenTextures(JOGL10* this, int32_t n, IntBuffer* textures) {
        GL2_glGenTextures(this->gl10, n, textures);
}


int32_t JOGL10_glGetError(JOGL10* this) {
        return GL2_glGetError(this->gl10);
}


void JOGL10_glGetIntegerv(JOGL10* this, int32_t pname, int32_t* params, int32_t offset) {
        GL2_glGetIntegerv(this->gl10, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glGetIntegerv(JOGL10* this, int32_t pname, IntBuffer* params) {
        GL2_glGetIntegerv(this->gl10, pname, params);
}


const char* JOGL10_glGetString(JOGL10* this, int32_t name) {
        return GL2_glGetString(this->gl10, name);
}


void JOGL10_glHint(JOGL10* this, int32_t target, int32_t mode) {
        GL2_glHint(this->gl10, target, mode);
}


void JOGL10_glLightModelf(JOGL10* this, int32_t pname, float param) {
        GL2_glLightModelf(this->gl10, pname, param);
}


void JOGL10_glLightModelfv(JOGL10* this, int32_t pname, float* params, int32_t offset) {
        GL2_glLightModelfv(this->gl10, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glLightModelfv(JOGL10* this, int32_t pname, FloatBuffer* params) {
        GL2_glLightModelfv(this->gl10, pname, params);
}


void JOGL10_glLightf(JOGL10* this, int32_t light, int32_t pname, float param) {
        GL2_glLightf(this->gl10, light, pname, param);
}


void JOGL10_glLightfv(JOGL10* this, int32_t light, int32_t pname, float* params, int32_t offset) {
        GL2_glLightfv(this->gl10, light, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glLightfv(JOGL10* this, int32_t light, int32_t pname, FloatBuffer* params) {
        GL2_glLightfv(this->gl10, light, pname, params);
}


void JOGL10_glLineWidth(JOGL10* this, float width) {
        GL2_glLineWidth(this->gl10, width);
}


void JOGL10_glLoadIdentity(JOGL10* this) {
        GL2_glLoadIdentity(this->gl10);
}


void JOGL10_glLoadMatrixf(JOGL10* this, float* m, int32_t offset) {
        GL2_glLoadMatrixf(this->gl10, m, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glLoadMatrixf(JOGL10* this, FloatBuffer* m) {
        GL2_glLoadMatrixf(this->gl10, m);
}


void JOGL10_glLogicOp(JOGL10* this, int32_t opcode) {
        GL2_glLogicOp(this->gl10, opcode);
}


void JOGL10_glMaterialf(JOGL10* this, int32_t face, int32_t pname, float param) {
        GL2_glMaterialf(this->gl10, face, pname, param);
}


void JOGL10_glMaterialfv(JOGL10* this, int32_t face, int32_t pname, float* params, int32_t offset) {
        GL2_glMaterialfv(this->gl10, face, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glMaterialfv(JOGL10* this, int32_t face, int32_t pname, FloatBuffer* params) {
        GL2_glMaterialfv(this->gl10, face, pname, params);
}


void JOGL10_glMatrixMode(JOGL10* this, int32_t mode) {
        GL2_glMatrixMode(this->gl10, mode);
}


void JOGL10_glMultMatrixf(JOGL10* this, float* m, int32_t offset) {
        GL2_glMultMatrixf(this->gl10, m, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glMultMatrixf(JOGL10* this, FloatBuffer* m) {
        GL2_glMultMatrixf(this->gl10, m);
}


void JOGL10_glMultiTexCoord4f(JOGL10* this, int32_t target, float s, float t, float r, float q) {
        GL2_glMultiTexCoord4f(this->gl10, target, s, t, r, q);
}


void JOGL10_glNormal3f(JOGL10* this, float nx, float ny, float nz) {
        GL2_glNormal3f(this->gl10, nx, ny, nz);
}


void JOGL10_glNormalPointer(JOGL10* this, int32_t type, int32_t stride, Buffer* pointer) {
        GL2_glNormalPointer(this->gl10, type, stride, pointer);
}


void JOGL10_glOrthof(JOGL10* this, float left, float right, float bottom, float top, float zNear, float zFar) {
        GL2_glOrthof(this->gl10, left, right, bottom, top, zNear, zFar);
}


void JOGL10_glPixelStorei(JOGL10* this, int32_t pname, int32_t param) {
        GL2_glPixelStorei(this->gl10, pname, param);
}


void JOGL10_glPointSize(JOGL10* this, float size) {
        GL2_glPointSize(this->gl10, size);
}


void JOGL10_glPolygonOffset(JOGL10* this, float factor, float units) {
        GL2_glPolygonOffset(this->gl10, factor, units);
}


void JOGL10_glPopMatrix(JOGL10* this) {
        GL2_glPopMatrix(this->gl10);
}


void JOGL10_glPushMatrix(JOGL10* this) {
        GL2_glPushMatrix(this->gl10);
}


void JOGL10_glReadPixels(JOGL10* this, int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels) {
        GL2_glReadPixels(this->gl10, x, y, width, height, format, type, pixels);
}


void JOGL10_glRotatef(JOGL10* this, float angle, float x, float y, float z) {
        GL2_glRotatef(this->gl10, angle, x, y, z);
}


void JOGL10_glRotatex(JOGL10* this, int32_t angle, int32_t x, int32_t y, int32_t z) {
        GL2_glRotatef(this->gl10, angle, x, y, z);
}


void JOGL10_glSampleCoverage(JOGL10* this, float value, bool invert) {
        GL2_glSampleCoverage(this->gl10, value, invert);
}


void JOGL10_glScalef(JOGL10* this, float x, float y, float z) {
        GL2_glScalef(this->gl10, x, y, z);
}


void JOGL10_glScalex(JOGL10* this, int32_t x, int32_t y, int32_t z) {
        GL2_glScalef(this->gl10, x, y, z);
}


void JOGL10_glScissor(JOGL10* this, int32_t x, int32_t y, int32_t width, int32_t height) {
        GL2_glScissor(this->gl10, x, y, width, height);
}


void JOGL10_glShadeModel(JOGL10* this, int32_t mode) {
        GL2_glShadeModel(this->gl10, mode);
}


void JOGL10_glStencilFunc(JOGL10* this, int32_t func, int32_t ref, int32_t mask) {
        GL2_glStencilFunc(this->gl10, func, ref, mask);
}


void JOGL10_glStencilMask(JOGL10* this, int32_t mask) {
        GL2_glStencilMask(this->gl10, mask);
}


void JOGL10_glStencilOp(JOGL10* this, int32_t fail, int32_t zfail, int32_t zpass) {
        GL2_glStencilOp(this->gl10, fail, zfail, zpass);
}


void JOGL10_glTexCoordPointer(JOGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
        GL2_glTexCoordPointer(this->gl10, size, type, stride, pointer);
}


void JOGL10_glTexEnvf(JOGL10* this, int32_t target, int32_t pname, float param) {
        GL2_glTexEnvf(this->gl10, target, pname, param);
}


void JOGL10_glTexEnvfv(JOGL10* this, int32_t target, int32_t pname, float* params, int32_t offset) {
        GL2_glTexEnvfv(this->gl10, target, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL10_glTexEnvfv(JOGL10* this, int32_t target, int32_t pname, FloatBuffer* params) {
        GL2_glTexEnvfv(this->gl10, target, pname, params);
}


void JOGL10_glTexImage2D(JOGL10* this, int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer* pixels) {
        GL2_glTexImage2D(this->gl10, target, level, internalformat, width, height, border, format, type, pixels);
}


void JOGL10_glTexParameterf(JOGL10* this, int32_t target, int32_t pname, float param) {
        GL2_glTexParameterf(this->gl10, target, pname, param);
}


void JOGL10_glTexParameteri(JOGL10* this, int32_t target, int32_t pname, int32_t param) {
        GL2_glTexParameteri(this->gl10, target, pname, param);
}


void JOGL10_glTexSubImage2D(JOGL10* this, int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels) {
        GL2_glTexSubImage2D(this->gl10, target, level, xoffset, yoffset, width, height, format, type, pixels);
}


void JOGL10_glTranslatef(JOGL10* this, float x, float y, float z) {
        GL2_glTranslatef(this->gl10, x, y, z);
}


void JOGL10_glVertexPointer(JOGL10* this, int32_t size, int32_t type, int32_t stride, Buffer* pointer) {
        GL2_glVertexPointer(this->gl10, size, type, stride, pointer);
}


void JOGL10_glViewport(JOGL10* this, int32_t x, int32_t y, int32_t width, int32_t height) {
        GL2_glViewport(this->gl10, x, y, width, height);
}


void JOGL10_glBegin(JOGL10* this, int32_t i) {
        GL2_glBegin(this->gl10, i);
}


void JOGL10_glEnd(JOGL10* this) {
        GL2_glEnd(this->gl10);
}


void JOGL10_glVertex3f(JOGL10* this, float f, float f2, float f3) {
        GL2_glVertex3f(this->gl10, f, f2, f3);
}


void JOGL10_glPolygonMode(JOGL10* this, int32_t i, int32_t i1) {
        GL2_glPolygonMode(this->gl10, i, i1);
}

