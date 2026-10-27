
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class Anchor;
class CanvasStrings;
class DisplayInfoSingleton;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
#include <org/allbinary/graphics/paint/Paintable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //HTMLForJ2ME
class AboutPaintable: public Paintable, public UpdateMyFontInterface {

    public: static AboutPaintable* getInstance(std::vector<std::string> info, std::vector<std::string> developers);

    private: DisplayInfoSingleton* displayInfoSingleton;

    private: const std::string ABOUT;

    private: std::vector<std::string> info;

    private: std::vector<std::string> developers;

    private: std::vector<Paintable*> paintableArray;

    private: MyFontProcessor* myFontProcessor;

    private: int32_t charHeight= 0;

    private: int32_t aboutBeginWidth= 0;

    private: std::vector<int32_t> infoBeginWidth;

    private: std::vector<int32_t> developersBeginWidth;

    private: int32_t anchor;

private: AboutPaintable(std::vector<std::string> info, std::vector<std::string> developers);

    public: void updateMeasurement(Graphics* graphics);

    public: std::vector<Paintable*> getPaintableArrayInstance();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
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
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif

        #endif
    
