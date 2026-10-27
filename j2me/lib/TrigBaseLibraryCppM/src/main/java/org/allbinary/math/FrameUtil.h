
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class JsMethod;
class JsConstructor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AngleFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FrameUtil
            : public virtual Object
         {

    private: static FrameUtil* instance_owner();
    private: static FrameUtil* instance;

    public: static FrameUtil* getInstance();

private: FrameUtil();

    public: int32_t getFrameForAngle(int16_t angle, int32_t angleIncrement);

    public: int32_t getFrameAngle(int32_t frame, int32_t angleIncrement);

    public: int32_t adjustAngleToFrameAngle(int32_t currentAngle);

};

            


        #endif //ORG_ALLBINARY_MATH_FRAMEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MATH_FRAMEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MATH_FRAMEUTIL_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsConstructor.h>)
#include <jsinterop/annotations/JsConstructor.h>
#endif
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif

        #endif
    
