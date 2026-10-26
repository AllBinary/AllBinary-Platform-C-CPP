
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
        



        #ifndef ORG_ALLBINARY_MATH_FRAMEUTIL_H
        #define ORG_ALLBINARY_MATH_FRAMEUTIL_H

            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AngleFactory.h"

class FrameUtil
            : public Object
         {

    private: static FrameUtil instance() { return FrameUtil(); }

    public: static FrameUtil getInstance();

private: FrameUtil();

    public: int32_t getFrameForAngle(int16_t angle, int32_t angleIncrement);

    public: int32_t getFrameAngle(int32_t frame, int32_t angleIncrement);

    public: int32_t adjustAngleToFrameAngle(int32_t currentAngle);

};

            


        #endif //ORG_ALLBINARY_MATH_FRAMEUTIL_H
