
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

class AdvancedRTSProperties
            : public Object
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
