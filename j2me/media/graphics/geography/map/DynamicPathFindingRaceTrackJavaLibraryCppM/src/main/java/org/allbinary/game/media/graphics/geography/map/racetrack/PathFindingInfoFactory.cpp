
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
        
            #include "../../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapGraph.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapPathFinder.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimplePathFinderGraphVisitorFactory.h"

class PathFindingInfoFactory: public BasePathFindingInfoFactory {
        

    private: static instance: PathFindingInfoFactory;

    public static PathFindingInfoFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingInfoFactory.instance;
    
}


    public static initMax(int32_t max){
PathFindingInfoFactory.instance= new PathFindingInfoFactory(new SimplePathFinderGraphVisitorFactory(1, 1, Integer.MAX_VALUE), max);
    
}


    private: const MAX_DIRECTIONS: int32_t = 4;

    private: const pathFindingInfo: PathFindingInfo;

    private: const basicGeographicMapGraph: BasicGeographicMapGraph;

    private: const basicGeographicMapPathFinder: BasicGeographicMapPathFinder;

    private: const pathFinderGraphVisitorFactoryInterface: PathFinderGraphVisitorFactoryBase;

private constructor (PathFinderGraphVisitorFactoryBase pathFinderGraphVisitorFactoryInterface, int32_t max){

            super();
        
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.put("Using Dynamic Path Finding", this, commonStrings!.GET_INSTANCE);
    
this.basicGeographicMapPathFinder= new BasicGeographicMapPathFinder(max);
    
this.pathFindingInfo= new PathFindingInfo(new PathFindingNodeCostInfoFactory(max), new BasicArrayListS(1), new BasicArrayListS(1));
    
this.basicGeographicMapGraph= new BasicGeographicMapGraph(this.pathFindingInfo!.getPathFindingNodeCostInfoFactoryInterface() as PathFindingNodeCostInfoFactory);
    
this.pathFinderGraphVisitorFactoryInterface= pathFinderGraphVisitorFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public PathFindingInfo getInstancePathFindingInfo(BasicGeographicMap geographicMapInterface, std::vector<std::vector<int32_t>> mapArray){

    pathFindingInfo: PathFindingInfo = new PathFindingInfo(this.pathFindingInfo!.getPathFindingNodeCostInfoFactoryInterface(), new BasicArrayListS(1), new BasicArrayListS(1));;
    
RaceTrackRoadsGeographicMapCellHistoryFactory.getInstance()!.init();
    
this.init(geographicMapInterface, pathFindingInfo, mapArray);
    
this.basicGeographicMapPathFinder!.init(geographicMapInterface, this.basicGeographicMapGraph, this.pathFinderGraphVisitorFactoryInterface!.getInstance(geographicMapInterface));
    
pathFindingInfo!.setPathFinder(this.basicGeographicMapPathFinder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathFindingInfo;
    
}


                //@Throws(Exception.constructor)
            
    public init(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray){
super.init(geographicMapInterface, pathFindingInfo, mapArray);
    
this.buildPathFindingNodes(geographicMapInterface, pathFindingInfo, mapArray);
    
}


                //@Throws(Exception.constructor)
            
    buildPathFindingNodesForCellPosition(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray, GeographicMapCellPosition cellPosition){

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    cellTypeId: int32_t = mapArray[cellPosition!.getRow()]![cellPosition!.getColumn()]!;;
    

    geographicMapCellType: GeographicMapCellType = GeographicMapCellTypeFactory.getInstance()!.get(geographicMapInterface!.getCellTypeFromMapCellTypeInt(cellTypeId))!;;
    

    raceTrackGeographicMapCellType: RaceTrackGeographicMapCellType = geographicMapCellType as RaceTrackGeographicMapCellType;;
    

    allBinaryTiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    pathFindingNodeCostInfoFactoryInterface: PathFindingNodeCostInfoFactoryBase = pathFindingInfo!.getPathFindingNodeCostInfoFactoryInterface()!;;
    

    basicGeographicMapUtil: BasicGeographicMapUtil = BasicGeographicMapUtil.getInstance()!;;
    

    row: int32_t= 0;;
    

    column: int32_t= 0;;
    

    goingToGeographicMapCellPosition: GeographicMapCellPosition;;
    

    costFromStart: int32_t= 0;;
    

    costToEnd: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < this.MAX_DIRECTIONS; index++)
        {
row= basicGeographicMapUtil!.getBorderingRow(index, cellPosition);
    
column= basicGeographicMapUtil!.getBorderingColumn(index, cellPosition);
    

                        if(row < allBinaryTiledLayer!.getRows() && column < allBinaryTiledLayer!.getColumns() && row >= 0 && column >= 0)
                        
                                    {
                                    goingToGeographicMapCellPosition= geographicMapCellPositionFactory!.getAt(column, row);
    
costFromStart= raceTrackGeographicMapCellType!.getTravelCost();
    
costToEnd= costFromStart;
    
pathFindingNodeCostInfoFactoryInterface!.create(geographicMapInterface, goingToGeographicMapCellPosition, cellPosition, costFromStart, costToEnd);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    buildPathFindingNodes(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray){

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    allBinaryTiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    totalColumns: int32_t = allBinaryTiledLayer!.getColumns()!;;
    

    totalRows: int32_t = allBinaryTiledLayer!.getRows()!;;
    




                        for (
    column: int32_t = 0;column < totalColumns; column++)
        {




                        for (
    row: int32_t = 0;row < totalRows; row++)
        {
this.buildPathFindingNodesForCellPosition(geographicMapInterface, pathFindingInfo, mapArray, geographicMapCellPositionFactory!.getAt(column, row));
    
}

}

}


};

            

