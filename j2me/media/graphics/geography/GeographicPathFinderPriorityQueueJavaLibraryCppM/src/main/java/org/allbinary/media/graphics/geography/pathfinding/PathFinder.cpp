
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
        



            #include <vector>
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <java/util/HashSet.h>

      
#include <java/util/PriorityQueue.h>

      
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicPathFinderBase.h"
#include "PathFindingNodeCost.h"
#include "PathFindingNodeCostInfo.h"
#include "PathFindingNode.h"
#include "MultipassState.h"

class PathFinder: public GeographicPathFinderBase {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: const MathUtil mathUtil = MathUtil::getInstance();

    private: const PriorityQueue<PathFindingNodeCost> openPriorityQueue = PriorityQueue<PathFindingNodeCost>();

    private: const HashSet<PathFindingNodeCost> closedSet = HashSet<PathFindingNodeCost>();

    private: Object* geographicMapInterface = NullUtil::getInstance().NULL_OBJECT;

    private: std::vector<std::vector<PathFindingNodeCost>> costArray = PathFindingNodeCost::NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY;

                //@Throws(Exception.constructor)
            
    public: void init(BasicGeographicMap geographicMapInterface){
this->geographicMapInterface= geographicMapInterface;
    

    AllBinaryTiledLayer tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    
this->costArray= new Array(tiledLayer.getColumns()).fill(null).map(() => new Array(tiledLayer.getRows()).fill(0))
                                                            ;
    

    BasicGeographicMapCellPositionFactory basicGeographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    PathFindingNodeCost node;;
    

    int32_t sizeX = this->costArray.size();;
    

    int32_t sizeY = this->costArray[0]!.size();;
    




                        for (
    int32_t column = 0;column < sizeX; column++)
        {




                        for (
    int32_t row = 0;row < sizeY; row++)
        {

    GeographicMapCellType geographicMapCellType = geographicMapInterface->getCellTypeAt(basicGeographicMapCellPositionFactory.getAt(column, row));;
    

    RaceTrackGeographicMapCellType raceTrackGeographicMapCellType = geographicMapCellType as RaceTrackGeographicMapCellType;;
    
node= PathFindingNodeCost(NullUtil::getInstance().NULL_OBJECT, basicGeographicMapCellPositionFactory.getAt(column, row), PathFindingNodeCostInfo(raceTrackGeographicMapCellType.getTravelCost(),  -1));
    
this->costArray[column]![row]= node;
    
}

}

}


