
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFEPICKEDUPLAYERINTERFACEFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFEPICKEDUPLAYERINTERFACEFACTORY_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/IconLayerFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickupProcessorInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LifeLayerCircularStaticPool.h"
#include "LifeLayerFactory.h"
#include "LifeResources.h"

class LifePickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactory, public PickupProcessorInterface {

    private: static PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

                //@Throws(Exception.constructor)
            
    public: static void init();

    public: static PickedUpLayerInterfaceFactoryInterface getInstance();

    private: LifeLayerCircularStaticPool pool = LifeLayerCircularStaticPool(LifeLayerFactory(), 1);

private: LifePickedUpLayerInterfaceFactory();

    public: int32_t getTotal();

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayer sourceLayerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFEPICKEDUPLAYERINTERFACEFACTORY_H
