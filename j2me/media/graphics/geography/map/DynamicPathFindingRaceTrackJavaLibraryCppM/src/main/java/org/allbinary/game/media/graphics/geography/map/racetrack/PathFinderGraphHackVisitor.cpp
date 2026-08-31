
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
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
        #include "BasePathFinderGraphVisitor.h"
#include "CellPositionArray.h"

class PathFinderGraphHackVisitor: public BasePathFinderGraphVisitor<V, E> {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (BasicGeographicMap geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight){
            super(geographicMapInterface, edgeMinimum, minPathWeight, maxPathWeight);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public visit(SimpleWeightedGraph graph, BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList){
this.fixStart(graph, startPathFindingNodeList);
    
this.fixEnd(graph, endPathFindingNodeList);
    
this.fixOverPassEdges(graph);
    
}


                //@Throws(Exception.constructor)
            
    fixStart(SimpleWeightedGraph<CellPosition, DefaultWeightedEdge> graph, BasicArrayList startPathFindingNodeList){

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = this.geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    tiledLayer: AllBinaryTiledLayer = this.geographicMapInterface!.getAllBinaryTiledLayer()!;;
    




                        for (
    index: int32_t = startPathFindingNodeList!.size() -1;index >= 0; index--)
        {

    startPathFindingNode: PathFindingNode = startPathFindingNodeList!.get(index) as PathFindingNode;;
    

    geographicMapCellPosition: GeographicMapCellPosition = startPathFindingNode!.geographicMapCellPosition;;
    

    column: int32_t = geographicMapCellPosition!.getColumn()!;;
    

    row: int32_t = geographicMapCellPosition!.getRow()!;;
    

    nextRow: int32_t = row +1;;
    

                        if(tiledLayer!.isOnTileLayer(column, nextRow))
                        
                                    {
                                    
    geographicMapCellPositionNeighbor: GeographicMapCellPosition = geographicMapCellPositionFactory!.getAt(column, nextRow)!;;
    
graph.removeEdge(geographicMapCellPosition, geographicMapCellPositionNeighbor);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    fixEnd(SimpleWeightedGraph<CellPosition, DefaultWeightedEdge> graph, BasicArrayList endPathFindingNodeList){

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = this.geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    tiledLayer: AllBinaryTiledLayer = this.geographicMapInterface!.getAllBinaryTiledLayer()!;;
    




                        for (
    index: int32_t = endPathFindingNodeList!.size() -1;index >= 0; index--)
        {

    endPathFindingNode: PathFindingNode = endPathFindingNodeList!.get(index) as PathFindingNode;;
    

    geographicMapCellPosition: GeographicMapCellPosition = endPathFindingNode!.geographicMapCellPosition;;
    
graph.addVertex(geographicMapCellPosition);
    

    column: int32_t = geographicMapCellPosition!.getColumn()!;;
    

    row: int32_t = geographicMapCellPosition!.getRow()!;;
    

    nextRow: int32_t = row +1;;
    

                        if(tiledLayer!.isOnTileLayer(column, nextRow))
                        
                                    {
                                    
    geographicMapCellPositionNeighbor: GeographicMapCellPosition = geographicMapCellPositionFactory!.getAt(column, nextRow)!;;
    
graph.addEdge(geographicMapCellPosition, geographicMapCellPositionNeighbor);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    fixOverPassEdges(SimpleWeightedGraph<CellPosition, DefaultWeightedEdge> graph){

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = this.geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    raceTrackGeographicMap: RaceTrackGeographicMap = this.geographicMapInterface as RaceTrackGeographicMap;;
    

    CellPositionArray: std::vector<CellPosition> = raceTrackGeographicMap!.getRaceTrackData()!.getOverPassGeographicMapCellPositionArray()!;;
    




                        for (
    index: int32_t = CellPositionArray.length -1;index >= 0; index--)
        {

    overPassGeographicMapCellPosition: CellPosition = CellPositionArray[index]!;;
    
this.logUtil!.putF("Fixing Over Pass: " +overPassGeographicMapCellPosition!.getColumn() +", " +overPassGeographicMapCellPosition!.getRow(), this, "fixOverPassEdges");
    

    underPassGeographicMapCellPosition: GeographicMapCellPosition = geographicMapCellPositionFactory!.getAt(overPassGeographicMapCellPosition!.getColumn(), overPassGeographicMapCellPosition!.getRow())!;;
    

    rightUnderPassGeographicMapCellPosition: GeographicMapCellPosition = geographicMapCellPositionFactory!.getAt(overPassGeographicMapCellPosition!.getColumn() +1, overPassGeographicMapCellPosition!.getRow())!;;
    

    leftUnderPassGeographicMapCellPosition: GeographicMapCellPosition = geographicMapCellPositionFactory!.getAt(overPassGeographicMapCellPosition!.getColumn() -1, overPassGeographicMapCellPosition!.getRow())!;;
    
graph.removeEdge(underPassGeographicMapCellPosition, rightUnderPassGeographicMapCellPosition);
    
graph.removeEdge(underPassGeographicMapCellPosition, leftUnderPassGeographicMapCellPosition);
    
graph.addVertex(overPassGeographicMapCellPosition);
    
graph.addEdge(overPassGeographicMapCellPosition, rightUnderPassGeographicMapCellPosition);
    
graph.addEdge(overPassGeographicMapCellPosition, leftUnderPassGeographicMapCellPosition);
    
}

}


                //@Throws(Exception.constructor)
            
    public fixPath(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, BasicArrayList pathList){




                        for (
    index: int32_t = startPathFindingNodeList!.size() -1;index >= 0; index--)
        {

    endPathFindingNode: PathFindingNode = endPathFindingNodeList!.get(index) as PathFindingNode;;
    

    startPathFindingNode: PathFindingNode = startPathFindingNodeList!.get(index) as PathFindingNode;;
    

                        if(BasicGeographicMapUtil.getInstance()!.isSameCellPosition(startPathFindingNode!.geographicMapCellPosition, endPathFindingNode!.geographicMapCellPosition))
                        
                                    {
                                    
                        if(pathList!.remove(endPathFindingNode!.geographicMapCellPosition))
                        
                                    {
                                    pathList!.remove(startPathFindingNode!.geographicMapCellPosition);
    
pathList!.addAt(0, startPathFindingNode!.geographicMapCellPosition);
    

                                    }
                                

                                    }
                                
}

this.removeOverPassEdges(pathList);
    
}


                //@Throws(Exception.constructor)
            
    removeOverPassEdges(BasicArrayList pathList){

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = this.geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    raceTrackGeographicMap: RaceTrackGeographicMap = this.geographicMapInterface as RaceTrackGeographicMap;;
    

    CellPositionArray: std::vector<CellPosition> = raceTrackGeographicMap!.getRaceTrackData()!.getOverPassGeographicMapCellPositionArray()!;;
    




                        for (
    index: int32_t = CellPositionArray.length -1;index >= 0; index--)
        {

    overPassGeographicMapCellPosition: CellPosition = CellPositionArray[index]!;;
    

    underPassGeographicMapCellPosition: GeographicMapCellPosition = geographicMapCellPositionFactory!.getAt(overPassGeographicMapCellPosition!.getColumn(), overPassGeographicMapCellPosition!.getRow())!;;
    

    indexOf: int32_t = pathList!.indexOf(overPassGeographicMapCellPosition)!;;
    

                        if(indexOf !=  -1)
                        
                                    {
                                    pathList!.set(indexOf, underPassGeographicMapCellPosition);
    

                                    }
                                
}

}


    public bool isValid(GraphPath graphPath){

                        if(graphPath!.getEdgeList()!.size() > edgeMinimum && graphPath!.getWeight() < maxPathWeight && graphPath!.getWeight() > minPathWeight)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


};

            

