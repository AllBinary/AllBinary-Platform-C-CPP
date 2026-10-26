
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

            #include <vector>
        
            #include "java/lang/Exception.h"
        
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

    private: const std::vector<char> KILOMETERS_PER_HOUR_STR = [' ','k','m','/','h'];

    private: const int32_t totalChars = this->KILOMETERS_PER_HOUR_STR.length
                ;

    private: int32_t velocity;

    private: int32_t maxVelocity;

    private: std::vector<char> string = PrimitiveLongSingleton::getInstance().ZERO;

    private: int32_t totalDigits = 1;

    private: int32_t powerOfTenVelocity;

    private: PrimitiveLongUtil primitiveLongUtil;

    private: int32_t offset = 0;

    private: int32_t offset2 = 0;

public: VelocityWidget(int32_t powerOfTenVelocity, int32_t location, int32_t direction, BasicColor basicColor);

    public: void updateMeasurement(Graphics graphics);

    public: int32_t get();

    public: void add(int32_t value);

    public: void set(int32_t value);

    public: void reduce(int32_t value);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_H
