
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPES_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPES_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"

class RaceTrackGeographicMapCellTypes
            : public Object
         {

    private: static RaceTrackGeographicMapCellTypes* instance() { static std::unique_ptr<RaceTrackGeographicMapCellTypes> value(new RaceTrackGeographicMapCellTypes()); return value.get(); }

    public: static RaceTrackGeographicMapCellTypes* getInstance();

    public: RaceTrackGeographicMapCellType* BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* TOP_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* TOP_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* VERTICAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* START_LINE_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;

public: RaceTrackGeographicMapCellTypes();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPES_H
