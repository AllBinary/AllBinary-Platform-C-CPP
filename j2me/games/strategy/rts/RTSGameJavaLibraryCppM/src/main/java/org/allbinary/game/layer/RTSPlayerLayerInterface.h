
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSPLAYERLAYERINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSPLAYERLAYERINTERFACE_H

#include <org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHudCompositeInterface.h>

      
#include <org/allbinary/game/input/BuildMenuCompositeInterface.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>

      
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingLayerInterface.h"
#include "PlayerOwnedRTSLayers.h"

class RTSPlayerLayerInterface: public GameNotificationHudCompositeInterface, public BuildMenuCompositeInterface, public PlayerGameInputCompositeInterface, public DestroyedEventListenerInterface, public TickableInterface, public PathFindingLayerInterface {

    Capital getCapital();

    RTSFormInput getRTSFormInput();

    void add(Sound sound);

    PlayerOwnedRTSLayers getPlayerOwnedRTSLayers();

    bool implmentsArtificialIntelligenceCompositeInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSPLAYERLAYERINTERFACE_H
