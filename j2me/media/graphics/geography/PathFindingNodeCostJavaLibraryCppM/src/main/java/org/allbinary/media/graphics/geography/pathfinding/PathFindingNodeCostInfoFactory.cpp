
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h"


PathFindingNodeCostInfoFactory::PathFindingNodeCostInfoFactory(int32_t max){
this->pathFindingNodeCostInfoAdjacencyList= std::vector<std::vector<PathFindingNodeCostInfo*>>(max, std::vector<PathFindingNodeCostInfo*>(max));
    
}


                //@Throws(Exception.constructor)
            
    auto PathFindingNodeCostInfoFactory::create(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* goingToGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd) -> void{
this->getInstance(goingToGeographicMapCellPosition, geographicMapCellPosition, costFromStart, costToEnd);
    
}


                //@Throws(Exception.constructor)
            
    auto PathFindingNodeCostInfoFactory::getInstance(GeographicMapCellPosition* goingToGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd) -> PathFindingNodeCostInfo*{

    PathFindingNodeCostInfo* pathFindingNodeCostInfo = this->getInstance(goingToGeographicMapCellPosition, geographicMapCellPosition);;
    

                        if(pathFindingNodeCostInfo == 
                                    nullptr
                                )
                        
                                    {
                                    pathFindingNodeCostInfo= new PathFindingNodeCostInfo(costFromStart, costToEnd);
    
pathFindingNodeCostInfo->setCalculatedTotalCost();
    
this->pathFindingNodeCostInfoAdjacencyList[geographicMapCellPosition->getId()][goingToGeographicMapCellPosition->getId()]= pathFindingNodeCostInfo;
    

                                    }
                                
                        else {
                            pathFindingNodeCostInfo->setCostFromStart(costFromStart);
    
pathFindingNodeCostInfo->setCostToEnd(costToEnd);
    
pathFindingNodeCostInfo->setCalculatedTotalCost();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return pathFindingNodeCostInfo;
    
}


    auto PathFindingNodeCostInfoFactory::getInstance(GeographicMapCellPosition* goingToFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) -> PathFindingNodeCostInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->pathFindingNodeCostInfoAdjacencyList[geographicMapCellPosition->getId()][goingToFromGeographicMapCellPosition->getId()];
    
}


    auto PathFindingNodeCostInfoFactory::getTotalCost(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getInstance(comingFromGeographicMapCellPosition, geographicMapCellPosition)->totalCostP;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFOFACTORY_CPP
