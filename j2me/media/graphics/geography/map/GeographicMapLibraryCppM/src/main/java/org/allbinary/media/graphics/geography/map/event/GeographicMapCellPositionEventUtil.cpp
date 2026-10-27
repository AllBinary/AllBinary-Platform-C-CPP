
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h"
#include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventHandler.h"


GeographicMapCellPositionEventUtil::GeographicMapCellPositionEventUtil(Object* anyType) : geographicMapCellPositionEventHandler(GeographicMapCellPositionEventHandler::getInstance()){
this->geographicMapCellPositionEvent= new GeographicMapCellPositionEvent(anyType, CellPositionFactory::getInstance()->NONE);
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellPositionEventUtil::update(GeographicMapCellPositionTracking* geographicMapCellPositionTracking) -> void{
this->geographicMapCellPositionEvent->setGeographicMapCellPosition(geographicMapCellPositionTracking->getCurrentGeographicMapCellPosition());
    
this->geographicMapCellPositionEventHandler->fireEvent(this->geographicMapCellPositionEvent);
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellPositionEventUtil::remove(GeographicMapCellPositionTracking* geographicMapCellPositionTracking) -> void{
this->geographicMapCellPositionEvent->setGeographicMapCellPosition(geographicMapCellPositionTracking->getCurrentGeographicMapCellPosition());
    
this->geographicMapCellPositionEventHandler->fireRemoveEvent(this->geographicMapCellPositionEvent);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_CPP
