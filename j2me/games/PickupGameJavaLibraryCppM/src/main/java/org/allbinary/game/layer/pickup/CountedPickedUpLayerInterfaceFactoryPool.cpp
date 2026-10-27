
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYPOOL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto CountedPickedUpLayerInterfaceFactoryPool::SINGLETON_owner() -> CountedPickedUpLayerInterfaceFactoryPool* { static std::unique_ptr<CountedPickedUpLayerInterfaceFactoryPool> value(new CountedPickedUpLayerInterfaceFactoryPool()); return value.get(); }
CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool::SINGLETON = CountedPickedUpLayerInterfaceFactoryPool::SINGLETON_owner();

CountedPickedUpLayerInterfaceFactoryPool::CountedPickedUpLayerInterfaceFactoryPool(){
this->list= new BasicArrayListD();
    
}


    auto CountedPickedUpLayerInterfaceFactoryPool::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


    auto CountedPickedUpLayerInterfaceFactoryPool::getInstance() -> CountedPickedUpLayerInterfaceFactoryPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CountedPickedUpLayerInterfaceFactoryPool::SINGLETON;
    
}


    auto CountedPickedUpLayerInterfaceFactoryPool::init() -> void{
CountedPickedUpLayerInterfaceFactoryPool::SINGLETON= new CountedPickedUpLayerInterfaceFactoryPool();
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYPOOL_CPP
