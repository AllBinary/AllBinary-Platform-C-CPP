
        /* Generated Code Do Not Modify */
        



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

class TerrainEventListener
            : public Object
        , public TerrainEventListenerInterface {

    private: BasicArrayList* list = new BasicArrayListD();

    public: void onEvent(AllBinaryEventObject* eventObject){
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    public: void onTerrainEvent(TerrainEvent* terrainEvent){
this->list->clear();
    
this->list->add(terrainEvent);
    
}


    public: BasicArrayList* getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


};

            

