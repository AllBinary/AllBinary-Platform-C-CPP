
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

public: PathFindingNodeCostInfo(int64_t costFromStart, int64_t costToGoal){
this->costFromStartP= costFromStart;
    
this->costToEndP= costToGoal;
    
this->setCalculatedTotalCost();
    
}


    public: void setCostToEnd(int64_t costToEnd){
this->costToEndP= costToEnd;
    
}


    public: void setTotalCost(int64_t totalCost){
this->totalCostP= totalCost;
    
}


                //@Throws(Exception.constructor)
            
    public: void setCalculatedTotalCost(){
this->totalCostP= this->costFromStartP +this->costToEndP;
    

                        if(this->totalCostP > this->pathFindingNodeCostInfoData->MAX_NODE_COST)
                        
                                    {
                                    


                            throw new Exception("Max Cost Exceeded");
                    

                                    }
                                
}


    public: void setCostFromStart(int64_t cost){
this->costFromStartP= cost;
    
}


    public: void addCostFromStart(int64_t cost){
this->costFromStartP += cost;
    
}


    public: int32_t compareTo(PathFindingNodeCostInfo* pathFindingNodeCostInfo){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long.compare(this->totalCostP, pathFindingNodeCostInfo->totalCostP);;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(CommonLabels::getInstance()->COLON_SEP);
    
stringBuffer->append("CostFromStart: ");
    
stringBuffer->appendlong(this->costFromStartP);
    
stringBuffer->append(" CostToEnd: ");
    
stringBuffer->appendlong(this->costToEndP);
    
stringBuffer->append(" TotalCost: ");
    
stringBuffer->appendlong(this->totalCostP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

