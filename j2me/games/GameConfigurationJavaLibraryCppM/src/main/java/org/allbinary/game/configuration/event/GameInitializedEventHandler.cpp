
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/event/GameInitializedListenerInterface.h"
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"

class GameInitializedEventHandler: public BasicEventHandler {

    private: static GameInitializedEventHandler* gameKeyEventHandler() { static std::unique_ptr<GameInitializedEventHandler> value(new GameInitializedEventHandler()); return value.get(); }

    public: static GameInitializedEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInitializedEventHandler::gameKeyEventHandler();
    
}


private: GameInitializedEventHandler(){
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface){

    GameInitializedListenerInterface* gameInitializedListenerInterface = (dynamic_cast<GameInitializedListenerInterface*>(eventListenerInterface));;
    
gameInitializedListenerInterface->onGameInitialized(dynamic_cast<GameInitializedEvent*>(eventObject));
    
}


};

            

