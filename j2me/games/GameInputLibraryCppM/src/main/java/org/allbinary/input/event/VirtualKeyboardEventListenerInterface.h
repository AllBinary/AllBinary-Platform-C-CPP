
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

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VirtualKeyboardEvent.h"

class VirtualKeyboardEventListenerInterface: public EventListenerInterface {
        

                //@Throws(Exception.constructor)
            
    onVirtualKeyboardEvent(VirtualKeyboardEvent virtualKeyboardEvent);

};

            


        #endif //ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTLISTENERINTERFACE_H
