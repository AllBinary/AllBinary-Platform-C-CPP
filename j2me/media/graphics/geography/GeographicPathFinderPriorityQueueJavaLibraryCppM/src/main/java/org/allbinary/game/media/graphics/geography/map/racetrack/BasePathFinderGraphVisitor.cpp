
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_CPP
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //1.4.2

BasePathFinderGraphVisitor::BasePathFinderGraphVisitor(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight){
this->geographicMapInterface= geographicMapInterface;
    
this->edgeMinimum= edgeMinimum;
    
this->minPathWeight= minPathWeight;
    
this->maxPathWeight= maxPathWeight;
    
}


                //@Throws(Exception.constructor)
            
    auto BasePathFinderGraphVisitor::visit(Object* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) -> void{
}


                //@Throws(Exception.constructor)
            
    auto BasePathFinderGraphVisitor::fixPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList) -> void{

    PathFindingNode* startPathFindingNode;;
    




                        for (
    int32_t index = startPathFindingNodeList->size() -1;index >= 0; index--)
        {
startPathFindingNode= dynamic_cast<PathFindingNode*>(startPathFindingNodeList->get(index));
    
pathList->remove(startPathFindingNode->geographicMapCellPosition);
    
pathList->addAt(0, startPathFindingNode->geographicMapCellPosition);
    
}

}


    auto BasePathFinderGraphVisitor::isValid(Object* graphPath) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto BasePathFinderGraphVisitor::getInvalidReason(Object* graphPath) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}




        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_CPP
