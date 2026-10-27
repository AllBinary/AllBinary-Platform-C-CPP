
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/DemoGameMidletEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/DemoGameMidletEventListener.h"
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"

auto DemoGameMidletEventHandler::gameKeyEventHandler_owner() -> DemoGameMidletEventHandler* { static std::unique_ptr<DemoGameMidletEventHandler> value(new DemoGameMidletEventHandler()); return value.get(); }
DemoGameMidletEventHandler* DemoGameMidletEventHandler::gameKeyEventHandler = DemoGameMidletEventHandler::gameKeyEventHandler_owner();

DemoGameMidletEventHandler::DemoGameMidletEventHandler(){
}


    auto DemoGameMidletEventHandler::getInstance() -> DemoGameMidletEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DemoGameMidletEventHandler::gameKeyEventHandler;
    
}


                //@Throws(Exception.constructor)
            
    auto DemoGameMidletEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    DemoGameMidletEventListener* demoGameMidletEventListener = dynamic_cast<DemoGameMidletEventListener*>(eventListenerInterface);;
    
demoGameMidletEventListener->onDemoGameMidletEvent(dynamic_cast<DemoGameMidletEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTHANDLER_CPP
