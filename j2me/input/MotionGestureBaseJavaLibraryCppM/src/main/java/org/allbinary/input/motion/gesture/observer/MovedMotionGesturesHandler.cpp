
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseMotionGestureEventListener.h"
#include "MotionGestureEvent.h"

class MovedMotionGesturesHandler: public BasicEventHandler {

    private: static const MovedMotionGesturesHandler SINGLETON = MovedMotionGesturesHandler();

    public: static MovedMotionGesturesHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MovedMotionGesturesHandler::SINGLETON;
    
}


protected: MovedMotionGesturesHandler(){
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    BaseMotionGestureEventListener baseMotionGestureEventListener = eventListenerInterface as BaseMotionGestureEventListener;;
    
baseMotionGestureEventListener.onMotionGestureEvent(eventObject as MotionGestureEvent);
    
}


};

            

