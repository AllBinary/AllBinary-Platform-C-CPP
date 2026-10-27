
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKROADSGEOGRAPHICMAPCELLHISTORYFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKROADSGEOGRAPHICMAPCELLHISTORYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto RaceTrackRoadsGeographicMapCellHistoryFactory::geographicMapCellHistory_owner() -> GeographicMapCellHistory* { static std::unique_ptr<GeographicMapCellHistory> value(new GeographicMapCellHistory()); return value.get(); }
GeographicMapCellHistory* RaceTrackRoadsGeographicMapCellHistoryFactory::geographicMapCellHistory = RaceTrackRoadsGeographicMapCellHistoryFactory::geographicMapCellHistory_owner();

RaceTrackRoadsGeographicMapCellHistoryFactory::RaceTrackRoadsGeographicMapCellHistoryFactory(){
}


    auto RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance() -> GeographicMapCellHistory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceTrackRoadsGeographicMapCellHistoryFactory::geographicMapCellHistory;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKROADSGEOGRAPHICMAPCELLHISTORYFACTORY_CPP
