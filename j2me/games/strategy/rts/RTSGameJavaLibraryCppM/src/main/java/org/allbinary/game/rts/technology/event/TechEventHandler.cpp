
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_EVENT_TECHEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_EVENT_TECHEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/rts/technology/event/TechEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/rts/technology/event/TechEventListenerInterface.h"

auto TechEventHandler::eventHandler_owner() -> TechEventHandler* { static std::unique_ptr<TechEventHandler> value(new TechEventHandler()); return value.get(); }
TechEventHandler* TechEventHandler::eventHandler = TechEventHandler::eventHandler_owner();

TechEventHandler::TechEventHandler(){
}


    auto TechEventHandler::getInstance() -> TechEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TechEventHandler::eventHandler;
    
}


                //@Throws(Exception.constructor)
            
    auto TechEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    TechEventListenerInterface* techEventListenerInterface = (dynamic_cast<TechEventListenerInterface*>(eventListenerInterface));;
    
techEventListenerInterface->onTechEvent(eventObject);
    
}




        #endif //ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_EVENT_TECHEVENTHANDLER_CPP
