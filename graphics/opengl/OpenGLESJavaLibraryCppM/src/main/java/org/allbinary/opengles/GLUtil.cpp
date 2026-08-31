
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Math.h"
        
#include <java/nio/Buffer.h>

      
#include <java/nio/ByteBuffer.h>

      
#include <java/nio/ByteOrder.h>

      
#include <java/nio/FloatBuffer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GLUtil
            : public Object
         {
        

    private: static const instance: GLUtil = new GLUtil();

    public static GLUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GLUtil.instance;
    
}


    private: const BYTES_PER_FLOAT: int32_t = 4;

    public FloatBuffer makeFloatBuffer3(float p_a, float p_b, float p_c){

    b: ByteBuffer = ByteBuffer.allocateDirect(3 *this.BYTES_PER_FLOAT)!;;
    
b.order(ByteOrder.nativeOrder());
    

    buffer: FloatBuffer = b.asFloatBuffer()!;;
    
buffer.put(p_a);
    
buffer.put(p_b);
    
buffer.put(p_c);
    
this.position(buffer, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buffer;
    
}


    public FloatBuffer makeFloatBuffer4(float p_a, float p_b, float p_c, float p_d){

    b: ByteBuffer = ByteBuffer.allocateDirect(4 *this.BYTES_PER_FLOAT)!;;
    
b.order(ByteOrder.nativeOrder());
    

    buffer: FloatBuffer = b.asFloatBuffer()!;;
    
buffer.put(p_a);
    
buffer.put(p_b);
    
buffer.put(p_c);
    
buffer.put(p_d);
    
this.position(buffer, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buffer;
    
}


    public FloatBuffer makeFloatBuffer(ByteBuffer byteBuffer){

    b: ByteBuffer = ByteBuffer.allocateDirect(byteBuffer!.limit() *this.BYTES_PER_FLOAT)!;;
    
b.order(ByteOrder.nativeOrder());
    

    buffer: FloatBuffer = b.asFloatBuffer()!;;
    

    unsigned: int32_t= 0;;
    

    v: float= 0.0;;
    

        while(byteBuffer!.hasRemaining())
        {
unsigned= byteBuffer!.get()&0xFF;
    
v= (unsigned) /255;
    
buffer.put(v);
    
}

this.position(buffer, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buffer;
    
}


    public Buffer position(Buffer buffer, int32_t newPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buffer.position(newPosition);;
    
}


    public rotateUVs(std::vector<float> uvs, float angleDegrees, float pivotU, float pivotV){

    angleRad: double = Math.toRadians(angleDegrees)!;;
    

    cosA: double = Math.cos(angleRad)!;;
    

    sinA: double = Math.sin(angleRad)!;;
    




                        for (
    i: int32_t = 0;i < uvs.length; )
        {

    u: float = uvs[i]!;;
    

    v: float = uvs[i +1]!;;
    

    du: float = u -pivotU;;
    

    dv: float = v -pivotV;;
    

    ru: float = (du *cosA -dv *sinA) +pivotU;;
    

    rv: float = (du *sinA +dv *cosA) +pivotV;;
    
uvs[i]= ru;
    
uvs[i +1]= rv;
    
}

}


};

            

