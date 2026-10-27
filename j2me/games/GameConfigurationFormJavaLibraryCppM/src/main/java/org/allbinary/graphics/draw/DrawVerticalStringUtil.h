
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Font;
class Graphics;
class AndroidUtil;
class J2MEUtil;
class Anchor;
class OpenGLFeatureUtil;
class NullUtil;
class PreLogUtil;
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DrawVerticalStringUtil
            : public virtual Object
         {

    private: static DrawVerticalStringUtil* instance_owner();
    private: static DrawVerticalStringUtil* instance;

    public: static DrawVerticalStringUtil* getInstance();


            
    public: DrawVerticalStringUtil();
        
    private: const std::string EMPTY_STRING;

    private: int32_t anchor;

    private: int32_t charHeight= 0;

    private: int32_t offsetY= 0;

    private: std::vector<int32_t> offsetXArray;

    public: void updateMeasurement(Graphics* graphics, std::string string);

    public: void paintVerticle(Graphics* graphics, std::string string, int32_t x, int32_t y, int32_t anchor);

    public: void drawCenterString(Graphics* graphics, std::string string, int32_t offset, int32_t length, int32_t x, int32_t y);

    public: void drawCenterStrings(Graphics* graphics, std::vector<std::string> stringArray, int32_t maxWidth, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
