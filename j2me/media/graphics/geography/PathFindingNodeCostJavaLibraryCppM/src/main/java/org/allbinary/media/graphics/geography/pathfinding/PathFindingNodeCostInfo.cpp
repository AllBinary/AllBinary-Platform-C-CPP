
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

public constructor (int64_t costFromStart, int64_t costToGoal){

            super();
        this.costFromStartP= costFromStart;
    
this.costToEndP= costToGoal;
    
this.setCalculatedTotalCost();
    
}


    public setCostToEnd(int64_t costToEnd){
this.costToEndP= costToEnd;
    
}


    public setTotalCost(int64_t totalCost){
this.totalCostP= totalCost;
    
}


                //@Throws(Exception.constructor)
            
    public setCalculatedTotalCost(){
this.totalCostP= this.costFromStartP +this.costToEndP;
    

                        if(this.totalCostP > this.pathFindingNodeCostInfoData!.MAX_NODE_COST)
                        
                                    {
                                    


                            throw new Exception("Max Cost Exceeded");
                    

                                    }
                                
}


    public setCostFromStart(int64_t cost){
this.costFromStartP= cost;
    
}


    public addCostFromStart(int64_t cost){
this.costFromStartP += cost;
    
}


    public int32_t compareTo(PathFindingNodeCostInfo pathFindingNodeCostInfo){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return java.lang.Long.compare(this.totalCostP, pathFindingNodeCostInfo!.totalCostP);;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.constructor.name.toString()!);
    
stringBuffer!.append(CommonLabels.getInstance()!.COLON_SEP);
    
stringBuffer!.append("CostFromStart: ");
    
stringBuffer!.appendlong(this.costFromStartP);
    
stringBuffer!.append(" CostToEnd: ");
    
stringBuffer!.appendlong(this.costToEndP);
    
stringBuffer!.append(" TotalCost: ");
    
stringBuffer!.appendlong(this.totalCostP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

