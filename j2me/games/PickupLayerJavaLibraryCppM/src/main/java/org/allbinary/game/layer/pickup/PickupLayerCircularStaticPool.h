
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PickupLayer;
class PickedUpLayerInterface;
class PickedUpLayerInterfaceFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PickupLayerCircularStaticPool: public AllBinaryLayerCircularPool {

    private: static PickupLayerCircularStaticPool* SINGLETON_owner();
    private: static PickupLayerCircularStaticPool* SINGLETON;

    public: static PickupLayerCircularStaticPool* getInstance();

private: PickupLayerCircularStaticPool();

                //@Throws(Exception.constructor)
            
    public: PickedUpLayerInterface* getInstanceXYZ(PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayerCircularPool.h>)
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickupLayer.h")
#include "org/allbinary/game/layer/pickup/PickupLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif

        #endif
    
