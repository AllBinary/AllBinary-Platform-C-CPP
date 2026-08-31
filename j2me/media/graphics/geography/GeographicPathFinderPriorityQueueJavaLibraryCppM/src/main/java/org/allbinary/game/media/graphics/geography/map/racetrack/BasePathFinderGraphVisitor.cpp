
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //1.4.2
class BasePathFinderGraphVisitor: public PathFinderGraphVisitorBase {
        

    geographicMapInterface: BasicGeographicMap;

    const edgeMinimum: int32_t;

    const minPathWeight: int32_t;

    const maxPathWeight: int32_t;

public constructor (BasicGeographicMap geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight){

            super();
        this.geographicMapInterface= geographicMapInterface;
    
this.edgeMinimum= edgeMinimum;
    
this.minPathWeight= minPathWeight;
    
this.maxPathWeight= maxPathWeight;
    
}


                //@Throws(Exception.constructor)
            
    public visit(any = {} graph, BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList){
}


                //@Throws(Exception.constructor)
            
    public fixPath(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, BasicArrayList pathList){

    startPathFindingNode: PathFindingNode;;
    




                        for (
    index: int32_t = startPathFindingNodeList!.size() -1;index >= 0; index--)
        {
startPathFindingNode= startPathFindingNodeList!.get(index) as PathFindingNode;
    
pathList!.remove(startPathFindingNode!.geographicMapCellPosition);
    
pathList!.addAt(0, startPathFindingNode!.geographicMapCellPosition);
    
}

}


    public bool isValid(any = {} graphPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string getInvalidReason(any = {} graphPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


};

            

