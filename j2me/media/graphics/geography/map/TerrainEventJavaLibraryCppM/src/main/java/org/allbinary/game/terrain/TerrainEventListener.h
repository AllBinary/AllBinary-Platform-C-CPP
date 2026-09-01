
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TerrainEventListenerInterface.h"
#include "TerrainEvent.h"

class TerrainEventListener
            : public Object
        : public TerrainEventListenerInterface {

    private: const BasicArrayList list = BasicArrayListD();

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void onTerrainEvent(TerrainEvent terrainEvent);

    public: BasicArrayList getList();

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H
