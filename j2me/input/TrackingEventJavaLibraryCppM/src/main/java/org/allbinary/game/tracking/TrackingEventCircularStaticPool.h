
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryLayer;
class AllBinaryEventCircularPool;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TrackingEventFactory;
class TrackingEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TrackingEventCircularStaticPool
            : public virtual Object
         {

    private: static TrackingEventCircularStaticPool* instance_owner();
    private: static TrackingEventCircularStaticPool* instance;

    public: static TrackingEventCircularStaticPool* getInstance();


            
    public: TrackingEventCircularStaticPool();
        
    private: AllBinaryEventCircularPool* EVENT_POOL;

    public: void init();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: TrackingEvent* getNextInstance(AllBinaryLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>
#endif
#if __has_include("org/allbinary/game/tracking/TrackingEventFactory.h")
#include "org/allbinary/game/tracking/TrackingEventFactory.h"
#endif
#if __has_include("org/allbinary/game/tracking/TrackingEvent.h")
#include "org/allbinary/game/tracking/TrackingEvent.h"
#endif

        #endif
    
