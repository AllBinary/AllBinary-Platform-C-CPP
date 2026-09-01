
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_H

#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPlatormGeographicMapCellType.h"

class BasicPlatormGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {

    private: const EnumerationUtil enumerationUtil = EnumerationUtil::getInstance();

    public: BasicPlatormGeographicMapCellType BLOCK_CELL_TYPE;

    public: BasicPlatormGeographicMapCellType JUMP_THRU_CELL_TYPE;

    public: BasicPlatormGeographicMapCellType LADDER_CELL_TYPE;

    private: int32_t maxTileId;

public: BasicPlatormGeographicMapCellTypeFactory(Hashtable<any, any> tileTypeToTileIdsMap, int32_t maxTileId);

    public: int32_t getStartType();

    public: int32_t getEndType();

    public: int32_t getEmptyType();

    public: bool isPath(GeographicMapCellType cellType);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_H
