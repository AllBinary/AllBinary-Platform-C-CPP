
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

class LifePickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactory, public PickupProcessorInterface {

    private: static inline PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

                //@Throws(Exception.constructor)
            
    public: static void init(){
LifePickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface= new LifePickedUpLayerInterfaceFactory();
    
}


    public: static PickedUpLayerInterfaceFactoryInterface* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LifePickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface;
    
}


    private: LifeLayerCircularStaticPool* pool = new LifeLayerCircularStaticPool(new LifeLayerFactory(), 1);

private: LifePickedUpLayerInterfaceFactory() : PickedUpLayerInterfaceFactory(PickedUpLayerTypeFactory::getInstance()->LIFE, IconLayerFactory::getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(LifeResources::getInstance()->RESOURCE)->getInstance(0), 10, 10), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(LifeResources::getInstance()->RESOURCE)->getInstance(0)){

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

            

