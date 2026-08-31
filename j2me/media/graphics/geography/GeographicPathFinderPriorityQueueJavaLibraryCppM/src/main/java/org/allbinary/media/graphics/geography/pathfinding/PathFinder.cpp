
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    private: const mathUtil: MathUtil = MathUtil.getInstance()!;

    private: const openPriorityQueue: PriorityQueue<PathFindingNodeCost> = new PriorityQueue<PathFindingNodeCost>();

    private: const closedSet: HashSet<PathFindingNodeCost> = new HashSet<PathFindingNodeCost>();

    private: geographicMapInterface: any = NullUtil.getInstance()!.NULL_OBJECT;

    private: costArray: std::vector<std::vector<PathFindingNodeCost>> = PathFindingNodeCost.NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY;

                //@Throws(Exception.constructor)
            
    public init(BasicGeographicMap geographicMapInterface){
this.geographicMapInterface= geographicMapInterface;
    

    tiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    
this.costArray= new Array(tiledLayer!.getColumns()).fill(null).map(() => new Array(tiledLayer!.getRows()).fill(0))
                                                            ;
    

    basicGeographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    node: PathFindingNodeCost;;
    

    sizeX: int32_t = this.costArray!.length
                ;;
    

    sizeY: int32_t = this.costArray[0]!.length
                ;;
    




                        for (
    column: int32_t = 0;column < sizeX; column++)
        {




                        for (
    row: int32_t = 0;row < sizeY; row++)
        {

    geographicMapCellType: GeographicMapCellType = geographicMapInterface!.getCellTypeAt(basicGeographicMapCellPositionFactory!.getAt(column, row))!;;
    

    raceTrackGeographicMapCellType: RaceTrackGeographicMapCellType = geographicMapCellType as RaceTrackGeographicMapCellType;;
    
node= new PathFindingNodeCost(NullUtil.getInstance()!.NULL_OBJECT, basicGeographicMapCellPositionFactory!.getAt(column, row), new PathFindingNodeCostInfo(raceTrackGeographicMapCellType!.getTravelCost(),  -1));
    
this.costArray[column]![row]= node;
    
}

}

}


    public BasicArrayList searchTotalPath(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, int32_t totalPaths){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.search(startPathFindingNodeList!.get(0) as PathFindingNode, endPathFindingNodeList!.get(0) as PathFindingNode);;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "search", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicArrayListUtil!.getImmutableInstance();;
    
}

}


                //@Throws(Exception.constructor)
            
    public BasicArrayList searchTotalPathN(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, int32_t totalPaths, MultipassState multipassState){

                        if(multipassState!.step == 0)
                        
                                    {
                                    multipassState!.step++;
    

                                    }
                                
                             else 
                        if(multipassState!.step == 1)
                        
                                    {
                                    this.searchStart(startPathFindingNodeList!.get(0) as PathFindingNode, endPathFindingNodeList!.get(0) as PathFindingNode, multipassState);
    

                                    }
                                
                             else 
                        if(multipassState!.step == 2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.searchN(startPathFindingNodeList!.get(0) as PathFindingNode, endPathFindingNodeList!.get(0) as PathFindingNode, multipassState);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicArrayListUtil!.getImmutableInstance();;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList search(PathFindingNode startPathFindingNode, PathFindingNode endPathFindingNode){

    list: BasicArrayList = this.findPath(startPathFindingNode!.geographicMapCellPosition, endPathFindingNode!.geographicMapCellPosition)!;;
    

    pathList: BasicArrayList = new BasicArrayListD();;
    
pathList!.add(list);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathList;
    
}


                //@Throws(Exception.constructor)
            
    public searchStart(PathFindingNode startPathFindingNode, PathFindingNode endPathFindingNode, MultipassState multipassState){
this.findPathStart(startPathFindingNode!.geographicMapCellPosition, endPathFindingNode!.geographicMapCellPosition, multipassState);
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList searchN(PathFindingNode startPathFindingNode, PathFindingNode endPathFindingNode, MultipassState multipassState){

    list: BasicArrayList = this.findPathEnd(startPathFindingNode!.geographicMapCellPosition, endPathFindingNode!.geographicMapCellPosition, multipassState)!;;
    

                        if(list == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicArrayListUtil!.getImmutableInstance();;
    

                                    }
                                

    pathList: BasicArrayList = new BasicArrayListD();;
    
pathList!.add(list);
    
multipassState!.iteration= 0;
    
multipassState!.step= 0;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathList;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList findPath(GeographicMapCellPosition start, GeographicMapCellPosition target){
this.openPriorityQueue!.clear();
    
this.closedSet!.clear();
    

    discoveryCalculation: int64_t= 0;;
    

    node: PathFindingNodeCost;;
    

    targetColumn: int32_t = target.getColumn()!;;
    

    targetRow: int32_t = target.getRow()!;;
    

    sizeX: int32_t = this.costArray!.length
                ;;
    

    sizeY: int32_t = this.costArray[0]!.length
                ;;
    




                        for (
    column: int32_t = 0;column < sizeX; column++)
        {




                        for (
    row: int32_t = 0;row < sizeY; row++)
        {
discoveryCalculation= this.mathUtil!.abs(column -targetColumn) +this.mathUtil!.abs(row -targetRow);
    
node= this.costArray[column]![row]!;
    
node.pathFindingNodeCostInfoP!.totalCostP= 0;
    
node.pathFindingNodeCostInfoP!.costToEndP= discoveryCalculation;
    
}

}


    startNode: PathFindingNodeCost = this.costArray[start.getColumn()]![start.getRow()]!;;
    
this.openPriorityQueue!.add(startNode);
    

    geographicMapInterface: BasicGeographicMap = this.geographicMapInterface as BasicGeographicMap;;
    

    basicGeographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    allBinaryTiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    targetNode: PathFindingNodeCost = this.costArray[target.getColumn()]![target.getRow()]!;;
    

    current: PathFindingNodeCost;;
    

        do
        {
current= this.openPriorityQueue!.poll();
    
this.closedSet!.add(current);
    

                        if(current === targetNode)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.extractPath(start, current);;
    

                                    }
                                

    neighbor: PathFindingNodeCost;;
    

    neighborInfo: PathFindingNodeCostInfo;;
    

    calculatedCost: int64_t= 0;;
    




                        for (
    column: int32_t = current.geographicMapCellPosition!.getColumn() -1;column < current.geographicMapCellPosition!.getColumn() +2; column++)
        {




                        for (
    row: int32_t = current.geographicMapCellPosition!.getRow() -1;row < current.geographicMapCellPosition!.getRow() +2; row++)
        {

                        if(column > 0 && row > 0 && column < allBinaryTiledLayer!.getColumns() && row < allBinaryTiledLayer!.getRows() && geographicMapInterface!.isOnMap(basicGeographicMapCellPositionFactory!.getAt(column, row)))
                        
                                    {
                                    neighbor= this.costArray[column]![row]!;
    

                        if(this.closedSet!.contains(neighbor))
                        
                                    {
                                    

                        continue
                    

                                    }
                                
neighborInfo= neighbor.pathFindingNodeCostInfoP;
    
calculatedCost= neighborInfo!.costToEndP +neighborInfo!.costFromStartP +current.pathFindingNodeCostInfoP!.totalCostP;
    

                        if(calculatedCost < neighborInfo!.totalCostP || !this.openPriorityQueue!.contains(neighbor))
                        
                                    {
                                    neighborInfo!.totalCostP= calculatedCost;
    
neighbor.parent= current;
    

                        if(!this.openPriorityQueue!.contains(neighbor))
                        
                                    {
                                    
                        if(geographicMapInterface!.isOfFourDirections(current.geographicMapCellPosition, neighbor.geographicMapCellPosition))
                        
                                    {
                                    this.openPriorityQueue!.add(neighbor);
    

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                
}

}

}

        while(!this.openPriorityQueue!.isEmpty())
    



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public findPathStart(GeographicMapCellPosition start, GeographicMapCellPosition target, MultipassState multipassState){
this.openPriorityQueue!.clear();
    
this.closedSet!.clear();
    

    discoveryCalculation: int64_t= 0;;
    

    node: PathFindingNodeCost;;
    

    targetColumn: int32_t = target.getColumn()!;;
    

    targetRow: int32_t = target.getRow()!;;
    

    sizeX: int32_t = this.costArray!.length
                ;;
    

    sizeY: int32_t = this.costArray[0]!.length
                ;;
    




                        for (
    column: int32_t = 0;column < sizeX; column++)
        {




                        for (
    row: int32_t = 0;row < sizeY; row++)
        {
discoveryCalculation= this.mathUtil!.abs(column -targetColumn) +this.mathUtil!.abs(row -targetRow);
    
node= this.costArray[column]![row]!;
    
node.pathFindingNodeCostInfoP!.totalCostP= 0;
    
node.pathFindingNodeCostInfoP!.costToEndP= discoveryCalculation;
    
}

}


    startNode: PathFindingNodeCost = this.costArray[start.getColumn()]![start.getRow()]!;;
    
this.openPriorityQueue!.add(startNode);
    
multipassState!.step++;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList findPathEnd(GeographicMapCellPosition start, GeographicMapCellPosition target, MultipassState multipassState){

    geographicMapInterface: BasicGeographicMap = this.geographicMapInterface as BasicGeographicMap;;
    

    basicGeographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    allBinaryTiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    targetNode: PathFindingNodeCost = this.costArray[target.getColumn()]![target.getRow()]!;;
    

    current: PathFindingNodeCost;;
    

    total: int32_t = 0;;
    

        do
        {
current= this.openPriorityQueue!.poll();
    
this.closedSet!.add(current);
    

                        if(current === targetNode)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.extractPath(start, current);;
    

                                    }
                                

    neighbor: PathFindingNodeCost;;
    

    neighborInfo: PathFindingNodeCostInfo;;
    

    calculatedCost: int64_t= 0;;
    




                        for (
    column: int32_t = current.geographicMapCellPosition!.getColumn() -1;column < current.geographicMapCellPosition!.getColumn() +2; column++)
        {




                        for (
    row: int32_t = current.geographicMapCellPosition!.getRow() -1;row < current.geographicMapCellPosition!.getRow() +2; row++)
        {

                        if(column > 0 && row > 0 && column < allBinaryTiledLayer!.getColumns() && row < allBinaryTiledLayer!.getRows() && geographicMapInterface!.isOnMap(basicGeographicMapCellPositionFactory!.getAt(column, row)))
                        
                                    {
                                    neighbor= this.costArray[column]![row]!;
    

                        if(this.closedSet!.contains(neighbor))
                        
                                    {
                                    

                        continue
                    

                                    }
                                
neighborInfo= neighbor.pathFindingNodeCostInfoP;
    
calculatedCost= neighborInfo!.costToEndP +neighborInfo!.costFromStartP +current.pathFindingNodeCostInfoP!.totalCostP;
    

                        if(calculatedCost < neighborInfo!.totalCostP || !this.openPriorityQueue!.contains(neighbor))
                        
                                    {
                                    neighborInfo!.totalCostP= calculatedCost;
    
neighbor.parent= current;
    

                        if(!this.openPriorityQueue!.contains(neighbor))
                        
                                    {
                                    
                        if(geographicMapInterface!.isOfFourDirections(current.geographicMapCellPosition, neighbor.geographicMapCellPosition))
                        
                                    {
                                    this.openPriorityQueue!.add(neighbor);
    

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
                        return this.basicArrayListUtil!.getImmutableInstance();;
    

                                    }
                                
}

        while(!this.openPriorityQueue!.isEmpty())
    



                            throw new RuntimeException();
                    
}


    BasicArrayList extractPath(GeographicMapCellPosition start, PathFindingNodeCost current){

    path: BasicArrayList = new BasicArrayListD();;
    

        while(current.parent != NullUtil.getInstance()!.NULL_OBJECT)
        {
path.add(current.geographicMapCellPosition);
    
current= current.parent as PathFindingNodeCost;
    
}

path.add(start);
    
this.basicArrayListUtil!.reverse(path);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


};

            

