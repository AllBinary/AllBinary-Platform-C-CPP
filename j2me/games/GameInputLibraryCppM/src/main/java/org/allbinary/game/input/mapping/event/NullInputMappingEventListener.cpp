
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/mapping/event/NullInputMappingEventListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"


NullInputMappingEventListener::NullInputMappingEventListener() {
        }
        auto NullInputMappingEventListener::NULL_INPUT_MAPPING_EVENT_LISTENER_owner() -> NullInputMappingEventListener* { static std::unique_ptr<NullInputMappingEventListener> value(new NullInputMappingEventListener()); return value.get(); }
NullInputMappingEventListener* NullInputMappingEventListener::NULL_INPUT_MAPPING_EVENT_LISTENER = NullInputMappingEventListener::NULL_INPUT_MAPPING_EVENT_LISTENER_owner();

                //@Throws(Exception.constructor)
            
    auto NullInputMappingEventListener::onInputMappingEvent(InputMappingEvent* inputMappingEvent) -> void{
}


    auto NullInputMappingEventListener::onEvent(AllBinaryEventObject* eventObject) -> void{
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_CPP
