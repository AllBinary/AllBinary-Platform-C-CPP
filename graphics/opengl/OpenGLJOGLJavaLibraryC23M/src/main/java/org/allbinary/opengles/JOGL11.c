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
#include "com/jogamp/opengl/GL.h"
#include "com/jogamp/opengl/GL2.h"
#include "org/allbinary/opengles/JOGL10.h"
#include "org/allbinary/opengles/GL11.h"

//JOGLEToKhronosGL11
typedef struct JOGL11 JOGL11;
struct JOGL11 {
    JOGL10 base;
    GL11 GL11_interface;
    GL2* gl11;
};


JOGL11* JOGL11_new(GL* gl);

void JOGL11_init(JOGL11* this, GL* gl);

JOGL11* JOGL11_new2(GL* gl, GL2* gl2);
void JOGL11_init2(JOGL11* this, GL* gl, GL2* gl2);
void JOGL11_glBindBuffer(JOGL11* this, int32_t target, int32_t buffer);
void JOGL11_glBufferData(JOGL11* this, int32_t target, int32_t size, Buffer* data, int32_t usage);
void JOGL11_glBufferSubData(JOGL11* this, int32_t target, int32_t offset, int32_t size, Buffer* data);
void JOGL11_glClipPlanef(JOGL11* this, int32_t plane, float* equation, int32_t offset);
void JOGL11_glClipPlanef(JOGL11* this, int32_t plane, FloatBuffer* equation);
void JOGL11_glColor4ub(JOGL11* this, int8_t red, int8_t green, int8_t blue, int8_t alpha);
void JOGL11_glColorPointer(JOGL11* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
void JOGL11_glDeleteBuffers(JOGL11* this, int32_t n, int32_t* buffers, int32_t offset);
void JOGL11_glDeleteBuffers(JOGL11* this, int32_t n, IntBuffer* buffers);
void JOGL11_glDrawElements(JOGL11* this, int32_t mode, int32_t count, int32_t type, int32_t offset);
void JOGL11_glGenBuffers(JOGL11* this, int32_t n, int32_t* buffers, int32_t offset);
void JOGL11_glGenBuffers(JOGL11* this, int32_t n, IntBuffer* buffers);
void JOGL11_glGetBufferParameteriv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
void JOGL11_glGetBufferParameteriv(JOGL11* this, int32_t target, int32_t pname, IntBuffer* params);
void JOGL11_glGetClipPlanef(JOGL11* this, int32_t pname, float* eqn, int32_t offset);
void JOGL11_glGetClipPlanef(JOGL11* this, int32_t pname, FloatBuffer* eqn);
void JOGL11_glGetFloatv(JOGL11* this, int32_t pname, float* params, int32_t offset);
void JOGL11_glGetFloatv(JOGL11* this, int32_t pname, FloatBuffer* params);
void JOGL11_glGetLightfv(JOGL11* this, int32_t light, int32_t pname, float* params, int32_t offset);
void JOGL11_glGetLightfv(JOGL11* this, int32_t light, int32_t pname, FloatBuffer* params);
void JOGL11_glGetMaterialfv(JOGL11* this, int32_t face, int32_t pname, float* params, int32_t offset);
void JOGL11_glGetMaterialfv(JOGL11* this, int32_t face, int32_t pname, FloatBuffer* params);
void JOGL11_glGetTexEnviv(JOGL11* this, int32_t env, int32_t pname, int32_t* params, int32_t offset);
void JOGL11_glGetTexEnviv(JOGL11* this, int32_t env, int32_t pname, IntBuffer* params);
void JOGL11_glGetTexParameterfv(JOGL11* this, int32_t target, int32_t pname, float* params, int32_t offset);
void JOGL11_glGetTexParameterfv(JOGL11* this, int32_t target, int32_t pname, FloatBuffer* params);
void JOGL11_glGetTexParameteriv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
void JOGL11_glGetTexParameteriv(JOGL11* this, int32_t target, int32_t pname, IntBuffer* params);
bool JOGL11_glIsBuffer(JOGL11* this, int32_t buffer);
bool JOGL11_glIsEnabled(JOGL11* this, int32_t cap);
bool JOGL11_glIsTexture(JOGL11* this, int32_t texture);
void JOGL11_glNormalPointer(JOGL11* this, int32_t type, int32_t stride, int32_t offset);
void JOGL11_glPointParameterf(JOGL11* this, int32_t pname, float param);
void JOGL11_glPointParameterfv(JOGL11* this, int32_t pname, float* params, int32_t offset);
void JOGL11_glPointParameterfv(JOGL11* this, int32_t pname, FloatBuffer* params);
void JOGL11_glTexCoordPointer(JOGL11* this, int32_t size, int32_t type, int32_t stride, int32_t offset);
void JOGL11_glTexEnvi(JOGL11* this, int32_t target, int32_t pname, int32_t param);
void JOGL11_glTexEnviv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
void JOGL11_glTexEnviv(JOGL11* this, int32_t target, int32_t pname, IntBuffer* params);
void JOGL11_glTexParameterfv(JOGL11* this, int32_t target, int32_t pname, float* params, int32_t offset);
void JOGL11_glTexParameterfv(JOGL11* this, int32_t target, int32_t pname, FloatBuffer* params);
void JOGL11_glTexParameteri(JOGL11* this, int32_t target, int32_t pname, int32_t param);
void JOGL11_glTexParameteriv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
void JOGL11_glTexParameteriv(JOGL11* this, int32_t target, int32_t pname, IntBuffer* params);
void JOGL11_glTexParameterxv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset);
void JOGL11_glVertexPointer(JOGL11* this, int32_t size, int32_t type, int32_t stride, int32_t offset);

