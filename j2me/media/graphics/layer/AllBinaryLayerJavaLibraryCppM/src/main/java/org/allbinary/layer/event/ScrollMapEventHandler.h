
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTHANDLER_H
        #define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTHANDLER_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScrollMapEventListenerInterface.h"
#include "ScrollMapEvent.h"

class ScrollMapEventHandler: public BasicEventHandler {
        

    private: static SINGLETON: ScrollMapEventHandler = new ScrollMapEventHandler();

    public static ScrollMapEventHandler getInstance();

private constructor ();

                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTHANDLER_H
