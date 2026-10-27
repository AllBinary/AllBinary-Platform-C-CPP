
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
        



        #ifndef ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H
        #define ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class JsType;
class PreLogUtil;
class MathUtil;
class StringMaker;
class CommonLabels;
class CommonSeps;
class JsMethod;
class JsConstructor;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AngleFactory;
class PositionStrings;
class Angle;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoDecimalTrigTable
            : public virtual Object
         {

    private: static NoDecimalTrigTable* instance_owner();
    private: static NoDecimalTrigTable* instance;

    public: static NoDecimalTrigTable* getInstance();

    private: MathUtil* mathUtil;

    private: std::vector<int64_t> noDecimalSin;

    private: std::vector<int64_t> noDecimalCos;

    private: std::vector<int64_t> noDecimalTan;

private: NoDecimalTrigTable();

    public: int64_t sin(int32_t angle);

    public: int64_t cos(int32_t angle);

    public: int64_t tan(int32_t angle);

    public: int32_t SCALE = 10000;

                //@Throws(Exception.constructor)
            
    public: int16_t antiTan(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public: int16_t antiTanDebug(int32_t screenX, int32_t screenY, int32_t targetX, int32_t targetY);

};

            


        #endif //ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
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
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/math/PositionStrings.h")
#include "org/allbinary/math/PositionStrings.h"
#endif
#if __has_include("org/allbinary/math/Angle.h")
#include "org/allbinary/math/Angle.h"
#endif

        #endif
    
