
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Comparable.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoData.h"


PathFindingNodeCostInfo::PathFindingNodeCostInfo(int64_t costFromStart, int64_t costToGoal) : pathFindingNodeCostInfoData(PathFindingNodeCostInfoData::getInstance()){
this->costFromStartP= costFromStart;
    
this->costToEndP= costToGoal;
    
this->setCalculatedTotalCost();
    
}


    auto PathFindingNodeCostInfo::setCostToEnd(int64_t costToEnd) -> void{
this->costToEndP= costToEnd;
    
}


    auto PathFindingNodeCostInfo::setTotalCost(int64_t totalCost) -> void{
this->totalCostP= totalCost;
    
}


                //@Throws(Exception.constructor)
            
    auto PathFindingNodeCostInfo::setCalculatedTotalCost() -> void{
this->totalCostP= this->costFromStartP +this->costToEndP;
    

                        if(this->totalCostP > this->pathFindingNodeCostInfoData->MAX_NODE_COST)
                        
                                    {
                                    


                            throw Exception("Max Cost Exceeded");
                    

                                    }
                                
}


    auto PathFindingNodeCostInfo::setCostFromStart(int64_t cost) -> void{
this->costFromStartP= cost;
    
}


    auto PathFindingNodeCostInfo::addCostFromStart(int64_t cost) -> void{
this->costFromStartP += cost;
    
}


    auto PathFindingNodeCostInfo::compareTo(PathFindingNodeCostInfo* pathFindingNodeCostInfo) -> int32_t{

                        if(this->totalCostP < pathFindingNodeCostInfo->totalCostP)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    

                                    }
                                
                             else 
                        if(this->totalCostP > pathFindingNodeCostInfo->totalCostP)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 1;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto PathFindingNodeCostInfo::toString() -> std::string{

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




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_CPP
