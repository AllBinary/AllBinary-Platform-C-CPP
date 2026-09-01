
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_H
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_H

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

    private: static TerrainEventCircularStaticPool instance() { return TerrainEventCircularStaticPool(); }

    public: static TerrainEventCircularStaticPool getInstance();

    private: AllBinaryEventCircularPool EVENT_POOL = AllBinaryEventCircularPool(20);

    public: void init();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: TerrainEvent getNext(BasicTerrainInfo basicTerrainInfo);

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_H
