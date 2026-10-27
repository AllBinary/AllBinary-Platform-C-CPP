
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

        #include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/jgrapht/GraphPath.h>

      
#include <org/jgrapht/graph/SimpleWeightedGraph.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

template<typename V, typename E>
BasePathFinderGraphVisitor<V, E>::BasePathFinderGraphVisitor(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight){
this->geographicMapInterface= geographicMapInterface;
    
this->edgeMinimum= edgeMinimum;
    
this->minPathWeight= minPathWeight;
    
this->maxPathWeight= maxPathWeight;
    
}


                //@Throws(Exception.constructor)
            
    template<typename V, typename E>
auto BasePathFinderGraphVisitor<V, E>::visit(SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) -> void{
}


                //@Throws(Exception.constructor)
            
    template<typename V, typename E>
auto BasePathFinderGraphVisitor<V, E>::fixPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList) -> void{




                        for (
    int32_t index = startPathFindingNodeList->size() -1;index >= 0; index--)
        {

    PathFindingNode* startPathFindingNode = dynamic_cast<PathFindingNode*>(startPathFindingNodeList->get(index));;
    
pathList->remove(startPathFindingNode->geographicMapCellPosition);
    
pathList->addAt(0, startPathFindingNode->geographicMapCellPosition);
    
}

}


    template<typename V, typename E>
auto BasePathFinderGraphVisitor<V, E>::isValid(GraphPath* graphPath) -> bool{

                        if(graphPath->getEdgeList()->size() > this->edgeMinimum && graphPath->getWeight() < this->maxPathWeight && graphPath->getWeight() > this->minPathWeight)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    template<typename V, typename E>
auto BasePathFinderGraphVisitor<V, E>::getInvalidReason(GraphPath* graphPath) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(graphPath->getEdgeList()->size() < this->edgeMinimum)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf("Ignoring Small: ") +JavaString::valueOf(graphPath->getEdgeList()->size()));
    

                                    }
                                

                        if(graphPath->getWeight() <= this->minPathWeight)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(" Low Weighted Path: ") +JavaString::valueOf(graphPath->getWeight()));
    

                                    }
                                

                        if(graphPath->getWeight() >= this->maxPathWeight)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(" To High Weighted Path: ") +JavaString::valueOf(graphPath->getWeight()));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDERGRAPHVISITOR_CPP
