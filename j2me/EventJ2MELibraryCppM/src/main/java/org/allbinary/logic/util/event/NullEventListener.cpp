
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/event/NullEventListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"


NullEventListener::NullEventListener() {
        }
        auto NullEventListener::NULL_EVENT_LISTENER_owner() -> NullEventListener* { static std::unique_ptr<NullEventListener> value(new NullEventListener()); return value.get(); }
NullEventListener* NullEventListener::NULL_EVENT_LISTENER = NullEventListener::NULL_EVENT_LISTENER_owner();

    auto NullEventListener::onEvent(AllBinaryEventObject* eventObject) -> void{
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_CPP
