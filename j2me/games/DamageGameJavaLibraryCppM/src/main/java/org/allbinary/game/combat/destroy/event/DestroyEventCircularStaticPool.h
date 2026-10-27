
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/destroy/event/DestroyEventFactory.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"

class DestroyEventCircularStaticPool
            : public Object
         {

    private: static DestroyEventCircularStaticPool* instance() { static std::unique_ptr<DestroyEventCircularStaticPool> value(new DestroyEventCircularStaticPool()); return value.get(); }

    public: static DestroyEventCircularStaticPool* getInstance();

    private: AllBinaryEventCircularPool* EVENT_POOL = new AllBinaryEventCircularPool(20);

private: DestroyEventCircularStaticPool();

    public: void init(AllBinaryGameCanvas* combatGameCanvas);

                //@Throws(Exception.constructor)
            
    public: DestroyedEvent* getInstanceForLayer(AllBinaryLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H
