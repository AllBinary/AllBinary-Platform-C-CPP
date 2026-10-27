
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_CPP
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/media/graphics/geography/map/racetrack/PathFindingInfoFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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
        #include "org/allbinary/game/media/graphics/geography/map/racetrack/SimplePathFinderGraphVisitorFactory.h"


    auto PathFindingInfoFactory::getInstance() -> PathFindingInfoFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingInfoFactory::instance;
    
}


    auto PathFindingInfoFactory::initMax(int32_t max) -> void{
PathFindingInfoFactory::instance= new PathFindingInfoFactory(new SimplePathFinderGraphVisitorFactory(1, 1, Integer.MAX_VALUE), max);
    
}


PathFindingInfoFactory::PathFindingInfoFactory(PathFinderGraphVisitorFactoryBase* pathFinderGraphVisitorFactoryInterface, int32_t max){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put("Using Dynamic Path Finding", this, commonStrings->GET_INSTANCE);
    
this->basicGeographicMapPathFinder= new BasicGeographicMapPathFinder(max);
    
this->pathFindingInfo= new PathFindingInfo(new PathFindingNodeCostInfoFactory(max), new BasicArrayListS(1), new BasicArrayListS(1));
    
this->basicGeographicMapGraph= new BasicGeographicMapGraph(dynamic_cast<PathFindingNodeCostInfoFactory*>(this->pathFindingInfo->getPathFindingNodeCostInfoFactoryInterface()));
    
this->pathFinderGraphVisitorFactoryInterface= pathFinderGraphVisitorFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto PathFindingInfoFactory::getInstancePathFindingInfo(BasicGeographicMap* geographicMapInterface, std::vector<std::vector<int32_t>> mapArray) -> PathFindingInfo*{

    PathFindingInfo* pathFindingInfo = new PathFindingInfo(this->pathFindingInfo->getPathFindingNodeCostInfoFactoryInterface(), new BasicArrayListS(1), new BasicArrayListS(1));;
    
RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance()->init();
    
this->init(geographicMapInterface, pathFindingInfo, mapArray);
    
this->basicGeographicMapPathFinder->init(geographicMapInterface, this->basicGeographicMapGraph, this->pathFinderGraphVisitorFactoryInterface->getInstance(geographicMapInterface));
    
pathFindingInfo->setPathFinder(this->basicGeographicMapPathFinder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathFindingInfo;
    
}


                //@Throws(Exception.constructor)
            
    auto PathFindingInfoFactory::init(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, std::vector<std::vector<int32_t>> mapArray) -> void{
BasePathFindingInfoFactory::init(geographicMapInterface, pathFindingInfo, mapArray);
    
this->buildPathFindingNodes(geographicMapInterface, pathFindingInfo, mapArray);
    
}


                //@Throws(Exception.constructor)
            
    auto PathFindingInfoFactory::buildPathFindingNodesForCellPosition(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, std::vector<std::vector<int32_t>> mapArray, GeographicMapCellPosition* cellPosition) -> void{

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    int32_t cellTypeId = mapArray[cellPosition->getRow()][cellPosition->getColumn()];;
    

    GeographicMapCellType* geographicMapCellType = GeographicMapCellTypeFactory::getInstance()->get(geographicMapInterface->getCellTypeFromMapCellTypeInt(cellTypeId));;
    

    RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType = dynamic_cast<RaceTrackGeographicMapCellType*>(geographicMapCellType);;
    

    AllBinaryTiledLayer* allBinaryTiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface = pathFindingInfo->getPathFindingNodeCostInfoFactoryInterface();;
    

    BasicGeographicMapUtil* basicGeographicMapUtil = BasicGeographicMapUtil::getInstance();;
    

    int32_t row= 0;;
    

    int32_t column= 0;;
    

    GeographicMapCellPosition* goingToGeographicMapCellPosition;;
    

    int32_t costFromStart= 0;;
    

    int32_t costToEnd= 0;;
    




                        for (
    int32_t index = 0;index < this->MAX_DIRECTIONS; index++)
        {
row= basicGeographicMapUtil->getBorderingRow(index, cellPosition);
    
column= basicGeographicMapUtil->getBorderingColumn(index, cellPosition);
    

                        if(row < allBinaryTiledLayer->getRows() && column < allBinaryTiledLayer->getColumns() && row >= 0 && column >= 0)
                        
                                    {
                                    goingToGeographicMapCellPosition= geographicMapCellPositionFactory->getAt(column, row);
    
costFromStart= raceTrackGeographicMapCellType->getTravelCost();
    
costToEnd= costFromStart;
    
pathFindingNodeCostInfoFactoryInterface->create(geographicMapInterface, goingToGeographicMapCellPosition, cellPosition, costFromStart, costToEnd);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto PathFindingInfoFactory::buildPathFindingNodes(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, std::vector<std::vector<int32_t>> mapArray) -> void{

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    AllBinaryTiledLayer* allBinaryTiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    int32_t totalColumns = allBinaryTiledLayer->getColumns();;
    

    int32_t totalRows = allBinaryTiledLayer->getRows();;
    




                        for (
    int32_t column = 0;column < totalColumns; column++)
        {




                        for (
    int32_t row = 0;row < totalRows; row++)
        {
this->buildPathFindingNodesForCellPosition(geographicMapInterface, pathFindingInfo, mapArray, geographicMapCellPositionFactory->getAt(column, row));
    
}

}

}




        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_CPP
