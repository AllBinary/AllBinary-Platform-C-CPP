
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
        #include "WaypointBehaviorBase.h"

class AdvancedRTSProperties
            : public Object
         {

    public: static AdvancedRTSProperties createPropertiesSimulated(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdvancedRTSProperties(NoShakeAnimationListener::NO_SHAKE_ANIMATION_LISTENER, AllBinaryNoVibration::NO_VIBRATION, 0, WaypointBehaviorBase());
    
}


    public: static AdvancedRTSProperties createProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdvancedRTSProperties(ShakeAnimationListenerFactory::getInstance(), AllBinaryVibration::getInstance(), GameConfigurationCentral::getInstance().VIBRATION.getValue().intValue() *100, WaypointBehaviorBase());
    
}


    public: ShakeAnimationListener shakeListener;

    public: AllBinaryVibrationME vibration;

    public: int32_t duration;

    public: TickableInterface waypointBehaviorBase;

public: AdvancedRTSProperties(ShakeAnimationListener shakeListener, AllBinaryVibrationME vibration, int32_t duration, TickableInterface waypointBehaviorBase){
this->shakeListener= shakeListener;
    
this->vibration= vibration;
    
this->duration= duration;
    
this->waypointBehaviorBase= waypointBehaviorBase;
    
}


};

            

