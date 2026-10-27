
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
        



        #ifndef ORG_ALLBINARY_OPENGLES_JOGL11_CPP
        #define ORG_ALLBINARY_OPENGLES_JOGL11_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/opengles/JOGL11.h"
        

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

JOGL11::JOGL11(GL* gl) : JOGL11(gl, dynamic_cast<com::jogamp::opengl::GL2*>(gl)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


JOGL11::JOGL11(GL* gl, com::jogamp::opengl::GL2* gl2) : JOGL10(gl, gl2){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->gl11= getJOGLGL();
    
}


    auto JOGL11::glBindBuffer(int32_t target, int32_t buffer) -> void{
this->gl11->glBindBuffer(target, buffer);
    
}


    auto JOGL11::glBufferData(int32_t target, int32_t size, java::nio::Buffer* data, int32_t usage) -> void{
this->gl11->glBufferData(target, size, data, usage);
    
}


    auto JOGL11::glBufferSubData(int32_t target, int32_t offset, int32_t size, java::nio::Buffer* data) -> void{
this->gl11->glBufferSubData(target, offset, size, data);
    
}


    auto JOGL11::glClipPlanef(int32_t plane, std::vector<float> equation, int32_t offset) -> void{
this->gl11->glClipPlanef(plane, equation, offset);
    
}


    auto JOGL11::glClipPlanef(int32_t plane, java::nio::FloatBuffer* equation) -> void{
this->gl11->glClipPlanef(plane, equation);
    
}


    auto JOGL11::glColor4ub(int8_t red, int8_t green, int8_t blue, int8_t alpha) -> void{
this->gl11->glColor4ub(red, green, blue, alpha);
    
}


    auto JOGL11::glColorPointer(int32_t size, int32_t type, int32_t stride, int32_t offset) -> void{
this->gl11->glColorPointer(size, type, stride, offset);
    
}


    auto JOGL11::glDeleteBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset) -> void{
this->gl11->glDeleteBuffers(n, buffers, offset);
    
}


    auto JOGL11::glDeleteBuffers(int32_t n, java::nio::IntBuffer* buffers) -> void{
this->gl11->glDeleteBuffers(n, buffers);
    
}


    auto JOGL11::glDrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset) -> void{
this->gl11->glDrawElements(mode, count, type, offset);
    
}


    auto JOGL11::glGenBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset) -> void{
this->gl11->glGenBuffers(n, buffers, offset);
    
}


    auto JOGL11::glGenBuffers(int32_t n, java::nio::IntBuffer* buffers) -> void{
this->gl11->glGenBuffers(n, buffers);
    
}


    auto JOGL11::glGetBufferParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset) -> void{
this->gl11->glGetBufferParameteriv(target, pname, params, offset);
    
}


    auto JOGL11::glGetBufferParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer* params) -> void{
this->gl11->glGetBufferParameteriv(target, pname, params);
    
}


    auto JOGL11::glGetClipPlanef(int32_t pname, std::vector<float> eqn, int32_t offset) -> void{
this->gl11->glGetClipPlanef(pname, eqn, offset);
    
}


    auto JOGL11::glGetClipPlanef(int32_t pname, java::nio::FloatBuffer* eqn) -> void{
this->gl11->glGetClipPlanef(pname, eqn);
    
}


    auto JOGL11::glGetFloatv(int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl11->glGetFloatv(pname, params, offset);
    
}


    auto JOGL11::glGetFloatv(int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl11->glGetFloatv(pname, params);
    
}


    auto JOGL11::glGetLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl11->glGetLightfv(light, pname, params, offset);
    
}


    auto JOGL11::glGetLightfv(int32_t light, int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl11->glGetLightfv(light, pname, params);
    
}


    auto JOGL11::glGetMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl11->glGetMaterialfv(face, pname, params, offset);
    
}


    auto JOGL11::glGetMaterialfv(int32_t face, int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl11->glGetMaterialfv(face, pname, params);
    
}


    auto JOGL11::glGetTexEnviv(int32_t env, int32_t pname, std::vector<int32_t> params, int32_t offset) -> void{
this->gl11->glGetTexEnviv(env, pname, params, offset);
    
}


    auto JOGL11::glGetTexEnviv(int32_t env, int32_t pname, java::nio::IntBuffer* params) -> void{
this->gl11->glGetTexEnviv(env, pname, params);
    
}


    auto JOGL11::glGetTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl11->glGetTexParameterfv(target, pname, params, offset);
    
}


    auto JOGL11::glGetTexParameterfv(int32_t target, int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl11->glGetTexParameterfv(target, pname, params);
    
}


    auto JOGL11::glGetTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset) -> void{
this->gl11->glGetTexParameteriv(target, pname, params, offset);
    
}


    auto JOGL11::glGetTexParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer* params) -> void{
this->gl11->glGetTexParameteriv(target, pname, params);
    
}


    auto JOGL11::glIsBuffer(int32_t buffer) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl11->glIsBuffer(buffer);;
    
}


    auto JOGL11::glIsEnabled(int32_t cap) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl11->glIsEnabled(cap);;
    
}


    auto JOGL11::glIsTexture(int32_t texture) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl11->glIsTexture(texture);;
    
}


    auto JOGL11::glNormalPointer(int32_t type, int32_t stride, int32_t offset) -> void{
this->gl11->glNormalPointer(type, stride, offset);
    
}


    auto JOGL11::glPointParameterf(int32_t pname, float param) -> void{
this->gl11->glPointParameterf(pname, param);
    
}


    auto JOGL11::glPointParameterfv(int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl11->glPointParameterfv(pname, params, offset);
    
}


    auto JOGL11::glPointParameterfv(int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl11->glPointParameterfv(pname, params);
    
}


    auto JOGL11::glTexCoordPointer(int32_t size, int32_t type, int32_t stride, int32_t offset) -> void{
this->gl11->glTexCoordPointer(size, type, stride, offset);
    
}


    auto JOGL11::glTexEnvi(int32_t target, int32_t pname, int32_t param) -> void{
this->gl11->glTexEnvi(target, pname, param);
    
}


    auto JOGL11::glTexEnviv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset) -> void{
this->gl11->glTexEnviv(target, pname, params, offset);
    
}


    auto JOGL11::glTexEnviv(int32_t target, int32_t pname, java::nio::IntBuffer* params) -> void{
this->gl11->glTexEnviv(target, pname, params);
    
}


    auto JOGL11::glTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset) -> void{
this->gl11->glTexParameterfv(target, pname, params, offset);
    
}


    auto JOGL11::glTexParameterfv(int32_t target, int32_t pname, java::nio::FloatBuffer* params) -> void{
this->gl11->glTexParameterfv(target, pname, params);
    
}


    auto JOGL11::glTexParameteri(int32_t target, int32_t pname, int32_t param) -> void{
this->gl11->glTexParameteri(target, pname, param);
    
}


    auto JOGL11::glTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset) -> void{
this->gl11->glTexParameteriv(target, pname, params, offset);
    
}


    auto JOGL11::glTexParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer* params) -> void{
this->gl11->glTexParameteriv(target, pname, params);
    
}


    auto JOGL11::glTexParameterxv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset) -> void{
this->gl11->glTexParameteriv(target, pname, params, offset);
    
}


    auto JOGL11::glVertexPointer(int32_t size, int32_t type, int32_t stride, int32_t offset) -> void{
this->gl11->glVertexPointer(size, type, stride, offset);
    
}




        #endif //ORG_ALLBINARY_OPENGLES_JOGL11_CPP
