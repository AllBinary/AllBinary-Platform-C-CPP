
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
        
            #include "../../../../../../../../java/lang/System.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterfaceFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTracksPathPrinter.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DynamicRaceTracksPathPrinter: public RaceTracksPathPrinter {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: void printAllPaths(RaceTrackGeographicMapInterfaceFactoryInterface raceTrackGeographicMapInterfaceFactoryInterface, PathFindingInfo pathFindingInfo, int32_t size){

        try {
            



                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicGeographicMap geographicMapInterface = raceTrackGeographicMapInterfaceFactoryInterface.getTrackInstance(SmallIntegerSingletonFactory::getInstance().getAt(index));;
    

    BasicArrayList list = PathGenerator::getInstance().createList(geographicMapInterface, RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance(), pathFindingInfo, 10);;
    
console.log("Track " +index);
    
this->printPaths(list);
    
}


                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.PROCESS, e);
    
}

}


};

            

