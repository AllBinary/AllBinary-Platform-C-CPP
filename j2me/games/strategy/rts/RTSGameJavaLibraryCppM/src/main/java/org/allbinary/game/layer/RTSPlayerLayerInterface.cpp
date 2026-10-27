
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHudCompositeInterface.h>

      
#include <org/allbinary/game/input/BuildMenuCompositeInterface.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>

      
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/PlayerOwnedRTSLayers.h"

class RTSPlayerLayerInterface: public GameNotificationHudCompositeInterface, public BuildMenuCompositeInterface, public PlayerGameInputCompositeInterface, public DestroyedEventListenerInterface, public TickableInterface, public PathFindingLayerInterface {

    public: virtual Capital* getCapital() = 0;

    public: virtual RTSFormInput* getRTSFormInput() = 0;

    public: virtual void add(Sound* sound) = 0;

    public: virtual PlayerOwnedRTSLayers* getPlayerOwnedRTSLayers() = 0;

    public: virtual bool implmentsArtificialIntelligenceCompositeInterface() = 0;

};

            

