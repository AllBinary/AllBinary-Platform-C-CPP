
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

            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VirtualKeyboardEvent.h"
#include "VirtualKeyboardEventListenerInterface.h"

class VirtualKeyboardEventHandler: public BasicEventHandler {

    private: static const VirtualKeyboardEventHandler gameKeyEventHandler = VirtualKeyboardEventHandler();

    public: static VirtualKeyboardEventHandler getInstance();

private: VirtualKeyboardEventHandler();

    public: const VirtualKeyboardEvent SHOW_EVENT = VirtualKeyboardEvent(BooleanFactory::getInstance().TRUE);

    public: const VirtualKeyboardEvent HIDE_EVENT = VirtualKeyboardEvent(BooleanFactory::getInstance().FALSE);

                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface);

    public: void open();

    public: void close();

};

            


        #endif //ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H
