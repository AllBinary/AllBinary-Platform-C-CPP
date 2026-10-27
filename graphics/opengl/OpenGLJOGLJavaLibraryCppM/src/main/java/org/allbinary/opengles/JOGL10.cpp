
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
class JOGL10
            : public Object
        , public javax::microedition::khronos::opengles::GL10 {

    protected: const std::string RED = "red: ";

    protected: const std::string GREEN = " green: ";

    protected: const std::string BLUE = " blue: ";

    protected: const std::string ALPHA = " alpha: ";

    protected: const std::string PNAME = "pname: ";

    protected: const std::string _PNAME = " pname: ";

    protected: const std::string PARAM = " param: ";

    protected: const std::string PARAMS = " params: ";

    protected: const std::string LIGHT = "light: ";

    protected: const std::string FACE = "face: ";

    protected: const std::string TARGET = "target: ";

    private: com::jogamp::opengl::GL2* gl10;

    public: GLU* glu;

    public: int32_t GL_LINE;

    public: int32_t GL_QUAD_STRIP;

public: JOGL10(com::jogamp::opengl::GL* gl, com::jogamp::opengl::GL2* gl2){
this->gl10= gl2;
    
this->glu= GLU::createGLU(this->gl10);
    
this->GL_LINE= com.jogamp.opengl.GL2.GL_LINE;
    
this->GL_QUAD_STRIP= com.jogamp.opengl.GL2.GL_QUAD_STRIP;
    
}


    public: com::jogamp::opengl::GL2* getJOGLGL(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl10;
    
}


    public: void glActiveTexture(int32_t texture){
this->gl10->glActiveTexture(texture);
    
}


    public: void glAlphaFunc(int32_t func, float ref){
this->gl10->glAlphaFunc(func, ref);
    
}


    public: void glBindTexture(int32_t target, int32_t texture){
this->gl10->glBindTexture(target, texture);
    
}


    public: void glBlendFunc(int32_t sfactor, int32_t dfactor){
this->gl10->glBlendFunc(sfactor, dfactor);
    
}


    public: void glClear(int32_t mask){
this->gl10->glClear(mask);
    
}


    public: void glClearColor(float red, float green, float blue, float alpha){
this->gl10->glClearColor(red, green, blue, alpha);
    
}


    public: void glClearDepthf(float depth){
this->gl10->glClearDepthf(depth);
    
}


    public: void glClearStencil(int32_t s){
this->gl10->glClearStencil(s);
    
}


    public: void glClientActiveTexture(int32_t texture){
this->gl10->glClientActiveTexture(texture);
    
}


    public: void glColor4f(float red, float green, float blue, float alpha){
this->gl10->glColor4f(red, green, blue, alpha);
    
}


    public: void glColorMask(bool red, bool green, bool blue, bool alpha){
this->gl10->glColorMask(red, green, blue, alpha);
    
}


    public: void glColorPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer){
this->gl10->glColorPointer(size, type, stride, pointer);
    
}


    public: void glCompressedTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, java::nio::Buffer* data){
this->gl10->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
    
}


    public: void glCompressedTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, java::nio::Buffer* data){
this->gl10->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
    
}


    public: void glCopyTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border){
this->gl10->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
    
}


    public: void glCopyTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height){
this->gl10->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
    
}


    public: void glCullFace(int32_t mode){
this->gl10->glCullFace(mode);
    
}


    public: void glDeleteTextures(int32_t n, std::vector<int32_t> textures, int32_t offset){
this->gl10->glDeleteTextures(n, textures, offset);
    
}


    public: void glDeleteTextures(int32_t n, java::nio::IntBuffer* textures){
this->gl10->glDeleteTextures(n, textures);
    
}


    public: void glDepthFunc(int32_t func){
this->gl10->glDepthFunc(func);
    
}


    public: void glDepthMask(bool flag){
this->gl10->glDepthMask(flag);
    
}


    public: void glDepthRangef(float zNear, float zFar){
this->gl10->glDepthRangef(zNear, zFar);
    
}


    public: void glDisable(int32_t cap){
this->gl10->glDisable(cap);
    
}


    public: void glDisableClientState(int32_t array){
this->gl10->glDisableClientState(array);
    
}


    public: void glDrawArrays(int32_t mode, int32_t first, int32_t count){
this->gl10->glDrawArrays(mode, first, count);
    
}


    public: void glDrawElements(int32_t mode, int32_t count, int32_t type, java::nio::Buffer* indices){
this->gl10->glDrawElements(mode, count, type, indices);
    
}


    public: void glEnable(int32_t cap){
this->gl10->glEnable(cap);
    
}


    public: void glEnableClientState(int32_t array){
this->gl10->glEnableClientState(array);
    
}


    public: void glFinish(){
this->gl10->glFinish();
    
}


    public: void glFlush(){
this->gl10->glFlush();
    
}


    public: void glFogf(int32_t pname, float param){
this->gl10->glFogf(pname, param);
    
}


    public: void glFogfv(int32_t pname, std::vector<float> params, int32_t offset){
this->gl10->glFogfv(pname, params, offset);
    
}


    public: void glFogfv(int32_t pname, java::nio::FloatBuffer* params){
this->gl10->glFogfv(pname, params);
    
}


    public: void glFrontFace(int32_t mode){
this->gl10->glFrontFace(mode);
    
}


    public: void glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar){
this->gl10->glFrustumf(left, right, bottom, top, zNear, zFar);
    
}


    public: void glGenTextures(int32_t n, std::vector<int32_t> textures, int32_t offset){
this->gl10->glGenTextures(n, textures, offset);
    
}


    public: void glGenTextures(int32_t n, java::nio::IntBuffer* textures){
this->gl10->glGenTextures(n, textures);
    
}


    public: int32_t glGetError(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl10->glGetError();;
    
}


    public: void glGetIntegerv(int32_t pname, std::vector<int32_t> params, int32_t offset){
this->gl10->glGetIntegerv(pname, params, offset);
    
}


    public: void glGetIntegerv(int32_t pname, java::nio::IntBuffer* params){
this->gl10->glGetIntegerv(pname, params);
    
}


    public: std::string glGetString(int32_t name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl10->glGetString(name);;
    
}


    public: void glHint(int32_t target, int32_t mode){
this->gl10->glHint(target, mode);
    
}


    public: void glLightModelf(int32_t pname, float param){
this->gl10->glLightModelf(pname, param);
    
}


    public: void glLightModelfv(int32_t pname, std::vector<float> params, int32_t offset){
this->gl10->glLightModelfv(pname, params, offset);
    
}


    public: void glLightModelfv(int32_t pname, java::nio::FloatBuffer* params){
this->gl10->glLightModelfv(pname, params);
    
}


    public: void glLightf(int32_t light, int32_t pname, float param){
this->gl10->glLightf(light, pname, param);
    
}


    public: void glLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset){
this->gl10->glLightfv(light, pname, params, offset);
    
}


    public: void glLightfv(int32_t light, int32_t pname, java::nio::FloatBuffer* params){
this->gl10->glLightfv(light, pname, params);
    
}


    public: void glLineWidth(float width){
this->gl10->glLineWidth(width);
    
}


    public: void glLoadIdentity(){
this->gl10->glLoadIdentity();
    
}


    public: void glLoadMatrixf(std::vector<float> m, int32_t offset){
this->gl10->glLoadMatrixf(m, offset);
    
}


    public: void glLoadMatrixf(java::nio::FloatBuffer* m){
this->gl10->glLoadMatrixf(m);
    
}


    public: void glLogicOp(int32_t opcode){
this->gl10->glLogicOp(opcode);
    
}


    public: void glMaterialf(int32_t face, int32_t pname, float param){
this->gl10->glMaterialf(face, pname, param);
    
}


    public: void glMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset){
this->gl10->glMaterialfv(face, pname, params, offset);
    
}


    public: void glMaterialfv(int32_t face, int32_t pname, java::nio::FloatBuffer* params){
this->gl10->glMaterialfv(face, pname, params);
    
}


    public: void glMatrixMode(int32_t mode){
this->gl10->glMatrixMode(mode);
    
}


    public: void glMultMatrixf(std::vector<float> m, int32_t offset){
this->gl10->glMultMatrixf(m, offset);
    
}


    public: void glMultMatrixf(java::nio::FloatBuffer* m){
this->gl10->glMultMatrixf(m);
    
}


    public: void glMultiTexCoord4f(int32_t target, float s, float t, float r, float q){
this->gl10->glMultiTexCoord4f(target, s, t, r, q);
    
}


    public: void glNormal3f(float nx, float ny, float nz){
this->gl10->glNormal3f(nx, ny, nz);
    
}


    public: void glNormalPointer(int32_t type, int32_t stride, java::nio::Buffer* pointer){
this->gl10->glNormalPointer(type, stride, pointer);
    
}


    public: void glOrthof(float left, float right, float bottom, float top, float zNear, float zFar){
this->gl10->glOrthof(left, right, bottom, top, zNear, zFar);
    
}


    public: void glPixelStorei(int32_t pname, int32_t param){
this->gl10->glPixelStorei(pname, param);
    
}


    public: void glPointSize(float size){
this->gl10->glPointSize(size);
    
}


    public: void glPolygonOffset(float factor, float units){
this->gl10->glPolygonOffset(factor, units);
    
}


    public: void glPopMatrix(){
this->gl10->glPopMatrix();
    
}


    public: void glPushMatrix(){
this->gl10->glPushMatrix();
    
}


    public: void glReadPixels(int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, java::nio::Buffer* pixels){
this->gl10->glReadPixels(x, y, width, height, format, type, pixels);
    
}


    public: void glRotatef(float angle, float x, float y, float z){
this->gl10->glRotatef(angle, x, y, z);
    
}


    public: void glRotatex(int32_t angle, int32_t x, int32_t y, int32_t z){
this->gl10->glRotatef(angle, x, y, z);
    
}


    public: void glSampleCoverage(float value, bool invert){
this->gl10->glSampleCoverage(value, invert);
    
}


    public: void glScalef(float x, float y, float z){
this->gl10->glScalef(x, y, z);
    
}


    public: void glScalex(int32_t x, int32_t y, int32_t z){
this->gl10->glScalef(x, y, z);
    
}


    public: void glScissor(int32_t x, int32_t y, int32_t width, int32_t height){
this->gl10->glScissor(x, y, width, height);
    
}


    public: void glShadeModel(int32_t mode){
this->gl10->glShadeModel(mode);
    
}


    public: void glStencilFunc(int32_t func, int32_t ref, int32_t mask){
this->gl10->glStencilFunc(func, ref, mask);
    
}


    public: void glStencilMask(int32_t mask){
this->gl10->glStencilMask(mask);
    
}


    public: void glStencilOp(int32_t fail, int32_t zfail, int32_t zpass){
this->gl10->glStencilOp(fail, zfail, zpass);
    
}


    public: void glTexCoordPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer){
this->gl10->glTexCoordPointer(size, type, stride, pointer);
    
}


    public: void glTexEnvf(int32_t target, int32_t pname, float param){
this->gl10->glTexEnvf(target, pname, param);
    
}


    public: void glTexEnvfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset){
this->gl10->glTexEnvfv(target, pname, params, offset);
    
}


    public: void glTexEnvfv(int32_t target, int32_t pname, java::nio::FloatBuffer* params){
this->gl10->glTexEnvfv(target, pname, params);
    
}


    public: void glTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, java::nio::Buffer* pixels){
this->gl10->glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
    
}


    public: void glTexParameterf(int32_t target, int32_t pname, float param){
this->gl10->glTexParameterf(target, pname, param);
    
}


    public: void glTexParameteri(int32_t target, int32_t pname, int32_t param){
this->gl10->glTexParameteri(target, pname, param);
    
}


    public: void glTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, java::nio::Buffer* pixels){
this->gl10->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
    
}


    public: void glTranslatef(float x, float y, float z){
this->gl10->glTranslatef(x, y, z);
    
}


    public: void glVertexPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer){
this->gl10->glVertexPointer(size, type, stride, pointer);
    
}


    public: void glViewport(int32_t x, int32_t y, int32_t width, int32_t height){
this->gl10->glViewport(x, y, width, height);
    
}


    public: void glBegin(int32_t i){
this->gl10->glBegin(i);
    
}


    public: void glEnd(){
this->gl10->glEnd();
    
}


    public: void glVertex3f(float f, float f2, float f3){
this->gl10->glVertex3f(f, f2, f3);
    
}


    public: void glPolygonMode(int32_t i, int32_t i1){
this->gl10->glPolygonMode(i, i1);
    
}


};

            

