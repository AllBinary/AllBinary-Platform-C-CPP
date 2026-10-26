
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
        #include "HealLayerCircularStaticPool.h"
#include "HealLayerFactory.h"
#include "HealthResources.h"

class HealPickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactory, public PickupProcessorInterface {

    private: static PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

                //@Throws(Exception.constructor)
            
    public: static void init(){
HealPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface= HealPickedUpLayerInterfaceFactory();
    
}


    public: static PickedUpLayerInterfaceFactoryInterface getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HealPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface;
    
}


    private: HealLayerCircularStaticPool pool = HealLayerCircularStaticPool(HealLayerFactory(), 1);

private: HealPickedUpLayerInterfaceFactory() : PickedUpLayerInterfaceFactory(PickedUpLayerTypeFactory::getInstance().HEAL, IconLayerFactory::getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance().get(HealthResources::getInstance().RESOURCE).getInstance(0), 10, 10), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance().get(HealthResources::getInstance().RESOURCE).getInstance(0)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: int32_t getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayer sourceLayerInterface){
this->pool.visit(sourceLayerInterface);
    
}


};

            

