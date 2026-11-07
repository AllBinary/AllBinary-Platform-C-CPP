
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_CPP
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_CPP

        #include "org/allbinary/game/media/graphics/geography/map/racetrack/PathFinderGraphHackVisitor.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/jgrapht/GraphPath.h>

      
#include <org/jgrapht/graph/DefaultWeightedEdge.h>

      
#include <org/jgrapht/graph/SimpleWeightedGraph.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"
#include "org/allbinary/game/media/graphics/geography/map/racetrack/CellPositionArray.h"


template<typename V, typename E>
PathFinderGraphHackVisitor<V, E>::PathFinderGraphHackVisitor(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) : BasePathFinderGraphVisitor<V, E>(geographicMapInterface, edgeMinimum, minPathWeight, maxPathWeight), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    template<typename V, typename E>
auto PathFinderGraphHackVisitor<V, E>::visit(SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) -> void{
this->fixStart(graph, startPathFindingNodeList);
    
this->fixEnd(graph, endPathFindingNodeList);
    
this->fixOverPassEdges(graph);
    
}


                //@Throws(Exception.constructor)
            
    template<typename V, typename E>
auto PathFinderGraphHackVisitor<V, E>::fixStart(SimpleWeightedGraph<CellPosition*, DefaultWeightedEdge*>* graph, BasicArrayList* startPathFindingNodeList) -> void{

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = this->geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    AllBinaryTiledLayer* tiledLayer = this->geographicMapInterface->getAllBinaryTiledLayer();;
    




                        for (
    int32_t index = startPathFindingNodeList->size() -1;index >= 0; index--)
        {

    PathFindingNode* startPathFindingNode = dynamic_cast<PathFindingNode*>(startPathFindingNodeList->get(index));;
    

    GeographicMapCellPosition* geographicMapCellPosition = startPathFindingNode->geographicMapCellPosition;;
    

    int32_t column = geographicMapCellPosition->getColumn();;
    

    int32_t row = geographicMapCellPosition->getRow();;
    

    int32_t nextRow = row +1;;
    

                        if(tiledLayer->isOnTileLayer(column, nextRow))
                        
                                    {
                                    
    GeographicMapCellPosition* geographicMapCellPositionNeighbor = geographicMapCellPositionFactory->getAt(column, nextRow);;
    
graph->removeEdge(geographicMapCellPosition, geographicMapCellPositionNeighbor);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    template<typename V, typename E>
auto PathFinderGraphHackVisitor<V, E>::fixEnd(SimpleWeightedGraph<CellPosition*, DefaultWeightedEdge*>* graph, BasicArrayList* endPathFindingNodeList) -> void{

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = this->geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    AllBinaryTiledLayer* tiledLayer = this->geographicMapInterface->getAllBinaryTiledLayer();;
    




                        for (
    int32_t index = endPathFindingNodeList->size() -1;index >= 0; index--)
        {

    PathFindingNode* endPathFindingNode = dynamic_cast<PathFindingNode*>(endPathFindingNodeList->get(index));;
    

    GeographicMapCellPosition* geographicMapCellPosition = endPathFindingNode->geographicMapCellPosition;;
    
graph->addVertex(geographicMapCellPosition);
    

    int32_t column = geographicMapCellPosition->getColumn();;
    

    int32_t row = geographicMapCellPosition->getRow();;
    

    int32_t nextRow = row +1;;
    

                        if(tiledLayer->isOnTileLayer(column, nextRow))
                        
                                    {
                                    
    GeographicMapCellPosition* geographicMapCellPositionNeighbor = geographicMapCellPositionFactory->getAt(column, nextRow);;
    
graph->addEdge(geographicMapCellPosition, geographicMapCellPositionNeighbor);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    template<typename V, typename E>
auto PathFinderGraphHackVisitor<V, E>::fixOverPassEdges(SimpleWeightedGraph<CellPosition*, DefaultWeightedEdge*>* graph) -> void{

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = this->geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    RaceTrackGeographicMap* raceTrackGeographicMap = dynamic_cast<RaceTrackGeographicMap*>(this->geographicMapInterface);;
    

    std::vector<CellPosition*> CellPositionArray = raceTrackGeographicMap->getRaceTrackData()->getOverPassGeographicMapCellPositionArray();;
    




                        for (
    int32_t index = CellPositionArray.size() -1;index >= 0; index--)
        {

    CellPosition* overPassGeographicMapCellPosition = CellPositionArray[index];;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Fixing Over Pass: ") +JavaString::valueOf(overPassGeographicMapCellPosition->getColumn())) +JavaString::valueOf(", ")) +JavaString::valueOf(overPassGeographicMapCellPosition->getRow()), this, "fixOverPassEdges");
    

    GeographicMapCellPosition* underPassGeographicMapCellPosition = geographicMapCellPositionFactory->getAt(overPassGeographicMapCellPosition->getColumn(), overPassGeographicMapCellPosition->getRow());;
    

    GeographicMapCellPosition* rightUnderPassGeographicMapCellPosition = geographicMapCellPositionFactory->getAt(overPassGeographicMapCellPosition->getColumn() +1, overPassGeographicMapCellPosition->getRow());;
    

    GeographicMapCellPosition* leftUnderPassGeographicMapCellPosition = geographicMapCellPositionFactory->getAt(overPassGeographicMapCellPosition->getColumn() -1, overPassGeographicMapCellPosition->getRow());;
    
graph->removeEdge(underPassGeographicMapCellPosition, rightUnderPassGeographicMapCellPosition);
    
graph->removeEdge(underPassGeographicMapCellPosition, leftUnderPassGeographicMapCellPosition);
    
graph->addVertex(overPassGeographicMapCellPosition);
    
graph->addEdge(overPassGeographicMapCellPosition, rightUnderPassGeographicMapCellPosition);
    
graph->addEdge(overPassGeographicMapCellPosition, leftUnderPassGeographicMapCellPosition);
    
}

}


                //@Throws(Exception.constructor)
            
    template<typename V, typename E>
auto PathFinderGraphHackVisitor<V, E>::fixPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList) -> void{




                        for (
    int32_t index = startPathFindingNodeList->size() -1;index >= 0; index--)
        {

    PathFindingNode* endPathFindingNode = dynamic_cast<PathFindingNode*>(endPathFindingNodeList->get(index));;
    

    PathFindingNode* startPathFindingNode = dynamic_cast<PathFindingNode*>(startPathFindingNodeList->get(index));;
    

                        if(BasicGeographicMapUtil::getInstance()->isSameCellPosition(startPathFindingNode->geographicMapCellPosition, endPathFindingNode->geographicMapCellPosition))
                        
                                    {
                                    
                        if(pathList->remove(endPathFindingNode->geographicMapCellPosition))
                        
                                    {
                                    pathList->remove(startPathFindingNode->geographicMapCellPosition);
    
pathList->addAt(0, startPathFindingNode->geographicMapCellPosition);
    

                                    }
                                

                                    }
                                
}

this->removeOverPassEdges(pathList);
    
}


                //@Throws(Exception.constructor)
            
    template<typename V, typename E>
auto PathFinderGraphHackVisitor<V, E>::removeOverPassEdges(BasicArrayList* pathList) -> void{

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = this->geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    RaceTrackGeographicMap* raceTrackGeographicMap = dynamic_cast<RaceTrackGeographicMap*>(this->geographicMapInterface);;
    

    std::vector<CellPosition*> CellPositionArray = raceTrackGeographicMap->getRaceTrackData()->getOverPassGeographicMapCellPositionArray();;
    




                        for (
    int32_t index = CellPositionArray.size() -1;index >= 0; index--)
        {

    CellPosition* overPassGeographicMapCellPosition = CellPositionArray[index];;
    

    GeographicMapCellPosition* underPassGeographicMapCellPosition = geographicMapCellPositionFactory->getAt(overPassGeographicMapCellPosition->getColumn(), overPassGeographicMapCellPosition->getRow());;
    

    int32_t indexOf = pathList->indexOf(overPassGeographicMapCellPosition);;
    

                        if(indexOf !=  -1)
                        
                                    {
                                    pathList->set(indexOf, underPassGeographicMapCellPosition);
    

                                    }
                                
}

}


    template<typename V, typename E>
auto PathFinderGraphHackVisitor<V, E>::isValid(GraphPath* graphPath) -> bool{

                        if(graphPath->getEdgeList()->size() > edgeMinimum && graphPath->getWeight() < maxPathWeight && graphPath->getWeight() > minPathWeight)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDERGRAPHHACKVISITOR_CPP
