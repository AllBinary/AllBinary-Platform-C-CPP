
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
        



        #ifndef ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTLISTENERINTERFACE_H
        #define ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTLISTENERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class VirtualKeyboardEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VirtualKeyboardEventListenerInterface: public EventListenerInterface {

                //@Throws(Exception.constructor)
            
    public: virtual void onVirtualKeyboardEvent(VirtualKeyboardEvent* virtualKeyboardEvent) = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTLISTENERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTLISTENERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTLISTENERINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include("org/allbinary/input/event/VirtualKeyboardEvent.h")
#include "org/allbinary/input/event/VirtualKeyboardEvent.h"
#endif

        #endif
    
