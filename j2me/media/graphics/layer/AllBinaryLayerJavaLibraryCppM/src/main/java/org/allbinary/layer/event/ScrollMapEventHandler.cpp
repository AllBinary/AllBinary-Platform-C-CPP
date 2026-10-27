
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTHANDLER_CPP
        #define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/event/ScrollMapEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/event/ScrollMapEventListenerInterface.h"
#include "org/allbinary/layer/event/ScrollMapEvent.h"

auto ScrollMapEventHandler::SINGLETON_owner() -> ScrollMapEventHandler* { static std::unique_ptr<ScrollMapEventHandler> value(new ScrollMapEventHandler()); return value.get(); }
ScrollMapEventHandler* ScrollMapEventHandler::SINGLETON = ScrollMapEventHandler::SINGLETON_owner();

ScrollMapEventHandler::ScrollMapEventHandler(){
}


    auto ScrollMapEventHandler::getInstance() -> ScrollMapEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScrollMapEventHandler::SINGLETON;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollMapEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    ScrollMapEventListenerInterface* scrollMapEventListenerInterface = (dynamic_cast<ScrollMapEventListenerInterface*>(eventListenerInterface));;
    
scrollMapEventListenerInterface->onMoveEvent(dynamic_cast<ScrollMapEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTHANDLER_CPP
