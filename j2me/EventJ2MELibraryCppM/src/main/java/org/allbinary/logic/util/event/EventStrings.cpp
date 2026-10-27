
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/event/EventStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

EventStrings::EventStrings() {
        }
        auto EventStrings::instance_owner() -> EventStrings* { static std::unique_ptr<EventStrings> value(new EventStrings()); return value.get(); }
EventStrings* EventStrings::instance = EventStrings::instance_owner();

    auto EventStrings::getInstance() -> EventStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EventStrings::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_CPP
