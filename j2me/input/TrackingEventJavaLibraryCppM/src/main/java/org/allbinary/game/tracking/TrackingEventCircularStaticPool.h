
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
        



        #ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_H
        #define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_H

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

class TrackingEventCircularStaticPool
            : public Object
         {

    private: static TrackingEventCircularStaticPool* instance() { static std::unique_ptr<TrackingEventCircularStaticPool> value(new TrackingEventCircularStaticPool()); return value.get(); }

    public: static TrackingEventCircularStaticPool* getInstance();

    private: AllBinaryEventCircularPool* EVENT_POOL = new AllBinaryEventCircularPool(20);

    public: void init();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: TrackingEvent* getNextInstance(AllBinaryLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_H
