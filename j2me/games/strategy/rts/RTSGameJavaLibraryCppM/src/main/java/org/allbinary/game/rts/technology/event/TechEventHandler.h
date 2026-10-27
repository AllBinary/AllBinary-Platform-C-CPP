
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
        



        #ifndef ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_EVENT_TECHEVENTHANDLER_H
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_EVENT_TECHEVENTHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AllBinaryEventObject;
class EventListenerInterface;
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TechEventListenerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TechEventHandler: public BasicEventHandler {

    private: static TechEventHandler* eventHandler_owner();
    private: static TechEventHandler* eventHandler;

    public: static TechEventHandler* getInstance();

private: TechEventHandler();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_EVENT_TECHEVENTHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_EVENT_TECHEVENTHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_RTS_TECHNOLOGY_EVENT_TECHEVENTHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include("org/allbinary/game/rts/technology/event/TechEventListenerInterface.h")
#include "org/allbinary/game/rts/technology/event/TechEventListenerInterface.h"
#endif

        #endif
    
