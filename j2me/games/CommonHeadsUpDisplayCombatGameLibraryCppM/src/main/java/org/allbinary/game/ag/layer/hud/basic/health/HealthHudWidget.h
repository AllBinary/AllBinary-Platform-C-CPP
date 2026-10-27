
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Animation;
#include <org/allbinary/game/graphics/hud/BasicHud.h>
class Health;
#include <org/allbinary/game/health/HealthListenerInterface.h>
class BasicColorFactory;
#include <org/allbinary/graphics/paint/PaintableInterface.h>
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
class NoTimeDelayHelper;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HealthHudWidget: public BasicHud, public PaintableInterface, public HealthListenerInterface {

    private: int32_t healthScale;

    /*protected*/ public: Animation* animationInterface;

    /*protected*/ public: Health* healthInterface;

    public: int32_t max= 0;

    private: std::vector<int32_t> xArray;

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

public: HealthHudWidget(Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction);

    private: void update();

    public: void setX(int32_t x);

    private: TimeDelayHelper* timeDelayHelper;

    private: TimeDelayHelper* slowBeatTimeDelayHelper;

    private: TimeDelayHelper* mediumBeatTimeDelayHelper;

    private: TimeDelayHelper* fastBeatTimeDelayHelper;

    public: void onHealthChange();

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/game/graphics/hud/BasicHud.h>)
#include <org/allbinary/game/graphics/hud/BasicHud.h>
#endif
#if __has_include(<org/allbinary/game/health/Health.h>)
#include <org/allbinary/game/health/Health.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthListenerInterface.h>)
#include <org/allbinary/game/health/HealthListenerInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelper.h>)
#include <org/allbinary/time/GameTickTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif
#if __has_include(<org/allbinary/time/NoTimeDelayHelper.h>)
#include <org/allbinary/time/NoTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif

        #endif
    
