
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
        



        #ifndef ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H
        #define ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
class BooleanFactory;
class AllBinaryEventObject;
class EventListenerInterface;
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class VirtualKeyboardEvent;
class VirtualKeyboardEventListenerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VirtualKeyboardEventHandler: public BasicEventHandler {

    private: static VirtualKeyboardEventHandler* gameKeyEventHandler_owner();
    private: static VirtualKeyboardEventHandler* gameKeyEventHandler;

    public: static VirtualKeyboardEventHandler* getInstance();

private: VirtualKeyboardEventHandler();

    public: VirtualKeyboardEvent* SHOW_EVENT;

    public: VirtualKeyboardEvent* HIDE_EVENT;

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

    public: void open();

    public: void close();

};

            


        #endif //ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include("org/allbinary/input/event/VirtualKeyboardEvent.h")
#include "org/allbinary/input/event/VirtualKeyboardEvent.h"
#endif
#if __has_include("org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h")
#include "org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h"
#endif

        #endif
    
