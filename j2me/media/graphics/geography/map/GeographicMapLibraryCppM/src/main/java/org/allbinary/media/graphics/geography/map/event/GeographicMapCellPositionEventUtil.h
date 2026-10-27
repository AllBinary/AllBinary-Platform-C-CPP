
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_H

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

class GeographicMapCellPositionEventUtil
            : public Object
         {

    private: GeographicMapCellPositionEvent* geographicMapCellPositionEvent;

    private: GeographicMapCellPositionEventHandler* geographicMapCellPositionEventHandler = GeographicMapCellPositionEventHandler::getInstance();

public: GeographicMapCellPositionEventUtil(Object* anyType);

                //@Throws(Exception.constructor)
            
    public: void update(GeographicMapCellPositionTracking* geographicMapCellPositionTracking);

                //@Throws(Exception.constructor)
            
    public: void remove(GeographicMapCellPositionTracking* geographicMapCellPositionTracking);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_H