static void JOGL11_initFields(JOGL11* this) {
    
}


void JOGL11_init(JOGL11* this, GL* gl) {
        JOGL11_init(this, gl, ((GL2*) gl));
}

JOGL11* JOGL11_new(GL* gl) {
    JOGL11* this = calloc(1, sizeof(JOGL11));
    JOGL11_init(this, gl);
    return this;
}


void JOGL11_init2(JOGL11* this, GL* gl, GL2* gl2) {
        JOGL10_init(&this->base, gl, gl2);
        JOGL11_initFields(this);
        this->gl11 = JOGL11_getJOGLGL(this);
}

JOGL11* JOGL11_new2(GL* gl, GL2* gl2) {
    JOGL11* this = calloc(1, sizeof(JOGL11));
    JOGL11_init2(this, gl, gl2);
    return this;
}


void JOGL11_glBindBuffer(JOGL11* this, int32_t target, int32_t buffer) {
        GL2_glBindBuffer(this->gl11, target, buffer);
}


void JOGL11_glBufferData(JOGL11* this, int32_t target, int32_t size, Buffer* data, int32_t usage) {
        GL2_glBufferData(this->gl11, target, size, data, usage);
}


void JOGL11_glBufferSubData(JOGL11* this, int32_t target, int32_t offset, int32_t size, Buffer* data) {
        GL2_glBufferSubData(this->gl11, target, offset, size, data);
}


