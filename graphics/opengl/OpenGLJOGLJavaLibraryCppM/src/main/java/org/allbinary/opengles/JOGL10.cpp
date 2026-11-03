
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot   
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_OPENGLES_JOGL10_CPP
        #define ORG_ALLBINARY_OPENGLES_JOGL10_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/opengles/JOGL10.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <com/jogamp/opengl/glu/GLU.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/opengles/GL10.h"
#include "org/allbinary/opengles/GL2.h"
#include "org/allbinary/opengles/GL.h"
#include "org/allbinary/opengles/Buffer.h"
#include "org/allbinary/opengles/IntBuffer.h"
#include "org/allbinary/opengles/FloatBuffer.h"
//JOGLEToKhronosGL10

JOGL10::JOGL10(com::jogamp::opengl::GL* gl, com::jogamp::opengl::GL2* gl2){
this->gl10= gl2;
    
this->glu= GLU::createGLU(this->gl10);
    
this->GL_LINE= jogamp->opengl->GL2->GL_LINE;
    
this->GL_QUAD_STRIP= jogamp->opengl->GL2->GL_QUAD_STRIP;
    
}


    auto JOGL10::getJOGLGL() -> com::jogamp::opengl::GL2*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gl10;
    
}


    auto JOGL10::glActiveTexture(int32_t texture) -> void{
this->gl10->glActiveTexture(texture);
    
}


    auto JOGL10::glAlphaFunc(int32_t func, float ref) -> void{
this->gl10->glAlphaFunc(func, ref);
    
}


    auto JOGL10::glBindTexture(int32_t target, int32_t texture) -> void{
this->gl10->glBindTexture(target, texture);
    
}


    auto JOGL10::glBlendFunc(int32_t sfactor, int32_t dfactor) -> void{
this->gl10->glBlendFunc(sfactor, dfactor);
    
}


    auto JOGL10::glClear(int32_t mask) -> void{
this->gl10->glClear(mask);
    
}


    auto JOGL10::glClearColor(float red, float green, float blue, float alpha) -> void{
this->gl10->glClearColor(red, green, blue, alpha);
    
}


    auto JOGL10::glClearDepthf(float depth) -> void{
this->gl10->glClearDepthf(depth);
    
}


    auto JOGL10::glClearStencil(int32_t s) -> void{
this->gl10->glClearStencil(s);
    
}


    auto JOGL10::glClientActiveTexture(int32_t texture) -> void{
this->gl10->glClientActiveTexture(texture);
    
}


    auto JOGL10::glColor4f(float red, float green, float blue, float alpha) -> void{
this->gl10->glColor4f(red, green, blue, alpha);
    
}


    auto JOGL10::glColorMask(bool red, bool green, bool blue, bool alpha) -> void{
this->gl10->glColorMask(red, green, blue, alpha);
    
}


    auto JOGL10::glColorPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer) -> void{
this->gl10->glColorPointer(size, type, stride, pointer);
    
}


    auto JOGL10::glCompressedTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, java::nio::Buffer* data) -> void{
this->gl10->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
    
}


    auto JOGL10::glCompressedTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, java::nio::Buffer* data) -> void{
this->gl10->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
    
}


    auto JOGL10::glCopyTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) -> void{
this->gl10->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
    
}


    auto JOGL10::glCopyTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) -> void{
this->gl10->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
    
}


    auto JOGL10::glCullFace(int32_t mode) -> void{
this->gl10->glCullFace(mode);
    
}


    auto JOGL10::glDeleteTextures(int32_t n, std::vector<int32_t> textures, int32_t offset) -> void{
this->gl10->glDeleteTextures(n, textures, offset);
    
}


    auto JOGL10::glDeleteTextures(int32_t n, java::nio::IntBuffer* textures) -> void{
this->gl10->glDeleteTextures(n, textures);
    
}


    auto JOGL10::glDepthFunc(int32_t func) -> void{
this->gl10->glDepthFunc(func);
    
}


    auto JOGL10::glDepthMask(bool flag) -> void{
this->gl10->glDepthMask(flag);
    
}


    auto JOGL10::glDepthRangef(float zNear, float zFar) -> void{
this->gl10->glDepthRangef(zNear, zFar);
    
}


    auto JOGL10::glDisable(int32_t cap) -> void{
this->gl10->glDisable(cap);
    
}


    auto JOGL10::glDisableClientState(int32_t array) -> void{
this->gl10->glDisableClientState(array);
    
}


    auto JOGL10::glDrawArrays(int32_t mode, int32_t first, int32_t count) -> void{
this->gl10->glDrawArrays(mode, first, count);
    
}


    auto JOGL10::glDrawElements(int32_t mode, int32_t count, int32_t type, java::nio::Buffer* indices) -> void{
this->gl10->glDrawElements(mode, count, type, indices);
    
}


    auto JOGL10::glEnable(int32_t cap) -> void{
this->gl10->glEnable(cap);
    
}


    auto JOGL10::glEnableClientState(int32_t array) -> void{
this->gl10->glEnableClientState(array);
    
}


    auto JOGL10::glFinish() -> void{
this->gl10->glFinish();
    
}


    auto JOGL10::glFlush() -> void{
this->gl10->glFlush();
    
}


    auto JOGL10::glFogf(int32_t pname, float param) -> void{
this->gl10->glFogf(pname, param);
    
}


    auto JOGL10::glFogfv(int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl10->glFogfv(pname, params, offset);
    
}


    auto JOGL10::glFogfv(int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl10->glFogfv(pname, params);
    
}


    auto JOGL10::glFrontFace(int32_t mode) -> void{
this->gl10->glFrontFace(mode);
    
}


    auto JOGL10::glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar) -> void{
this->gl10->glFrustumf(left, right, bottom, top, zNear, zFar);
    
}


    auto JOGL10::glGenTextures(int32_t n, std::vector<int32_t> textures, int32_t offset) -> void{
this->gl10->glGenTextures(n, textures, offset);
    
}


    auto JOGL10::glGenTextures(int32_t n, java::nio::IntBuffer* textures) -> void{
this->gl10->glGenTextures(n, textures);
    
}


    auto JOGL10::glGetError() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gl10->glGetError();;
    
}


    auto JOGL10::glGetIntegerv(int32_t pname, std::vector<int32_t> params, int32_t offset) -> void{
this->gl10->glGetIntegerv(pname, params, offset);
    
}


    auto JOGL10::glGetIntegerv(int32_t pname, java::nio::IntBuffer* params) -> void{
this->gl10->glGetIntegerv(pname, params);
    
}


    auto JOGL10::glGetString(int32_t name) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gl10->glGetString(name);;
    
}


    auto JOGL10::glHint(int32_t target, int32_t mode) -> void{
this->gl10->glHint(target, mode);
    
}


    auto JOGL10::glLightModelf(int32_t pname, float param) -> void{
this->gl10->glLightModelf(pname, param);
    
}


    auto JOGL10::glLightModelfv(int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl10->glLightModelfv(pname, params, offset);
    
}


    auto JOGL10::glLightModelfv(int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl10->glLightModelfv(pname, params);
    
}


    auto JOGL10::glLightf(int32_t light, int32_t pname, float param) -> void{
this->gl10->glLightf(light, pname, param);
    
}


    auto JOGL10::glLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl10->glLightfv(light, pname, params, offset);
    
}


    auto JOGL10::glLightfv(int32_t light, int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl10->glLightfv(light, pname, params);
    
}


    auto JOGL10::glLineWidth(float width) -> void{
this->gl10->glLineWidth(width);
    
}


    auto JOGL10::glLoadIdentity() -> void{
this->gl10->glLoadIdentity();
    
}


    auto JOGL10::glLoadMatrixf(std::vector<float> m, int32_t offset) -> void{
this->gl10->glLoadMatrixf(m, offset);
    
}


    auto JOGL10::glLoadMatrixf(java::nio::FloatBuffer* m) -> void{
this->gl10->glLoadMatrixf(m);
    
}


    auto JOGL10::glLogicOp(int32_t opcode) -> void{
this->gl10->glLogicOp(opcode);
    
}


    auto JOGL10::glMaterialf(int32_t face, int32_t pname, float param) -> void{
this->gl10->glMaterialf(face, pname, param);
    
}


    auto JOGL10::glMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl10->glMaterialfv(face, pname, params, offset);
    
}


    auto JOGL10::glMaterialfv(int32_t face, int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl10->glMaterialfv(face, pname, params);
    
}


    auto JOGL10::glMatrixMode(int32_t mode) -> void{
this->gl10->glMatrixMode(mode);
    
}


    auto JOGL10::glMultMatrixf(std::vector<float> m, int32_t offset) -> void{
this->gl10->glMultMatrixf(m, offset);
    
}


    auto JOGL10::glMultMatrixf(java::nio::FloatBuffer* m) -> void{
this->gl10->glMultMatrixf(m);
    
}


    auto JOGL10::glMultiTexCoord4f(int32_t target, float s, float t, float r, float q) -> void{
this->gl10->glMultiTexCoord4f(target, s, t, r, q);
    
}


    auto JOGL10::glNormal3f(float nx, float ny, float nz) -> void{
this->gl10->glNormal3f(nx, ny, nz);
    
}


    auto JOGL10::glNormalPointer(int32_t type, int32_t stride, java::nio::Buffer* pointer) -> void{
this->gl10->glNormalPointer(type, stride, pointer);
    
}


    auto JOGL10::glOrthof(float left, float right, float bottom, float top, float zNear, float zFar) -> void{
this->gl10->glOrthof(left, right, bottom, top, zNear, zFar);
    
}


    auto JOGL10::glPixelStorei(int32_t pname, int32_t param) -> void{
this->gl10->glPixelStorei(pname, param);
    
}


    auto JOGL10::glPointSize(float size) -> void{
this->gl10->glPointSize(size);
    
}


    auto JOGL10::glPolygonOffset(float factor, float units) -> void{
this->gl10->glPolygonOffset(factor, units);
    
}


    auto JOGL10::glPopMatrix() -> void{
this->gl10->glPopMatrix();
    
}


    auto JOGL10::glPushMatrix() -> void{
this->gl10->glPushMatrix();
    
}


    auto JOGL10::glReadPixels(int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, java::nio::Buffer* pixels) -> void{
this->gl10->glReadPixels(x, y, width, height, format, type, pixels);
    
}


    auto JOGL10::glRotatef(float angle, float x, float y, float z) -> void{
this->gl10->glRotatef(angle, x, y, z);
    
}


    auto JOGL10::glRotatex(int32_t angle, int32_t x, int32_t y, int32_t z) -> void{
this->gl10->glRotatef(angle, x, y, z);
    
}


    auto JOGL10::glSampleCoverage(float value, bool invert) -> void{
this->gl10->glSampleCoverage(value, invert);
    
}


    auto JOGL10::glScalef(float x, float y, float z) -> void{
this->gl10->glScalef(x, y, z);
    
}


    auto JOGL10::glScalex(int32_t x, int32_t y, int32_t z) -> void{
this->gl10->glScalef(x, y, z);
    
}


    auto JOGL10::glScissor(int32_t x, int32_t y, int32_t width, int32_t height) -> void{
this->gl10->glScissor(x, y, width, height);
    
}


    auto JOGL10::glShadeModel(int32_t mode) -> void{
this->gl10->glShadeModel(mode);
    
}


    auto JOGL10::glStencilFunc(int32_t func, int32_t ref, int32_t mask) -> void{
this->gl10->glStencilFunc(func, ref, mask);
    
}


    auto JOGL10::glStencilMask(int32_t mask) -> void{
this->gl10->glStencilMask(mask);
    
}


    auto JOGL10::glStencilOp(int32_t fail, int32_t zfail, int32_t zpass) -> void{
this->gl10->glStencilOp(fail, zfail, zpass);
    
}


    auto JOGL10::glTexCoordPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer) -> void{
this->gl10->glTexCoordPointer(size, type, stride, pointer);
    
}


    auto JOGL10::glTexEnvf(int32_t target, int32_t pname, float param) -> void{
this->gl10->glTexEnvf(target, pname, param);
    
}


    auto JOGL10::glTexEnvfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl10->glTexEnvfv(target, pname, params, offset);
    
}


    auto JOGL10::glTexEnvfv(int32_t target, int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl10->glTexEnvfv(target, pname, params);
    
}


    auto JOGL10::glTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, java::nio::Buffer* pixels) -> void{
this->gl10->glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
    
}


    auto JOGL10::glTexParameterf(int32_t target, int32_t pname, float param) -> void{
this->gl10->glTexParameterf(target, pname, param);
    
}


    auto JOGL10::glTexParameteri(int32_t target, int32_t pname, int32_t param) -> void{
this->gl10->glTexParameteri(target, pname, param);
    
}


    auto JOGL10::glTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, java::nio::Buffer* pixels) -> void{
this->gl10->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
    
}


    auto JOGL10::glTranslatef(float x, float y, float z) -> void{
this->gl10->glTranslatef(x, y, z);
    
}


    auto JOGL10::glVertexPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer) -> void{
this->gl10->glVertexPointer(size, type, stride, pointer);
    
}


    auto JOGL10::glViewport(int32_t x, int32_t y, int32_t width, int32_t height) -> void{
this->gl10->glViewport(x, y, width, height);
    
}


    auto JOGL10::glBegin(int32_t i) -> void{
this->gl10->glBegin(i);
    
}


    auto JOGL10::glEnd() -> void{
this->gl10->glEnd();
    
}


    auto JOGL10::glVertex3f(float f, float f2, float f3) -> void{
this->gl10->glVertex3f(f, f2, f3);
    
}


    auto JOGL10::glPolygonMode(int32_t i, int32_t i1) -> void{
this->gl10->glPolygonMode(i, i1);
    
}




        #endif //ORG_ALLBINARY_OPENGLES_JOGL10_CPP
