
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

            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapGraph.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapPathFinder.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimplePathFinderGraphVisitorFactory.h"

class PathFindingInfoFactory: public BasePathFindingInfoFactory {

    private: static PathFindingInfoFactory instance;

    public: static PathFindingInfoFactory getInstance();

    public: static void initMax(int32_t max);

    private: const int32_t MAX_DIRECTIONS = 4;

    private: PathFindingInfo pathFindingInfo;

    private: BasicGeographicMapGraph basicGeographicMapGraph;

    private: BasicGeographicMapPathFinder basicGeographicMapPathFinder;

    private: PathFinderGraphVisitorFactoryBase pathFinderGraphVisitorFactoryInterface;

private: PathFindingInfoFactory(PathFinderGraphVisitorFactoryBase pathFinderGraphVisitorFactoryInterface, int32_t max);

                //@Throws(Exception.constructor)
            
    public: PathFindingInfo getInstancePathFindingInfo(BasicGeographicMap geographicMapInterface, std::vector<std::vector<int32_t>> mapArray);

                //@Throws(Exception.constructor)
            
    public: void init(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray);

                //@Throws(Exception.constructor)
            
    private: void buildPathFindingNodesForCellPosition(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray, GeographicMapCellPosition cellPosition);

                //@Throws(Exception.constructor)
            
    private: void buildPathFindingNodes(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray);

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_H
