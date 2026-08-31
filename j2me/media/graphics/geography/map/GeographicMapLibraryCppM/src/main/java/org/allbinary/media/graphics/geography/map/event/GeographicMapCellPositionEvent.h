
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_H

#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeographicMapCellPositionEvent: public AllBinaryEventObject {
        

    private: geographicMapCellPosition: CellPosition = CellPositionFactory.getInstance()!.NONE;

public constructor (any = {} anyType, CellPosition geographicMapCellPosition);

    public init(any = {} anyType);

    public setGeographicMapCellPosition(GeographicMapCellPosition geographicMapCellPosition);

    public GeographicMapCellPosition getGeographicMapCellPosition();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_H
