
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
        
#include <com/jogamp/opengl/GL.h>

      
#include <com/jogamp/opengl/GL2.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GL11.h"
#include "Buffer.h"
#include "FloatBuffer.h"
#include "IntBuffer.h"
//JOGLEToKhronosGL11
class JOGL11: public JOGL10, public javax::microedition::khronos::opengles::GL11 {

    private: GL2 gl11;

public: JOGL11(GL gl) : JOGL11(gl, gl){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: JOGL11(GL gl, com::jogamp::opengl::GL2 gl2) : JOGL10(gl, gl2){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->gl11= getJOGLGL();
    
}


    public: void glBindBuffer(int32_t target, int32_t buffer){
this->gl11.glBindBuffer(target, buffer);
    
}


    public: void glBufferData(int32_t target, int32_t size, java::nio::Buffer data, int32_t usage){
this->gl11.glBufferData(target, size, data, usage);
    
}


    public: void glBufferSubData(int32_t target, int32_t offset, int32_t size, java::nio::Buffer data){
this->gl11.glBufferSubData(target, offset, size, data);
    
}


    public: void glClipPlanef(int32_t plane, std::vector<float> equation, int32_t offset){
this->gl11.glClipPlanef(plane, equation, offset);
    
}


    public: void glClipPlanef(int32_t plane, java::nio::FloatBuffer equation){
this->gl11.glClipPlanef(plane, equation);
    
}


    public: void glColor4ub(int8_t red, int8_t green, int8_t blue, int8_t alpha){
this->gl11.glColor4ub(red, green, blue, alpha);
    
}


    public: void glColorPointer(int32_t size, int32_t type, int32_t stride, int32_t offset){
this->gl11.glColorPointer(size, type, stride, offset);
    
}


    public: void glDeleteBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset){
this->gl11.glDeleteBuffers(n, buffers, offset);
    
}


    public: void glDeleteBuffers(int32_t n, java::nio::IntBuffer buffers){
this->gl11.glDeleteBuffers(n, buffers);
    
}


    public: void glDrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset){
this->gl11.glDrawElements(mode, count, type, offset);
    
}


    public: void glGenBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset){
this->gl11.glGenBuffers(n, buffers, offset);
    
}


    public: void glGenBuffers(int32_t n, java::nio::IntBuffer buffers){
this->gl11.glGenBuffers(n, buffers);
    
}


    public: void glGetBufferParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this->gl11.glGetBufferParameteriv(target, pname, params, offset);
    
}


    public: void glGetBufferParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer params){
this->gl11.glGetBufferParameteriv(target, pname, params);
    
}


    public: void glGetClipPlanef(int32_t pname, std::vector<float> eqn, int32_t offset){
this->gl11.glGetClipPlanef(pname, eqn, offset);
    
}


    public: void glGetClipPlanef(int32_t pname, java::nio::FloatBuffer eqn){
this->gl11.glGetClipPlanef(pname, eqn);
    
}


    public: void glGetFloatv(int32_t pname, std::vector<float> params, int32_t offset){
this->gl11.glGetFloatv(pname, params, offset);
    
}


    public: void glGetFloatv(int32_t pname, java::nio::FloatBuffer params){
this->gl11.glGetFloatv(pname, params);
    
}


    public: void glGetLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset){
this->gl11.glGetLightfv(light, pname, params, offset);
    
}


    public: void glGetLightfv(int32_t light, int32_t pname, java::nio::FloatBuffer params){
this->gl11.glGetLightfv(light, pname, params);
    
}


    public: void glGetMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset){
this->gl11.glGetMaterialfv(face, pname, params, offset);
    
}


    public: void glGetMaterialfv(int32_t face, int32_t pname, java::nio::FloatBuffer params){
this->gl11.glGetMaterialfv(face, pname, params);
    
}


    public: void glGetTexEnviv(int32_t env, int32_t pname, std::vector<int32_t> params, int32_t offset){
this->gl11.glGetTexEnviv(env, pname, params, offset);
    
}


    public: void glGetTexEnviv(int32_t env, int32_t pname, java::nio::IntBuffer params){
this->gl11.glGetTexEnviv(env, pname, params);
    
}


    public: void glGetTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset){
this->gl11.glGetTexParameterfv(target, pname, params, offset);
    
}


    public: void glGetTexParameterfv(int32_t target, int32_t pname, java::nio::FloatBuffer params){
this->gl11.glGetTexParameterfv(target, pname, params);
    
}


    public: void glGetTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this->gl11.glGetTexParameteriv(target, pname, params, offset);
    
}


    public: void glGetTexParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer params){
this->gl11.glGetTexParameteriv(target, pname, params);
    
}


    public: bool glIsBuffer(int32_t buffer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl11.glIsBuffer(buffer);;
    
}


    public: bool glIsEnabled(int32_t cap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl11.glIsEnabled(cap);;
    
}


    public: bool glIsTexture(int32_t texture){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl11.glIsTexture(texture);;
    
}


    public: void glNormalPointer(int32_t type, int32_t stride, int32_t offset){
this->gl11.glNormalPointer(type, stride, offset);
    
}


    public: void glPointParameterf(int32_t pname, float param){
this->gl11.glPointParameterf(pname, param);
    
}


    public: void glPointParameterfv(int32_t pname, std::vector<float> params, int32_t offset){
this->gl11.glPointParameterfv(pname, params, offset);
    
}


    public: void glPointParameterfv(int32_t pname, java::nio::FloatBuffer params){
this->gl11.glPointParameterfv(pname, params);
    
}


    public: void glTexCoordPointer(int32_t size, int32_t type, int32_t stride, int32_t offset){
this->gl11.glTexCoordPointer(size, type, stride, offset);
    
}


    public: void glTexEnvi(int32_t target, int32_t pname, int32_t param){
this->gl11.glTexEnvi(target, pname, param);
    
}


    public: void glTexEnviv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this->gl11.glTexEnviv(target, pname, params, offset);
    
}


    public: void glTexEnviv(int32_t target, int32_t pname, java::nio::IntBuffer params){
this->gl11.glTexEnviv(target, pname, params);
    
}


    public: void glTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset){
this->gl11.glTexParameterfv(target, pname, params, offset);
    
}


    public: void glTexParameterfv(int32_t target, int32_t pname, java::nio::FloatBuffer params){
this->gl11.glTexParameterfv(target, pname, params);
    
}


    public: void glTexParameteri(int32_t target, int32_t pname, int32_t param){
this->gl11.glTexParameteri(target, pname, param);
    
}


    public: void glTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this->gl11.glTexParameteriv(target, pname, params, offset);
    
}


    public: void glTexParameteriv(int32_t target, int32_t pname, java::nio::IntBuffer params){
this->gl11.glTexParameteriv(target, pname, params);
    
}


    public: void glTexParameterxv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this->gl11.glTexParameteriv(target, pname, params, offset);
    
}


    public: void glVertexPointer(int32_t size, int32_t type, int32_t stride, int32_t offset){
this->gl11.glVertexPointer(size, type, stride, offset);
    
}


};

            

