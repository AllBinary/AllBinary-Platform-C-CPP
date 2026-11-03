
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_H
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/event/EventListenerInterface.h"
class AllBinaryEventObject;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullEventListener
            : public virtual Object
        , public virtual EventListenerInterface {

    private: static NullEventListener* NULL_EVENT_LISTENER_owner();
    public: static NullEventListener* NULL_EVENT_LISTENER;


            
    public: NullEventListener();
        
    public: void onEvent(AllBinaryEventObject* eventObject);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_H_COMPLETE
        #if __has_include("org/allbinary/logic/util/event/EventListenerInterface.h")
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/event/AllBinaryEventObject.h")
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#endif

        #endif
    
