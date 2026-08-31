
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingNodeCostInfoFactoryBase.h"
#include "PathFindingNodeCostInfo.h"

class PathFindingNodeCostInfoFactory: public PathFindingNodeCostInfoFactoryBase {
        

    private: const pathFindingNodeCostInfoAdjacencyList: std::vector<std::vector<PathFindingNodeCostInfo>>;

public constructor (int32_t max){

            super();
        this.pathFindingNodeCostInfoAdjacencyList= new Array(max).fill(null).map(() => new Array(max).fill(0))
                                                            ;
    
}


                //@Throws(Exception.constructor)
            
    public create(BasicGeographicMap geographicMapInterface, GeographicMapCellPosition goingToGeographicMapCellPosition, GeographicMapCellPosition geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd){
this.getInstance(goingToGeographicMapCellPosition, geographicMapCellPosition, costFromStart, costToEnd);
    
}


                //@Throws(Exception.constructor)
            
    public PathFindingNodeCostInfo getInstance(GeographicMapCellPosition goingToGeographicMapCellPosition, GeographicMapCellPosition geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd){

    pathFindingNodeCostInfo: PathFindingNodeCostInfo = this.getInstance(goingToGeographicMapCellPosition, geographicMapCellPosition)!;;
    

                        if(pathFindingNodeCostInfo == 
                                    null
                                )
                        
                                    {
                                    pathFindingNodeCostInfo= new PathFindingNodeCostInfo(costFromStart, costToEnd);
    
pathFindingNodeCostInfo!.setCalculatedTotalCost();
    
this.pathFindingNodeCostInfoAdjacencyList[geographicMapCellPosition!.getId()]![goingToGeographicMapCellPosition!.getId()]= pathFindingNodeCostInfo;
    

                                    }
                                
                        else {
                            pathFindingNodeCostInfo!.setCostFromStart(costFromStart);
    
pathFindingNodeCostInfo!.setCostToEnd(costToEnd);
    
pathFindingNodeCostInfo!.setCalculatedTotalCost();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathFindingNodeCostInfo;
    
}


    public PathFindingNodeCostInfo getInstance(GeographicMapCellPosition goingToFromGeographicMapCellPosition, GeographicMapCellPosition geographicMapCellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.pathFindingNodeCostInfoAdjacencyList[geographicMapCellPosition!.getId()]![goingToFromGeographicMapCellPosition!.getId()]!;
    
}


    public int64_t getTotalCost(BasicGeographicMap geographicMapInterface, GeographicMapCellPosition comingFromGeographicMapCellPosition, GeographicMapCellPosition geographicMapCellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getInstance(comingFromGeographicMapCellPosition, geographicMapCellPosition)!.totalCostP;
    
}


};

            

