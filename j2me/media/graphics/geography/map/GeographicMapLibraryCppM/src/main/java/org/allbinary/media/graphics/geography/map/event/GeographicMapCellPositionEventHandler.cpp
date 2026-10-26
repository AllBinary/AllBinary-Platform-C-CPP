
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/game/layer/geographic/map/MiniMapLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPositionEvent.h"
#include "GeographicMapCellPositionEventListenerInterface.h"

class GeographicMapCellPositionEventHandler: public BasicEventHandler {

    private: static GeographicMapCellPositionEventHandler instance = GeographicMapCellPositionEventHandler();

    public: static GeographicMapCellPositionEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapCellPositionEventHandler::instance();
    
}


    private: const BasicArrayList list = BasicArrayListD();

private: GeographicMapCellPositionEventHandler(){
}


    public: void addListener(MiniMapLayer miniMapLayer){

                        if(!this->list.contains(miniMapLayer))
                        
                                    {
                                    this->list.add(miniMapLayer);
    

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
            
    MiniMapLayer miniMapLayer = this->list.get(index);;
    
miniMapLayer.onGeographicMapCellPositionEvent(eventObject);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void fireRemoveEvent(AllBinaryEventObject eventObject){

    BasicArrayList list = this->eventListenerInterfaceList;;
    




                        for (
    int32_t index = this->list.size();--index >= 0; )
        {

        try {
            
    MiniMapLayer miniMapLayer = this->list.get(index);;
    
miniMapLayer.onRemoveGeographicMapCellPositionEvent(eventObject);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

}


    EventListenerInterface eventListenerInterface;;
    

    GeographicMapCellPositionEventListenerInterface geographicMapCellPositionEventListenerInterface;;
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

        try {
            eventListenerInterface= list.get(index);
    
geographicMapCellPositionEventListenerInterface= (eventListenerInterface);
    
geographicMapCellPositionEventListenerInterface.onRemoveGeographicMapCellPositionEvent(eventObject);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

}

}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    GeographicMapCellPositionEventListenerInterface geographicMapCellPositionEventListenerInterface = (eventListenerInterface);;
    
geographicMapCellPositionEventListenerInterface.onGeographicMapCellPositionEvent(eventObject);
    
}


};

            

