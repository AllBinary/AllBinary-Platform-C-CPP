
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

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EventListenerInterface.h"
#include "AllBinaryEventObject.h"

class NullEventListener
            : public Object
        : public EventListenerInterface {

    public: static const NullEventListener NULL_EVENT_LISTENER = NullEventListener();

    public: void onEvent(AllBinaryEventObject eventObject);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_H
