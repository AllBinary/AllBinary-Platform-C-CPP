
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
class Font;
class Graphics;
#include <org/allbinary/game/graphics/hud/BasicHud.h>
class BasicHudFactory;
class BasicColor;
class MyFontProcessor;
#include <org/allbinary/graphics/paint/PaintableInterface.h>
class PrimitiveLongSingleton;
class PrimitiveLongUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NumberStringHud: public BasicHud, public virtual PaintableInterface {

    private: PrimitiveLongUtil* primitiveLongUtil;

    private: std::string prependString;

    private: std::vector<char> PREPEND_STRING;

    private: int32_t value;

    private: int32_t max;

    private: int32_t offset= 0;

    private: std::vector<char> valueString;

    private: int32_t valueTotalDigits= 0;

public: NumberStringHud(std::string prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: int32_t get();

    public: void add(int32_t value);

    public: void set(int32_t value);

    public: void reduce(int32_t value);

    public: void paint(Graphics* graphics);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void paintThreed(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/graphics/hud/BasicHud.h>)
#include <org/allbinary/game/graphics/hud/BasicHud.h>
#endif
#if __has_include(<org/allbinary/game/graphics/hud/BasicHudFactory.h>)
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongSingleton.h>)
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongUtil.h>)
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>
#endif

        #endif
    
