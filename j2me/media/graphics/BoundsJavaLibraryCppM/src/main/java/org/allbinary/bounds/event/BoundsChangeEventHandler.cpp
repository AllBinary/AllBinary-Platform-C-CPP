
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
        #include "org/allbinary/bounds/event/BoundsChangeEventListener.h"
#include "org/allbinary/bounds/event/BoundsChangeEvent.h"

class BoundsChangeEventHandler: public BasicEventHandler {

    private: static inline BasicEventHandler* SINGLETON = new BoundsChangeEventHandler();

    public: static BasicEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BoundsChangeEventHandler::SINGLETON;
    
}


private: BoundsChangeEventHandler(){
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface){

    BoundsChangeEventListener* boundsChangeEventListener = dynamic_cast<BoundsChangeEventListener*>(eventListenerInterface);;
    
boundsChangeEventListener->onBoundsChangeEvent(dynamic_cast<BoundsChangeEvent*>(eventObject));
    
}


};

            

