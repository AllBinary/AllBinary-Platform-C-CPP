
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypes.h"

class RaceTrackGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {

    private: static RaceTrackGeographicMapCellTypeFactory* instanceC() { static std::unique_ptr<RaceTrackGeographicMapCellTypeFactory> value(new RaceTrackGeographicMapCellTypeFactory()); return value.get(); }

    public: static RaceTrackGeographicMapCellTypeFactory* getInstance();

    public: GeographicMapCellType* EMPTY_CELL_TYPE = new GeographicMapCellType(0,  -1);

    public: GeographicMapCellType* EASY_CELL_TYPE = this->EMPTY_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* TOP_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* TOP_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* VERTICAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* START_LINE_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;

    public: GeographicMapCellType* FINISH_LINE_ROAD_CELL_TYPE = GeographicMapCellType::NULL_GEOGRAPHIC_MAP_CELL_TYPE;

public: RaceTrackGeographicMapCellTypeFactory();

    public: int32_t getStartType();

    public: int32_t getEndType();

    public: int32_t getEmptyType();

    public: bool isPath(GeographicMapCellType* cellType);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_H
