
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_H

        
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
        
class AllBinaryTiledLayer;
class NullUtil;
class LogUtil;
class MathUtil;
class CommonStrings;
class BasicGeographicMap;
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellPosition;
class GeographicMapCellType;
class RaceTrackGeographicMapCellType;
template<typename T1> class ABHashSet;
template<typename T1> class ABPriorityQueue;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h"
class PathFindingNodeCost;
class PathFindingNodeCostInfo;
class PathFindingNode;
class MultipassState;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFinder: public GeographicPathFinderBase {


            
    public: PathFinder();
        
    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayListUtil* basicArrayListUtil;

    private: MathUtil* mathUtil;

    private: ABPriorityQueue<PathFindingNodeCost*>* openPriorityQueue;

    private: ABHashSet<PathFindingNodeCost*>* closedSet;

    private: Object* geographicMapInterface;

    private: std::vector<std::vector<PathFindingNodeCost*>> costArray;

                //@Throws(Exception.constructor)
            
    public: void init(BasicGeographicMap* geographicMapInterface);

    public: BasicArrayList* searchTotalPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* searchTotalPathN(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths, MultipassState* multipassState);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* search(PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode);

                //@Throws(Exception.constructor)
            
    public: void searchStart(PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode, MultipassState* multipassState);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* searchN(PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode, MultipassState* multipassState);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* findPath(GeographicMapCellPosition* start, GeographicMapCellPosition* target);

                //@Throws(Exception.constructor)
            
    public: void findPathStart(GeographicMapCellPosition* start, GeographicMapCellPosition* target, MultipassState* multipassState);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* findPathEnd(GeographicMapCellPosition* start, GeographicMapCellPosition* target, MultipassState* multipassState);

    private: BasicArrayList* extractPath(GeographicMapCellPosition* start, PathFindingNodeCost* current);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/util/ABHashSet.h>)
#include <org/allbinary/util/ABHashSet.h>
#endif
#if __has_include(<org/allbinary/util/ABPriorityQueue.h>)
#include <org/allbinary/util/ABPriorityQueue.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h")
#include "org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCost.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCost.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfo.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/MultipassState.h")
#include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"
#endif

        #endif
    