    public: BasicArrayList searchTotalPath(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, int32_t totalPaths){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->search(startPathFindingNodeList.get(0) as PathFindingNode, endPathFindingNodeList.get(0) as PathFindingNode);;
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "search", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil.getImmutableInstance();;
    
}

}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList searchTotalPathN(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, int32_t totalPaths, MultipassState multipassState){

                        if(multipassState.step == 0)
                        
                                    {
                                    multipassState.step++;
    

                                    }
                                
                             else 
                        if(multipassState.step == 1)
                        
                                    {
                                    this->searchStart(startPathFindingNodeList.get(0) as PathFindingNode, endPathFindingNodeList.get(0) as PathFindingNode, multipassState);
    

                                    }
                                
                             else 
                        if(multipassState.step == 2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->searchN(startPathFindingNodeList.get(0) as PathFindingNode, endPathFindingNodeList.get(0) as PathFindingNode, multipassState);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil.getImmutableInstance();;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList search(PathFindingNode startPathFindingNode, PathFindingNode endPathFindingNode){

    BasicArrayList list = this->findPath(startPathFindingNode.geographicMapCellPosition, endPathFindingNode.geographicMapCellPosition);;
    

    BasicArrayList pathList = BasicArrayListD();;
    
pathList.add(list);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathList;
    
}


                //@Throws(Exception.constructor)
            
    public: void searchStart(PathFindingNode startPathFindingNode, PathFindingNode endPathFindingNode, MultipassState multipassState){
this->findPathStart(startPathFindingNode.geographicMapCellPosition, endPathFindingNode.geographicMapCellPosition, multipassState);
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList searchN(PathFindingNode startPathFindingNode, PathFindingNode endPathFindingNode, MultipassState multipassState){

    BasicArrayList list = this->findPathEnd(startPathFindingNode.geographicMapCellPosition, endPathFindingNode.geographicMapCellPosition, multipassState);;
    

                        if(list == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil.getImmutableInstance();;
    

                                    }
                                

    BasicArrayList pathList = BasicArrayListD();;
    
pathList.add(list);
    
multipassState.iteration= 0;
    
multipassState.step= 0;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathList;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList findPath(GeographicMapCellPosition start, GeographicMapCellPosition target){
this->openPriorityQueue.clear();
    
this->closedSet.clear();
    

    int64_t discoveryCalculation= 0;;
    

    PathFindingNodeCost node;;
    

    int32_t targetColumn = target.getColumn();;
    

    int32_t targetRow = target.getRow();;
    

    int32_t sizeX = this->costArray.size();;
    

    int32_t sizeY = this->costArray[0]!.size();;
    




                        for (
    int32_t column = 0;column < sizeX; column++)
        {




                        for (
    int32_t row = 0;row < sizeY; row++)
        {
discoveryCalculation= this->mathUtil.abs(column -targetColumn) +this->mathUtil.abs(row -targetRow);
    
node= this->costArray[column]![row]!;
    
node.pathFindingNodeCostInfoP.totalCostP= 0;
    
node.pathFindingNodeCostInfoP.costToEndP= discoveryCalculation;
    
}

}


    PathFindingNodeCost startNode = this->costArray[start.getColumn()]![start.getRow()];;
    
this->openPriorityQueue.add(startNode);
    

    BasicGeographicMap geographicMapInterface = this->geographicMapInterface as BasicGeographicMap;;
    

    BasicGeographicMapCellPositionFactory basicGeographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    AllBinaryTiledLayer allBinaryTiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    PathFindingNodeCost targetNode = this->costArray[target.getColumn()]![target.getRow()];;
    

    PathFindingNodeCost current;;
    

        do
        {
current= this->openPriorityQueue.poll();
    
this->closedSet.add(current);
    

                        if(current === targetNode)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->extractPath(start, current);;
    

                                    }
                                

    PathFindingNodeCost neighbor;;
    

    PathFindingNodeCostInfo neighborInfo;;
    

    int64_t calculatedCost= 0;;
    




                        for (
    int32_t column = current.geographicMapCellPosition.getColumn() -1;column < current.geographicMapCellPosition.getColumn() +2; column++)
        {




                        for (
    int32_t row = current.geographicMapCellPosition.getRow() -1;row < current.geographicMapCellPosition.getRow() +2; row++)
        {

                        if(column > 0 && row > 0 && column < allBinaryTiledLayer.getColumns() && row < allBinaryTiledLayer.getRows() && geographicMapInterface->isOnMap(basicGeographicMapCellPositionFactory.getAt(column, row)))
                        
                                    {
                                    neighbor= this->costArray[column]![row]!;
    

                        if(this->closedSet.contains(neighbor))
                        
                                    {
                                    

                        continue
                    

                                    }
                                
neighborInfo= neighbor.pathFindingNodeCostInfoP;
    
calculatedCost= neighborInfo.costToEndP +neighborInfo.costFromStartP +current.pathFindingNodeCostInfoP.totalCostP;
    

                        if(calculatedCost < neighborInfo.totalCostP || !this->openPriorityQueue.contains(neighbor))
                        
                                    {
                                    neighborInfo.totalCostP= calculatedCost;
    
neighbor.parent= current;
    

                        if(!this->openPriorityQueue.contains(neighbor))
                        
                                    {
                                    
                        if(geographicMapInterface->isOfFourDirections(current.geographicMapCellPosition, neighbor.geographicMapCellPosition))
                        
                                    {
                                    this->openPriorityQueue.add(neighbor);
    

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                
}

}

}

        while(!this->openPriorityQueue.isEmpty())
    



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void findPathStart(GeographicMapCellPosition start, GeographicMapCellPosition target, MultipassState multipassState){
this->openPriorityQueue.clear();
    
this->closedSet.clear();
    

    int64_t discoveryCalculation= 0;;
    

    PathFindingNodeCost node;;
    

    int32_t targetColumn = target.getColumn();;
    

    int32_t targetRow = target.getRow();;
    

    int32_t sizeX = this->costArray.size();;
    

    int32_t sizeY = this->costArray[0]!.size();;
    




                        for (
    int32_t column = 0;column < sizeX; column++)
        {




                        for (
    int32_t row = 0;row < sizeY; row++)
        {
discoveryCalculation= this->mathUtil.abs(column -targetColumn) +this->mathUtil.abs(row -targetRow);
    
node= this->costArray[column]![row]!;
    
node.pathFindingNodeCostInfoP.totalCostP= 0;
    
node.pathFindingNodeCostInfoP.costToEndP= discoveryCalculation;
    
}

}


    PathFindingNodeCost startNode = this->costArray[start.getColumn()]![start.getRow()];;
    
this->openPriorityQueue.add(startNode);
    
multipassState.step++;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList findPathEnd(GeographicMapCellPosition start, GeographicMapCellPosition target, MultipassState multipassState){

    BasicGeographicMap geographicMapInterface = this->geographicMapInterface as BasicGeographicMap;;
    

    BasicGeographicMapCellPositionFactory basicGeographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    AllBinaryTiledLayer allBinaryTiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    PathFindingNodeCost targetNode = this->costArray[target.getColumn()]![target.getRow()];;
    

    PathFindingNodeCost current;;
    

    int32_t total = 0;;
    

        do
        {
current= this->openPriorityQueue.poll();
    
this->closedSet.add(current);
    

                        if(current === targetNode)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->extractPath(start, current);;
    

                                    }
                                

    PathFindingNodeCost neighbor;;
    

    PathFindingNodeCostInfo neighborInfo;;
    

    int64_t calculatedCost= 0;;
    




                        for (
    int32_t column = current.geographicMapCellPosition.getColumn() -1;column < current.geographicMapCellPosition.getColumn() +2; column++)
        {




                        for (
    int32_t row = current.geographicMapCellPosition.getRow() -1;row < current.geographicMapCellPosition.getRow() +2; row++)
        {

                        if(column > 0 && row > 0 && column < allBinaryTiledLayer.getColumns() && row < allBinaryTiledLayer.getRows() && geographicMapInterface->isOnMap(basicGeographicMapCellPositionFactory.getAt(column, row)))
                        
                                    {
                                    neighbor= this->costArray[column]![row]!;
    

                        if(this->closedSet.contains(neighbor))
                        
                                    {
                                    

                        continue
                    

                                    }
                                
neighborInfo= neighbor.pathFindingNodeCostInfoP;
    
calculatedCost= neighborInfo.costToEndP +neighborInfo.costFromStartP +current.pathFindingNodeCostInfoP.totalCostP;
    

                        if(calculatedCost < neighborInfo.totalCostP || !this->openPriorityQueue.contains(neighbor))
                        
                                    {
                                    neighborInfo.totalCostP= calculatedCost;
    
neighbor.parent= current;
    

                        if(!this->openPriorityQueue.contains(neighbor))
                        
                                    {
                                    
                        if(geographicMapInterface->isOfFourDirections(current.geographicMapCellPosition, neighbor.geographicMapCellPosition))
                        
                                    {
                                    this->openPriorityQueue.add(neighbor);
    

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
                        return this->basicArrayListUtil.getImmutableInstance();;
    

                                    }
                                
}

        while(!this->openPriorityQueue.isEmpty())
    



                            throw RuntimeException();
                    
}


    private: BasicArrayList extractPath(GeographicMapCellPosition start, PathFindingNodeCost current){

    BasicArrayList path = BasicArrayListD();;
    

        while(current.parent != NullUtil::getInstance().NULL_OBJECT)
        {
path.add(current.geographicMapCellPosition);
    
current= current.parent as PathFindingNodeCost;
    
}

path.add(start);
    
this->basicArrayListUtil.reverse(path);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


};

            

