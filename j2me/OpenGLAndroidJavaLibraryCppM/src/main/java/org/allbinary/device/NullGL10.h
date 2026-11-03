
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>
#include <java/nio/Buffer.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/IntBuffer.h>
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullGL10
            : public virtual Object
        , public virtual GL10 {

    private: static NullGL10* NULL_GL10_owner();
    public: static NullGL10* NULL_GL10;


            
    public: NullGL10();
        
    public: void glActiveTexture(int32_t texture);

    public: void glAlphaFunc(int32_t func, float ref);

    public: void glAlphaFuncx(int32_t func, int32_t ref);

    public: void glBindTexture(int32_t target, int32_t texture);

    public: void glBlendFunc(int32_t sfactor, int32_t dfactor);

    public: void glClear(int32_t mask);

    public: void glClearColor(float red, float green, float blue, float alpha);

    public: void glClearColorx(int32_t red, int32_t green, int32_t blue, int32_t alpha);

    public: void glClearDepthf(float depth);

    public: void glClearDepthx(int32_t depth);

    public: void glClearStencil(int32_t s);

    public: void glClientActiveTexture(int32_t texture);

    public: void glColor4f(float red, float green, float blue, float alpha);

    public: void glColor4x(int32_t red, int32_t green, int32_t blue, int32_t alpha);

    public: void glColorMask(bool red, bool green, bool blue, bool alpha);

    public: void glColorPointer(int32_t size, int32_t type, int32_t stride, Buffer* pointer);

    public: void glCompressedTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, Buffer* data);

    public: void glCompressedTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t imageSize, Buffer* data);

    public: void glCopyTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

    public: void glCopyTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

    public: void glCullFace(int32_t mode);

    public: void glDeleteTextures(int32_t n, std::vector<int32_t> textures, int32_t offset);

    public: void glDeleteTextures(int32_t n, IntBuffer* textures);

    public: void glDepthFunc(int32_t func);

    public: void glDepthMask(bool flag);

    public: void glDepthRangef(float zNear, float zFar);

    public: void glDepthRangex(int32_t zNear, int32_t zFar);

    public: void glDisable(int32_t cap);

    public: void glDisableClientState(int32_t array);

    public: void glDrawArrays(int32_t mode, int32_t first, int32_t count);

    public: void glDrawElements(int32_t mode, int32_t count, int32_t type, Buffer* indices);

    public: void glEnable(int32_t cap);

    public: void glEnableClientState(int32_t array);

    public: void glFinish();

    public: void glFlush();

    public: void glFogf(int32_t pname, float param);

    public: void glFogfv(int32_t pname, std::vector<float> params, int32_t offset);

    public: void glFogfv(int32_t pname, FloatBuffer* params);

    public: void glFogx(int32_t pname, int32_t param);

    public: void glFogxv(int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glFogxv(int32_t pname, IntBuffer* params);

    public: void glFrontFace(int32_t mode);

    public: void glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar);

    public: void glFrustumx(int32_t left, int32_t right, int32_t bottom, int32_t top, int32_t zNear, int32_t zFar);

    public: void glGenTextures(int32_t n, std::vector<int32_t> textures, int32_t offset);

    public: void glGenTextures(int32_t n, IntBuffer* textures);

    public: int32_t glGetError();

    public: void glGetIntegerv(int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glGetIntegerv(int32_t pname, IntBuffer* params);

    public: std::string glGetString(int32_t name);

    public: void glHint(int32_t target, int32_t mode);

    public: void glLightModelf(int32_t pname, float param);

    public: void glLightModelfv(int32_t pname, std::vector<float> params, int32_t offset);

    public: void glLightModelfv(int32_t pname, FloatBuffer* params);

    public: void glLightModelx(int32_t pname, int32_t param);

    public: void glLightModelxv(int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glLightModelxv(int32_t pname, IntBuffer* params);

    public: void glLightf(int32_t light, int32_t pname, float param);

    public: void glLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glLightfv(int32_t light, int32_t pname, FloatBuffer* params);

    public: void glLightx(int32_t light, int32_t pname, int32_t param);

    public: void glLightxv(int32_t light, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glLightxv(int32_t light, int32_t pname, IntBuffer* params);

    public: void glLineWidth(float width);

    public: void glLineWidthx(int32_t width);

    public: void glLoadIdentity();

    public: void glLoadMatrixf(std::vector<float> m, int32_t offset);

    public: void glLoadMatrixf(FloatBuffer* m);

    public: void glLoadMatrixx(std::vector<int32_t> m, int32_t offset);

    public: void glLoadMatrixx(IntBuffer* m);

    public: void glLogicOp(int32_t opcode);

    public: void glMaterialf(int32_t face, int32_t pname, float param);

    public: void glMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glMaterialfv(int32_t face, int32_t pname, FloatBuffer* params);

    public: void glMaterialx(int32_t face, int32_t pname, int32_t param);

    public: void glMaterialxv(int32_t face, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glMaterialxv(int32_t face, int32_t pname, IntBuffer* params);

    public: void glMatrixMode(int32_t mode);

    public: void glMultMatrixf(std::vector<float> m, int32_t offset);

    public: void glMultMatrixf(FloatBuffer* m);

    public: void glMultMatrixx(std::vector<int32_t> m, int32_t offset);

    public: void glMultMatrixx(IntBuffer* m);

    public: void glMultiTexCoord4f(int32_t target, float s, float t, float r, float q);

    public: void glMultiTexCoord4x(int32_t target, int32_t s, int32_t t, int32_t r, int32_t q);

    public: void glNormal3f(float nx, float ny, float nz);

    public: void glNormal3x(int32_t nx, int32_t ny, int32_t nz);

    public: void glNormalPointer(int32_t type, int32_t stride, Buffer* pointer);

    public: void glOrthof(float left, float right, float bottom, float top, float zNear, float zFar);

    public: void glOrthox(int32_t left, int32_t right, int32_t bottom, int32_t top, int32_t zNear, int32_t zFar);

    public: void glPixelStorei(int32_t pname, int32_t param);

    public: void glPointSize(float size);

    public: void glPointSizex(int32_t size);

    public: void glPolygonOffset(float factor, float units);

    public: void glPolygonOffsetx(int32_t factor, int32_t units);

    public: void glPopMatrix();

    public: void glPushMatrix();

    public: void glReadPixels(int32_t x, int32_t y, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels);

    public: void glRotatef(float angle, float x, float y, float z);

    public: void glRotatex(int32_t angle, int32_t x, int32_t y, int32_t z);

    public: void glSampleCoverage(float value, bool invert);

    public: void glSampleCoveragex(int32_t value, bool invert);

    public: void glScalef(float x, float y, float z);

    public: void glScalex(int32_t x, int32_t y, int32_t z);

    public: void glScissor(int32_t x, int32_t y, int32_t width, int32_t height);

    public: void glShadeModel(int32_t mode);

    public: void glStencilFunc(int32_t func, int32_t ref, int32_t mask);

    public: void glStencilMask(int32_t mask);

    public: void glStencilOp(int32_t fail, int32_t zfail, int32_t zpass);

    public: void glTexCoordPointer(int32_t size, int32_t type, int32_t stride, Buffer* pointer);

    public: void glTexEnvf(int32_t target, int32_t pname, float param);

    public: void glTexEnvfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glTexEnvfv(int32_t target, int32_t pname, FloatBuffer* params);

    public: void glTexEnvx(int32_t target, int32_t pname, int32_t param);

    public: void glTexEnvxv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glTexEnvxv(int32_t target, int32_t pname, IntBuffer* params);

    public: void glTexImage2D(int32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, Buffer* pixels);

    public: void glTexParameterf(int32_t target, int32_t pname, float param);

    public: void glTexParameterx(int32_t target, int32_t pname, int32_t param);

    public: void glTexSubImage2D(int32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, int32_t format, int32_t type, Buffer* pixels);

    public: void glTranslatef(float x, float y, float z);

    public: void glTranslatex(int32_t x, int32_t y, int32_t z);

    public: void glVertexPointer(int32_t size, int32_t type, int32_t stride, Buffer* pointer);

    public: void glViewport(int32_t x, int32_t y, int32_t width, int32_t height);

};

            


        #endif //ORG_ALLBINARY_DEVICE_NULLGL10_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DEVICE_NULLGL10_H_COMPLETE)
        #define ORG_ALLBINARY_DEVICE_NULLGL10_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<java/nio/Buffer.h>)
#include <java/nio/Buffer.h>
#endif
#if __has_include(<java/nio/FloatBuffer.h>)
#include <java/nio/FloatBuffer.h>
#endif
#if __has_include(<java/nio/IntBuffer.h>)
#include <java/nio/IntBuffer.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
