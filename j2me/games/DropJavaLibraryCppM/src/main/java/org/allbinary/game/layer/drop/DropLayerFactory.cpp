
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/drop/DropLayerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto DropLayerFactory::DROP_LAYER_FACTORY_owner() -> DropLayerFactory* { static std::unique_ptr<DropLayerFactory> value(new DropLayerFactory()); return value.get(); }
DropLayerFactory* DropLayerFactory::DROP_LAYER_FACTORY = DropLayerFactory::DROP_LAYER_FACTORY_owner();

DropLayerFactory::DropLayerFactory() : list(new BasicArrayListD()), basicArrayListUtil(BasicArrayListUtil::getInstance()){
}


    auto DropLayerFactory::clear() -> void{
this->list->clear();
    
}


    auto DropLayerFactory::getInstance() -> DropLayerFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DropLayerFactory::DROP_LAYER_FACTORY;
    
}


    auto DropLayerFactory::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->size();;
    
}


    auto DropLayerFactory::getRandomInstance() -> PickedUpLayerInterfaceFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<PickedUpLayerInterfaceFactoryInterface*>(this->basicArrayListUtil->getRandom(this->list));
    
}


    auto DropLayerFactory::add(PickedUpLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) -> void{
this->list->add(layerInterfaceFactoryInterface);
    
}


    auto DropLayerFactory::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERFACTORY_CPP
