
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PathFindingInfoFactory: public BasePathFindingInfoFactory {

    private: static PathFindingInfoFactory* instance() { static std::unique_ptr<PathFindingInfoFactory> value(new PathFindingInfoFactory()); return value.get(); }

    public: static PathFindingInfoFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingInfoFactory::instance();
    
}


private: PathFindingInfoFactory(){
}


                //@Throws(Exception.constructor)
            
    public: PathFindingInfo* getInstancePathFindingInfo(BasicGeographicMap* geographicMapInterface, std::vector<std::vector<int32_t>> graphArray){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(commonStrings->START, this, commonStrings->GET_INSTANCE);
    

    PathFindingInfo* pathFindingInfo = new PathFindingInfo(new PathFindingNodeCostInfoFactoryBase(), new BasicArrayListS(1), new BasicArrayListS(1));;
    
RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance()->init();
    
this->init(geographicMapInterface, pathFindingInfo, graphArray);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathFindingInfo;
    
}


};

            

