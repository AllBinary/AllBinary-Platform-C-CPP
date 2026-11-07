
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCost.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Comparable.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h"

std::vector<std::vector<PathFindingNodeCost*>> PathFindingNodeCost::NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY = std::vector<std::vector<PathFindingNodeCost*>>(0, std::vector<PathFindingNodeCost*>(0));

PathFindingNodeCost::PathFindingNodeCost(Object* parent, GeographicMapCellPosition* geographicMapCellPosition, PathFindingNodeCostInfo* pathFindingNodeCostInfo) : PathFindingNode(parent, geographicMapCellPosition), commonSeps(CommonSeps::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->pathFindingNodeCostInfoP= pathFindingNodeCostInfo;
    

                        if(this->geographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("No GeographicMapCellPosition");
                    

                                    }
                                

                        if(this->getPathFindingNodeCostInfo() == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("No PathFindingNodeCostInfo");
                    

                                    }
                                
}


    auto PathFindingNodeCost::getPathFindingNodeCostInfo() -> PathFindingNodeCostInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->pathFindingNodeCostInfoP;
    
}


    auto PathFindingNodeCost::setPathFindingNodeCostInfo(PathFindingNodeCostInfo* pathFindingNodeCostInfo) -> void{
this->pathFindingNodeCostInfoP= pathFindingNodeCostInfo;
    
}


    auto PathFindingNodeCost::compareTo(PathFindingNodeCost* pathFindingNodeCost) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->pathFindingNodeCostInfoP->compareTo(pathFindingNodeCost->pathFindingNodeCostInfoP);;
    
}


    auto PathFindingNodeCost::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(CommonLabels::getInstance()->COLON_SEP);
    
stringBuffer->append(JavaString::valueOf(this->getPathFindingNodeCostInfo()));
    
stringBuffer->append(" Path: ");
    
stringBuffer->append(JavaString::valueOf(this->geographicMapCellPosition));
    

    PathFindingNode* pathFindingNode = dynamic_cast<PathFindingNode*>(this->parent);;
    

        while(pathFindingNode != 
                                    nullptr
                                )
        {
stringBuffer->append(JavaString::valueOf(pathFindingNode->geographicMapCellPosition));
    
stringBuffer->append(this->commonSeps->SPACE);
    
pathFindingNode= dynamic_cast<PathFindingNode*>(pathFindingNode->parent);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOST_CPP
