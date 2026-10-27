
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEINFO_H
        #define ORG_ALLBINARY_MATH_ANGLEINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class StringMaker;
class StringUtil;
class CommonSeps;
class JsMethod;
class JsConstructor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AngleIncrementInfo;
class AngleIncrementInfoFactory;
class FrameUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AngleInfo
            : public virtual Object
         {

    public: static AngleInfo* getInstance(int16_t angleIncrement);

    private: static inline const std::string ANGLE = "Angle: ";

    private: AngleIncrementInfo* angleIncrementInfo;

    private: int16_t angle = 0;

private: AngleInfo(AngleIncrementInfo* angleIncrementInfo);

    private: FrameUtil* frameUtil;

    public: void adjustAngle(int32_t frame);

    public: int16_t getAngle();

    public: void setAngle(int16_t angle);

    public: AngleIncrementInfo* getAngleIncrementInfo();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MATH_ANGLEINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MATH_ANGLEINFO_H_COMPLETE)
        #define ORG_ALLBINARY_MATH_ANGLEINFO_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsConstructor.h>)
#include <jsinterop/annotations/JsConstructor.h>
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfoFactory.h")
#include "org/allbinary/math/AngleIncrementInfoFactory.h"
#endif
#if __has_include("org/allbinary/math/FrameUtil.h")
#include "org/allbinary/math/FrameUtil.h"
#endif

        #endif
    
