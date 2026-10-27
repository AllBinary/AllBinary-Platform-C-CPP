
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKSTARTPOINTUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKSTARTPOINTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackStartPointUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RaceTrackStartPointUtil::RaceTrackStartPointUtil() {
        }
        
                //@Throws(Exception.constructor)
            
    auto RaceTrackStartPointUtil::get(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t index) -> GPoint*{

    BasicArrayList* list = pathFindingInfo->getStartPathFindingNodeList();;
    

    PathFindingNode* startPathFindingNode = dynamic_cast<PathFindingNode*>(list->get(index));;
    

    GeographicMapCellPosition* geographicMapCellPosition = startPathFindingNode->geographicMapCellPosition;;
    

    GPoint* point = geographicMapCellPosition->getPoint();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointFactory::getInstance()->createXY(point->getX(), point->getY() +geographicMapInterface->getAllBinaryTiledLayer()->getHalfCellHeight());;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKSTARTPOINTUTIL_CPP
