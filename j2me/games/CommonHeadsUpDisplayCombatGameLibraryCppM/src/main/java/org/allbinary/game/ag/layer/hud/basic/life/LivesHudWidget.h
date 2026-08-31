
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/ag/life/Life.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LivesHudWidget: public BasicHud: public PaintableInterface {
        

    private: const lifeInterface: Life;

    private: const xArray: std::vector<int32_t>;

    private: const animationInterface: Animation;

public constructor (Animation animationInterface, Life lifeInterface, int32_t location, int32_t direction);

    public updateMeasurement(Graphics graphics);

    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

    public setX(int32_t x);

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

    public Life getLifeInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H
