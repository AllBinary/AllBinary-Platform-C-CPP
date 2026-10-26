
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_H
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_H

            #include "java/lang/Exception.h"
        
#include <org/jgrapht/GraphPath.h>

      
#include <org/jgrapht/graph/SimpleWeightedGraph.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
template<typename V, typename E>
class BasePathFinderGraphVisitor: public PathFinderGraphVisitorBase {

    protected: BasicGeographicMap geographicMapInterface;

    protected: int32_t edgeMinimum;

    protected: int32_t minPathWeight;

    protected: int32_t maxPathWeight;

public: BasePathFinderGraphVisitor(BasicGeographicMap geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

                //@Throws(Exception.constructor)
            
    public: void visit(SimpleWeightedGraph graph, BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList);

                //@Throws(Exception.constructor)
            
    public: void fixPath(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, BasicArrayList pathList);

    public: bool isValid(GraphPath graphPath);

    public: std::string getInvalidReason(GraphPath graphPath);

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_H
