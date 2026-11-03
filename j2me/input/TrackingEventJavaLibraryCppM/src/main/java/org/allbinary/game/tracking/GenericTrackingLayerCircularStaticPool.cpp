
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
        



        #ifndef ORG_ALLBINARY_GAME_TRACKING_GENERICTRACKINGLAYERCIRCULARSTATICPOOL_CPP
        #define ORG_ALLBINARY_GAME_TRACKING_GENERICTRACKINGLAYERCIRCULARSTATICPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/tracking/GenericTrackingLayerCircularStaticPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GenericTrackingLayerCircularStaticPool::SINGLETON_owner() -> GenericTrackingLayerCircularStaticPool* { static std::unique_ptr<GenericTrackingLayerCircularStaticPool> value(new GenericTrackingLayerCircularStaticPool()); return value.get(); }
GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool::SINGLETON = GenericTrackingLayerCircularStaticPool::SINGLETON_owner();

GenericTrackingLayerCircularStaticPool::GenericTrackingLayerCircularStaticPool(){
}


    auto GenericTrackingLayerCircularStaticPool::getInstance() -> GenericTrackingLayerCircularStaticPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GenericTrackingLayerCircularStaticPool::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_GAME_TRACKING_GENERICTRACKINGLAYERCIRCULARSTATICPOOL_CPP
