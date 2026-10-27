
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/event/LastDisplayChangeEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"

auto LastDisplayChangeEventHandler::SINGLETON_owner() -> LastDisplayChangeEventHandler* { static std::unique_ptr<LastDisplayChangeEventHandler> value(new LastDisplayChangeEventHandler()); return value.get(); }
LastDisplayChangeEventHandler* LastDisplayChangeEventHandler::SINGLETON = LastDisplayChangeEventHandler::SINGLETON_owner();

    auto LastDisplayChangeEventHandler::getInstance() -> LastDisplayChangeEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LastDisplayChangeEventHandler::SINGLETON;
    
}


LastDisplayChangeEventHandler::LastDisplayChangeEventHandler(){
}


                //@Throws(Exception.constructor)
            
    auto LastDisplayChangeEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    DisplayChangeEventListener* displayChangeEventListener = (dynamic_cast<DisplayChangeEventListener*>(eventListenerInterface));;
    
displayChangeEventListener->onDisplayChangeEvent(dynamic_cast<DisplayChangeEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_CPP
