
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_CPP
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/terrain/TerrainEventListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/terrain/TerrainEventListenerInterface.h"
#include "org/allbinary/game/terrain/TerrainEvent.h"


TerrainEventListener::TerrainEventListener() : list(new BasicArrayListD()) {
        }
        
    auto TerrainEventListener::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto TerrainEventListener::onTerrainEvent(TerrainEvent* terrainEvent) -> void{
this->list->clear();
    
this->list->add(terrainEvent);
    
}


    auto TerrainEventListener::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}




        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_CPP
