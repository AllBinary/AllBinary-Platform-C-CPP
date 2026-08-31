
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_DEVICE_NULLGL10_H
        #define ORG_ALLBINARY_DEVICE_NULLGL10_H

            #include "../../../java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <java/nio/Buffer.h>

      
#include <java/nio/FloatBuffer.h>

      
#include <java/nio/IntBuffer.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NullGL10
            : public Object
        : public GL10 {
        

    public static const NULL_GL10: NullGL10 = new NullGL10();

    public glActiveTexture(int32_t texture);

    public glAlphaFunc(int32_t func, float ref);

    public glBindTexture(int32_t target, int32_t texture);

    public glBlendFunc(int32_t sfactor, int32_t dfactor);

    public glClear(int32_t mask);

    public glClearColor(float red, float green, float blue, float alpha);

    public glClearDepthf(float depth);

    public glClearStencil(int32_t s);

    public glClientActiveTexture(int32_t texture);

    public glColor4f(float red, float green, float blue, float alpha);

    public glColorMask(bool red, bool green, bool blue, bool alpha);

    public glColorPointer(int32_t size, int32_t type, int32_t stride, Buffer pointer);

    public glCompressedTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer data);

    public glCompressedTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer data);

    public glCopyTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

    public glCopyTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

    public glCullFace(int32_t mode);

    public glDeleteTextures(int32_t n, std::vector<int32_t> textures, int32_t offset);

    public glDeleteTextures(int32_t n, IntBuffer textures);

    public glDepthFunc(int32_t func);

    public glDepthMask(bool flag);

    public glDepthRangef(float zNear, float zFar);

    public glDisable(int32_t cap);

    public glDisableClientState(int32_t array);

    public glDrawArrays(int32_t mode, int32_t first, int32_t count);

    public glDrawElements(int32_t mode, int32_t count, int32_t type, Buffer indices);

    public glEnable(int32_t cap);

    public glEnableClientState(int32_t array);

    public glFinish();

    public glFlush();

    public glFogf(int32_t pname, float param);

    public glFogfv(int32_t pname, std::vector<float> params, int32_t offset);

    public glFogfv(int32_t pname, FloatBuffer params);

    public glFrontFace(int32_t mode);

    public glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar);

    public glGenTextures(int32_t n, std::vector<int32_t> textures, int32_t offset);

    public glGenTextures(int32_t n, IntBuffer textures);

    public int32_t glGetError();

    public glGetIntegerv(int32_t pname, std::vector<int32_t> params, int32_t offset);

    public glGetIntegerv(int32_t pname, IntBuffer params);

    public string glGetString(int32_t name);

    public glHint(int32_t target, int32_t mode);

    public glLightModelf(int32_t pname, float param);

    public glLightModelfv(int32_t pname, std::vector<float> params, int32_t offset);

    public glLightModelfv(int32_t pname, FloatBuffer params);

    public glLightf(int32_t light, int32_t pname, float param);

    public glLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset);

    public glLightfv(int32_t light, int32_t pname, FloatBuffer params);

    public glLineWidth(float width);

    public glLoadIdentity();

    public glLoadMatrixf(std::vector<float> m, int32_t offset);

    public glLoadMatrixf(FloatBuffer m);

    public glLogicOp(int32_t opcode);

    public glMaterialf(int32_t face, int32_t pname, float param);

    public glMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset);

    public glMaterialfv(int32_t face, int32_t pname, FloatBuffer params);

    public glMatrixMode(int32_t mode);

    public glMultMatrixf(std::vector<float> m, int32_t offset);

    public glMultMatrixf(FloatBuffer m);

    public glMultiTexCoord4f(int32_t target, float s, float t, float r, float q);

    public glNormal3f(float nx, float ny, float nz);

    public glNormalPointer(int32_t type, int32_t stride, Buffer pointer);

    public glOrthof(float left, float right, float bottom, float top, float zNear, float zFar);

    public glPixelStorei(int32_t pname, int32_t param);

    public glPointSize(float size);

    public glPolygonOffset(float factor, float units);

    public glPopMatrix();

    public glPushMatrix();

    public glReadPixels(int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer pixels);

    public glRotatef(float angle, float x, float y, float z);

    public glRotatex(int32_t angle, int32_t x, int32_t y, int32_t z);

    public glSampleCoverage(float value, bool invert);

    public glScalef(float x, float y, float z);

    public glScalex(int32_t x, int32_t y, int32_t z);

    public glScissor(int32_t x, int32_t y, int32_t width, int32_t height);

    public glShadeModel(int32_t mode);

    public glStencilFunc(int32_t func, int32_t ref, int32_t mask);

    public glStencilMask(int32_t mask);

    public glStencilOp(int32_t fail, int32_t zfail, int32_t zpass);

    public glTexCoordPointer(int32_t size, int32_t type, int32_t stride, Buffer pointer);

    public glTexEnvf(int32_t target, int32_t pname, float param);

    public glTexEnvfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    public glTexEnvfv(int32_t target, int32_t pname, FloatBuffer params);

    public glTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer pixels);

    public glTexParameterf(int32_t target, int32_t pname, float param);

    public glTexParameteri(int32_t target, int32_t pname, int32_t param);

    public glTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer pixels);

    public glTranslatef(float x, float y, float z);

    public glVertexPointer(int32_t size, int32_t type, int32_t stride, Buffer pointer);

    public glViewport(int32_t x, int32_t y, int32_t width, int32_t height);

    public glBegin(int32_t i);

    public glEnd();

    public glVertex3f(float f, float f2, float f3);

    public glPolygonMode(int32_t i, int32_t i1);

};

            


        #endif //ORG_ALLBINARY_DEVICE_NULLGL10_H
