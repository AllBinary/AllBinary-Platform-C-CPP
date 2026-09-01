
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

            #include <vector>
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/ag/life/Life.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LivesHudWidget: public BasicHud, public PaintableInterface {

    private: Life lifeInterface;

    private: std::vector<int32_t> xArray;

    private: Animation animationInterface;

public: LivesHudWidget(Animation animationInterface, Life lifeInterface, int32_t location, int32_t direction);

    public: void updateMeasurement(Graphics graphics);

    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

    public: void setX(int32_t x);

    public: void paint(Graphics graphics);

    public: void paintThreed(Graphics graphics);

    public: Life getLifeInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H
