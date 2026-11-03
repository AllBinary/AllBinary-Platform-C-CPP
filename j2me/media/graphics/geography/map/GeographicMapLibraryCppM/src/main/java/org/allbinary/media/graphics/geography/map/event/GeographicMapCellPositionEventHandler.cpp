
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTHANDLER_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/game/layer/geographic/map/MiniMapLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h"
#include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventListenerInterface.h"

auto GeographicMapCellPositionEventHandler::instance_owner() -> GeographicMapCellPositionEventHandler* { static std::unique_ptr<GeographicMapCellPositionEventHandler> value(new GeographicMapCellPositionEventHandler()); return value.get(); }
GeographicMapCellPositionEventHandler* GeographicMapCellPositionEventHandler::instance = GeographicMapCellPositionEventHandler::instance_owner();

    auto GeographicMapCellPositionEventHandler::getInstance() -> GeographicMapCellPositionEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GeographicMapCellPositionEventHandler::instance;
    
}


GeographicMapCellPositionEventHandler::GeographicMapCellPositionEventHandler() : list(new BasicArrayListD()){
}


    auto GeographicMapCellPositionEventHandler::addListener(MiniMapLayer* miniMapLayer) -> void{

                        if(!this->list->contains(miniMapLayer))
                        
                                    {
                                    this->list->add(miniMapLayer);
    

                                    }
                                
}


    auto GeographicMapCellPositionEventHandler::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}


    auto GeographicMapCellPositionEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellPositionEventHandler::fireEvent(AllBinaryEventObject* eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    MiniMapLayer* miniMapLayer = dynamic_cast<MiniMapLayer*>(this->list->get(index));;
    
miniMapLayer->onGeographicMapCellPositionEvent(dynamic_cast<GeographicMapCellPositionEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

BasicEventHandler::fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GeographicMapCellPositionEventHandler::fireRemoveEvent(AllBinaryEventObject* eventObject) -> void{

    BasicArrayList* list = this->eventListenerInterfaceList;;
    




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    MiniMapLayer* miniMapLayer = dynamic_cast<MiniMapLayer*>(this->list->get(index));;
    
miniMapLayer->onRemoveGeographicMapCellPositionEvent(dynamic_cast<GeographicMapCellPositionEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}


    EventListenerInterface* eventListenerInterface;;
    

    GeographicMapCellPositionEventListenerInterface* geographicMapCellPositionEventListenerInterface;;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

        try {
            eventListenerInterface= dynamic_cast<EventListenerInterface*>(list->get(index));
    
geographicMapCellPositionEventListenerInterface= (dynamic_cast<GeographicMapCellPositionEventListenerInterface*>(eventListenerInterface));
    
geographicMapCellPositionEventListenerInterface->onRemoveGeographicMapCellPositionEvent(dynamic_cast<GeographicMapCellPositionEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellPositionEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    GeographicMapCellPositionEventListenerInterface* geographicMapCellPositionEventListenerInterface = (dynamic_cast<GeographicMapCellPositionEventListenerInterface*>(eventListenerInterface));;
    
geographicMapCellPositionEventListenerInterface->onGeographicMapCellPositionEvent(dynamic_cast<GeographicMapCellPositionEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTHANDLER_CPP
