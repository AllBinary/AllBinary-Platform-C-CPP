
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_H
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CommonStrings;
class PreLogUtil;
class BasicGeographicMap;
#include <org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>
class RaceTrackRoadsGeographicMapCellHistoryFactory;
class PathFindingInfo;
class PathFindingNodeCostInfoFactoryBase;
class BasicArrayListS;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFindingInfoFactory: public BasePathFindingInfoFactory {

    private: static PathFindingInfoFactory* instance_owner();
    private: static PathFindingInfoFactory* instance;

    public: static PathFindingInfoFactory* getInstance();

private: PathFindingInfoFactory();

                //@Throws(Exception.constructor)
            
    public: PathFindingInfo* getInstancePathFindingInfo(BasicGeographicMap* geographicMapInterface, std::vector<std::vector<int32_t>> graphArray);

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_PATHFINDINGINFOFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif

        #endif
    
