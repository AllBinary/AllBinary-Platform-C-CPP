
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_H

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/health/HealthListenerInterface.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/NoTimeDelayHelper.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HealthHudWidget: public BasicHud: public PaintableInterface, public HealthListenerInterface {
        

    private: healthScale: int32_t;

    animationInterface: Animation;

    healthInterface: Health;

    max: int32_t= 0;

    private: xArray: std::vector<int32_t>;

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

public constructor (Animation animationInterface, Health healthInterface, int32_t location, int32_t direction);

    update();

    public setX(int32_t x);

    private: timeDelayHelper: TimeDelayHelper = NoTimeDelayHelper.SINGLETON;

    private: const slowBeatTimeDelayHelper: TimeDelayHelper = new TimeDelayHelper(1280);

    private: const mediumBeatTimeDelayHelper: TimeDelayHelper = new TimeDelayHelper(640);

    private: const fastBeatTimeDelayHelper: TimeDelayHelper = new TimeDelayHelper(320);

    public onHealthChange();

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_H
