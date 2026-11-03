
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPROPERTIES_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/AdvancedRTSProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/animation/transition/shake/NoShakeAnimationListener.h>

      
#include <org/allbinary/animation/transition/shake/ShakeAnimationListener.h>

      
#include <org/allbinary/animation/transition/shake/ShakeAnimationListenerFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/media/AllBinaryNoVibration.h>

      
#include <org/allbinary/media/AllBinaryVibration.h>

      
#include <org/allbinary/media/AllBinaryVibrationME.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/WaypointBehaviorBase.h"


    auto AdvancedRTSProperties::createPropertiesSimulated() -> AdvancedRTSProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AdvancedRTSProperties(NoShakeAnimationListener::NO_SHAKE_ANIMATION_LISTENER, AllBinaryNoVibration::NO_VIBRATION, 0, new WaypointBehaviorBase());
    
}


    auto AdvancedRTSProperties::createProperties() -> AdvancedRTSProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AdvancedRTSProperties(ShakeAnimationListenerFactory::getInstance(), AllBinaryVibration::getInstance(), JavaBoxes::value<int32_t>(GameConfigurationCentral::getInstance()->VIBRATION->getValue()) *100, new WaypointBehaviorBase());
    
}


AdvancedRTSProperties::AdvancedRTSProperties(ShakeAnimationListener* shakeListener, AllBinaryVibrationME* vibration, int32_t duration, TickableInterface* waypointBehaviorBase){
this->shakeListener= shakeListener;
    
this->vibration= vibration;
    
this->duration= duration;
    
this->waypointBehaviorBase= waypointBehaviorBase;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPROPERTIES_CPP
