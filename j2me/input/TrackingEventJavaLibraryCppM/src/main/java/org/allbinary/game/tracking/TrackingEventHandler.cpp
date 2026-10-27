
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
        #include "org/allbinary/game/tracking/TrackingEventListenerInterface.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"

class TrackingEventHandler: public BasicEventHandler {

    private: static TrackingEventHandler* instance() { static std::unique_ptr<TrackingEventHandler> value(new TrackingEventHandler()); return value.get(); }

    public: static TrackingEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrackingEventHandler::instance();
    
}


private: TrackingEventHandler(){
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface){

    TrackingEventListenerInterface* trackingEventListenerInterface = dynamic_cast<TrackingEventListenerInterface*>(eventListenerInterface);;
    
trackingEventListenerInterface->onMovement(dynamic_cast<TrackingEvent*>(eventObject));
    
}


};

            

