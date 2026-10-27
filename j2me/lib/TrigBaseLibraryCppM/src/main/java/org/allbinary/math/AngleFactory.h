
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEFACTORY_H
        #define ORG_ALLBINARY_MATH_ANGLEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class JsType;
class LogUtil;
class StringMaker;
class CommonPhoneStrings;
class CommonSeps;
class CommonStrings;
class JsMethod;
class JsConstructor;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Angle;
class NamedAngle;
class FrameUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AngleFactory
            : public virtual Object
         {

    private: static AngleFactory* instance_owner();
    private: static AngleFactory* instance;

    public: static AngleFactory* getInstance();

    public: static void main(std::vector<std::string> args);

    /*protected*/ public: LogUtil* logUtil;

    public: const int16_t TOTAL_ANGLE = 360;

    public: const int16_t QUARTER_TOTAL_ANGLE = 90;

    private: std::vector<Angle*> angleArray;

    private: const int16_t NEGATIVE_ONE =  -1;

    public: NamedAngle* NOT_ANGLE;

    public: NamedAngle* DOWN;

    public: NamedAngle* UP;

    public: NamedAngle* LEFT;

    public: NamedAngle* RIGHT;

public: AngleFactory();

    private: FrameUtil* frameUtil;

    public: Angle* getAt(int32_t index);

    public: Angle* getClosestDirection(int32_t angle);

    public: Angle* getGeneralDirection();

};

            


        #endif //ORG_ALLBINARY_MATH_ANGLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MATH_ANGLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MATH_ANGLEFACTORY_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
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
#if __has_include("org/allbinary/math/Angle.h")
#include "org/allbinary/math/Angle.h"
#endif
#if __has_include("org/allbinary/math/NamedAngle.h")
#include "org/allbinary/math/NamedAngle.h"
#endif
#if __has_include("org/allbinary/math/FrameUtil.h")
#include "org/allbinary/math/FrameUtil.h"
#endif

        #endif
    
