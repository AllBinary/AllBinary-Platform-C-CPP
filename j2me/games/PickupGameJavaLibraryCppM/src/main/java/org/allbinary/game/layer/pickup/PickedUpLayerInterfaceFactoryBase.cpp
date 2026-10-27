
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORYBASE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORYBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"


PickedUpLayerInterfaceFactoryBase::PickedUpLayerInterfaceFactoryBase() {
        }
        auto PickedUpLayerInterfaceFactoryBase::NULL_PICKED_UP_LAYER_FACTORY_BASE_owner() -> PickedUpLayerInterfaceFactoryBase* { static std::unique_ptr<PickedUpLayerInterfaceFactoryBase> value(new PickedUpLayerInterfaceFactoryBase()); return value.get(); }
PickedUpLayerInterfaceFactoryBase* PickedUpLayerInterfaceFactoryBase::NULL_PICKED_UP_LAYER_FACTORY_BASE = PickedUpLayerInterfaceFactoryBase::NULL_PICKED_UP_LAYER_FACTORY_BASE_owner();

    auto PickedUpLayerInterfaceFactoryBase::getIconLayer() -> AllBinaryLayer*{



                            throw RuntimeException();
                    
}


    auto PickedUpLayerInterfaceFactoryBase::getAnimationInterface() -> Animation*{



                            throw RuntimeException();
                    
}


    auto PickedUpLayerInterfaceFactoryBase::getPickedUpLayerType() -> PickedUpLayerType*{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORYBASE_CPP
