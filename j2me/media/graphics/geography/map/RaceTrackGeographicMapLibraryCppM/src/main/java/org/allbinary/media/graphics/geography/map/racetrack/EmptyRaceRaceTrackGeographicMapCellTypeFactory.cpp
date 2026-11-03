
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_EMPTYRACERACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_EMPTYRACERACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/EmptyRaceRaceTrackGeographicMapCellTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"

auto EmptyRaceRaceTrackGeographicMapCellTypeFactory::instanceC_owner() -> EmptyRaceRaceTrackGeographicMapCellTypeFactory* { static std::unique_ptr<EmptyRaceRaceTrackGeographicMapCellTypeFactory> value(new EmptyRaceRaceTrackGeographicMapCellTypeFactory()); return value.get(); }
EmptyRaceRaceTrackGeographicMapCellTypeFactory* EmptyRaceRaceTrackGeographicMapCellTypeFactory::instanceC = EmptyRaceRaceTrackGeographicMapCellTypeFactory::instanceC_owner();

    auto EmptyRaceRaceTrackGeographicMapCellTypeFactory::getInstance() -> EmptyRaceRaceTrackGeographicMapCellTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EmptyRaceRaceTrackGeographicMapCellTypeFactory::instanceC;
    
}


EmptyRaceRaceTrackGeographicMapCellTypeFactory::EmptyRaceRaceTrackGeographicMapCellTypeFactory(){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->EMPTY_CELL_TYPE= new RaceTrackGeographicMapCellType(commonStrings->EMPTY, 0, PathFindingNodeCostInfoData::getInstance()->MAX_NODE_COST, 1);
    
this->EASY_CELL_TYPE= new RaceTrackGeographicMapCellType("Easy", 19, 1, 0);
    
this->FINISH_LINE_ROAD_CELL_TYPE= this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_EMPTYRACERACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_CPP
