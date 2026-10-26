
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
        



        #ifndef ORG_ALLBINARY_OPENGLES_GLUTIL_H
        #define ORG_ALLBINARY_OPENGLES_GLUTIL_H

            #include <vector>
        
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

    private: static GLUtil instance() { return GLUtil(); }

    public: static GLUtil getInstance();

    private: const int32_t BYTES_PER_FLOAT = 4;

    public: const FloatBuffer NULL_FLOAT_BUFFER = ByteBuffer::allocateDirect(0).asFloatBuffer();

    public: FloatBuffer makeFloatBuffer3(float p_a, float p_b, float p_c);

    public: FloatBuffer makeFloatBuffer4(float p_a, float p_b, float p_c, float p_d);

    public: FloatBuffer makeFloatBuffer(ByteBuffer byteBuffer);

    public: Buffer position(Buffer buffer, int32_t newPosition);

    public: void rotateUVs(std::vector<float> uvs, float angleDegrees, float pivotU, float pivotV);

};

            


        #endif //ORG_ALLBINARY_OPENGLES_GLUTIL_H
