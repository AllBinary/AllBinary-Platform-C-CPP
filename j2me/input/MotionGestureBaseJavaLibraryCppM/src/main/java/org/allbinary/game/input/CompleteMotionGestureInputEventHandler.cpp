
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompleteMotionGestureInputEventListener.h"
#include "CompleteMotionGestureInputEvent.h"
#include "CompleteMotionGestureInputEventListenerInterface.h"

class CompleteMotionGestureInputEventHandler: public BasicEventHandler {

    private: static const CompleteMotionGestureInputEventHandler SINGLETON = CompleteMotionGestureInputEventHandler();

    public: static CompleteMotionGestureInputEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CompleteMotionGestureInputEventHandler::SINGLETON;
    
}


    private: const BasicArrayList list = BasicArrayListD();

private: CompleteMotionGestureInputEventHandler(){
}


    public: void addListener(CompleteMotionGestureInputEventListener completeMotionGestureInputEventListener){

                        if(!this->list.contains(completeMotionGestureInputEventListener))
                        
                                    {
                                    this->list.add(completeMotionGestureInputEventListener);
    

                                    }
                                
}


    public: void removeAllListeners(){
this->list.clear();
    
super.removeAllListeners();
    
}


    public: void removeListener(EventListenerInterface eventListenerInterface){
this->list.remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void fireEvent(AllBinaryEventObject eventObject){




                        for (
    int32_t index = this->list.size();--index >= 0; )
        {

        try {
            
    CompleteMotionGestureInputEventListener completeMotionGestureInputEventListener = this->list.objectArray[index];;
    
completeMotionGestureInputEventListener.onCompleteMotionGestureInputEvent(eventObject);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    CompleteMotionGestureInputEventListenerInterface completeMotionGestureInputEventListenerInterface = eventListenerInterface;;
    
completeMotionGestureInputEventListenerInterface.onCompleteMotionGestureInputEvent(eventObject);
    
}


};

            