void JOGL11_glClipPlanef(JOGL11* this, int32_t plane, float* equation, int32_t offset) {
        GL2_glClipPlanef(this->gl11, plane, equation, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glClipPlanef(JOGL11* this, int32_t plane, FloatBuffer* equation) {
        GL2_glClipPlanef(this->gl11, plane, equation);
}


void JOGL11_glColor4ub(JOGL11* this, int8_t red, int8_t green, int8_t blue, int8_t alpha) {
        GL2_glColor4ub(this->gl11, red, green, blue, alpha);
}


void JOGL11_glColorPointer(JOGL11* this, int32_t size, int32_t type, int32_t stride, int32_t offset) {
        GL2_glColorPointer(this->gl11, size, type, stride, offset);
}


void JOGL11_glDeleteBuffers(JOGL11* this, int32_t n, int32_t* buffers, int32_t offset) {
        GL2_glDeleteBuffers(this->gl11, n, buffers, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glDeleteBuffers(JOGL11* this, int32_t n, IntBuffer* buffers) {
        GL2_glDeleteBuffers(this->gl11, n, buffers);
}


void JOGL11_glDrawElements(JOGL11* this, int32_t mode, int32_t count, int32_t type, int32_t offset) {
        GL2_glDrawElements(this->gl11, mode, count, type, offset);
}


void JOGL11_glGenBuffers(JOGL11* this, int32_t n, int32_t* buffers, int32_t offset) {
        GL2_glGenBuffers(this->gl11, n, buffers, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glGenBuffers(JOGL11* this, int32_t n, IntBuffer* buffers) {
        GL2_glGenBuffers(this->gl11, n, buffers);
}


void JOGL11_glGetBufferParameteriv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
        GL2_glGetBufferParameteriv(this->gl11, target, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glGetBufferParameteriv(JOGL11* this, int32_t target, int32_t pname, IntBuffer* params) {
        GL2_glGetBufferParameteriv(this->gl11, target, pname, params);
}


void JOGL11_glGetClipPlanef(JOGL11* this, int32_t pname, float* eqn, int32_t offset) {
        GL2_glGetClipPlanef(this->gl11, pname, eqn, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glGetClipPlanef(JOGL11* this, int32_t pname, FloatBuffer* eqn) {
        GL2_glGetClipPlanef(this->gl11, pname, eqn);
}


void JOGL11_glGetFloatv(JOGL11* this, int32_t pname, float* params, int32_t offset) {
        GL2_glGetFloatv(this->gl11, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glGetFloatv(JOGL11* this, int32_t pname, FloatBuffer* params) {
        GL2_glGetFloatv(this->gl11, pname, params);
}


void JOGL11_glGetLightfv(JOGL11* this, int32_t light, int32_t pname, float* params, int32_t offset) {
        GL2_glGetLightfv(this->gl11, light, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glGetLightfv(JOGL11* this, int32_t light, int32_t pname, FloatBuffer* params) {
        GL2_glGetLightfv(this->gl11, light, pname, params);
}


void JOGL11_glGetMaterialfv(JOGL11* this, int32_t face, int32_t pname, float* params, int32_t offset) {
        GL2_glGetMaterialfv(this->gl11, face, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glGetMaterialfv(JOGL11* this, int32_t face, int32_t pname, FloatBuffer* params) {
        GL2_glGetMaterialfv(this->gl11, face, pname, params);
}


void JOGL11_glGetTexEnviv(JOGL11* this, int32_t env, int32_t pname, int32_t* params, int32_t offset) {
        GL2_glGetTexEnviv(this->gl11, env, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glGetTexEnviv(JOGL11* this, int32_t env, int32_t pname, IntBuffer* params) {
        GL2_glGetTexEnviv(this->gl11, env, pname, params);
}


void JOGL11_glGetTexParameterfv(JOGL11* this, int32_t target, int32_t pname, float* params, int32_t offset) {
        GL2_glGetTexParameterfv(this->gl11, target, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glGetTexParameterfv(JOGL11* this, int32_t target, int32_t pname, FloatBuffer* params) {
        GL2_glGetTexParameterfv(this->gl11, target, pname, params);
}


void JOGL11_glGetTexParameteriv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
        GL2_glGetTexParameteriv(this->gl11, target, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glGetTexParameteriv(JOGL11* this, int32_t target, int32_t pname, IntBuffer* params) {
        GL2_glGetTexParameteriv(this->gl11, target, pname, params);
}


bool JOGL11_glIsBuffer(JOGL11* this, int32_t buffer) {
        return GL2_glIsBuffer(this->gl11, buffer);
}


bool JOGL11_glIsEnabled(JOGL11* this, int32_t cap) {
        return GL2_glIsEnabled(this->gl11, cap);
}


bool JOGL11_glIsTexture(JOGL11* this, int32_t texture) {
        return GL2_glIsTexture(this->gl11, texture);
}


void JOGL11_glNormalPointer(JOGL11* this, int32_t type, int32_t stride, int32_t offset) {
        GL2_glNormalPointer(this->gl11, type, stride, offset);
}


void JOGL11_glPointParameterf(JOGL11* this, int32_t pname, float param) {
        GL2_glPointParameterf(this->gl11, pname, param);
}


void JOGL11_glPointParameterfv(JOGL11* this, int32_t pname, float* params, int32_t offset) {
        GL2_glPointParameterfv(this->gl11, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glPointParameterfv(JOGL11* this, int32_t pname, FloatBuffer* params) {
        GL2_glPointParameterfv(this->gl11, pname, params);
}


void JOGL11_glTexCoordPointer(JOGL11* this, int32_t size, int32_t type, int32_t stride, int32_t offset) {
        GL2_glTexCoordPointer(this->gl11, size, type, stride, offset);
}


void JOGL11_glTexEnvi(JOGL11* this, int32_t target, int32_t pname, int32_t param) {
        GL2_glTexEnvi(this->gl11, target, pname, param);
}


void JOGL11_glTexEnviv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
        GL2_glTexEnviv(this->gl11, target, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glTexEnviv(JOGL11* this, int32_t target, int32_t pname, IntBuffer* params) {
        GL2_glTexEnviv(this->gl11, target, pname, params);
}


void JOGL11_glTexParameterfv(JOGL11* this, int32_t target, int32_t pname, float* params, int32_t offset) {
        GL2_glTexParameterfv(this->gl11, target, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glTexParameterfv(JOGL11* this, int32_t target, int32_t pname, FloatBuffer* params) {
        GL2_glTexParameterfv(this->gl11, target, pname, params);
}


void JOGL11_glTexParameteri(JOGL11* this, int32_t target, int32_t pname, int32_t param) {
        GL2_glTexParameteri(this->gl11, target, pname, param);
}


void JOGL11_glTexParameteriv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
        GL2_glTexParameteriv(this->gl11, target, pname, params, offset);
}


// Java overloaded method: C needs a different name
void JOGL11_glTexParameteriv(JOGL11* this, int32_t target, int32_t pname, IntBuffer* params) {
        GL2_glTexParameteriv(this->gl11, target, pname, params);
}


void JOGL11_glTexParameterxv(JOGL11* this, int32_t target, int32_t pname, int32_t* params, int32_t offset) {
        GL2_glTexParameteriv(this->gl11, target, pname, params, offset);
}


void JOGL11_glVertexPointer(JOGL11* this, int32_t size, int32_t type, int32_t stride, int32_t offset) {
        GL2_glVertexPointer(this->gl11, size, type, stride, offset);
}

