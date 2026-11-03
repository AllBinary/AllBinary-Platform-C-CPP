
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H
        #define ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Font;
class Graphics;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DrawStringUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CanvasDrawLineString
            : public virtual Object
        , public virtual UpdateMyFontInterface {

    private: static CanvasDrawLineString* NULL_CANVAS_DRAW_LINE_STRING_owner();
    public: static CanvasDrawLineString* NULL_CANVAS_DRAW_LINE_STRING;

    private: DrawStringUtil* drawStringUtil;

    private: MyFontProcessor* myFontProcessor;

    private: int32_t x;

    private: int32_t y;

    private: int32_t fontHeight = 0;

public: CanvasDrawLineString(int32_t x, int32_t y);

    public: void updateMeasurement(Graphics* graphics);

    public: void paint(Graphics* graphics, std::string string, int32_t line);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include("org/allbinary/graphics/draw/DrawStringUtil.h")
#include "org/allbinary/graphics/draw/DrawStringUtil.h"
#endif

        #endif
    
