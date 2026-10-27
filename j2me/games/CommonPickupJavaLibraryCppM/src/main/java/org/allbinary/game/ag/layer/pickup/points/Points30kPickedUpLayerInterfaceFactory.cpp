
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

class Points30kPickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactory, public PickupProcessorInterface {

    private: static inline PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

                //@Throws(Exception.constructor)
            
    public: static void init(){
Points30kPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface= new Points30kPickedUpLayerInterfaceFactory();
    
}


    public: static PickedUpLayerInterfaceFactoryInterface* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Points30kPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface;
    
}


    private: PointsLayerCircularStaticPool* pool = new PointsLayerCircularStaticPool(new PointsLayerFactory(GameConfigurationUtil::getInstance()->getCompetitionValue() *30000), 1);

private: Points30kPickedUpLayerInterfaceFactory() : PickedUpLayerInterfaceFactory(PickedUpLayerTypeFactory::getInstance()->POINTS, IconLayerFactory::getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(PointsResources::getInstance()->RESOURCE_3)->getInstance(0), 10, 10), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(PointsResources::getInstance()->RESOURCE_3)->getInstance(0)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: int32_t getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayer* sourceLayerInterface){
this->pool->visit(sourceLayerInterface);
    
}


};

            

