
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFODATA_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFODATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto PathFindingNodeCostInfoData::instance_owner() -> PathFindingNodeCostInfoData* { static std::unique_ptr<PathFindingNodeCostInfoData> value(new PathFindingNodeCostInfoData()); return value.get(); }
PathFindingNodeCostInfoData* PathFindingNodeCostInfoData::instance = PathFindingNodeCostInfoData::instance_owner();

    auto PathFindingNodeCostInfoData::getInstance() -> PathFindingNodeCostInfoData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingNodeCostInfoData::instance;
    
}


PathFindingNodeCostInfoData::PathFindingNodeCostInfoData() : MAX_TOTAL_COST(Integer.MAX_VALUE), MAX_NODE_COST(Integer.MAX_VALUE /10000){
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFODATA_CPP
