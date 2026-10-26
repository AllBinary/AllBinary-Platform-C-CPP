
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/jgrapht/GraphPath.h>

      
#include <org/jgrapht/graph/DefaultWeightedEdge.h>

      
#include <org/jgrapht/graph/SimpleWeightedGraph.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasePathFinderGraphVisitor.h"
#include "CellPositionArray.h"

template<typename V, typename E>
class PathFinderGraphHackVisitor: public BasePathFinderGraphVisitor<V, E> {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: PathFinderGraphHackVisitor(BasicGeographicMap geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

                //@Throws(Exception.constructor)
            
    public: void visit(SimpleWeightedGraph graph, BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList);

                //@Throws(Exception.constructor)
            
    private: void fixStart(SimpleWeightedGraph<CellPosition, DefaultWeightedEdge> graph, BasicArrayList startPathFindingNodeList);

                //@Throws(Exception.constructor)
            
    private: void fixEnd(SimpleWeightedGraph<CellPosition, DefaultWeightedEdge> graph, BasicArrayList endPathFindingNodeList);

                //@Throws(Exception.constructor)
            
    private: void fixOverPassEdges(SimpleWeightedGraph<CellPosition, DefaultWeightedEdge> graph);

                //@Throws(Exception.constructor)
            
    public: void fixPath(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, BasicArrayList pathList);

                //@Throws(Exception.constructor)
            
    private: void removeOverPassEdges(BasicArrayList pathList);

    public: bool isValid(GraphPath graphPath);

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H
