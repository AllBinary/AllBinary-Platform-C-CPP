
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingNodeCostInfoFactoryBaseInterface.h"

class PathFindingNodeCostInfoFactoryBase
            : public Object
        : public PathFindingNodeCostInfoFactoryBaseInterface {

    public: static const PathFindingNodeCostInfoFactoryBase NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE = PathFindingNodeCostInfoFactoryBase();

                //@Throws(Exception.constructor)
            
    public: void create(BasicGeographicMap geographicMapInterface, GeographicMapCellPosition comingFromGeographicMapCellPosition, GeographicMapCellPosition geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd);

                //@Throws(Exception.constructor)
            
    public: int64_t getTotalCost(BasicGeographicMap geographicMapInterface, GeographicMapCellPosition comingFromGeographicMapCellPosition, GeographicMapCellPosition geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_H
