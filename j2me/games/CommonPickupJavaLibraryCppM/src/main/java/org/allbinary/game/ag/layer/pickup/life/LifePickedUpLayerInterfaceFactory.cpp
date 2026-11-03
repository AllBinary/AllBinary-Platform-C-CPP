
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFEPICKEDUPLAYERINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFEPICKEDUPLAYERINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/pickup/life/LifePickedUpLayerInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/IconLayerFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickupProcessorInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/pickup/life/LifeLayerCircularStaticPool.h"
#include "org/allbinary/game/ag/layer/pickup/life/LifeLayerFactory.h"
#include "org/allbinary/game/ag/layer/pickup/life/LifeResources.h"

PickedUpLayerInterfaceFactoryInterface* LifePickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

                //@Throws(Exception.constructor)
            
    auto LifePickedUpLayerInterfaceFactory::init() -> void{
LifePickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface= new LifePickedUpLayerInterfaceFactory();
    
}


LifePickedUpLayerInterfaceFactory::LifePickedUpLayerInterfaceFactory() : PickedUpLayerInterfaceFactory(PickedUpLayerTypeFactory::getInstance()->LIFE, IconLayerFactory::getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(LifeResources::getInstance()->RESOURCE)->getInstance(0), 10, 10), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(LifeResources::getInstance()->RESOURCE)->getInstance(0)), pool(new LifeLayerCircularStaticPool(new LifeLayerFactory(), 1)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto LifePickedUpLayerInterfaceFactory::getTotal() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 1;
    
}


    auto LifePickedUpLayerInterfaceFactory::getInstance() -> PickedUpLayerInterfaceFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LifePickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto LifePickedUpLayerInterfaceFactory::process(AllBinaryLayer* sourceLayerInterface) -> void{
this->pool->visit(sourceLayerInterface);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFEPICKEDUPLAYERINTERFACEFACTORY_CPP
