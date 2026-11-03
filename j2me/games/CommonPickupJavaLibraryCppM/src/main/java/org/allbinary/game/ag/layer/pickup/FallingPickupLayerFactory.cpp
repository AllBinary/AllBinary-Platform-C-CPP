
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYERFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/pickup/FallingPickupLayerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/pickup/FallingPickupLayer.h"


FallingPickupLayerFactory::FallingPickupLayerFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto FallingPickupLayerFactory::getInstance() -> AllBinaryLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new FallingPickupLayer(RemoteInfo::REMOTE_INFO);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYERFACTORY_CPP
