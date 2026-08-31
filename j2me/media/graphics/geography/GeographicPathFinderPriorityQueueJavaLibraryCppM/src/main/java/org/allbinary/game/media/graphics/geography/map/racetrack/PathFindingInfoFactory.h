
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_H
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_H

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinder.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //1.4.2
class PathFindingInfoFactory: public BasePathFindingInfoFactory {
        

    private: static const instance: PathFindingInfoFactory = new PathFindingInfoFactory();

    public static PathFindingInfoFactory getInstance();

    private: static MAX: int32_t = 32768;

    public static initMax(int32_t max);

    private: const pathFindingInfo: PathFindingInfo;

    private: const pathFinder: PathFinder;

private constructor ();

                //@Throws(Exception.constructor)
            
    public PathFindingInfo getInstancePathFindingInfo(BasicGeographicMap geographicMapInterface, std::vector<std::vector<int32_t>> mapArray);

                //@Throws(Exception.constructor)
            
    public init(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray);

                //@Throws(Exception.constructor)
            
    buildPathFindingNodesForCellPosition(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray, GeographicMapCellPosition cellPosition);

                //@Throws(Exception.constructor)
            
    buildPathFindingNodes(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray);

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_H
