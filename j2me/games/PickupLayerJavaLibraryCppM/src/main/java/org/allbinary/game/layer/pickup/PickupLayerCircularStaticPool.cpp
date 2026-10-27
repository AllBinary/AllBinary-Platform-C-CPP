
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/PickupLayerCircularStaticPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickupLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"

auto PickupLayerCircularStaticPool::SINGLETON_owner() -> PickupLayerCircularStaticPool* { static std::unique_ptr<PickupLayerCircularStaticPool> value(new PickupLayerCircularStaticPool()); return value.get(); }
PickupLayerCircularStaticPool* PickupLayerCircularStaticPool::SINGLETON = PickupLayerCircularStaticPool::SINGLETON_owner();

PickupLayerCircularStaticPool::PickupLayerCircularStaticPool(){
}


    auto PickupLayerCircularStaticPool::getInstance() -> PickupLayerCircularStaticPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PickupLayerCircularStaticPool::SINGLETON;
    
}


                //@Throws(Exception.constructor)
            
    auto PickupLayerCircularStaticPool::getInstanceXYZ(PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, int32_t x, int32_t y, int32_t z) -> PickedUpLayerInterface*{

    PickupLayer* pickupLayer = dynamic_cast<PickupLayer*>(this->getNextInstance());;
    
pickupLayer->initXYZ(x, y, z);
    
pickupLayer->init(pickedUpLayerInterfaceFactoryInterface, pickedUpLayerInterfaceFactoryInterface->getAnimationInterface());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pickupLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_CPP
