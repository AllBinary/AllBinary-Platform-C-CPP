
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYER_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickupLayer.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FallingPickupLayer: public PickupLayer, public TickableInterface {

    private: static inline const std::string NAME = "FallingPickupLayer";

public: FallingPickupLayer(RemoteInfo* remoteInfo);

    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: bool implmentsTickableInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYER_H
