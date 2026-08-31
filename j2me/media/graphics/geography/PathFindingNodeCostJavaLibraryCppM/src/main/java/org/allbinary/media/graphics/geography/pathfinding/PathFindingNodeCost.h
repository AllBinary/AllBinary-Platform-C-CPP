
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingNode.h"
#include "Comparable.h"
#include "PathFindingNodeCostInfo.h"

class PathFindingNodeCost: public PathFindingNode: public Comparable<PathFindingNodeCost> {
        

    public static const NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY: std::vector<std::vector<PathFindingNodeCost>> = new Array(0).fill(null).map(() => new Array(0).fill(0))
                                                            ;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    public pathFindingNodeCostInfoP: PathFindingNodeCostInfo;

public constructor (any = {} parent, GeographicMapCellPosition geographicMapCellPosition, PathFindingNodeCostInfo pathFindingNodeCostInfo);

    public PathFindingNodeCostInfo getPathFindingNodeCostInfo();

    public setPathFindingNodeCostInfo(PathFindingNodeCostInfo pathFindingNodeCostInfo);

    public int32_t compareTo(PathFindingNodeCost pathFindingNodeCost);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_H
