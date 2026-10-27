
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_H

        
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
        class DisplayChangeEventListener;
class DisplayChangeEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LastDisplayChangeEventHandler: public BasicEventHandler {

    private: static LastDisplayChangeEventHandler* SINGLETON_owner();
    private: static LastDisplayChangeEventHandler* SINGLETON;

    public: static LastDisplayChangeEventHandler* getInstance();

private: LastDisplayChangeEventHandler();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEvent.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#endif

        #endif
    
