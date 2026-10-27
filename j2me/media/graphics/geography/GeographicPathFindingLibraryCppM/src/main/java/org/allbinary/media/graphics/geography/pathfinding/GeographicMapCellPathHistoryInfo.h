
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeographicMapCellPathHistoryInfo
            : public Object
         {

    private: GeographicMapCellPosition* previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition* previousOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition* nextUnvisitedOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition* nextOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition* nextChosenOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    public: GeographicMapCellPosition* getPreviousGeographicMapCellPosition();

    public: void setPreviousGeographicMapCellPosition(GeographicMapCellPosition* previousGeographicMapCellPosition);

    public: GeographicMapCellPosition* getPreviousOnPathGeographicMapCellPosition();

    public: void setPreviousOnPathGeographicMapCellPosition(GeographicMapCellPosition* previousOnPathGeographicMapCellPosition);

    public: GeographicMapCellPosition* getNextUnvisitedOnPathGeographicMapCellPosition();

    public: void setNextUnvisitedOnPathGeographicMapCellPosition(GeographicMapCellPosition* nextUnvisitedOnPathGeographicMapCellPosition);

    public: GeographicMapCellPosition* getNextOnPathGeographicMapCellPosition();

    public: void setNextOnPathGeographicMapCellPosition(GeographicMapCellPosition* nextOnPathGeographicMapCellPosition);

    public: GeographicMapCellPosition* getNextChosenOnPathGeographicMapCellPosition();

    public: void setNextChosenOnPathGeographicMapCellPosition(GeographicMapCellPosition* nextChosenOnPathGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_H
