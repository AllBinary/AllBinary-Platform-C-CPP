
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Comparable.h"
#include "PathFindingNodeCostInfoData.h"

class PathFindingNodeCostInfo
            : public Object
        : public Comparable<PathFindingNodeCostInfo> {
        

    private: const pathFindingNodeCostInfoData: PathFindingNodeCostInfoData = PathFindingNodeCostInfoData.getInstance()!;

    public costFromStartP: int64_t;

    public costToEndP: int64_t;

    public totalCostP: int64_t= 0;

public constructor (int64_t costFromStart, int64_t costToGoal);

    public setCostToEnd(int64_t costToEnd);

    public setTotalCost(int64_t totalCost);

                //@Throws(Exception.constructor)
            
    public setCalculatedTotalCost();

    public setCostFromStart(int64_t cost);

    public addCostFromStart(int64_t cost);

    public int32_t compareTo(PathFindingNodeCostInfo pathFindingNodeCostInfo);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_H
