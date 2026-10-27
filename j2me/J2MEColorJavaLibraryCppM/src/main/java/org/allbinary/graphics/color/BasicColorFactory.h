
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class StringUtil;
class JsMethod;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicColor;
class BasicColorUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicColorFactory
            : public virtual Object
         {

    private: static BasicColorFactory* instance_owner();
    private: static BasicColorFactory* instance;

    public: static BasicColorFactory* getInstance();


            
    public: BasicColorFactory();
        
    public: BasicColor* createInstance(int32_t value);

    public: BasicColor* createInstanceA(int32_t alphaValue, int32_t value);

    public: BasicColor* createInstanceAN(int32_t alphaValue, int32_t value, std::string name);

    public: BasicColor* createInstanceARGB(int32_t alphaValue, int32_t r, int32_t g, int32_t b, std::string name);

    public: BasicColor* NULL_COLOR;

    public: BasicColor* TAN;

    public: BasicColor* SKIN_PINK;

    public: BasicColor* RED;

    public: BasicColor* LIGHT_RED;

    public: BasicColor* DARK_GREEN;

    public: BasicColor* GREEN;

    public: BasicColor* LIGHT_GREEN;

    public: BasicColor* PURPLE;

    public: BasicColor* BLUE;

    public: BasicColor* LIGHT_BLUE;

    public: BasicColor* VERY_LIGHT_BLUE;

    public: BasicColor* PUCE;

    public: BasicColor* AQUA;

    public: BasicColor* YELLOW;

    public: BasicColor* PINK;

    public: BasicColor* BLACK;

    public: BasicColor* GREY;

    public: BasicColor* LIGHT_GREY;

    public: BasicColor* DARK_GREY;

    public: BasicColor* ORANGE;

    public: BasicColor* BROWN;

    public: BasicColor* WHITE;

    public: BasicColor* TRANSPARENT_COLOR;

    public: BasicColor* TRANSPARENT_GREY;

    public: BasicColor* TRANSPARENT_BLACK;

    public: BasicColor* TRANSPARENT_RED;

    public: BasicColor* CLEAR_COLOR;

    public: BasicColor* BORDER_COLOR;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorUtil.h")
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#endif

        #endif
    
