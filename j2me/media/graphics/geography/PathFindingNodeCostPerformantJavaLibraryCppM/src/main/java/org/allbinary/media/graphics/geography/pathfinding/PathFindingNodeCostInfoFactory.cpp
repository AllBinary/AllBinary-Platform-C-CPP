
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h"


PathFindingNodeCostInfoFactory::PathFindingNodeCostInfoFactory(int32_t max){
}


                //@Throws(Exception.constructor)
            
    auto PathFindingNodeCostInfoFactory::create(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* goingToGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd) -> void{
}


                //@Throws(Exception.constructor)
            
    auto PathFindingNodeCostInfoFactory::getTotalCost(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) -> int64_t{

    GeographicMapCellType* geographicMapCellType = geographicMapInterface->getCellTypeAt(comingFromGeographicMapCellPosition);;
    

    GeographicMapCellType* geographicMapCellType2 = geographicMapInterface->getCellTypeAt(geographicMapCellPosition);;
    

    RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType = dynamic_cast<RaceTrackGeographicMapCellType*>(geographicMapCellType);;
    

    RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType2 = dynamic_cast<RaceTrackGeographicMapCellType*>(geographicMapCellType2);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return raceTrackGeographicMapCellType->getTravelCost() +raceTrackGeographicMapCellType2->getTravelCost();
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORY_CPP
