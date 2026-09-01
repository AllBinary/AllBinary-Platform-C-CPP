
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_H

            #include <vector>
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <java/util/HashSet.h>

      
#include <java/util/PriorityQueue.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicPathFinderBase.h"
#include "PathFindingNodeCost.h"
#include "PathFindingNodeCostInfo.h"
#include "PathFindingNode.h"
#include "MultipassState.h"

class PathFinder: public GeographicPathFinderBase {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: const MathUtil mathUtil = MathUtil::getInstance();

    private: const PriorityQueue<PathFindingNodeCost> openPriorityQueue = PriorityQueue<PathFindingNodeCost>();

    private: const HashSet<PathFindingNodeCost> closedSet = HashSet<PathFindingNodeCost>();

    private: Object* geographicMapInterface = NullUtil::getInstance().NULL_OBJECT;

    private: std::vector<std::vector<PathFindingNodeCost>> costArray = PathFindingNodeCost::NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY;

                //@Throws(Exception.constructor)
            
    public: void init(BasicGeographicMap geographicMapInterface);

    public: BasicArrayList searchTotalPath(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList searchTotalPathN(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, int32_t totalPaths, MultipassState multipassState);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList search(PathFindingNode startPathFindingNode, PathFindingNode endPathFindingNode);

                //@Throws(Exception.constructor)
            
    public: void searchStart(PathFindingNode startPathFindingNode, PathFindingNode endPathFindingNode, MultipassState multipassState);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList searchN(PathFindingNode startPathFindingNode, PathFindingNode endPathFindingNode, MultipassState multipassState);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList findPath(GeographicMapCellPosition start, GeographicMapCellPosition target);

                //@Throws(Exception.constructor)
            
    public: void findPathStart(GeographicMapCellPosition start, GeographicMapCellPosition target, MultipassState multipassState);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList findPathEnd(GeographicMapCellPosition start, GeographicMapCellPosition target, MultipassState multipassState);

    private: BasicArrayList extractPath(GeographicMapCellPosition start, PathFindingNodeCost current);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_H
