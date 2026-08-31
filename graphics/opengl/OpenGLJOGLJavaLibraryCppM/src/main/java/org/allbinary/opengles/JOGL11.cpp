
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

public constructor (GL gl){
            this(gl, gl as com.jogamp.opengl.GL2);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public constructor (GL gl, com.jogamp.opengl.GL2 gl2){
            super(gl, gl2);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.gl11= getJOGLGL();
    
}


    public glBindBuffer(int32_t target, int32_t buffer){
this.gl11.glBindBuffer(target, buffer);
    
}


    public glBufferData(int32_t target, int32_t size, java.nio.Buffer data, int32_t usage){
this.gl11.glBufferData(target, size, data, usage);
    
}


    public glBufferSubData(int32_t target, int32_t offset, int32_t size, java.nio.Buffer data){
this.gl11.glBufferSubData(target, offset, size, data);
    
}


    public glClipPlanef(int32_t plane, std::vector<float> equation, int32_t offset){
this.gl11.glClipPlanef(plane, equation, offset);
    
}


    public glClipPlanef(int32_t plane, java.nio.FloatBuffer equation){
this.gl11.glClipPlanef(plane, equation);
    
}


    public glColor4ub(int8_t red, int8_t green, int8_t blue, int8_t alpha){
this.gl11.glColor4ub(red, green, blue, alpha);
    
}


    public glColorPointer(int32_t size, int32_t type, int32_t stride, int32_t offset){
this.gl11.glColorPointer(size, type, stride, offset);
    
}


    public glDeleteBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset){
this.gl11.glDeleteBuffers(n, buffers, offset);
    
}


    public glDeleteBuffers(int32_t n, java.nio.IntBuffer buffers){
this.gl11.glDeleteBuffers(n, buffers);
    
}


    public glDrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset){
this.gl11.glDrawElements(mode, count, type, offset);
    
}


    public glGenBuffers(int32_t n, std::vector<int32_t> buffers, int32_t offset){
this.gl11.glGenBuffers(n, buffers, offset);
    
}


    public glGenBuffers(int32_t n, java.nio.IntBuffer buffers){
this.gl11.glGenBuffers(n, buffers);
    
}


    public glGetBufferParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this.gl11.glGetBufferParameteriv(target, pname, params, offset);
    
}


    public glGetBufferParameteriv(int32_t target, int32_t pname, java.nio.IntBuffer params){
this.gl11.glGetBufferParameteriv(target, pname, params);
    
}


    public glGetClipPlanef(int32_t pname, std::vector<float> eqn, int32_t offset){
this.gl11.glGetClipPlanef(pname, eqn, offset);
    
}


    public glGetClipPlanef(int32_t pname, java.nio.FloatBuffer eqn){
this.gl11.glGetClipPlanef(pname, eqn);
    
}


    public glGetFloatv(int32_t pname, std::vector<float> params, int32_t offset){
this.gl11.glGetFloatv(pname, params, offset);
    
}


    public glGetFloatv(int32_t pname, java.nio.FloatBuffer params){
this.gl11.glGetFloatv(pname, params);
    
}


    public glGetLightfv(int32_t light, int32_t pname, std::vector<float> params, int32_t offset){
this.gl11.glGetLightfv(light, pname, params, offset);
    
}


    public glGetLightfv(int32_t light, int32_t pname, java.nio.FloatBuffer params){
this.gl11.glGetLightfv(light, pname, params);
    
}


    public glGetMaterialfv(int32_t face, int32_t pname, std::vector<float> params, int32_t offset){
this.gl11.glGetMaterialfv(face, pname, params, offset);
    
}


    public glGetMaterialfv(int32_t face, int32_t pname, java.nio.FloatBuffer params){
this.gl11.glGetMaterialfv(face, pname, params);
    
}


    public glGetTexEnviv(int32_t env, int32_t pname, std::vector<int32_t> params, int32_t offset){
this.gl11.glGetTexEnviv(env, pname, params, offset);
    
}


    public glGetTexEnviv(int32_t env, int32_t pname, java.nio.IntBuffer params){
this.gl11.glGetTexEnviv(env, pname, params);
    
}


    public glGetTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset){
this.gl11.glGetTexParameterfv(target, pname, params, offset);
    
}


    public glGetTexParameterfv(int32_t target, int32_t pname, java.nio.FloatBuffer params){
this.gl11.glGetTexParameterfv(target, pname, params);
    
}


    public glGetTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this.gl11.glGetTexParameteriv(target, pname, params, offset);
    
}


    public glGetTexParameteriv(int32_t target, int32_t pname, java.nio.IntBuffer params){
this.gl11.glGetTexParameteriv(target, pname, params);
    
}


    public bool glIsBuffer(int32_t buffer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gl11.glIsBuffer(buffer);;
    
}


    public bool glIsEnabled(int32_t cap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gl11.glIsEnabled(cap);;
    
}


    public bool glIsTexture(int32_t texture){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gl11.glIsTexture(texture);;
    
}


    public glNormalPointer(int32_t type, int32_t stride, int32_t offset){
this.gl11.glNormalPointer(type, stride, offset);
    
}


    public glPointParameterf(int32_t pname, float param){
this.gl11.glPointParameterf(pname, param);
    
}


    public glPointParameterfv(int32_t pname, std::vector<float> params, int32_t offset){
this.gl11.glPointParameterfv(pname, params, offset);
    
}


    public glPointParameterfv(int32_t pname, java.nio.FloatBuffer params){
this.gl11.glPointParameterfv(pname, params);
    
}


    public glTexCoordPointer(int32_t size, int32_t type, int32_t stride, int32_t offset){
this.gl11.glTexCoordPointer(size, type, stride, offset);
    
}


    public glTexEnvi(int32_t target, int32_t pname, int32_t param){
this.gl11.glTexEnvi(target, pname, param);
    
}


    public glTexEnviv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this.gl11.glTexEnviv(target, pname, params, offset);
    
}


    public glTexEnviv(int32_t target, int32_t pname, java.nio.IntBuffer params){
this.gl11.glTexEnviv(target, pname, params);
    
}


    public glTexParameterfv(int32_t target, int32_t pname, std::vector<float> params, int32_t offset){
this.gl11.glTexParameterfv(target, pname, params, offset);
    
}


    public glTexParameterfv(int32_t target, int32_t pname, java.nio.FloatBuffer params){
this.gl11.glTexParameterfv(target, pname, params);
    
}


    public glTexParameteri(int32_t target, int32_t pname, int32_t param){
this.gl11.glTexParameteri(target, pname, param);
    
}


    public glTexParameteriv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this.gl11.glTexParameteriv(target, pname, params, offset);
    
}


    public glTexParameteriv(int32_t target, int32_t pname, java.nio.IntBuffer params){
this.gl11.glTexParameteriv(target, pname, params);
    
}


    public glTexParameterxv(int32_t target, int32_t pname, std::vector<int32_t> params, int32_t offset){
this.gl11.glTexParameteriv(target, pname, params, offset);
    
}


    public glVertexPointer(int32_t size, int32_t type, int32_t stride, int32_t offset){
this.gl11.glVertexPointer(size, type, stride, offset);
    
}


};

            

