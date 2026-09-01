
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
class PathFindingInfoFactory: public BasePathFindingInfoFactory {

    private: static PathFindingInfoFactory instance() { return PathFindingInfoFactory(); }

    public: static PathFindingInfoFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingInfoFactory::instance();
    
}


    private: static int32_t MAX = 32768;

    public: static void initMax(int32_t max){
PathFindingInfoFactory::MAX= max;
    
}


    private: PathFindingInfo pathFindingInfo;

    private: PathFinder pathFinder;

private: PathFindingInfoFactory(){
this->pathFindingInfo= PathFindingInfo(PathFindingNodeCostInfoFactory(PathFindingInfoFactory::MAX), BasicArrayListS(1), BasicArrayListS(1));
    
this->pathFinder= PathFinder();
    
}


                //@Throws(Exception.constructor)
            
    public: PathFindingInfo getInstancePathFindingInfo(BasicGeographicMap geographicMapInterface, std::vector<std::vector<int32_t>> mapArray){

    PathFindingInfo pathFindingInfo = PathFindingInfo(this->pathFindingInfo.getPathFindingNodeCostInfoFactoryInterface(), BasicArrayListS(1), BasicArrayListS(1));;
    
RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance().init();
    
this->init(geographicMapInterface, pathFindingInfo, mapArray);
    
this->pathFinder.init(geographicMapInterface);
    
pathFindingInfo.setPathFinder(this->pathFinder);
    



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

            

