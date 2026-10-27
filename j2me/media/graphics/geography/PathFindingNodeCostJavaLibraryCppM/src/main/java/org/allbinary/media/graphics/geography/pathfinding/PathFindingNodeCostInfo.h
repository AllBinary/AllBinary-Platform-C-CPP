
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/Comparable.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoData.h"

class PathFindingNodeCostInfo
            : public Object
        , public Comparable<PathFindingNodeCostInfo*> {

    private: PathFindingNodeCostInfoData* pathFindingNodeCostInfoData = PathFindingNodeCostInfoData::getInstance();

    public: int64_t costFromStartP;

    public: int64_t costToEndP;

    public: int64_t totalCostP= 0;

public: PathFindingNodeCostInfo(int64_t costFromStart, int64_t costToGoal);

    public: void setCostToEnd(int64_t costToEnd);

    public: void setTotalCost(int64_t totalCost);

                //@Throws(Exception.constructor)
            
    public: void setCalculatedTotalCost();

    public: void setCostFromStart(int64_t cost);

    public: void addCostFromStart(int64_t cost);

    public: int32_t compareTo(PathFindingNodeCostInfo* pathFindingNodeCostInfo);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_H
