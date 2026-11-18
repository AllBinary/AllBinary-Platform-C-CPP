// Generated Code Do Not Modify
#include "org/allbinary/device/NullGL10.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


NullGL10* NullGL10_NULL_GL10;































































































void NullGL10_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullGL10_NULL_GL10 = NullGL10_new();
}

void NullGL10_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullGL10", nullptr);
    java_register_method("NullGL10", "glActiveTexture", (void*) NullGL10_glActiveTexture);
    java_register_method("NullGL10", "glAlphaFunc", (void*) NullGL10_glAlphaFunc);
    java_register_method("NullGL10", "glBindTexture", (void*) NullGL10_glBindTexture);
    java_register_method("NullGL10", "glBlendFunc", (void*) NullGL10_glBlendFunc);
    java_register_method("NullGL10", "glClear", (void*) NullGL10_glClear);
    java_register_method("NullGL10", "glClearColor", (void*) NullGL10_glClearColor);
    java_register_method("NullGL10", "glClearDepthf", (void*) NullGL10_glClearDepthf);
    java_register_method("NullGL10", "glClearStencil", (void*) NullGL10_glClearStencil);
    java_register_method("NullGL10", "glClientActiveTexture", (void*) NullGL10_glClientActiveTexture);
    java_register_method("NullGL10", "glColor4f", (void*) NullGL10_glColor4f);
    java_register_method("NullGL10", "glColorMask", (void*) NullGL10_glColorMask);
    java_register_method("NullGL10", "glColorPointer", (void*) NullGL10_glColorPointer);
    java_register_method("NullGL10", "glCompressedTexImage2D", (void*) NullGL10_glCompressedTexImage2D);
    java_register_method("NullGL10", "glCompressedTexSubImage2D", (void*) NullGL10_glCompressedTexSubImage2D);
    java_register_method("NullGL10", "glCopyTexImage2D", (void*) NullGL10_glCopyTexImage2D);
    java_register_method("NullGL10", "glCopyTexSubImage2D", (void*) NullGL10_glCopyTexSubImage2D);
    java_register_method("NullGL10", "glCullFace", (void*) NullGL10_glCullFace);
    java_register_method("NullGL10", "glDeleteTextures", (void*) NullGL10_glDeleteTextures4);
    java_register_method("NullGL10", "glDeleteTextures@4", (void*) NullGL10_glDeleteTextures4);
    java_register_method("NullGL10", "glDeleteTextures@3", (void*) NullGL10_glDeleteTextures3);
    java_register_method("NullGL10", "glDepthFunc", (void*) NullGL10_glDepthFunc);
    java_register_method("NullGL10", "glDepthMask", (void*) NullGL10_glDepthMask);
    java_register_method("NullGL10", "glDepthRangef", (void*) NullGL10_glDepthRangef);
    java_register_method("NullGL10", "glDisable", (void*) NullGL10_glDisable);
    java_register_method("NullGL10", "glDisableClientState", (void*) NullGL10_glDisableClientState);
    java_register_method("NullGL10", "glDrawArrays", (void*) NullGL10_glDrawArrays);
    java_register_method("NullGL10", "glDrawElements", (void*) NullGL10_glDrawElements);
    java_register_method("NullGL10", "glEnable", (void*) NullGL10_glEnable);
    java_register_method("NullGL10", "glEnableClientState", (void*) NullGL10_glEnableClientState);
    java_register_method("NullGL10", "glFinish", (void*) NullGL10_glFinish);
    java_register_method("NullGL10", "glFlush", (void*) NullGL10_glFlush);
    java_register_method("NullGL10", "glFogf", (void*) NullGL10_glFogf);
    java_register_method("NullGL10", "glFogfv", (void*) NullGL10_glFogfv4);
    java_register_method("NullGL10", "glFogfv@4", (void*) NullGL10_glFogfv4);
    java_register_method("NullGL10", "glFogfv@3", (void*) NullGL10_glFogfv3);
    java_register_method("NullGL10", "glFrontFace", (void*) NullGL10_glFrontFace);
    java_register_method("NullGL10", "glFrustumf", (void*) NullGL10_glFrustumf);
    java_register_method("NullGL10", "glGenTextures", (void*) NullGL10_glGenTextures4);
    java_register_method("NullGL10", "glGenTextures@4", (void*) NullGL10_glGenTextures4);
    java_register_method("NullGL10", "glGenTextures@3", (void*) NullGL10_glGenTextures3);
    java_register_method("NullGL10", "glGetError", (void*) NullGL10_glGetError);
    java_register_method("NullGL10", "glGetIntegerv", (void*) NullGL10_glGetIntegerv4);
    java_register_method("NullGL10", "glGetIntegerv@4", (void*) NullGL10_glGetIntegerv4);
    java_register_method("NullGL10", "glGetIntegerv@3", (void*) NullGL10_glGetIntegerv3);
    java_register_method("NullGL10", "glGetString", (void*) NullGL10_glGetString);
    java_register_method("NullGL10", "glHint", (void*) NullGL10_glHint);
    java_register_method("NullGL10", "glLightModelf", (void*) NullGL10_glLightModelf);
    java_register_method("NullGL10", "glLightModelfv", (void*) NullGL10_glLightModelfv4);
    java_register_method("NullGL10", "glLightModelfv@4", (void*) NullGL10_glLightModelfv4);
    java_register_method("NullGL10", "glLightModelfv@3", (void*) NullGL10_glLightModelfv3);
    java_register_method("NullGL10", "glLightf", (void*) NullGL10_glLightf);
    java_register_method("NullGL10", "glLightfv", (void*) NullGL10_glLightfv5);
    java_register_method("NullGL10", "glLightfv@5", (void*) NullGL10_glLightfv5);
    java_register_method("NullGL10", "glLightfv@4", (void*) NullGL10_glLightfv4);
    java_register_method("NullGL10", "glLineWidth", (void*) NullGL10_glLineWidth);
    java_register_method("NullGL10", "glLoadIdentity", (void*) NullGL10_glLoadIdentity);
    java_register_method("NullGL10", "glLoadMatrixf", (void*) NullGL10_glLoadMatrixf3);
    java_register_method("NullGL10", "glLoadMatrixf@3", (void*) NullGL10_glLoadMatrixf3);
    java_register_method("NullGL10", "glLoadMatrixf@2", (void*) NullGL10_glLoadMatrixf2);
    java_register_method("NullGL10", "glLogicOp", (void*) NullGL10_glLogicOp);
    java_register_method("NullGL10", "glMaterialf", (void*) NullGL10_glMaterialf);
    java_register_method("NullGL10", "glMaterialfv", (void*) NullGL10_glMaterialfv5);
    java_register_method("NullGL10", "glMaterialfv@5", (void*) NullGL10_glMaterialfv5);
    java_register_method("NullGL10", "glMaterialfv@4", (void*) NullGL10_glMaterialfv4);
    java_register_method("NullGL10", "glMatrixMode", (void*) NullGL10_glMatrixMode);
    java_register_method("NullGL10", "glMultMatrixf", (void*) NullGL10_glMultMatrixf3);
    java_register_method("NullGL10", "glMultMatrixf@3", (void*) NullGL10_glMultMatrixf3);
    java_register_method("NullGL10", "glMultMatrixf@2", (void*) NullGL10_glMultMatrixf2);
    java_register_method("NullGL10", "glMultiTexCoord4f", (void*) NullGL10_glMultiTexCoord4f);
    java_register_method("NullGL10", "glNormal3f", (void*) NullGL10_glNormal3f);
    java_register_method("NullGL10", "glNormalPointer", (void*) NullGL10_glNormalPointer);
    java_register_method("NullGL10", "glOrthof", (void*) NullGL10_glOrthof);
    java_register_method("NullGL10", "glPixelStorei", (void*) NullGL10_glPixelStorei);
    java_register_method("NullGL10", "glPointSize", (void*) NullGL10_glPointSize);
    java_register_method("NullGL10", "glPolygonOffset", (void*) NullGL10_glPolygonOffset);
    java_register_method("NullGL10", "glPopMatrix", (void*) NullGL10_glPopMatrix);
    java_register_method("NullGL10", "glPushMatrix", (void*) NullGL10_glPushMatrix);
    java_register_method("NullGL10", "glReadPixels", (void*) NullGL10_glReadPixels);
    java_register_method("NullGL10", "glRotatef", (void*) NullGL10_glRotatef);
    java_register_method("NullGL10", "glRotatex", (void*) NullGL10_glRotatex);
    java_register_method("NullGL10", "glSampleCoverage", (void*) NullGL10_glSampleCoverage);
    java_register_method("NullGL10", "glScalef", (void*) NullGL10_glScalef);
    java_register_method("NullGL10", "glScalex", (void*) NullGL10_glScalex);
    java_register_method("NullGL10", "glScissor", (void*) NullGL10_glScissor);
    java_register_method("NullGL10", "glShadeModel", (void*) NullGL10_glShadeModel);
    java_register_method("NullGL10", "glStencilFunc", (void*) NullGL10_glStencilFunc);
    java_register_method("NullGL10", "glStencilMask", (void*) NullGL10_glStencilMask);
    java_register_method("NullGL10", "glStencilOp", (void*) NullGL10_glStencilOp);
    java_register_method("NullGL10", "glTexCoordPointer", (void*) NullGL10_glTexCoordPointer);
    java_register_method("NullGL10", "glTexEnvf", (void*) NullGL10_glTexEnvf);
    java_register_method("NullGL10", "glTexEnvfv", (void*) NullGL10_glTexEnvfv5);
    java_register_method("NullGL10", "glTexEnvfv@5", (void*) NullGL10_glTexEnvfv5);
    java_register_method("NullGL10", "glTexEnvfv@4", (void*) NullGL10_glTexEnvfv4);
    java_register_method("NullGL10", "glTexImage2D", (void*) NullGL10_glTexImage2D);
    java_register_method("NullGL10", "glTexParameterf", (void*) NullGL10_glTexParameterf);
    java_register_method("NullGL10", "glTexParameteri", (void*) NullGL10_glTexParameteri);
    java_register_method("NullGL10", "glTexSubImage2D", (void*) NullGL10_glTexSubImage2D);
    java_register_method("NullGL10", "glTranslatef", (void*) NullGL10_glTranslatef);
    java_register_method("NullGL10", "glVertexPointer", (void*) NullGL10_glVertexPointer);
    java_register_method("NullGL10", "glViewport", (void*) NullGL10_glViewport);
    java_register_method("NullGL10", "glBegin", (void*) NullGL10_glBegin);
    java_register_method("NullGL10", "glEnd", (void*) NullGL10_glEnd);
    java_register_method("NullGL10", "glVertex3f", (void*) NullGL10_glVertex3f);
    java_register_method("NullGL10", "glPolygonMode", (void*) NullGL10_glPolygonMode);
}

