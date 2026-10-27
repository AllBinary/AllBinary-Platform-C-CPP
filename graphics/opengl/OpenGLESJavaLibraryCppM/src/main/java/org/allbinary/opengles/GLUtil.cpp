
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
        
            #include "java/lang/Math.h"
        
#include <java/nio/Buffer.h>

      
#include <java/nio/ByteBuffer.h>

      
#include <java/nio/ByteOrder.h>

      
#include <java/nio/FloatBuffer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GLUtil
            : public Object
         {

    private: static GLUtil* instance() { static std::unique_ptr<GLUtil> value(new GLUtil()); return value.get(); }

    public: static GLUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GLUtil::instance();
    
}


    private: const int32_t BYTES_PER_FLOAT = 4;

    public: FloatBuffer* NULL_FLOAT_BUFFER = ByteBuffer::allocateDirect(0)->asFloatBuffer();

    public: FloatBuffer* makeFloatBuffer3(float p_a, float p_b, float p_c){

    ByteBuffer* b = ByteBuffer::allocateDirect(3 *this->BYTES_PER_FLOAT);;
    
b->order(ByteOrder::nativeOrder());
    

    FloatBuffer* buffer = b->asFloatBuffer();;
    
buffer->put(p_a);
    
buffer->put(p_b);
    
buffer->put(p_c);
    
this->position(buffer, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buffer;
    
}


    public: FloatBuffer* makeFloatBuffer4(float p_a, float p_b, float p_c, float p_d){

    ByteBuffer* b = ByteBuffer::allocateDirect(4 *this->BYTES_PER_FLOAT);;
    
b->order(ByteOrder::nativeOrder());
    

    FloatBuffer* buffer = b->asFloatBuffer();;
    
buffer->put(p_a);
    
buffer->put(p_b);
    
buffer->put(p_c);
    
buffer->put(p_d);
    
this->position(buffer, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buffer;
    
}


    public: FloatBuffer* makeFloatBuffer(ByteBuffer* byteBuffer){

    ByteBuffer* b = ByteBuffer::allocateDirect(byteBuffer->limit() *this->BYTES_PER_FLOAT);;
    
b->order(ByteOrder::nativeOrder());
    

    FloatBuffer* buffer = b->asFloatBuffer();;
    

    int32_t unsigned_= 0;;
    

    float v= 0.0;;
    

        while(byteBuffer->hasRemaining())
        {
unsigned_= (static_cast<int32_t>(byteBuffer->get()))&0xFF;
    
v= (unsigned_) /255;
    
buffer->put(v);
    
}

this->position(buffer, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buffer;
    
}


    public: Buffer* position(Buffer* buffer, int32_t newPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buffer->position(newPosition);;
    
}


    public: void rotateUVs(std::vector<float> uvs, float angleDegrees, float pivotU, float pivotV){

    double angleRad = Math::toRadians(angleDegrees);;
    

    double cosA = Math::cos(angleRad);;
    

    double sinA = Math::sin(angleRad);;
    




                        for (
    int32_t i = 0;i < uvs.size(); )
        {

    float u = uvs[i];;
    

    float v = uvs[i +1];;
    

    float du = u -pivotU;;
    

    float dv = v -pivotV;;
    

    float ru = (du *cosA -dv *sinA) +pivotU;;
    

    float rv = (du *sinA +dv *cosA) +pivotV;;
    
uvs[i]= ru;
    
uvs[i +1]= rv;
    
}

}


};

            

