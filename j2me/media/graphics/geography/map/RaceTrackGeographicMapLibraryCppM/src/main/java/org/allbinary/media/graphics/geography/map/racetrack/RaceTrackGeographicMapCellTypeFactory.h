
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GeographicMapCellType;
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RaceTrackGeographicMapCellType;
class RaceTrackGeographicMapCellTypes;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RaceTrackGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {

    private: static RaceTrackGeographicMapCellTypeFactory* instanceC_owner();
    private: static RaceTrackGeographicMapCellTypeFactory* instanceC;

    public: static RaceTrackGeographicMapCellTypeFactory* getInstance();

    public: GeographicMapCellType* EMPTY_CELL_TYPE;

    public: GeographicMapCellType* EASY_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* TOP_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* TOP_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* VERTICAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* START_LINE_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;

    public: GeographicMapCellType* FINISH_LINE_ROAD_CELL_TYPE;

public: RaceTrackGeographicMapCellTypeFactory();

    public: int32_t getStartType();

    public: int32_t getEndType();

    public: int32_t getEmptyType();

    public: bool isPath(GeographicMapCellType* cellType);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypes.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypes.h"
#endif

        #endif
    
