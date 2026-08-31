
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_H
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VelocityWidget: public BasicHud {
        

    private: const KILOMETERS_PER_HOUR_STR: std::vector<char> = [' ','k','m','/','h'];

    private: const totalChars: int32_t = this.KILOMETERS_PER_HOUR_STR.length
                ;

    private: velocity: int32_t;

    private: maxVelocity: int32_t;

    private: string: std::vector<char> = PrimitiveLongSingleton.getInstance()!.ZERO;

    private: totalDigits: int32_t = 1;

    private: const powerOfTenVelocity: int32_t;

    private: const primitiveLongUtil: PrimitiveLongUtil;

    private: offset: int32_t = 0;

    private: offset2: int32_t = 0;

public constructor (int32_t powerOfTenVelocity, int32_t location, int32_t direction, BasicColor basicColor);

    public updateMeasurement(Graphics graphics);

    public int32_t get();

    public add(int32_t value);

    public set(int32_t value);

    public reduce(int32_t value);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_H
