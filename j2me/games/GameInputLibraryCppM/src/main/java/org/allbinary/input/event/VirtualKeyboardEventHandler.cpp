
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
        



        #ifndef ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_CPP
        #define ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/event/VirtualKeyboardEvent.h"
#include "org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h"

auto VirtualKeyboardEventHandler::gameKeyEventHandler_owner() -> VirtualKeyboardEventHandler* { static std::unique_ptr<VirtualKeyboardEventHandler> value(new VirtualKeyboardEventHandler()); return value.get(); }
VirtualKeyboardEventHandler* VirtualKeyboardEventHandler::gameKeyEventHandler = VirtualKeyboardEventHandler::gameKeyEventHandler_owner();

VirtualKeyboardEventHandler::VirtualKeyboardEventHandler() : SHOW_EVENT(new VirtualKeyboardEvent(BooleanFactory::getInstance()->TRUE)), HIDE_EVENT(new VirtualKeyboardEvent(BooleanFactory::getInstance()->FALSE)){
}


    auto VirtualKeyboardEventHandler::getInstance() -> VirtualKeyboardEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VirtualKeyboardEventHandler::gameKeyEventHandler;
    
}


                //@Throws(Exception.constructor)
            
    auto VirtualKeyboardEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    VirtualKeyboardEventListenerInterface* virtualKeyboardEventListenerInterface = dynamic_cast<VirtualKeyboardEventListenerInterface*>(eventListenerInterface);;
    
virtualKeyboardEventListenerInterface->onVirtualKeyboardEvent(dynamic_cast<VirtualKeyboardEvent*>(eventObject));
    
}


    auto VirtualKeyboardEventHandler::open() -> void{

        try {
            Thread::sleep(120);
    
this->fireEvent(this->SHOW_EVENT);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "open", &e);
    
}

}


    auto VirtualKeyboardEventHandler::close() -> void{

        try {
            Thread::sleep(120);
    
this->fireEvent(this->HIDE_EVENT);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CLOSE, &e);
    
}

}




        #endif //ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_CPP
