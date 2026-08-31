
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

public constructor (any = {} parent, GeographicMapCellPosition geographicMapCellPosition, PathFindingNodeCostInfo pathFindingNodeCostInfo){
            super(parent, geographicMapCellPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.pathFindingNodeCostInfoP= pathFindingNodeCostInfo;
    

                        if(this.geographicMapCellPosition == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("No GeographicMapCellPosition");
                    

                                    }
                                

                        if(this.getPathFindingNodeCostInfo() == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("No PathFindingNodeCostInfo");
                    

                                    }
                                
}


    public PathFindingNodeCostInfo getPathFindingNodeCostInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.pathFindingNodeCostInfoP;
    
}


    public setPathFindingNodeCostInfo(PathFindingNodeCostInfo pathFindingNodeCostInfo){
this.pathFindingNodeCostInfoP= pathFindingNodeCostInfo;
    
}


    public int32_t compareTo(PathFindingNodeCost pathFindingNodeCost){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.pathFindingNodeCostInfoP!.compareTo(pathFindingNodeCost!.pathFindingNodeCostInfoP);;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.constructor.name.toString()!);
    
stringBuffer!.append(CommonLabels.getInstance()!.COLON_SEP);
    
stringBuffer!.append(this.getPathFindingNodeCostInfo()!.toString());
    
stringBuffer!.append(" Path: ");
    
stringBuffer!.append(this.geographicMapCellPosition!.toString());
    

    pathFindingNode: PathFindingNode = this.parent as PathFindingNode;;
    

        while(pathFindingNode != 
                                    null
                                )
        {
stringBuffer!.append(pathFindingNode!.geographicMapCellPosition!.toString());
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
pathFindingNode= pathFindingNode!.parent as PathFindingNode;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