void NullGL10_init(NullGL10* this) {
    NullGL10_register();
}

NullGL10* NullGL10_new(void) {
    NullGL10* this = java_object_alloc(sizeof(NullGL10), "NullGL10");
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


void NullGL10_glDeleteTextures4(NullGL10* this, int32_t n, int32_t* textures, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glDeleteTextures3(NullGL10* this, int32_t n, IntBuffer* textures) {
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


void NullGL10_glFogfv4(NullGL10* this, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glFogfv3(NullGL10* this, int32_t pname, FloatBuffer* params) {
        return;
}


void NullGL10_glFrontFace(NullGL10* this, int32_t mode) {
        return;
}


void NullGL10_glFrustumf(NullGL10* this, float left, float right, float bottom, float top, float zNear, float zFar) {
        return;
}


void NullGL10_glGenTextures4(NullGL10* this, int32_t n, int32_t* textures, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glGenTextures3(NullGL10* this, int32_t n, IntBuffer* textures) {
        return;
}


int32_t NullGL10_glGetError(NullGL10* this) {
        return 0;
}


void NullGL10_glGetIntegerv4(NullGL10* this, int32_t pname, int32_t* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glGetIntegerv3(NullGL10* this, int32_t pname, IntBuffer* params) {
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


void NullGL10_glLightModelfv4(NullGL10* this, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glLightModelfv3(NullGL10* this, int32_t pname, FloatBuffer* params) {
        return;
}


void NullGL10_glLightf(NullGL10* this, int32_t light, int32_t pname, float param) {
        return;
}


void NullGL10_glLightfv5(NullGL10* this, int32_t light, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glLightfv4(NullGL10* this, int32_t light, int32_t pname, FloatBuffer* params) {
        return;
}


void NullGL10_glLineWidth(NullGL10* this, float width) {
        return;
}


void NullGL10_glLoadIdentity(NullGL10* this) {
        return;
}


void NullGL10_glLoadMatrixf3(NullGL10* this, float* m, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glLoadMatrixf2(NullGL10* this, FloatBuffer* m) {
        return;
}


void NullGL10_glLogicOp(NullGL10* this, int32_t opcode) {
        return;
}


void NullGL10_glMaterialf(NullGL10* this, int32_t face, int32_t pname, float param) {
        return;
}


void NullGL10_glMaterialfv5(NullGL10* this, int32_t face, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glMaterialfv4(NullGL10* this, int32_t face, int32_t pname, FloatBuffer* params) {
        return;
}


void NullGL10_glMatrixMode(NullGL10* this, int32_t mode) {
        return;
}


void NullGL10_glMultMatrixf3(NullGL10* this, float* m, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glMultMatrixf2(NullGL10* this, FloatBuffer* m) {
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


void NullGL10_glTexEnvfv5(NullGL10* this, int32_t target, int32_t pname, float* params, int32_t offset) {
        return;
}


// Java overloaded method: C needs a different name
void NullGL10_glTexEnvfv4(NullGL10* this, int32_t target, int32_t pname, FloatBuffer* params) {
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

