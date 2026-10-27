
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CommonStrings;
class StringMaker;
class GeographicMapCellType;
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
class RaceTrackGeographicMapCellType;
#include <org/allbinary/util/ABHashtable.h>
class BasicArrayList;
class HashtableUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicTopViewGeographicMapCellType;
class BasicTopViewGeographicMapStrings;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTopViewGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {

    public: BasicTopViewGeographicMapCellType* BLOCK_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType* OFF_MAP_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType* FLOOR_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType* DOOR_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType* STAIRS_UP_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType* STAIRS_DOWN_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType* OTHER_CELL_TYPE;

    private: int32_t maxTileId;

public: BasicTopViewGeographicMapCellTypeFactory(ABHashtable<Object*, Object*>* tileTypeToTileIdsMap, int32_t maxTileId);

    public: int32_t getStartType();

    public: int32_t getEndType();

    public: int32_t getEmptyType();

    public: bool isPath(GeographicMapCellType* cellType);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/HashtableUtil.h>)
#include <org/allbinary/util/HashtableUtil.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellType.h")
#include "org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellType.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapStrings.h")
#include "org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapStrings.h"
#endif

        #endif
    
