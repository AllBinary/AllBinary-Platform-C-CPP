
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
        



        #ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_CPP
        #define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/tracking/TrackingEventCircularStaticPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/tracking/TrackingEventFactory.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"


TrackingEventCircularStaticPool::TrackingEventCircularStaticPool() : EVENT_POOL(new AllBinaryEventCircularPool(20)) {
        }
        auto TrackingEventCircularStaticPool::instance_owner() -> TrackingEventCircularStaticPool* { static std::unique_ptr<TrackingEventCircularStaticPool> value(new TrackingEventCircularStaticPool()); return value.get(); }
TrackingEventCircularStaticPool* TrackingEventCircularStaticPool::instance = TrackingEventCircularStaticPool::instance_owner();

    auto TrackingEventCircularStaticPool::getInstance() -> TrackingEventCircularStaticPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrackingEventCircularStaticPool::instance;
    
}


    auto TrackingEventCircularStaticPool::init() -> void{
this->EVENT_POOL->initAllBinaryEventCircularPool(new TrackingEventFactory());
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TrackingEventCircularStaticPool::getNextInstance(AllBinaryLayer* layerInterface) -> TrackingEvent*{

    TrackingEvent* trackingEvent = dynamic_cast<TrackingEvent*>(this->EVENT_POOL->getNextInstance());;
    
trackingEvent->setLayerInterfaceForCircularStaticPool(layerInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return trackingEvent;
    
}




        #endif //ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_CPP
