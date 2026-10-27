
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H
        #define ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Health;
class HealthBarAnimation;
class HealthBarTwodAnimation;
class HealthInterface;
#include <org/allbinary/game/health/HealthListenerInterface.h>
#include <org/allbinary/graphics/paint/Paintable.h>
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Life;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HealthIncludingLifeBar: public Paintable, public HealthListenerInterface {

                //@Throws(Exception.constructor)
            
    public: static HealthIncludingLifeBar* createHealthIncludingLifeBar(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, int32_t location, int32_t direction);

    private: HealthBarAnimation* animationInterface;

    private: Life* life;

    private: HealthInterface* healthInterface;

    /*protected*/ public: AllBinaryLayer* allbinaryLayer;

public: HealthIncludingLifeBar(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction);

    public: void onHealthChange();

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/health/Health.h>)
#include <org/allbinary/game/health/Health.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthBarAnimation.h>)
#include <org/allbinary/game/health/HealthBarAnimation.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthBarTwodAnimation.h>)
#include <org/allbinary/game/health/HealthBarTwodAnimation.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthInterface.h>)
#include <org/allbinary/game/health/HealthInterface.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthListenerInterface.h>)
#include <org/allbinary/game/health/HealthListenerInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/game/ag/life/Life.h")
#include "org/allbinary/game/ag/life/Life.h"
#endif

        #endif
    
