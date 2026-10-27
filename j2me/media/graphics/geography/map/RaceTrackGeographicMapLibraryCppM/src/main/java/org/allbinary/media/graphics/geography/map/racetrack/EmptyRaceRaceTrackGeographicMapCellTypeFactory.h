
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_EMPTYRACERACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_EMPTYRACERACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"

class EmptyRaceRaceTrackGeographicMapCellTypeFactory: public RaceTrackGeographicMapCellTypeFactory {

    private: static EmptyRaceRaceTrackGeographicMapCellTypeFactory* instanceC() { static std::unique_ptr<EmptyRaceRaceTrackGeographicMapCellTypeFactory> value(new EmptyRaceRaceTrackGeographicMapCellTypeFactory()); return value.get(); }

    public: static EmptyRaceRaceTrackGeographicMapCellTypeFactory* getInstance();

private: EmptyRaceRaceTrackGeographicMapCellTypeFactory();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_EMPTYRACERACETRACKGEOGRAPHICMAPCELLTYPEFACTORY_H
