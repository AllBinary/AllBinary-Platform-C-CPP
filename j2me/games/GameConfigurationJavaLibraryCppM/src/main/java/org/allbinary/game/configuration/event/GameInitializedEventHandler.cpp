
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
        

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

auto GameInitializedEventHandler::gameKeyEventHandler_owner() -> GameInitializedEventHandler* { static std::unique_ptr<GameInitializedEventHandler> value(new GameInitializedEventHandler()); return value.get(); }
GameInitializedEventHandler* GameInitializedEventHandler::gameKeyEventHandler = GameInitializedEventHandler::gameKeyEventHandler_owner();

GameInitializedEventHandler::GameInitializedEventHandler(){
}


    auto GameInitializedEventHandler::getInstance() -> GameInitializedEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInitializedEventHandler::gameKeyEventHandler;
    
}


                //@Throws(Exception.constructor)
            
    auto GameInitializedEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    GameInitializedListenerInterface* gameInitializedListenerInterface = (dynamic_cast<GameInitializedListenerInterface*>(eventListenerInterface));;
    
gameInitializedListenerInterface->onGameInitialized(dynamic_cast<GameInitializedEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENTHANDLER_CPP
