
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EventStrings
            : public virtual Object
         {

    private: static EventStrings* instance_owner();
    private: static EventStrings* instance;

    public: static EventStrings* getInstance();


            
    public: EventStrings();
        
    public: const std::string PERFORMANCE_MESSAGE = "Use Custom onEvent Methods for needed optimization";

    public: const std::string TOTAL_LISTENERS = "Total Listeners: ";

    public: const std::string LISTENER_LABEL = " Listener: ";

    public: const std::string FIRE_EVENT = "fireEvent";

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H_COMPLETE
        
        #endif
    
