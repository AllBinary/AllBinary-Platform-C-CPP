
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryGameCanvas;
class AllBinaryLayer;
class AllBinaryEventCircularPool;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DestroyEventFactory;
class DestroyedEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DestroyEventCircularStaticPool
            : public virtual Object
         {

    private: static DestroyEventCircularStaticPool* instance_owner();
    private: static DestroyEventCircularStaticPool* instance;

    public: static DestroyEventCircularStaticPool* getInstance();

    private: AllBinaryEventCircularPool* EVENT_POOL;

private: DestroyEventCircularStaticPool();

    public: void init(AllBinaryGameCanvas* combatGameCanvas);

                //@Throws(Exception.constructor)
            
    public: DestroyedEvent* getInstanceForLayer(AllBinaryLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/DestroyEventFactory.h")
#include "org/allbinary/game/combat/destroy/event/DestroyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/DestroyedEvent.h")
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#endif

        #endif
    
