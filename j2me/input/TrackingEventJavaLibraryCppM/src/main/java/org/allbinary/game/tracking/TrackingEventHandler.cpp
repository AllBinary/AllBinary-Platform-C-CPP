
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
        



        #ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/tracking/TrackingEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/tracking/TrackingEventListenerInterface.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"

auto TrackingEventHandler::instance_owner() -> TrackingEventHandler* { static std::unique_ptr<TrackingEventHandler> value(new TrackingEventHandler()); return value.get(); }
TrackingEventHandler* TrackingEventHandler::instance = TrackingEventHandler::instance_owner();

    auto TrackingEventHandler::getInstance() -> TrackingEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrackingEventHandler::instance;
    
}


TrackingEventHandler::TrackingEventHandler(){
}


                //@Throws(Exception.constructor)
            
    auto TrackingEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    TrackingEventListenerInterface* trackingEventListenerInterface = dynamic_cast<TrackingEventListenerInterface*>(eventListenerInterface);;
    
trackingEventListenerInterface->onMovement(dynamic_cast<TrackingEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTHANDLER_CPP
