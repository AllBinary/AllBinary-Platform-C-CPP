
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTHANDLER_H
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTHANDLER_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DemoGameMidletEventListener.h"
#include "DemoGameMidletEvent.h"

class DemoGameMidletEventHandler: public BasicEventHandler {

    private: static const DemoGameMidletEventHandler gameKeyEventHandler = DemoGameMidletEventHandler();

    public: static DemoGameMidletEventHandler getInstance();

private: DemoGameMidletEventHandler();

                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTHANDLER_H
