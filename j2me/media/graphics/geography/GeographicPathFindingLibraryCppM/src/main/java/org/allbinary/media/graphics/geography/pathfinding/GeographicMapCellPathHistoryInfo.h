
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_H

            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeographicMapCellPathHistoryInfo
            : public Object
         {
        

    private: previousGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: previousOnPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: nextUnvisitedOnPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: nextOnPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: nextChosenOnPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    public GeographicMapCellPosition getPreviousGeographicMapCellPosition();

    public setPreviousGeographicMapCellPosition(GeographicMapCellPosition previousGeographicMapCellPosition);

    public GeographicMapCellPosition getPreviousOnPathGeographicMapCellPosition();

    public setPreviousOnPathGeographicMapCellPosition(GeographicMapCellPosition previousOnPathGeographicMapCellPosition);

    public GeographicMapCellPosition getNextUnvisitedOnPathGeographicMapCellPosition();

    public setNextUnvisitedOnPathGeographicMapCellPosition(GeographicMapCellPosition nextUnvisitedOnPathGeographicMapCellPosition);

    public GeographicMapCellPosition getNextOnPathGeographicMapCellPosition();

    public setNextOnPathGeographicMapCellPosition(GeographicMapCellPosition nextOnPathGeographicMapCellPosition);

    public GeographicMapCellPosition getNextChosenOnPathGeographicMapCellPosition();

    public setNextChosenOnPathGeographicMapCellPosition(GeographicMapCellPosition nextChosenOnPathGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_H
