
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/GameMidletEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/GameMidletEventListener.h"

auto GameMidletEventHandler::gameKeyEventHandler_owner() -> GameMidletEventHandler* { static std::unique_ptr<GameMidletEventHandler> value(new GameMidletEventHandler()); return value.get(); }
GameMidletEventHandler* GameMidletEventHandler::gameKeyEventHandler = GameMidletEventHandler::gameKeyEventHandler_owner();

GameMidletEventHandler::GameMidletEventHandler(){
}


    auto GameMidletEventHandler::getInstance() -> GameMidletEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameMidletEventHandler::gameKeyEventHandler;
    
}


                //@Throws(Exception.constructor)
            
    auto GameMidletEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    GameMidletEventListener* gameMidletEventListener = dynamic_cast<GameMidletEventListener*>(eventListenerInterface);;
    
gameMidletEventListener->onGameEnd(eventObject);
    
}




        #endif //ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETEVENTHANDLER_CPP
