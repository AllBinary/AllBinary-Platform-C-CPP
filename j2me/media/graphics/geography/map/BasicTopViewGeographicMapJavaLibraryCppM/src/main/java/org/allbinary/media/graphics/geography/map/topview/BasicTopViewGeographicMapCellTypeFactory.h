
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPEFACTORY_H

#include <java/util/Hashtable.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTopViewGeographicMapCellType.h"
#include "BasicTopViewGeographicMapStrings.h"

class BasicTopViewGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {
        

    public const BLOCK_CELL_TYPE: BasicTopViewGeographicMapCellType;

    public const OFF_MAP_CELL_TYPE: BasicTopViewGeographicMapCellType;

    public const FLOOR_CELL_TYPE: BasicTopViewGeographicMapCellType;

    public const DOOR_CELL_TYPE: BasicTopViewGeographicMapCellType;

    public const STAIRS_UP_CELL_TYPE: BasicTopViewGeographicMapCellType;

    public const STAIRS_DOWN_CELL_TYPE: BasicTopViewGeographicMapCellType;

    public const OTHER_CELL_TYPE: BasicTopViewGeographicMapCellType;

    private: const maxTileId: int32_t;

public constructor (Hashtable<any, any> tileTypeToTileIdsMap, int32_t maxTileId);

    public int32_t getStartType();

    public int32_t getEndType();

    public int32_t getEmptyType();

    public bool isPath(GeographicMapCellType cellType);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPEFACTORY_H
