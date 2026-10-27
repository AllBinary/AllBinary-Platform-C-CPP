
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
class Life;
#include <org/allbinary/game/graphics/hud/BasicHud.h>
class BasicColorFactory;
class DisplayChangeEvent;
#include <org/allbinary/graphics/paint/PaintableInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LivesHudWidget: public BasicHud, public PaintableInterface {

    private: Life* lifeInterface;

    private: std::vector<int32_t> xArray;

    private: Animation* animationInterface;

public: LivesHudWidget(Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction);

    public: void updateMeasurement(Graphics* graphics);

    public: void onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent);

    public: void setX(int32_t x);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

    public: Life* getLifeInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/game/ag/life/Life.h>)
#include <org/allbinary/game/ag/life/Life.h>
#endif
#if __has_include(<org/allbinary/game/graphics/hud/BasicHud.h>)
#include <org/allbinary/game/graphics/hud/BasicHud.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif

        #endif
    
