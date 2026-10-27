
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AdvancedRTSGameLayer;
class WaypointLayer;
class CellPosition;
class AllBinaryLayer;
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellTypeFactory;
class DropCellPositionHistory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h"
class RaceTrackGeographicMap;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomMapGenerator: public CustomMapGeneratorBase {

    private: std::vector<std::vector<int32_t>> customMapArray;

    private: RaceTrackGeographicMap* raceTrackGeographicMap;

    private: GeographicMapCellTypeFactory* geographicMapCellTypeFactory;

public: CustomMapGenerator(RaceTrackGeographicMap* raceTrackGeographicMap);

                //@Throws(Exception.constructor)
            
    public: void copyMapIntoCustomMap();

    private: DropCellPositionHistory* dropCellPositionHistory;

                //@Throws(Exception.constructor)
            
    public: int32_t getCustomType(int32_t column, int32_t row, int32_t currentType);

    public: std::vector<std::vector<int32_t>> getCustomMapArray();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointLayer.h>)
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>)
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"
#endif

        #endif
    
