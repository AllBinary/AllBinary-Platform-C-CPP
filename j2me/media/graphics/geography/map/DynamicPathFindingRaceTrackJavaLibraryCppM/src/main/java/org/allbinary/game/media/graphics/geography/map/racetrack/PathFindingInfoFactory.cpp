
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

    private: static PathFindingInfoFactory instance;

    public: static PathFindingInfoFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingInfoFactory::instance();
    
}


    public: static void initMax(int32_t max){
PathFindingInfoFactory::instance= PathFindingInfoFactory(SimplePathFinderGraphVisitorFactory(1, 1, Integer::MAX_VALUE), max);
    
}


    private: const int32_t MAX_DIRECTIONS = 4;

    private: PathFindingInfo pathFindingInfo;

    private: BasicGeographicMapGraph basicGeographicMapGraph;

    private: BasicGeographicMapPathFinder basicGeographicMapPathFinder;

    private: PathFinderGraphVisitorFactoryBase pathFinderGraphVisitorFactoryInterface;

private: PathFindingInfoFactory(PathFinderGraphVisitorFactoryBase pathFinderGraphVisitorFactoryInterface, int32_t max){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put("Using Dynamic Path Finding", this, commonStrings.GET_INSTANCE);
    
this->basicGeographicMapPathFinder= BasicGeographicMapPathFinder(max);
    
this->pathFindingInfo= PathFindingInfo(PathFindingNodeCostInfoFactory(max), BasicArrayListS(1), BasicArrayListS(1));
    
this->basicGeographicMapGraph= BasicGeographicMapGraph(this->pathFindingInfo.getPathFindingNodeCostInfoFactoryInterface() as PathFindingNodeCostInfoFactory);
    
this->pathFinderGraphVisitorFactoryInterface= pathFinderGraphVisitorFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: PathFindingInfo getInstancePathFindingInfo(BasicGeographicMap geographicMapInterface, std::vector<std::vector<int32_t>> mapArray){

    PathFindingInfo pathFindingInfo = PathFindingInfo(this->pathFindingInfo.getPathFindingNodeCostInfoFactoryInterface(), BasicArrayListS(1), BasicArrayListS(1));;
    
RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance().init();
    
this->init(geographicMapInterface, pathFindingInfo, mapArray);
    
this->basicGeographicMapPathFinder.init(geographicMapInterface, this->basicGeographicMapGraph, this->pathFinderGraphVisitorFactoryInterface.getInstance(geographicMapInterface));
    
pathFindingInfo.setPathFinder(this->basicGeographicMapPathFinder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathFindingInfo;
    
}


                //@Throws(Exception.constructor)
            
    public: void init(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray){
super.init(geographicMapInterface, pathFindingInfo, mapArray);
    
this->buildPathFindingNodes(geographicMapInterface, pathFindingInfo, mapArray);
    
}


                //@Throws(Exception.constructor)
            
    private: void buildPathFindingNodesForCellPosition(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray, GeographicMapCellPosition cellPosition){

    BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory = geographicMapInterface.getGeographicMapCellPositionFactory();;
    

    int32_t cellTypeId = mapArray[cellPosition.getRow()]![cellPosition.getColumn()];;
    

    GeographicMapCellType geographicMapCellType = GeographicMapCellTypeFactory::getInstance().get(geographicMapInterface.getCellTypeFromMapCellTypeInt(cellTypeId));;
    

    RaceTrackGeographicMapCellType raceTrackGeographicMapCellType = geographicMapCellType as RaceTrackGeographicMapCellType;;
    

    AllBinaryTiledLayer allBinaryTiledLayer = geographicMapInterface.getAllBinaryTiledLayer();;
    

    PathFindingNodeCostInfoFactoryBase pathFindingNodeCostInfoFactoryInterface = pathFindingInfo.getPathFindingNodeCostInfoFactoryInterface();;
    

    BasicGeographicMapUtil basicGeographicMapUtil = BasicGeographicMapUtil::getInstance();;
    

    int32_t row= 0;;
    

    int32_t column= 0;;
    

    GeographicMapCellPosition goingToGeographicMapCellPosition;;
    

    int32_t costFromStart= 0;;
    

    int32_t costToEnd= 0;;
    




                        for (
    int32_t index = 0;index < this->MAX_DIRECTIONS; index++)
        {
row= basicGeographicMapUtil.getBorderingRow(index, cellPosition);
    
column= basicGeographicMapUtil.getBorderingColumn(index, cellPosition);
    

                        if(row < allBinaryTiledLayer.getRows() && column < allBinaryTiledLayer.getColumns() && row >= 0 && column >= 0)
                        
                                    {
                                    goingToGeographicMapCellPosition= geographicMapCellPositionFactory.getAt(column, row);
    
costFromStart= raceTrackGeographicMapCellType.getTravelCost();
    
costToEnd= costFromStart;
    
pathFindingNodeCostInfoFactoryInterface.create(geographicMapInterface, goingToGeographicMapCellPosition, cellPosition, costFromStart, costToEnd);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    private: void buildPathFindingNodes(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray){

    BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory = geographicMapInterface.getGeographicMapCellPositionFactory();;
    

    AllBinaryTiledLayer allBinaryTiledLayer = geographicMapInterface.getAllBinaryTiledLayer();;
    

    int32_t totalColumns = allBinaryTiledLayer.getColumns();;
    

    int32_t totalRows = allBinaryTiledLayer.getRows();;
    




                        for (
    int32_t column = 0;column < totalColumns; column++)
        {




                        for (
    int32_t row = 0;row < totalRows; row++)
        {
this->buildPathFindingNodesForCellPosition(geographicMapInterface, pathFindingInfo, mapArray, geographicMapCellPositionFactory.getAt(column, row));
    
}

}

}


};

            

