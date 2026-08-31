
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
        
class NumberStringHud: public BasicHud: public PaintableInterface {
        

    private: const primitiveLongUtil: PrimitiveLongUtil;

    private: const prependString: string;

    private: const PREPEND_STRING: std::vector<char>;

    private: value: int32_t;

    private: max: int32_t;

    private: offset: int32_t= 0;

    private: valueString: std::vector<char>;

    private: valueTotalDigits: int32_t= 0;

public constructor (string prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor);

    public updateMeasurement(Graphics graphics);

    public int32_t get();

    public add(int32_t value);

    public set(int32_t value);

    public reduce(int32_t value);

    public paint(Graphics graphics);

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H
