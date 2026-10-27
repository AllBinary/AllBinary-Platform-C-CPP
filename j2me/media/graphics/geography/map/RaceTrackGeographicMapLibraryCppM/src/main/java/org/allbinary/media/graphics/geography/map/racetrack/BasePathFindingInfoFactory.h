
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class LogUtil;
class AllBinaryTiledLayer;
class NullUtil;
class StringMaker;
class BasicGeographicMap;
class GeographicMapCellPosition;
class GeographicMapCellTypeFactory;
class PathFindingInfo;
class PathFindingNode;
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h>
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RaceTrackRoadsGeographicMapCellHistoryFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasePathFindingInfoFactory
            : public virtual Object
         {


            
    public: BasePathFindingInfoFactory();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(Exception.constructor)
            
    public: void init(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, std::vector<std::vector<int32_t>> mapArray);

                //@Throws(Exception.constructor)
            
    private: void addStartPathFindingNode(PathFindingInfo* pathFindingInfo, GeographicMapCellPosition* startGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    private: void addEndPathFindingNode(PathFindingInfo* pathFindingInfo, GeographicMapCellPosition* endGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: PathFindingInfo* getInstancePathFindingInfo(BasicGeographicMap* geographicMapInterface, std::vector<std::vector<int32_t>> graphArray);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDINGINFOFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDINGINFOFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASEPATHFINDINGINFOFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h"
#endif

        #endif
    
