
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
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickedUpLayerInterfaceFactory.h"
#include "CountedPickedUpLayerInterfaceFactoryInterface.h"
#include "PickedUpLayerTypeFactory.h"
#include "IconLayer.h"
#include "CountedPickedUpLayerInterfaceFactoryPool.h"
#include "PickedUpLayerType.h"

class CountedPickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactory, public CountedPickedUpLayerInterfaceFactoryInterface {

    public: static const CountedPickedUpLayerInterfaceFactory NULL_COUNTED_PICKUP_LAYER_FACTORY = CountedPickedUpLayerInterfaceFactory(PickedUpLayerTypeFactory::getInstance().NONE, IconLayer::NULL_ICON_LAYER, NullAnimationFactory::getFactoryInstance().getInstance(0));

    private: int32_t id;

public: CountedPickedUpLayerInterfaceFactory(PickedUpLayerType pickeUpLayerType, IconLayer iconLayer, Animation animationInterface) : PickedUpLayerInterfaceFactory(pickeUpLayerType, iconLayer, animationInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    BasicArrayList list = CountedPickedUpLayerInterfaceFactoryPool::getInstance().getList();;
    
this->id= list.size();
    
list.add(this);
    
}


                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer getNextInstance(ABHashtable<Object*, Object*> hashtable, int32_t x, int32_t y, int32_t z){



                            throw Exception(CommonStrings::getInstance().NOT_IMPLEMENTED);
                    
}


    public: int32_t getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


};

            

