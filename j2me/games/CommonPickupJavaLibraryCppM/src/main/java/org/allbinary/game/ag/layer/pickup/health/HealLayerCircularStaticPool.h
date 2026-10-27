
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYERCIRCULARSTATICPOOL_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYERCIRCULARSTATICPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class HealthInterface;
class HealthInterfaceCompositeInterface;
class AllBinaryLayer;
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>
class AllBinaryLayerFactoryInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class HealLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HealLayerCircularStaticPool: public AllBinaryLayerCircularPool {

public: HealLayerCircularStaticPool(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

                //@Throws(Exception.constructor)
            
    public: void visit(AllBinaryLayer* sourceLayerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYERCIRCULARSTATICPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYERCIRCULARSTATICPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYERCIRCULARSTATICPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/game/health/HealthInterface.h>)
#include <org/allbinary/game/health/HealthInterface.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthInterfaceCompositeInterface.h>)
#include <org/allbinary/game/health/HealthInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerCircularPool.h>)
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerFactoryInterface.h>)
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>
#endif
#if __has_include("org/allbinary/game/ag/layer/pickup/health/HealLayer.h")
#include "org/allbinary/game/ag/layer/pickup/health/HealLayer.h"
#endif

        #endif
    
