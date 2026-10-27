
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
        
            #include "java/lang/Integer.h"
        
class CommonStrings;
class PreLogUtil;
class AllBinaryTiledLayer;
class BasicGeographicMap;
class BasicGeographicMapCellPositionFactory;
class BasicGeographicMapUtil;
class GeographicMapCellPosition;
class GeographicMapCellType;
class GeographicMapCellTypeFactory;
#include <org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>
class RaceTrackGeographicMapCellType;
class RaceTrackRoadsGeographicMapCellHistoryFactory;
class PathFindingNodeCostInfoFactoryBase;
class BasicGeographicMapGraph;
class BasicGeographicMapPathFinder;
class PathFinderGraphVisitorFactoryBase;
class PathFindingInfo;
class PathFindingNodeCostInfoFactory;
class BasicArrayListS;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SimplePathFinderGraphVisitorFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFindingInfoFactory: public BasePathFindingInfoFactory {

    private: static inline PathFindingInfoFactory* instance;

    public: static PathFindingInfoFactory* getInstance();

    public: static void initMax(int32_t max);

    private: const int32_t MAX_DIRECTIONS = 4;

    private: PathFindingInfo* pathFindingInfo;

    private: BasicGeographicMapGraph* basicGeographicMapGraph;

    private: BasicGeographicMapPathFinder* basicGeographicMapPathFinder;

    private: PathFinderGraphVisitorFactoryBase* pathFinderGraphVisitorFactoryInterface;

private: PathFindingInfoFactory(PathFinderGraphVisitorFactoryBase* pathFinderGraphVisitorFactoryInterface, int32_t max);

                //@Throws(Exception.constructor)
            
    public: PathFindingInfo* getInstancePathFindingInfo(BasicGeographicMap* geographicMapInterface, std::vector<std::vector<int32_t>> mapArray);

                //@Throws(Exception.constructor)
            
    public: void init(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, std::vector<std::vector<int32_t>> mapArray);

                //@Throws(Exception.constructor)
            
    private: void buildPathFindingNodesForCellPosition(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, std::vector<std::vector<int32_t>> mapArray, GeographicMapCellPosition* cellPosition);

                //@Throws(Exception.constructor)
            
    private: void buildPathFindingNodes(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, std::vector<std::vector<int32_t>> mapArray);

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
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapGraph.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapGraph.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapPathFinder.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapPathFinder.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif
#if __has_include("org/allbinary/game/media/graphics/geography/map/racetrack/SimplePathFinderGraphVisitorFactory.h")
#include "org/allbinary/game/media/graphics/geography/map/racetrack/SimplePathFinderGraphVisitorFactory.h"
#endif

        #endif
    
