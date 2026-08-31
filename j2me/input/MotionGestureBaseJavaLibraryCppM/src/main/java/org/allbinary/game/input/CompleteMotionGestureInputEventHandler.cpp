
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
        



            #include "../../../../java/lang/Exception.h"
        
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
        

    private: static const SINGLETON: CompleteMotionGestureInputEventHandler = new CompleteMotionGestureInputEventHandler();

    public static CompleteMotionGestureInputEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CompleteMotionGestureInputEventHandler.SINGLETON;
    
}


    private: const list: BasicArrayList = new BasicArrayListD();

private constructor (){

            super();
        }


    public addListener(CompleteMotionGestureInputEventListener completeMotionGestureInputEventListener){

                        if(!this.list.contains(completeMotionGestureInputEventListener))
                        
                                    {
                                    this.list.add(completeMotionGestureInputEventListener);
    

                                    }
                                
}


    public removeAllListeners(){
this.list.clear();
    
super.removeAllListeners();
    
}


    public removeListener(EventListenerInterface eventListenerInterface){
this.list.remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public fireEvent(AllBinaryEventObject eventObject){




                        for (
    index: int32_t = this.list.size()!;--index >= 0; )
        {

        try {
            
    completeMotionGestureInputEventListener: CompleteMotionGestureInputEventListener = this.list.objectArray[index]! as CompleteMotionGestureInputEventListener;;
    
completeMotionGestureInputEventListener!.onCompleteMotionGestureInputEvent(eventObject as CompleteMotionGestureInputEvent);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    completeMotionGestureInputEventListenerInterface: CompleteMotionGestureInputEventListenerInterface = eventListenerInterface as CompleteMotionGestureInputEventListenerInterface;;
    
completeMotionGestureInputEventListenerInterface!.onCompleteMotionGestureInputEvent(eventObject as CompleteMotionGestureInputEvent);
    
}


};

            

