#ifndef ORG_ALLBINARY_DEVICE_NULLGL10_H
#define ORG_ALLBINARY_DEVICE_NULLGL10_H
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
typedef struct GL10 GL10;
typedef struct StringUtil StringUtil;
#include "javax/microedition/khronos/opengles/GL10.h"
#include "java/nio/Buffer.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/IntBuffer.h"

typedef struct NullGL10 NullGL10;
struct NullGL10 {
    GL10 GL10_interface;
};

extern NullGL10* NullGL10_NULL_GL10;

NullGL10* NullGL10_new(void);
void NullGL10_init(NullGL10* this);

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

void NullGL10_glDeleteTextures4(NullGL10* this, int32_t n, int32_t* textures, int32_t offset);

void NullGL10_glDeleteTextures3(NullGL10* this, int32_t n, IntBuffer* textures);

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

void NullGL10_glFogfv4(NullGL10* this, int32_t pname, float* params, int32_t offset);

void NullGL10_glFogfv3(NullGL10* this, int32_t pname, FloatBuffer* params);

void NullGL10_glFrontFace(NullGL10* this, int32_t mode);

void NullGL10_glFrustumf(NullGL10* this, float left, float right, float bottom, float top, float zNear, float zFar);

void NullGL10_glGenTextures4(NullGL10* this, int32_t n, int32_t* textures, int32_t offset);

void NullGL10_glGenTextures3(NullGL10* this, int32_t n, IntBuffer* textures);

int32_t NullGL10_glGetError(NullGL10* this);

void NullGL10_glGetIntegerv4(NullGL10* this, int32_t pname, int32_t* params, int32_t offset);

void NullGL10_glGetIntegerv3(NullGL10* this, int32_t pname, IntBuffer* params);

const char* NullGL10_glGetString(NullGL10* this, int32_t name);

void NullGL10_glHint(NullGL10* this, int32_t target, int32_t mode);

void NullGL10_glLightModelf(NullGL10* this, int32_t pname, float param);

void NullGL10_glLightModelfv4(NullGL10* this, int32_t pname, float* params, int32_t offset);

void NullGL10_glLightModelfv3(NullGL10* this, int32_t pname, FloatBuffer* params);

void NullGL10_glLightf(NullGL10* this, int32_t light, int32_t pname, float param);

void NullGL10_glLightfv5(NullGL10* this, int32_t light, int32_t pname, float* params, int32_t offset);

void NullGL10_glLightfv4(NullGL10* this, int32_t light, int32_t pname, FloatBuffer* params);

void NullGL10_glLineWidth(NullGL10* this, float width);

void NullGL10_glLoadIdentity(NullGL10* this);

void NullGL10_glLoadMatrixf3(NullGL10* this, float* m, int32_t offset);

void NullGL10_glLoadMatrixf2(NullGL10* this, FloatBuffer* m);

void NullGL10_glLogicOp(NullGL10* this, int32_t opcode);

void NullGL10_glMaterialf(NullGL10* this, int32_t face, int32_t pname, float param);

void NullGL10_glMaterialfv5(NullGL10* this, int32_t face, int32_t pname, float* params, int32_t offset);

void NullGL10_glMaterialfv4(NullGL10* this, int32_t face, int32_t pname, FloatBuffer* params);

void NullGL10_glMatrixMode(NullGL10* this, int32_t mode);

void NullGL10_glMultMatrixf3(NullGL10* this, float* m, int32_t offset);

void NullGL10_glMultMatrixf2(NullGL10* this, FloatBuffer* m);

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

void NullGL10_glTexEnvfv5(NullGL10* this, int32_t target, int32_t pname, float* params, int32_t offset);

void NullGL10_glTexEnvfv4(NullGL10* this, int32_t target, int32_t pname, FloatBuffer* params);

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
#define NullGL10_glDeleteTextures(...) JAVA_OVERLOADED(NullGL10_glDeleteTextures, __VA_ARGS__)
#define NullGL10_glFogfv(...) JAVA_OVERLOADED(NullGL10_glFogfv, __VA_ARGS__)
#define NullGL10_glGenTextures(...) JAVA_OVERLOADED(NullGL10_glGenTextures, __VA_ARGS__)
#define NullGL10_glGetIntegerv(...) JAVA_OVERLOADED(NullGL10_glGetIntegerv, __VA_ARGS__)
#define NullGL10_glLightModelfv(...) JAVA_OVERLOADED(NullGL10_glLightModelfv, __VA_ARGS__)
#define NullGL10_glLightfv(...) JAVA_OVERLOADED(NullGL10_glLightfv, __VA_ARGS__)
#define NullGL10_glLoadMatrixf(...) JAVA_OVERLOADED(NullGL10_glLoadMatrixf, __VA_ARGS__)
#define NullGL10_glMaterialfv(...) JAVA_OVERLOADED(NullGL10_glMaterialfv, __VA_ARGS__)
#define NullGL10_glMultMatrixf(...) JAVA_OVERLOADED(NullGL10_glMultMatrixf, __VA_ARGS__)
#define NullGL10_glTexEnvfv(...) JAVA_OVERLOADED(NullGL10_glTexEnvfv, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullGL10_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullGL10_register(void);


#endif // ORG_ALLBINARY_DEVICE_NULLGL10_H
