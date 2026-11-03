
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_CPP
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/terrain/TerrainEventCircularStaticPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/terrain/TerrainEventFactory.h"
#include "org/allbinary/game/terrain/TerrainEvent.h"
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"


TerrainEventCircularStaticPool::TerrainEventCircularStaticPool() : EVENT_POOL(new AllBinaryEventCircularPool(20)) {
        }
        auto TerrainEventCircularStaticPool::instance_owner() -> TerrainEventCircularStaticPool* { static std::unique_ptr<TerrainEventCircularStaticPool> value(new TerrainEventCircularStaticPool()); return value.get(); }
TerrainEventCircularStaticPool* TerrainEventCircularStaticPool::instance = TerrainEventCircularStaticPool::instance_owner();

    auto TerrainEventCircularStaticPool::getInstance() -> TerrainEventCircularStaticPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TerrainEventCircularStaticPool::instance;
    
}


    auto TerrainEventCircularStaticPool::init() -> void{
this->EVENT_POOL->initAllBinaryEventCircularPool(new TerrainEventFactory());
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TerrainEventCircularStaticPool::getNext(BasicTerrainInfo* basicTerrainInfo) -> TerrainEvent*{

    TerrainEvent* trackingEvent = dynamic_cast<TerrainEvent*>(this->EVENT_POOL->getNextInstance());;
    
trackingEvent->setBasicTerrainInfoForCircularStaticPool(basicTerrainInfo);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return trackingEvent;
    
}




        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_CPP
