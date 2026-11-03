
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/game/layer/pickup/IconLayer.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"

auto CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY_owner() -> CountedPickedUpLayerInterfaceFactory* { static std::unique_ptr<CountedPickedUpLayerInterfaceFactory> value(new CountedPickedUpLayerInterfaceFactory(PickedUpLayerTypeFactory::getInstance()->NONE, IconLayer::NULL_ICON_LAYER, NullAnimationFactory::getFactoryInstance()->getInstance(0))); return value.get(); }
CountedPickedUpLayerInterfaceFactory* CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY_owner();

CountedPickedUpLayerInterfaceFactory::CountedPickedUpLayerInterfaceFactory(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface) : PickedUpLayerInterfaceFactory(pickeUpLayerType, iconLayer, animationInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    BasicArrayList* list = CountedPickedUpLayerInterfaceFactoryPool::getInstance()->getList();;
    
this->id= list->size();
    
list->add(this);
    
}


                //@Throws(Exception.constructor)
            
    auto CountedPickedUpLayerInterfaceFactory::getNextInstance(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z) -> AllBinaryLayer*{



                            throw Exception(CommonStrings::getInstance()->NOT_IMPLEMENTED);
                    
}


    auto CountedPickedUpLayerInterfaceFactory::getTotal() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


    auto CountedPickedUpLayerInterfaceFactory::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORY_CPP
