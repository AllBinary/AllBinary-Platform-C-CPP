
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PathFindingNodeCostInfoData
            : public Object
         {
        

    private: static const instance: PathFindingNodeCostInfoData = new PathFindingNodeCostInfoData();

    public static PathFindingNodeCostInfoData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingNodeCostInfoData.instance;
    
}


private constructor (){

            super();
        }


    public MAX_TOTAL_COST: int32_t = Integer.MAX_VALUE;

    public MAX_NODE_COST: int32_t = Integer.MAX_VALUE /10000;

};

            

