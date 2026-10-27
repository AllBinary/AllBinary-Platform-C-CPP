
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GraphPath;
class DefaultWeightedEdge;
#include <org/jgrapht/graph/SimpleWeightedGraph.h>
class BasicArrayList;
class LogUtil;
class AllBinaryTiledLayer;
class CellPosition;
class BasicGeographicMap;
class BasicGeographicMapCellPositionFactory;
class BasicGeographicMapUtil;
class GeographicMapCellPosition;
class RaceTrackGeographicMap;
class PathFindingNode;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"
class CellPositionArray;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
template<typename V, typename E>
class PathFinderGraphHackVisitor: public BasePathFinderGraphVisitor<V, E> {

    /*protected*/ public: LogUtil* logUtil;

public: PathFinderGraphHackVisitor(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

                //@Throws(Exception.constructor)
            
    public: void visit(SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);

                //@Throws(Exception.constructor)
            
    private: void fixStart(SimpleWeightedGraph<CellPosition*, DefaultWeightedEdge*>* graph, BasicArrayList* startPathFindingNodeList);

                //@Throws(Exception.constructor)
            
    private: void fixEnd(SimpleWeightedGraph<CellPosition*, DefaultWeightedEdge*>* graph, BasicArrayList* endPathFindingNodeList);

                //@Throws(Exception.constructor)
            
    private: void fixOverPassEdges(SimpleWeightedGraph<CellPosition*, DefaultWeightedEdge*>* graph);

                //@Throws(Exception.constructor)
            
    public: void fixPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList);

                //@Throws(Exception.constructor)
            
    private: void removeOverPassEdges(BasicArrayList* pathList);

    public: bool isValid(GraphPath* graphPath);

};

            

        #include "org/allbinary/game/media/graphics/geography/map/racetrack/PathFinderGraphHackVisitor.cpp"
        

        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_H_COMPLETE
        #if __has_include(<org/jgrapht/GraphPath.h>)
#include <org/jgrapht/GraphPath.h>
#endif
#if __has_include(<org/jgrapht/graph/DefaultWeightedEdge.h>)
#include <org/jgrapht/graph/DefaultWeightedEdge.h>
#endif
#if __has_include(<org/jgrapht/graph/SimpleWeightedGraph.h>)
#include <org/jgrapht/graph/SimpleWeightedGraph.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>
#endif
#if __has_include("org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h")
#include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"
#endif
#if __has_include("org/allbinary/game/media/graphics/geography/map/racetrack/CellPositionArray.h")
#include "org/allbinary/game/media/graphics/geography/map/racetrack/CellPositionArray.h"
#endif

        #endif
    
