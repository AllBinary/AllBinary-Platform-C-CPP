
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManagerEventListener.h"
#include "LayerManagerEvent.h"
#include "LayerManagerEventListenerInterface.h"

class LayerManagerEventHandler: public BasicEventHandler {

    private: static LayerManagerEventHandler instance = LayerManagerEventHandler();

    public: static LayerManagerEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerManagerEventHandler::instance();
    
}


    private: const BasicArrayList list = BasicArrayListD();

private: LayerManagerEventHandler(){
}


    public: void addListener(LayerManagerEventListener layerManagerEventListener){

                        if(!this->list.contains(layerManagerEventListener))
                        
                                    {
                                    this->list.add(layerManagerEventListener);
    

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
            
    LayerManagerEventListener layerManagerEventListener = this->list.objectArray[index]! as LayerManagerEventListener;;
    
layerManagerEventListener.onCreateLayerManagerEvent(eventObject as LayerManagerEvent);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

}

super.fireEvent(eventObject);
    
}


    public: const std::string CREATE = "Create";

    public: const std::string DELETE = "Delete";

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void fireDeleteEvent(AllBinaryEventObject eventObject){




                        for (
    int32_t index = this->list.size();--index >= 0; )
        {

        try {
            
    LayerManagerEventListener layerManagerEventListener = this->list.objectArray[index]! as LayerManagerEventListener;;
    
layerManagerEventListener.onDeleteLayerManagerEvent(eventObject as LayerManagerEvent);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

}


    BasicArrayList eventListenerInterfaceList = this->eventListenerInterfaceList;;
    

    EventListenerInterface eventListenerInterface;;
    

    LayerManagerEventListenerInterface layerManagerEventListenerInterface;;
    

    int32_t index = 0;;
    

        while(index < eventListenerInterfaceList.size())
        {

        try {
            eventListenerInterface= eventListenerInterfaceList.objectArray[index]! as EventListenerInterface;
    
layerManagerEventListenerInterface= (eventListenerInterface as LayerManagerEventListenerInterface);
    
layerManagerEventListenerInterface.onDeleteLayerManagerEvent(eventObject as LayerManagerEvent);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

index++;
    
}

}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    LayerManagerEventListenerInterface layerManagerEventListenerInterface = (eventListenerInterface as LayerManagerEventListenerInterface);;
    
layerManagerEventListenerInterface.onCreateLayerManagerEvent(eventObject as LayerManagerEvent);
    
}


};

            

