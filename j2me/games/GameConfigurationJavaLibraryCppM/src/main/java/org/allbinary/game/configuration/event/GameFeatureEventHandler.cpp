
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATUREEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATUREEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/event/GameFeatureListenerInterface.h"
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"

auto GameFeatureEventHandler::gameKeyEventHandler_owner() -> GameFeatureEventHandler* { static std::unique_ptr<GameFeatureEventHandler> value(new GameFeatureEventHandler()); return value.get(); }
GameFeatureEventHandler* GameFeatureEventHandler::gameKeyEventHandler = GameFeatureEventHandler::gameKeyEventHandler_owner();

GameFeatureEventHandler::GameFeatureEventHandler(){
}


    auto GameFeatureEventHandler::getInstance() -> GameFeatureEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureEventHandler::gameKeyEventHandler;
    
}


                //@Throws(Exception.constructor)
            
    auto GameFeatureEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    GameFeatureListenerInterface* gameFeatureListenerInterface = (dynamic_cast<GameFeatureListenerInterface*>(eventListenerInterface));;
    
gameFeatureListenerInterface->onGameFeatureChange(dynamic_cast<GameFeatureEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATUREEVENTHANDLER_CPP
