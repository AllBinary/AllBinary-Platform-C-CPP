
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
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"

class InputMappingEventHandler: public BasicEventHandler {

    private: static InputMappingEventHandler* gameKeyEventHandler() { static std::unique_ptr<InputMappingEventHandler> value(new InputMappingEventHandler()); return value.get(); }

    public: static InputMappingEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputMappingEventHandler::gameKeyEventHandler();
    
}


private: InputMappingEventHandler(){
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface){

    InputMappingEventListenerInterface* inputMappingEventListenerInterface = dynamic_cast<InputMappingEventListenerInterface*>(eventListenerInterface);;
    
inputMappingEventListenerInterface->onInputMappingEvent(dynamic_cast<InputMappingEvent*>(eventObject));
    
}


};

            

