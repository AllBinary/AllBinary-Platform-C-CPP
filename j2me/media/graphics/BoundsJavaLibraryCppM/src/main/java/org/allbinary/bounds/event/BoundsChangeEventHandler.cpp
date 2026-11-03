
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
        



        #ifndef ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENTHANDLER_CPP
        #define ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/bounds/event/BoundsChangeEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/bounds/event/BoundsChangeEventListener.h"
#include "org/allbinary/bounds/event/BoundsChangeEvent.h"

BasicEventHandler* BoundsChangeEventHandler::SINGLETON = new BoundsChangeEventHandler();

BoundsChangeEventHandler::BoundsChangeEventHandler(){
}


    auto BoundsChangeEventHandler::getInstance() -> BasicEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BoundsChangeEventHandler::SINGLETON;
    
}


                //@Throws(Exception.constructor)
            
    auto BoundsChangeEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    BoundsChangeEventListener* boundsChangeEventListener = dynamic_cast<BoundsChangeEventListener*>(eventListenerInterface);;
    
boundsChangeEventListener->onBoundsChangeEvent(dynamic_cast<BoundsChangeEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENTHANDLER_CPP
