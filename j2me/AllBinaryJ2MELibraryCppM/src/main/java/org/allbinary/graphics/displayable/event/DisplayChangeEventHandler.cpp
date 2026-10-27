
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
        #include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"

class DisplayChangeEventHandler: public BasicEventHandler {

    private: static DisplayChangeEventHandler* SINGLETON() { static std::unique_ptr<DisplayChangeEventHandler> value(new DisplayChangeEventHandler()); return value.get(); }

    public: static DisplayChangeEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisplayChangeEventHandler::SINGLETON();
    
}


private: DisplayChangeEventHandler(){
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface){

    DisplayChangeEventListener* displayChangeEventListener = (dynamic_cast<DisplayChangeEventListener*>(eventListenerInterface));;
    
displayChangeEventListener->onDisplayChangeEvent(dynamic_cast<DisplayChangeEvent*>(eventObject));
    
}


};

            

