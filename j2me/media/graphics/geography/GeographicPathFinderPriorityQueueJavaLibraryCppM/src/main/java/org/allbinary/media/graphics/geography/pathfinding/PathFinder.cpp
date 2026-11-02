
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFinder.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/util/ABHashSet.h>

      
#include <org/allbinary/util/ABPriorityQueue.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCost.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
#include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"


PathFinder::PathFinder() : logUtil(LogUtil::getInstance()), basicArrayListUtil(BasicArrayListUtil::getInstance()), mathUtil(MathUtil::getInstance()), openPriorityQueue(new ABPriorityQueue<PathFindingNodeCost*>()), closedSet(new ABHashSet<PathFindingNodeCost*>()), geographicMapInterface(NullUtil::getInstance()->NULL_OBJECT), costArray(PathFindingNodeCost::NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY) {
        }
        
                //@Throws(Exception.constructor)
            
    auto PathFinder::init(BasicGeographicMap* geographicMapInterface) -> void{
this->geographicMapInterface= geographicMapInterface;
    

    AllBinaryTiledLayer* tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    
this->costArray= std::vector<std::vector<PathFindingNodeCost*>>(tiledLayer->getColumns(), std::vector<PathFindingNodeCost*>(tiledLayer->getRows()));
    

    BasicGeographicMapCellPositionFactory* basicGeographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    PathFindingNodeCost* node;;
    

    int32_t sizeX = this->costArray.size();;
    

    int32_t sizeY = this->costArray[0].size();;
    




                        for (
    int32_t column = 0;column < sizeX; column++)
        {




                        for (
    int32_t row = 0;row < sizeY; row++)
        {

    GeographicMapCellType* geographicMapCellType = geographicMapInterface->getCellTypeAt(basicGeographicMapCellPositionFactory->getAt(column, row));;
    

    RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType = dynamic_cast<RaceTrackGeographicMapCellType*>(geographicMapCellType);;
    
node= new PathFindingNodeCost(NullUtil::getInstance()->NULL_OBJECT, basicGeographicMapCellPositionFactory->getAt(column, row), new PathFindingNodeCostInfo(raceTrackGeographicMapCellType->getTravelCost(),  -1));
    
this->costArray[column][row]= node;
    
}

}

}


    auto PathFinder::searchTotalPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths) -> BasicArrayList*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->search(dynamic_cast<PathFindingNode*>(startPathFindingNodeList->get(0)), dynamic_cast<PathFindingNode*>(endPathFindingNodeList->get(0)));;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "search", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil->getImmutableInstance();;
    
}

}


                //@Throws(Exception.constructor)
            
    auto PathFinder::searchTotalPathN(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths, MultipassState* multipassState) -> BasicArrayList*{

                        if(multipassState->step == 0)
                        
                                    {
                                    multipassState->step++;
    

                                    }
                                
                             else 
                        if(multipassState->step == 1)
                        
                                    {
                                    this->searchStart(dynamic_cast<PathFindingNode*>(startPathFindingNodeList->get(0)), dynamic_cast<PathFindingNode*>(endPathFindingNodeList->get(0)), multipassState);
    

                                    }
                                
                             else 
                        if(multipassState->step == 2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->searchN(dynamic_cast<PathFindingNode*>(startPathFindingNodeList->get(0)), dynamic_cast<PathFindingNode*>(endPathFindingNodeList->get(0)), multipassState);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil->getImmutableInstance();;
    
}


                //@Throws(Exception.constructor)
            
    auto PathFinder::search(PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode) -> BasicArrayList*{

    BasicArrayList* list = this->findPath(startPathFindingNode->geographicMapCellPosition, endPathFindingNode->geographicMapCellPosition);;
    

    BasicArrayList* pathList = new BasicArrayListD();;
    
pathList->add(list);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathList;
    
}


                //@Throws(Exception.constructor)
            
    auto PathFinder::searchStart(PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode, MultipassState* multipassState) -> void{
this->findPathStart(startPathFindingNode->geographicMapCellPosition, endPathFindingNode->geographicMapCellPosition, multipassState);
    
}


                //@Throws(Exception.constructor)
            
    auto PathFinder::searchN(PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode, MultipassState* multipassState) -> BasicArrayList*{

    BasicArrayList* list = this->findPathEnd(startPathFindingNode->geographicMapCellPosition, endPathFindingNode->geographicMapCellPosition, multipassState);;
    

                        if(list == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil->getImmutableInstance();;
    

                                    }
                                

    BasicArrayList* pathList = new BasicArrayListD();;
    
pathList->add(list);
    
multipassState->iteration= 0;
    
multipassState->step= 0;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathList;
    
}


                //@Throws(Exception.constructor)
            
    auto PathFinder::findPath(GeographicMapCellPosition* start, GeographicMapCellPosition* target) -> BasicArrayList*{
this->openPriorityQueue->clear();
    
this->closedSet->clear();
    

    int64_t discoveryCalculation= 0;;
    

    PathFindingNodeCost* node;;
    

    int32_t targetColumn = target->getColumn();;
    

    int32_t targetRow = target->getRow();;
    

    int32_t sizeX = this->costArray.size();;
    

    int32_t sizeY = this->costArray[0].size();;
    




                        for (
    int32_t column = 0;column < sizeX; column++)
        {




                        for (
    int32_t row = 0;row < sizeY; row++)
        {
discoveryCalculation= this->mathUtil->abs(column -targetColumn) +this->mathUtil->abs(row -targetRow);
    
node= this->costArray[column][row];
    
node->pathFindingNodeCostInfoP->totalCostP= 0;
    
node->pathFindingNodeCostInfoP->costToEndP= discoveryCalculation;
    
}

}


    PathFindingNodeCost* startNode = this->costArray[start->getColumn()][start->getRow()];;
    
this->openPriorityQueue->add(startNode);
    

    BasicGeographicMap* geographicMapInterface = dynamic_cast<BasicGeographicMap*>(this->geographicMapInterface);;
    

    BasicGeographicMapCellPositionFactory* basicGeographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    AllBinaryTiledLayer* allBinaryTiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    PathFindingNodeCost* targetNode = this->costArray[target->getColumn()][target->getRow()];;
    

    PathFindingNodeCost* current;;
    

        do
        {
current= this->openPriorityQueue->poll();
    
this->closedSet->add(current);
    

                        if(JavaObjects::equals(current, targetNode))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->extractPath(start, current);;
    

                                    }
                                

    PathFindingNodeCost* neighbor;;
    

    PathFindingNodeCostInfo* neighborInfo;;
    

    int64_t calculatedCost= 0;;
    




                        for (
    int32_t column = current->geographicMapCellPosition->getColumn() -1;column < current->geographicMapCellPosition->getColumn() +2; column++)
        {




                        for (
    int32_t row = current->geographicMapCellPosition->getRow() -1;row < current->geographicMapCellPosition->getRow() +2; row++)
        {

                        if(column > 0 && row > 0 && column < allBinaryTiledLayer->getColumns() && row < allBinaryTiledLayer->getRows() && geographicMapInterface->isOnMap(basicGeographicMapCellPositionFactory->getAt(column, row)))
                        
                                    {
                                    neighbor= this->costArray[column][row];
    

                        if(this->closedSet->contains(neighbor))
                        
                                    {
                                    

                        continue;
                    

                                    }
                                
neighborInfo= neighbor->pathFindingNodeCostInfoP;
    
calculatedCost= neighborInfo->costToEndP +neighborInfo->costFromStartP +current->pathFindingNodeCostInfoP->totalCostP;
    

                        if(calculatedCost < neighborInfo->totalCostP || !this->openPriorityQueue->contains(neighbor))
                        
                                    {
                                    neighborInfo->totalCostP= calculatedCost;
    
neighbor->parent= current;
    

                        if(!this->openPriorityQueue->contains(neighbor))
                        
                                    {
                                    
                        if(geographicMapInterface->isOfFourDirections(current->geographicMapCellPosition, neighbor->geographicMapCellPosition))
                        
                                    {
                                    this->openPriorityQueue->add(neighbor);
    

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                
}

}

}

        while(!this->openPriorityQueue->isEmpty());
    



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto PathFinder::findPathStart(GeographicMapCellPosition* start, GeographicMapCellPosition* target, MultipassState* multipassState) -> void{
this->openPriorityQueue->clear();
    
this->closedSet->clear();
    

    int64_t discoveryCalculation= 0;;
    

    PathFindingNodeCost* node;;
    

    int32_t targetColumn = target->getColumn();;
    

    int32_t targetRow = target->getRow();;
    

    int32_t sizeX = this->costArray.size();;
    

    int32_t sizeY = this->costArray[0].size();;
    




                        for (
    int32_t column = 0;column < sizeX; column++)
        {




                        for (
    int32_t row = 0;row < sizeY; row++)
        {
discoveryCalculation= this->mathUtil->abs(column -targetColumn) +this->mathUtil->abs(row -targetRow);
    
node= this->costArray[column][row];
    
node->pathFindingNodeCostInfoP->totalCostP= 0;
    
node->pathFindingNodeCostInfoP->costToEndP= discoveryCalculation;
    
}

}


    PathFindingNodeCost* startNode = this->costArray[start->getColumn()][start->getRow()];;
    
this->openPriorityQueue->add(startNode);
    
multipassState->step++;
    
}


                //@Throws(Exception.constructor)
            
    auto PathFinder::findPathEnd(GeographicMapCellPosition* start, GeographicMapCellPosition* target, MultipassState* multipassState) -> BasicArrayList*{

    BasicGeographicMap* geographicMapInterface = dynamic_cast<BasicGeographicMap*>(this->geographicMapInterface);;
    

    BasicGeographicMapCellPositionFactory* basicGeographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    AllBinaryTiledLayer* allBinaryTiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    PathFindingNodeCost* targetNode = this->costArray[target->getColumn()][target->getRow()];;
    

    PathFindingNodeCost* current;;
    

    int32_t total = 0;;
    

        do
        {
current= this->openPriorityQueue->poll();
    
this->closedSet->add(current);
    

                        if(JavaObjects::equals(current, targetNode))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->extractPath(start, current);;
    

                                    }
                                

    PathFindingNodeCost* neighbor;;
    

    PathFindingNodeCostInfo* neighborInfo;;
    

    int64_t calculatedCost= 0;;
    




                        for (
    int32_t column = current->geographicMapCellPosition->getColumn() -1;column < current->geographicMapCellPosition->getColumn() +2; column++)
        {




                        for (
    int32_t row = current->geographicMapCellPosition->getRow() -1;row < current->geographicMapCellPosition->getRow() +2; row++)
        {

                        if(column > 0 && row > 0 && column < allBinaryTiledLayer->getColumns() && row < allBinaryTiledLayer->getRows() && geographicMapInterface->isOnMap(basicGeographicMapCellPositionFactory->getAt(column, row)))
                        
                                    {
                                    neighbor= this->costArray[column][row];
    

                        if(this->closedSet->contains(neighbor))
                        
                                    {
                                    

                        continue;
                    

                                    }
                                
neighborInfo= neighbor->pathFindingNodeCostInfoP;
    
calculatedCost= neighborInfo->costToEndP +neighborInfo->costFromStartP +current->pathFindingNodeCostInfoP->totalCostP;
    

                        if(calculatedCost < neighborInfo->totalCostP || !this->openPriorityQueue->contains(neighbor))
                        
                                    {
                                    neighborInfo->totalCostP= calculatedCost;
    
neighbor->parent= current;
    

                        if(!this->openPriorityQueue->contains(neighbor))
                        
                                    {
                                    
                        if(geographicMapInterface->isOfFourDirections(current->geographicMapCellPosition, neighbor->geographicMapCellPosition))
                        
                                    {
                                    this->openPriorityQueue->add(neighbor);
    

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                
}

}

total++;
    

                        if(total > 10)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil->getImmutableInstance();;
    

                                    }
                                
}

        while(!this->openPriorityQueue->isEmpty());
    



                            throw RuntimeException();
                    
}


    auto PathFinder::extractPath(GeographicMapCellPosition* start, PathFindingNodeCost* current) -> BasicArrayList*{

    BasicArrayList* path = new BasicArrayListD();;
    

        while(current->parent != NullUtil::getInstance()->NULL_OBJECT)
        {
path->add(current->geographicMapCellPosition);
    
current= dynamic_cast<PathFindingNodeCost*>(current->parent);
    
}

path->add(start);
    
this->basicArrayListUtil->reverse(path);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_CPP
