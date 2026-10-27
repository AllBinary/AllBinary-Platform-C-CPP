
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

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/CompleteMotionGestureInputEventListener.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"

class CompleteMotionGestureInputEventHandler: public BasicEventHandler {

    private: static CompleteMotionGestureInputEventHandler* SINGLETON() { static std::unique_ptr<CompleteMotionGestureInputEventHandler> value(new CompleteMotionGestureInputEventHandler()); return value.get(); }

    public: static CompleteMotionGestureInputEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CompleteMotionGestureInputEventHandler::SINGLETON();
    
}


    private: BasicArrayList* list = new BasicArrayListD();

private: CompleteMotionGestureInputEventHandler(){
}


    public: void addListener(CompleteMotionGestureInputEventListener* completeMotionGestureInputEventListener){

                        if(!this->list->contains(completeMotionGestureInputEventListener))
                        
                                    {
                                    this->list->add(completeMotionGestureInputEventListener);
    

                                    }
                                
}


    public: void removeAllListeners(){
this->list->clear();
    
super.removeAllListeners();
    
}


    public: void removeListener(EventListenerInterface* eventListenerInterface){
this->list->remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void fireEvent(AllBinaryEventObject* eventObject){




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    CompleteMotionGestureInputEventListener* completeMotionGestureInputEventListener = dynamic_cast<CompleteMotionGestureInputEventListener*>(this->list->objectArray[index]);;
    
completeMotionGestureInputEventListener->onCompleteMotionGestureInputEvent(dynamic_cast<CompleteMotionGestureInputEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface){

    CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface = dynamic_cast<CompleteMotionGestureInputEventListenerInterface*>(eventListenerInterface);;
    
completeMotionGestureInputEventListenerInterface->onCompleteMotionGestureInputEvent(dynamic_cast<CompleteMotionGestureInputEvent*>(eventObject));
    
}


};

            

