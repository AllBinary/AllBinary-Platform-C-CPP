
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

class VirtualKeyboardEventHandler: public BasicEventHandler {

    private: static VirtualKeyboardEventHandler* gameKeyEventHandler() { static std::unique_ptr<VirtualKeyboardEventHandler> value(new VirtualKeyboardEventHandler()); return value.get(); }

    public: static VirtualKeyboardEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VirtualKeyboardEventHandler::gameKeyEventHandler();
    
}


private: VirtualKeyboardEventHandler(){
}


    public: VirtualKeyboardEvent* SHOW_EVENT = new VirtualKeyboardEvent(BooleanFactory::getInstance()->TRUE);

    public: VirtualKeyboardEvent* HIDE_EVENT = new VirtualKeyboardEvent(BooleanFactory::getInstance()->FALSE);

                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface){

    VirtualKeyboardEventListenerInterface* virtualKeyboardEventListenerInterface = dynamic_cast<VirtualKeyboardEventListenerInterface*>(eventListenerInterface as unknown);;
    
virtualKeyboardEventListenerInterface->onVirtualKeyboardEvent(dynamic_cast<VirtualKeyboardEvent*>(eventObject));
    
}


    public: void open(){

        try {
            Thread::sleep(120);
    
this->fireEvent(this->SHOW_EVENT);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "open", &e);
    
}

}


    public: void close(){

        try {
            Thread::sleep(120);
    
this->fireEvent(this->HIDE_EVENT);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.CLOSE, &e);
    
}

}


};

            

