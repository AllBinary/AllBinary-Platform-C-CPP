
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
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ViewPositionEvent.h"
#include "ViewPositionEventListenerInterface.h"

class ViewPositionEventHandler: public BasicEventHandler {

    private: static ViewPositionEventHandler SINGLETON = ViewPositionEventHandler();

    public: static ViewPositionEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ViewPositionEventHandler::SINGLETON;
    
}


    private: const BasicArrayList list = BasicArrayListD();

private: ViewPositionEventHandler(){
}


    public: void addListener(AllBinaryLayer layerInterface){

                        if(!this->list.contains(layerInterface))
                        
                                    {
                                    this->list.add(layerInterface);
    

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
            
    AllBinaryLayer layerInterface = this->list.objectArray[index];;
    
layerInterface.onChangeEvent(eventObject);
    

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

    ViewPositionEventListenerInterface viewPositionEventListenerInterface = (eventListenerInterface);;
    
viewPositionEventListenerInterface.onChangeEvent(eventObject);
    
}


};

            

