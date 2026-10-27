
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class Anchor;
class BasicColor;
class DisplayInfoSingleton;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/paint/Paintable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SimpleTextPaintable: public Paintable, public UpdateMyFontInterface {

    private: DisplayInfoSingleton* displayInfoSingleton;

    private: MyFontProcessor* updateMyFontProcessor;

    private: MyFontProcessor* myFontProcessor;

    private: std::string text;

    private: BasicColor* basicColor;

    private: int32_t topScoresWidth = 0;

    private: int32_t fontHeight = 0;

    private: int32_t anchor;

public: SimpleTextPaintable(std::string text, BasicColor* basicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: void paint(Graphics* graphics);

    public: void setBasicColorP(BasicColor* basicColor);

    private: BasicColor* getBasicColorP();

    public: void setText(std::string text);

    public: std::string getText();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
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
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif

        #endif
    
