
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class FeaturedAnimationInterfaceFactoryInterfaceFactory;
class GameConfigurationUtil;
class CountedPickedUpLayerInterfaceFactory;
class IconLayerFactory;
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h>
class PickedUpLayerInterfaceFactoryInterface;
class PickedUpLayerTypeFactory;
#include <org/allbinary/game/layer/pickup/PickupProcessorInterface.h>
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PointsLayerCircularStaticPool;
class PointsLayerFactory;
class PointsResources;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Points20kPickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactory, public virtual PickupProcessorInterface {

    private: static PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface;

                //@Throws(Exception.constructor)
            
    public: static void init();

    public: static PickedUpLayerInterfaceFactoryInterface* getInstance();

    private: PointsLayerCircularStaticPool* pool;

private: Points20kPickedUpLayerInterfaceFactory();

    public: int32_t getTotal();

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayer* sourceLayerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>)
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationUtil.h>)
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>)
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/IconLayerFactory.h>)
#include <org/allbinary/game/layer/pickup/IconLayerFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h>)
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>)
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h>)
#include <org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/PickupProcessorInterface.h>)
#include <org/allbinary/game/layer/pickup/PickupProcessorInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/game/ag/layer/pickup/points/PointsLayerCircularStaticPool.h")
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayerCircularStaticPool.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/pickup/points/PointsLayerFactory.h")
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayerFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/pickup/points/PointsResources.h")
#include "org/allbinary/game/ag/layer/pickup/points/PointsResources.h"
#endif

        #endif
    
