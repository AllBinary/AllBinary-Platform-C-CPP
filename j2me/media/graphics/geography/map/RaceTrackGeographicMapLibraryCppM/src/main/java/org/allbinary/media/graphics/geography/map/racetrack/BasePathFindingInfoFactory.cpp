
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
        
            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackRoadsGeographicMapCellHistoryFactory.h"

class BasePathFindingInfoFactory
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void init(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray){

//inner=true member= isStatic=
class RaceTrackGeographicMapCellPositionFactoryInitVisitor
            : public Object
        : public GeographicMapCellPositionFactoryInitVisitorInterface {

    private: int32_t startLineId;

    private: int32_t finishLineId;

public: RaceTrackGeographicMapCellPositionFactoryInitVisitor(){

    GeographicMapCellTypeFactory raceTrackGeographicMapCellTypeFactory = geographicMapInterface.getGeographicMapCellTypeFactory();;
    
this->startLineId= raceTrackGeographicMapCellTypeFactory.getStartType();
    
this->finishLineId= raceTrackGeographicMapCellTypeFactory.getEndType();
    
}


                //@Throws(Exception.constructor)
            
    public: void visit(AllBinaryTiledLayer tiledLayer, GeographicMapCellPosition cellPosition){

    int32_t row = cellPosition.getRow();;
    

    int32_t column = cellPosition.getColumn();;
    

        try {
            
    int32_t cellTypeId = mapArray[row]![column];;
    

    int32_t geographicCellType = geographicMapInterface.getCellTypeFromMapCellTypeInt(cellTypeId);;
    

                        if(geographicCellType == this->startLineId)
                        
                                    {
                                    this->addStartPathFindingNode(pathFindingInfo, cellPosition);
    

                                    }
                                

                        if(geographicCellType == this->finishLineId)
                        
                                    {
                                    
                        if(geographicCellType == this->startLineId)
                        
                                    {
                                    this->addEndPathFindingNode(pathFindingInfo, geographicMapInterface.getGeographicMapCellPositionFactoryInterface().getInstance(geographicMapInterface, cellPosition.getColumn(), cellPosition.getRow(), tiledLayer.getColumns(), tiledLayer.getRows(), tiledLayer.getCellWidth(), tiledLayer.getCellHeight()));
    

                                    }
                                
                        else {
                            this->addEndPathFindingNode(pathFindingInfo, cellPosition);
    

                        }
                            

                                    }
                                

    GeographicMapCellTypeFactory raceTrackGeographicMapCellTypeFactory = geographicMapInterface.getGeographicMapCellTypeFactory();;
    

    GeographicMapCellTypeFactory geographicMapCellTypeFactory = GeographicMapCellTypeFactory::getInstance();;
    

                        if(raceTrackGeographicMapCellTypeFactory.isPath(geographicMapCellTypeFactory.get(geographicCellType)))
                        
                                    {
                                    RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance().track(cellPosition);
    

                                    }
                                
                        else {
                            
                        }
                            

                //: 
} catch(e) 
            {

    CommonSeps commonSeps = CommonSeps::getInstance();;
    
logUtil.put(StringMaker().append(commonSeps.BRACKET_OPEN).appendint(row).append(commonSeps.BRACKET_CLOSE).append(commonSeps.BRACKET_OPEN).appendint(column).append("] in [").appendint(mapArray.size()).append(commonSeps.BRACKET_CLOSE).append(commonSeps.BRACKET_OPEN).appendint(mapArray[0]!.size()).append(commonSeps.BRACKET_CLOSE).toString(), this, "visit", e);
    



                            throw e;
                    
}

}


};

            
geographicMapInterface.getGeographicMapCellPositionFactory().visit(RaceTrackGeographicMapCellPositionFactoryInitVisitor());
    
}


                //@Throws(Exception.constructor)
            
    private: void addStartPathFindingNode(PathFindingInfo pathFindingInfo, GeographicMapCellPosition startGeographicMapCellPosition){
pathFindingInfo.addStartPathFindingNode(PathFindingNode(NullUtil::getInstance().NULL_OBJECT, startGeographicMapCellPosition));
    
}


                //@Throws(Exception.constructor)
            
    private: void addEndPathFindingNode(PathFindingInfo pathFindingInfo, GeographicMapCellPosition endGeographicMapCellPosition){
pathFindingInfo.addEndPathFindingNode(PathFindingNode(NullUtil::getInstance().NULL_OBJECT, endGeographicMapCellPosition));
    
}


                //@Throws(Exception.constructor)
            
    public: PathFindingInfo getInstancePathFindingInfo(BasicGeographicMap geographicMapInterface, std::vector<std::vector<int32_t>> graphArray){



                            throw RuntimeException();
                    
}


};

            

