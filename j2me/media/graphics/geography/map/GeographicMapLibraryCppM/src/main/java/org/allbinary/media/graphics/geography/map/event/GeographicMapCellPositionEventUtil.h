
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPositionEvent.h"
#include "GeographicMapCellPositionEventHandler.h"

class GeographicMapCellPositionEventUtil
            : public Object
         {
        

    private: const geographicMapCellPositionEvent: GeographicMapCellPositionEvent;

    private: const geographicMapCellPositionEventHandler: GeographicMapCellPositionEventHandler = GeographicMapCellPositionEventHandler.getInstance()!;

public constructor (any = {} anyType);

                //@Throws(Exception.constructor)
            
    public update(GeographicMapCellPositionTracking geographicMapCellPositionTracking);

                //@Throws(Exception.constructor)
            
    public remove(GeographicMapCellPositionTracking geographicMapCellPositionTracking);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTUTIL_H
