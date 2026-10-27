
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/pickup/points/Points20kPickedUpLayerInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/IconLayerFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickupProcessorInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/pickup/points/PointsLayerCircularStaticPool.h"
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayerFactory.h"
#include "org/allbinary/game/ag/layer/pickup/points/PointsResources.h"

PickedUpLayerInterfaceFactoryInterface* Points20kPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

                //@Throws(Exception.constructor)
            
    auto Points20kPickedUpLayerInterfaceFactory::init() -> void{
Points20kPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface= new Points20kPickedUpLayerInterfaceFactory();
    
}


Points20kPickedUpLayerInterfaceFactory::Points20kPickedUpLayerInterfaceFactory() : PickedUpLayerInterfaceFactory(PickedUpLayerTypeFactory::getInstance()->POINTS, IconLayerFactory::getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(PointsResources::getInstance()->RESOURCE_2)->getInstance(0), 10, 10), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(PointsResources::getInstance()->RESOURCE_2)->getInstance(0)), pool(new PointsLayerCircularStaticPool(new PointsLayerFactory(GameConfigurationUtil::getInstance()->getCompetitionValue() *20000), 1)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto Points20kPickedUpLayerInterfaceFactory::getTotal() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


    auto Points20kPickedUpLayerInterfaceFactory::getInstance() -> PickedUpLayerInterfaceFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Points20kPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto Points20kPickedUpLayerInterfaceFactory::process(AllBinaryLayer* sourceLayerInterface) -> void{
this->pool->visit(sourceLayerInterface);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_CPP
