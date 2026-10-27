
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/mapping/event/InputMappingEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"

auto InputMappingEventHandler::gameKeyEventHandler_owner() -> InputMappingEventHandler* { static std::unique_ptr<InputMappingEventHandler> value(new InputMappingEventHandler()); return value.get(); }
InputMappingEventHandler* InputMappingEventHandler::gameKeyEventHandler = InputMappingEventHandler::gameKeyEventHandler_owner();

InputMappingEventHandler::InputMappingEventHandler(){
}


    auto InputMappingEventHandler::getInstance() -> InputMappingEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputMappingEventHandler::gameKeyEventHandler;
    
}


                //@Throws(Exception.constructor)
            
    auto InputMappingEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    InputMappingEventListenerInterface* inputMappingEventListenerInterface = dynamic_cast<InputMappingEventListenerInterface*>(eventListenerInterface);;
    
inputMappingEventListenerInterface->onInputMappingEvent(dynamic_cast<InputMappingEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENTHANDLER_CPP
