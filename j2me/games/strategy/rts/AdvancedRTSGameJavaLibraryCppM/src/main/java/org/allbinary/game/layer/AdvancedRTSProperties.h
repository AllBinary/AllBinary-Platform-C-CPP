
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPROPERTIES_H
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPROPERTIES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NoShakeAnimationListener;
class ShakeAnimationListener;
class ShakeAnimationListenerFactory;
class GameConfigurationCentral;
class TickableInterface;
class AllBinaryNoVibration;
class AllBinaryVibration;
class AllBinaryVibrationME;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class WaypointBehaviorBase;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvancedRTSProperties
            : public virtual Object
         {

    public: static AdvancedRTSProperties* createPropertiesSimulated();

    public: static AdvancedRTSProperties* createProperties();

    public: ShakeAnimationListener* shakeListener;

    public: AllBinaryVibrationME* vibration;

    public: int32_t duration;

    public: TickableInterface* waypointBehaviorBase;

public: AdvancedRTSProperties(ShakeAnimationListener* shakeListener, AllBinaryVibrationME* vibration, int32_t duration, TickableInterface* waypointBehaviorBase);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPROPERTIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPROPERTIES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPROPERTIES_H_COMPLETE
        #if __has_include(<org/allbinary/animation/transition/shake/NoShakeAnimationListener.h>)
#include <org/allbinary/animation/transition/shake/NoShakeAnimationListener.h>
#endif
#if __has_include(<org/allbinary/animation/transition/shake/ShakeAnimationListener.h>)
#include <org/allbinary/animation/transition/shake/ShakeAnimationListener.h>
#endif
#if __has_include(<org/allbinary/animation/transition/shake/ShakeAnimationListenerFactory.h>)
#include <org/allbinary/animation/transition/shake/ShakeAnimationListenerFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationCentral.h>)
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>
#endif
#if __has_include(<org/allbinary/game/tick/TickableInterface.h>)
#include <org/allbinary/game/tick/TickableInterface.h>
#endif
#if __has_include(<org/allbinary/media/AllBinaryNoVibration.h>)
#include <org/allbinary/media/AllBinaryNoVibration.h>
#endif
#if __has_include(<org/allbinary/media/AllBinaryVibration.h>)
#include <org/allbinary/media/AllBinaryVibration.h>
#endif
#if __has_include(<org/allbinary/media/AllBinaryVibrationME.h>)
#include <org/allbinary/media/AllBinaryVibrationME.h>
#endif
#if __has_include("org/allbinary/game/layer/WaypointBehaviorBase.h")
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#endif

        #endif
    
