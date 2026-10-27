
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
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinder.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //1.4.2
auto PathFindingInfoFactory::instance_owner() -> PathFindingInfoFactory* { static std::unique_ptr<PathFindingInfoFactory> value(new PathFindingInfoFactory()); return value.get(); }
PathFindingInfoFactory* PathFindingInfoFactory::instance = PathFindingInfoFactory::instance_owner();

    auto PathFindingInfoFactory::getInstance() -> PathFindingInfoFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingInfoFactory::instance;
    
}


    auto PathFindingInfoFactory::initMax(int32_t max) -> void{
PathFindingInfoFactory::MAX= max;
    
}


PathFindingInfoFactory::PathFindingInfoFactory(){
this->pathFindingInfo= new PathFindingInfo(new PathFindingNodeCostInfoFactory(PathFindingInfoFactory::MAX), new BasicArrayListS(1), new BasicArrayListS(1));
    
this->pathFinder= new PathFinder();
    
}


                //@Throws(Exception.constructor)
            
    auto PathFindingInfoFactory::getInstancePathFindingInfo(BasicGeographicMap* geographicMapInterface, std::vector<std::vector<int32_t>> mapArray) -> PathFindingInfo*{

    PathFindingInfo* pathFindingInfo = new PathFindingInfo(this->pathFindingInfo->getPathFindingNodeCostInfoFactoryInterface(), new BasicArrayListS(1), new BasicArrayListS(1));;
    
RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance()->init();
    
this->init(geographicMapInterface, pathFindingInfo, mapArray);
    
this->pathFinder->init(geographicMapInterface);
    
pathFindingInfo->setPathFinder(this->pathFinder);
    



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
