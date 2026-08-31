
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

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/jgrapht/GraphPath.h>

      
#include <org/jgrapht/graph/SimpleWeightedGraph.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasePathFinderGraphVisitor: public PathFinderGraphVisitorBase {
        

    geographicMapInterface: BasicGeographicMap;

    const edgeMinimum: int32_t;

    const minPathWeight: int32_t;

    const maxPathWeight: int32_t;

public constructor (BasicGeographicMap geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

                //@Throws(Exception.constructor)
            
    public visit(SimpleWeightedGraph graph, BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList);

                //@Throws(Exception.constructor)
            
    public fixPath(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, BasicArrayList pathList);

    public bool isValid(GraphPath graphPath);

    public string getInvalidReason(GraphPath graphPath);

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_H
