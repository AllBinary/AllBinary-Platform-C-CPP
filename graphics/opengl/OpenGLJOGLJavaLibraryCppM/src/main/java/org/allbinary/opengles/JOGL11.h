
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <com/jogamp/opengl/GL.h>

      
#include <com/jogamp/opengl/GL2.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/opengles/GL11.h"
#include "org/allbinary/opengles/Buffer.h"
#include "org/allbinary/opengles/FloatBuffer.h"
#include "org/allbinary/opengles/IntBuffer.h"
//JOGLEToKhronosGL11
class JOGL11: public JOGL10, public javax::microedition::khronos::opengles::GL11 {

    private: GL2* gl11;

public: JOGL11(GL* gl);

public: JOGL11(GL* gl, com::jogamp::opengl::GL2* gl2);

    public: void glBindBuffer(int32_t target, int32_t buffer);

    public: void glBufferData(int32_t target, int32_t size, java::nio::Buffer* data, int32_t usage);

    public: void glBufferSubData(int32_t target, int32_t offset, int32_t size, java::nio::Buffer* data);

    public: void glClipPlanef(int32_t plane, std::vector<float> equation, int32_t offset);

    public: void glClipPlanef(int32_t plane, java::nio::FloatBuffer* equation);

    public: void glColor4ub(int8_t red, int8_t green, int8_t blue, int8_t alpha);

    public: void glColorPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

    public: void glDeleteBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset);

    public: void glDeleteBuffers(int32_t n, java::nio::IntBuffer* buffers);

    public: void glDrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset);

    public: void glGenBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset);

    public: void glGenBuffers(int32_t n, java::nio::IntBuffer* buffers);

    public: void glGetBufferParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glGetBufferParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer* params);

    public: void glGetClipPlanef(int32_t pname, std::vector<float> eqn, int32_t offset);

    public: void glGetClipPlanef(int32_t pname, java::nio::FloatBuffer* eqn);

    public: void glGetFloatv(int32_t pname, std::vector<float> params, int32_t offset);

    public: void glGetFloatv(int32_t pname, java::nio::FloatBuffer* params);

    public: void glGetLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glGetLightfv(int32_t light, int32_t pname, java::nio::FloatBuffer* params);

    public: void glGetMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glGetMaterialfv(int32_t face, int32_t pname, java::nio::FloatBuffer* params);

    public: void glGetTexEnviv(int32_t env, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glGetTexEnviv(int32_t env, int32_t pname, java::nio::IntBuffer* params);

    public: void glGetTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glGetTexParameterfv(int32_t target, int32_t pname, java::nio::FloatBuffer* params);

    public: void glGetTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glGetTexParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer* params);

    public: bool glIsBuffer(int32_t buffer);

    public: bool glIsEnabled(int32_t cap);

    public: bool glIsTexture(int32_t texture);

    public: void glNormalPointer(int32_t type, int32_t stride, int32_t offset);

    public: void glPointParameterf(int32_t pname, float param);

    public: void glPointParameterfv(int32_t pname, std::vector<float> params, int32_t offset);

    public: void glPointParameterfv(int32_t pname, java::nio::FloatBuffer* params);

    public: void glTexCoordPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

    public: void glTexEnvi(int32_t target, int32_t pname, int32_t param);

    public: void glTexEnviv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glTexEnviv(int32_t target, int32_t pname, java::nio::IntBuffer* params);

    public: void glTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset);

    public: void glTexParameterfv(int32_t target, int32_t pname, java::nio::FloatBuffer* params);

    public: void glTexParameteri(int32_t target, int32_t pname, int32_t param);

    public: void glTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glTexParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer* params);

    public: void glTexParameterxv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset);

    public: void glVertexPointer(int32_t size, int32_t type, int32_t stride, int32_t offset);

};

            


        #endif //ORG_ALLBINARY_OPENGLES_JOGL11_H
