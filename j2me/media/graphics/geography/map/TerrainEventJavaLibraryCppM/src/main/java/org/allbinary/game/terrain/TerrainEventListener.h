
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ForcedLogUtil;
class AllBinaryEventObject;
class EventStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/terrain/TerrainEventListenerInterface.h"
class TerrainEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TerrainEventListener
            : public virtual Object
        , public TerrainEventListenerInterface {


            
    public: TerrainEventListener();
        
    private: BasicArrayList* list;

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onTerrainEvent(TerrainEvent* terrainEvent);

    public: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/terrain/TerrainEventListenerInterface.h")
#include "org/allbinary/game/terrain/TerrainEventListenerInterface.h"
#endif
#if __has_include("org/allbinary/game/terrain/TerrainEvent.h")
#include "org/allbinary/game/terrain/TerrainEvent.h"
#endif

        #endif
    
