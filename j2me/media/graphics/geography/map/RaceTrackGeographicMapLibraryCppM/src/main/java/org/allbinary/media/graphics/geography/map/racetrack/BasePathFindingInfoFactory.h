
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDINGINFOFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDINGINFOFACTORY_H

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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public init(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, std::vector<std::vector<int32_t>> mapArray);

                //@Throws(Exception.constructor)
            
    addStartPathFindingNode(PathFindingInfo pathFindingInfo, GeographicMapCellPosition startGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    addEndPathFindingNode(PathFindingInfo pathFindingInfo, GeographicMapCellPosition endGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public PathFindingInfo getInstancePathFindingInfo(BasicGeographicMap geographicMapInterface, std::vector<std::vector<int32_t>> graphArray);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDINGINFOFACTORY_H
