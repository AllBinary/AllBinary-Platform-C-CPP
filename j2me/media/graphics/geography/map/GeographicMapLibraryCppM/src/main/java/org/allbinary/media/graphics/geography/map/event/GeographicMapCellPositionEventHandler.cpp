
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
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
        

    private: static instance: GeographicMapCellPositionEventHandler = new GeographicMapCellPositionEventHandler();

    public static GeographicMapCellPositionEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapCellPositionEventHandler.instance;
    
}


    private: const list: BasicArrayList = new BasicArrayListD();

private constructor (){

            super();
        }


    public addListener(MiniMapLayer miniMapLayer){

                        if(!this.list.contains(miniMapLayer))
                        
                                    {
                                    this.list.add(miniMapLayer);
    

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
            
    miniMapLayer: MiniMapLayer = this.list.get(index) as MiniMapLayer;;
    
miniMapLayer!.onGeographicMapCellPositionEvent(eventObject as GeographicMapCellPositionEvent);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public fireRemoveEvent(AllBinaryEventObject eventObject){

    list: BasicArrayList = this.eventListenerInterfaceList;;
    




                        for (
    index: int32_t = this.list.size()!;--index >= 0; )
        {

        try {
            
    miniMapLayer: MiniMapLayer = this.list.get(index) as MiniMapLayer;;
    
miniMapLayer!.onRemoveGeographicMapCellPositionEvent(eventObject as GeographicMapCellPositionEvent);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

}


    eventListenerInterface: EventListenerInterface;;
    

    geographicMapCellPositionEventListenerInterface: GeographicMapCellPositionEventListenerInterface;;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

        try {
            eventListenerInterface= list.get(index) as EventListenerInterface;
    
geographicMapCellPositionEventListenerInterface= (eventListenerInterface as GeographicMapCellPositionEventListenerInterface);
    
geographicMapCellPositionEventListenerInterface!.onRemoveGeographicMapCellPositionEvent(eventObject as GeographicMapCellPositionEvent);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

}

}


                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    geographicMapCellPositionEventListenerInterface: GeographicMapCellPositionEventListenerInterface = (eventListenerInterface as GeographicMapCellPositionEventListenerInterface);;
    
geographicMapCellPositionEventListenerInterface!.onGeographicMapCellPositionEvent(eventObject as GeographicMapCellPositionEvent);
    
}


};

            

