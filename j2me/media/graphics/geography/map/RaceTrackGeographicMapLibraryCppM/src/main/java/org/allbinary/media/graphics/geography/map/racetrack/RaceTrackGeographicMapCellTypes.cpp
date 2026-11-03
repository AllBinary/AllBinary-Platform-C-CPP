
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPES_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypes.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"

auto RaceTrackGeographicMapCellTypes::instance_owner() -> RaceTrackGeographicMapCellTypes* { static std::unique_ptr<RaceTrackGeographicMapCellTypes> value(new RaceTrackGeographicMapCellTypes()); return value.get(); }
RaceTrackGeographicMapCellTypes* RaceTrackGeographicMapCellTypes::instance = RaceTrackGeographicMapCellTypes::instance_owner();

    auto RaceTrackGeographicMapCellTypes::getInstance() -> RaceTrackGeographicMapCellTypes*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RaceTrackGeographicMapCellTypes::instance;
    
}


RaceTrackGeographicMapCellTypes::RaceTrackGeographicMapCellTypes(){
this->BOTTOM_LEFT_TURN_ROAD_CELL_TYPE= new RaceTrackGeographicMapCellType("Bottom Left Turn", 1, 1, 0);
    
this->BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE= new RaceTrackGeographicMapCellType("Bottom Right Turn", 2, 1, 0);
    
this->TOP_LEFT_TURN_ROAD_CELL_TYPE= new RaceTrackGeographicMapCellType("Top Left Turn", 3, 1, 0);
    
this->TOP_RIGHT_TURN_ROAD_CELL_TYPE= new RaceTrackGeographicMapCellType("Top Right Turne", 4, 1, 0);
    
this->HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE= new RaceTrackGeographicMapCellType("Horizontal Straight", 5, 1, 0);
    
this->VERTICAL_STRAIGHT_ROAD_CELL_TYPE= new RaceTrackGeographicMapCellType("Vertical Straight", 6, 1, 0);
    
this->START_LINE_ROAD_CELL_TYPE= new RaceTrackGeographicMapCellType("Start Line", 7, 1, 0);
    
this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE= new RaceTrackGeographicMapCellType("Finish Line", 8, 1, 0);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAPCELLTYPES_CPP
