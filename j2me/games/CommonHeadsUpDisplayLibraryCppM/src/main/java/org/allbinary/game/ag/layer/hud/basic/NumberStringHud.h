
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

            #include <vector>
        
            #include "../../../../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NumberStringHud: public BasicHud, public PaintableInterface {

    private: PrimitiveLongUtil primitiveLongUtil;

    private: std::string prependString;

    private: std::vector<char> PREPEND_STRING;

    private: int32_t value;

    private: int32_t max;

    private: int32_t offset= 0;

    private: std::vector<char> valueString;

    private: int32_t valueTotalDigits= 0;

public: NumberStringHud(std::string prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor);

    public: void updateMeasurement(Graphics graphics);

    public: int32_t get();

    public: void add(int32_t value);

    public: void set(int32_t value);

    public: void reduce(int32_t value);

    public: void paint(Graphics graphics);

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H
