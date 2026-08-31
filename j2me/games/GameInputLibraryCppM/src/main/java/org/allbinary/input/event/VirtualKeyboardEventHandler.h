
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

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VirtualKeyboardEvent.h"
#include "VirtualKeyboardEventListenerInterface.h"

class VirtualKeyboardEventHandler: public BasicEventHandler {
        

    private: static const gameKeyEventHandler: VirtualKeyboardEventHandler = new VirtualKeyboardEventHandler();

    public static VirtualKeyboardEventHandler getInstance();

private constructor ();

    public const SHOW_EVENT: VirtualKeyboardEvent = new VirtualKeyboardEvent(BooleanFactory.getInstance()!.TRUE);

    public const HIDE_EVENT: VirtualKeyboardEvent = new VirtualKeyboardEvent(BooleanFactory.getInstance()!.FALSE);

                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface);

    public open();

    public close();

};

            


        #endif //ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H
