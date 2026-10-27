
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_GPOINT_H
        #define ORG_ALLBINARY_GRAPHICS_GPOINT_H

        
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
class StringMaker;
class PositionStrings;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GPoint
            : public virtual Object
         {

    public: static GPoint* getInstance(GPoint* point);

    private: static inline const std::string POINT_LABEL = "Point: ";

    public: static std::string toStringStatic(int32_t x, int32_t y, int32_t z);

    private: int32_t x;

    private: int32_t y;

    private: int32_t z;

public: GPoint(int32_t x, int32_t y, int32_t z);

    public: int32_t getX();

    public: int32_t getY();

    public: int32_t getZ();

    public: int32_t getRawX();

    public: int32_t getRawY();

    public: int32_t getRawZ();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_GPOINT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_GPOINT_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_GPOINT_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsConstructor.h>)
#include <jsinterop/annotations/JsConstructor.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/math/PositionStrings.h>)
#include <org/allbinary/math/PositionStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
