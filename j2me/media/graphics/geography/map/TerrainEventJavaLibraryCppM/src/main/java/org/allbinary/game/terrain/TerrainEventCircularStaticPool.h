
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryEventCircularPool;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TerrainEventFactory;
class TerrainEvent;
class BasicTerrainInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TerrainEventCircularStaticPool
            : public virtual Object
         {

    private: static TerrainEventCircularStaticPool* instance_owner();
    private: static TerrainEventCircularStaticPool* instance;

    public: static TerrainEventCircularStaticPool* getInstance();


            
    public: TerrainEventCircularStaticPool();
        
    private: AllBinaryEventCircularPool* EVENT_POOL;

    public: void init();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: TerrainEvent* getNext(BasicTerrainInfo* basicTerrainInfo);

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>
#endif
#if __has_include("org/allbinary/game/terrain/TerrainEventFactory.h")
#include "org/allbinary/game/terrain/TerrainEventFactory.h"
#endif
#if __has_include("org/allbinary/game/terrain/TerrainEvent.h")
#include "org/allbinary/game/terrain/TerrainEvent.h"
#endif
#if __has_include("org/allbinary/game/terrain/BasicTerrainInfo.h")
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"
#endif

        #endif
    
