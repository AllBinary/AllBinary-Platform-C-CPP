
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBaseInterface.h"


PathFindingNodeCostInfoFactoryBase::PathFindingNodeCostInfoFactoryBase() {
        }
        auto PathFindingNodeCostInfoFactoryBase::NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE_owner() -> PathFindingNodeCostInfoFactoryBase* { static std::unique_ptr<PathFindingNodeCostInfoFactoryBase> value(new PathFindingNodeCostInfoFactoryBase()); return value.get(); }
PathFindingNodeCostInfoFactoryBase* PathFindingNodeCostInfoFactoryBase::NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE = PathFindingNodeCostInfoFactoryBase::NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE_owner();

                //@Throws(Exception.constructor)
            
    auto PathFindingNodeCostInfoFactoryBase::create(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto PathFindingNodeCostInfoFactoryBase::getTotalCost(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) -> int64_t{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORYBASE_CPP
