
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TerrainEventFactory.h"
#include "TerrainEvent.h"
#include "BasicTerrainInfo.h"

class TerrainEventCircularStaticPool
            : public Object
         {
        

    private: static const instance: TerrainEventCircularStaticPool = new TerrainEventCircularStaticPool();

    public static TerrainEventCircularStaticPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TerrainEventCircularStaticPool.instance;
    
}


    private: EVENT_POOL: AllBinaryEventCircularPool = new AllBinaryEventCircularPool(20);

    public init(){
this.EVENT_POOL.initAllBinaryEventCircularPool(new TerrainEventFactory());
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public TerrainEvent getNext(BasicTerrainInfo basicTerrainInfo){

    trackingEvent: TerrainEvent = this.EVENT_POOL.getNextInstance() as TerrainEvent;;
    
trackingEvent!.setBasicTerrainInfoForCircularStaticPool(basicTerrainInfo);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return trackingEvent;
    
}


};

            

