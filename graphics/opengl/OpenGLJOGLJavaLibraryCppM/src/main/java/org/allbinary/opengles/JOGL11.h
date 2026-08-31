
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
        



        #ifndef ORG_ALLBINARY_OPENGLES_JOGL11_H
        #define ORG_ALLBINARY_OPENGLES_JOGL11_H

#include <com/jogamp/opengl/GL.h>

      
#include <com/jogamp/opengl/GL2.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GL11.h"
#include "Buffer.h"
#include "FloatBuffer.h"
#include "IntBuffer.h"
//JOGLEToKhronosGL11
class JOGL11: public JOGL10: public javax.microedition.khronos.opengles.GL11 {
        

    private: const gl11: GL2;

public constructor (GL gl);

public constructor (GL gl, com.jogamp.opengl.GL2 gl2);

    public glBindBuffer(int32_t target, int32_t buffer);

    public glBufferData(int32_t target, int32_t size, java.nio.Buffer data, int32_t usage);

    public glBufferSubData(int32_t target, int32_t offset, int32_t size, java.nio.Buffer data);

    public glClipPlanef(int32_t plane, std::vector<float> equation, int32_t offset);

    public glClipPlanef(int32_t plane, java.nio.FloatBuffer equation);

    public glColor4ub(int8_t red, int8_t green, int8_t blue, int8_t alpha);

    public glColorPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

    public glDeleteBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset);

    public glDeleteBuffers(int32_t n, java.nio.IntBuffer buffers);

    public glDrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset);

    public glGenBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset);

    public glGenBuffers(int32_t n, java.nio.IntBuffer buffers);

    public glGetBufferParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public glGetBufferParameteriv(int32_t target, int32_t pname, java.nio.IntBuffer params);

    public glGetClipPlanef(int32_t pname, std::vector<float> eqn, int32_t offset);

    public glGetClipPlanef(int32_t pname, java.nio.FloatBuffer eqn);

    public glGetFloatv(int32_t pname, std::vector<float> params, int32_t offset);

    public glGetFloatv(int32_t pname, java.nio.FloatBuffer params);

    public glGetLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset);

    public glGetLightfv(int32_t light, int32_t pname, java.nio.FloatBuffer params);

    public glGetMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset);

    public glGetMaterialfv(int32_t face, int32_t pname, java.nio.FloatBuffer params);

    public glGetTexEnviv(int32_t env, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public glGetTexEnviv(int32_t env, int32_t pname, java.nio.IntBuffer params);

    public glGetTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    public glGetTexParameterfv(int32_t target, int32_t pname, java.nio.FloatBuffer params);

    public glGetTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public glGetTexParameteriv(int32_t target, int32_t pname, java.nio.IntBuffer params);

    public bool glIsBuffer(int32_t buffer);

    public bool glIsEnabled(int32_t cap);

    public bool glIsTexture(int32_t texture);

    public glNormalPointer(int32_t type, int32_t stride, int32_t offset);

    public glPointParameterf(int32_t pname, float param);

    public glPointParameterfv(int32_t pname, std::vector<float> params, int32_t offset);

    public glPointParameterfv(int32_t pname, java.nio.FloatBuffer params);

    public glTexCoordPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

    public glTexEnvi(int32_t target, int32_t pname, int32_t param);

    public glTexEnviv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public glTexEnviv(int32_t target, int32_t pname, java.nio.IntBuffer params);

    public glTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    public glTexParameterfv(int32_t target, int32_t pname, java.nio.FloatBuffer params);

    public glTexParameteri(int32_t target, int32_t pname, int32_t param);

    public glTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public glTexParameteriv(int32_t target, int32_t pname, java.nio.IntBuffer params);

    public glTexParameterxv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public glVertexPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

};

            


        #endif //ORG_ALLBINARY_OPENGLES_JOGL11_H
