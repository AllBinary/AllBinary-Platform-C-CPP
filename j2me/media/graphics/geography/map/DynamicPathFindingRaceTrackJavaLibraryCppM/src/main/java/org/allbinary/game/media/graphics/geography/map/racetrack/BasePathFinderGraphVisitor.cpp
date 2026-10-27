
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
class BasePathFinderGraphVisitor: public PathFinderGraphVisitorBase {

    protected: BasicGeographicMap* geographicMapInterface;

    protected: int32_t edgeMinimum;

    protected: int32_t minPathWeight;

    protected: int32_t maxPathWeight;

public: BasePathFinderGraphVisitor(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight){
this->geographicMapInterface= geographicMapInterface;
    
this->edgeMinimum= edgeMinimum;
    
this->minPathWeight= minPathWeight;
    
this->maxPathWeight= maxPathWeight;
    
}


                //@Throws(Exception.constructor)
            
    public: void visit(SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList){
}


                //@Throws(Exception.constructor)
            
    public: void fixPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList){




                        for (
    int32_t index = startPathFindingNodeList->size() -1;index >= 0; index--)
        {

    PathFindingNode* startPathFindingNode = dynamic_cast<PathFindingNode*>(startPathFindingNodeList->get(index));;
    
pathList->remove(startPathFindingNode->geographicMapCellPosition);
    
pathList->addAt(0, startPathFindingNode->geographicMapCellPosition);
    
}

}


    public: bool isValid(GraphPath* graphPath){

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


    public: std::string getInvalidReason(GraphPath* graphPath){

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(graphPath->getEdgeList()->size() < this->edgeMinimum)
                        
                                    {
                                    stringBuffer->append("Ignoring Small: " +graphPath->getEdgeList()->size());
    

                                    }
                                

                        if(graphPath->getWeight() <= this->minPathWeight)
                        
                                    {
                                    stringBuffer->append(" Low Weighted Path: " +graphPath->getWeight());
    

                                    }
                                

                        if(graphPath->getWeight() >= this->maxPathWeight)
                        
                                    {
                                    stringBuffer->append(" To High Weighted Path: " +graphPath->getWeight());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

