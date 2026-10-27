
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NORMALRACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NORMALRACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/NormalRaceTrackGeographicMapCellTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/EmptyRaceRaceTrackGeographicMapCellTypeFactory.h"

auto NormalRaceTrackGeographicMapCellTypeFactory::instanceC_owner() -> NormalRaceTrackGeographicMapCellTypeFactory* { static std::unique_ptr<NormalRaceTrackGeographicMapCellTypeFactory> value(new NormalRaceTrackGeographicMapCellTypeFactory()); return value.get(); }
NormalRaceTrackGeographicMapCellTypeFactory* NormalRaceTrackGeographicMapCellTypeFactory::instanceC = NormalRaceTrackGeographicMapCellTypeFactory::instanceC_owner();

    auto NormalRaceTrackGeographicMapCellTypeFactory::getInstance() -> NormalRaceTrackGeographicMapCellTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NormalRaceTrackGeographicMapCellTypeFactory::instanceC;
    
}


NormalRaceTrackGeographicMapCellTypeFactory::NormalRaceTrackGeographicMapCellTypeFactory(){
this->EMPTY_CELL_TYPE= EmptyRaceRaceTrackGeographicMapCellTypeFactory::getInstance()->EMPTY_CELL_TYPE;
    
this->EASY_CELL_TYPE= this->EMPTY_CELL_TYPE;
    
this->FINISH_LINE_ROAD_CELL_TYPE= this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NORMALRACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_CPP
