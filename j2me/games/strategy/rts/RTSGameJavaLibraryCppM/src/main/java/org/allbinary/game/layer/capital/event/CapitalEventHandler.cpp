
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/capital/event/CapitalEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/capital/event/CapitalEventListenerInterface.h"
#include "org/allbinary/game/layer/capital/event/CapitalEvent.h"


CapitalEventHandler::CapitalEventHandler(){
}


                //@Throws(Exception.constructor)
            
    auto CapitalEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    CapitalEventListenerInterface* capitalEventListenerInterface = (dynamic_cast<CapitalEventListenerInterface*>(eventListenerInterface));;
    
capitalEventListenerInterface->onCapitalChangeEvent(dynamic_cast<CapitalEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLER_CPP
