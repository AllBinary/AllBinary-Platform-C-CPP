
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
        



        #ifndef ORG_ALLBINARY_OPENGLES_JOGL10_H
        #define ORG_ALLBINARY_OPENGLES_JOGL10_H

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

public: JOGL10(com::jogamp::opengl::GL* gl, com::jogamp::opengl::GL2* gl2);

    public: com::jogamp::opengl::GL2* getJOGLGL();

    public: void glActiveTexture(int32_t texture);

    public: void glAlphaFunc(int32_t func, float ref);

    public: void glBindTexture(int32_t target, int32_t texture);

    public: void glBlendFunc(int32_t sfactor, int32_t dfactor);

    public: void glClear(int32_t mask);

    public: void glClearColor(float red, float green, float blue, float alpha);

    public: void glClearDepthf(float depth);

    public: void glClearStencil(int32_t s);

    public: void glClientActiveTexture(int32_t texture);

    public: void glColor4f(float red, float green, float blue, float alpha);

    public: void glColorMask(bool red, bool green, bool blue, bool alpha);

    public: void glColorPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer);

    public: void glCompressedTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, java::nio::Buffer* data);

    public: void glCompressedTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, java::nio::Buffer* data);

    public: void glCopyTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

    public: void glCopyTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

    public: void glCullFace(int32_t mode);

    public: void glDeleteTextures(int32_t n, std::vector<int32_t> textures, int32_t offset);

    public: void glDeleteTextures(int32_t n, java::nio::IntBuffer* textures);

    public: void glDepthFunc(int32_t func);

    public: void glDepthMask(bool flag);

    public: void glDepthRangef(float zNear, float zFar);

    public: void glDisable(int32_t cap);

    public: void glDisableClientState(int32_t array);

    public: void glDrawArrays(int32_t mode, int32_t first, int32_t count);

    public: void glDrawElements(int32_t mode, int32_t count, int32_t type, java::nio::Buffer* indices);

    public: void glEnable(int32_t cap);

    public: void glEnableClientState(int32_t array);

    public: void glFinish();

    public: void glFlush();

    public: void glFogf(int32_t pname, float param);

    public: void glFogfv(int32_t pname, std::vector<float> params, int32_t offset);

    public: void glFogfv(int32_t pname, java::nio::FloatBuffer* params);

    public: void glFrontFace(int32_t mode);

    public: void glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar);

    public: void glGenTextures(int32_t n, std::vector<int32_t> textures, int32_t offset);

    public: void glGenTextures(int32_t n, java::nio::IntBuffer* textures);

    public: int32_t glGetError();

    public: void glGetIntegerv(int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glGetIntegerv(int32_t pname, java::nio::IntBuffer* params);

    public: std::string glGetString(int32_t name);

    public: void glHint(int32_t target, int32_t mode);

    public: void glLightModelf(int32_t pname, float param);

    public: void glLightModelfv(int32_t pname, std::vector<float> params, int32_t offset);

    public: void glLightModelfv(int32_t pname, java::nio::FloatBuffer* params);

    public: void glLightf(int32_t light, int32_t pname, float param);

    public: void glLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glLightfv(int32_t light, int32_t pname, java::nio::FloatBuffer* params);

    public: void glLineWidth(float width);

    public: void glLoadIdentity();

    public: void glLoadMatrixf(std::vector<float> m, int32_t offset);

    public: void glLoadMatrixf(java::nio::FloatBuffer* m);

    public: void glLogicOp(int32_t opcode);

    public: void glMaterialf(int32_t face, int32_t pname, float param);

    public: void glMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glMaterialfv(int32_t face, int32_t pname, java::nio::FloatBuffer* params);

    public: void glMatrixMode(int32_t mode);

    public: void glMultMatrixf(std::vector<float> m, int32_t offset);

    public: void glMultMatrixf(java::nio::FloatBuffer* m);

    public: void glMultiTexCoord4f(int32_t target, float s, float t, float r, float q);

    public: void glNormal3f(float nx, float ny, float nz);

    public: void glNormalPointer(int32_t type, int32_t stride, java::nio::Buffer* pointer);

    public: void glOrthof(float left, float right, float bottom, float top, float zNear, float zFar);

    public: void glPixelStorei(int32_t pname, int32_t param);

    public: void glPointSize(float size);

    public: void glPolygonOffset(float factor, float units);

    public: void glPopMatrix();

    public: void glPushMatrix();

    public: void glReadPixels(int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, java::nio::Buffer* pixels);

    public: void glRotatef(float angle, float x, float y, float z);

    public: void glRotatex(int32_t angle, int32_t x, int32_t y, int32_t z);

    public: void glSampleCoverage(float value, bool invert);

    public: void glScalef(float x, float y, float z);

    public: void glScalex(int32_t x, int32_t y, int32_t z);

    public: void glScissor(int32_t x, int32_t y, int32_t width, int32_t height);

    public: void glShadeModel(int32_t mode);

    public: void glStencilFunc(int32_t func, int32_t ref, int32_t mask);

    public: void glStencilMask(int32_t mask);

    public: void glStencilOp(int32_t fail, int32_t zfail, int32_t zpass);

    public: void glTexCoordPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer);

    public: void glTexEnvf(int32_t target, int32_t pname, float param);

    public: void glTexEnvfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glTexEnvfv(int32_t target, int32_t pname, java::nio::FloatBuffer* params);

    public: void glTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, java::nio::Buffer* pixels);

    public: void glTexParameterf(int32_t target, int32_t pname, float param);

    public: void glTexParameteri(int32_t target, int32_t pname, int32_t param);

    public: void glTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, java::nio::Buffer* pixels);

    public: void glTranslatef(float x, float y, float z);

    public: void glVertexPointer(int32_t size, int32_t type, int32_t stride, java::nio::Buffer* pointer);

    public: void glViewport(int32_t x, int32_t y, int32_t width, int32_t height);

    public: void glBegin(int32_t i);

    public: void glEnd();

    public: void glVertex3f(float f, float f2, float f3);

    public: void glPolygonMode(int32_t i, int32_t i1);

};

            


        #endif //ORG_ALLBINARY_OPENGLES_JOGL10_H
