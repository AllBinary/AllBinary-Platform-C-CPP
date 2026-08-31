
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyEventFactory.h"
#include "DestroyedEvent.h"

class DestroyEventCircularStaticPool
            : public Object
         {
        

    private: static const instance: DestroyEventCircularStaticPool = new DestroyEventCircularStaticPool();

    public static DestroyEventCircularStaticPool getInstance();

    private: EVENT_POOL: AllBinaryEventCircularPool = new AllBinaryEventCircularPool(20);

private constructor ();

    public init(AllBinaryGameCanvas combatGameCanvas);

                //@Throws(Exception.constructor)
            
    public DestroyedEvent getInstanceForLayer(AllBinaryLayer layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H
