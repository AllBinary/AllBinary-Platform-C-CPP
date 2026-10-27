
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H
        #define ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class JsType;
class SmallIntegerSingletonFactory;
class StringMaker;
class JsProperty;
class JsMethod;
class JsConstructor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AngleFactory;
class FrameUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AngleIncrementInfo
            : public virtual Object
         {

    private: static inline const std::string INCREMENT = "Inc: ";

    private: int16_t angleIncrement;

    public: int32_t DOWN_FRAME;

    public: int32_t UP_FRAME;

    public: int32_t LEFT_FRAME;

    public: int32_t RIGHT_FRAME;

public: AngleIncrementInfo(int16_t angleIncrement);

    private: FrameUtil* frameUtil;

    public: int32_t getFrameAngle(int32_t frame);

    public: int16_t getAngleIncrement();

    public: std::string toString();

    public: int32_t getClosestGeneralDirection(int16_t angle);

};

            


        #endif //ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H_COMPLETE)
        #define ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
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
#if __has_include("org/allbinary/math/FrameUtil.h")
#include "org/allbinary/math/FrameUtil.h"
#endif

        #endif
    
