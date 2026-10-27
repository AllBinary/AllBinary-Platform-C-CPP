
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_MULTIPASSNOCACHEWAYPOINT_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_MULTIPASSNOCACHEWAYPOINT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AllBinaryGameLayerManager;
class PathFindingLayerInterface;
class RTSLayerEvent;
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>
class CollidableDestroyableDamageableLayer;
class UnitWaypointBehavior;
class PathFindingInfoFactory;
class ForcedLogUtil;
class LogUtil;
class CommonStrings;
class AllBinaryEventObject;
class EventStrings;
class Sound;
class BasicGeographicMap;
class GeographicMapCellPosition;
class GeographicMapCellTypeFactory;
class GeographicMapCompositeInterface;
class CustomMapGenerator;
class RaceTrackGeographicMap;
class MultipassState;
class PathFindingInfo;
class PathGenerator;
class BasicArrayList;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultipassNoCacheWaypoint: public WaypointBase, public BuildingEventListenerInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: PathFindingLayerInterface* ownerLayer;

public: MultipassNoCacheWaypoint(PathFindingLayerInterface* ownerLayer, Sound* sound);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

    public: void releaseCachedPaths();

                //@Throws(Exception.constructor)
            
    public: PathFindingInfo* getPathFindingInfo(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getPathsList(GeographicMapCellPosition* geographicMapCellPosition, PathFindingInfo* pathFindingInfo, MultipassState* multipassState);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: GeographicMapCellPosition* getEndGeographicMapCellPosition(GeographicMapCellPosition* startGeographicMapCellPosition);

    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    public: void onBuildingEvent(RTSLayerEvent* event);

    public: void reset();

                //@Throws(Exception.constructor)
            
    public: void visit(PathFindingLayerInterface* unitLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_MULTIPASSNOCACHEWAYPOINT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_MULTIPASSNOCACHEWAYPOINT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_MULTIPASSNOCACHEWAYPOINT_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerEvent.h>)
#include <org/allbinary/game/layer/RTSLayerEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>)
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/unit/UnitWaypointBehavior.h>)
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>
#endif
#if __has_include(<org/allbinary/game/media/graphics/geography/map/racetrack/PathFindingInfoFactory.h>)
#include <org/allbinary/game/media/graphics/geography/map/racetrack/PathFindingInfoFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/media/audio/Sound.h>)
#include <org/allbinary/media/audio/Sound.h>
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
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/MultipassState.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/MultipassState.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/waypoint/WaypointBase.h")
#include "org/allbinary/game/layer/waypoint/WaypointBase.h"
#endif

        #endif
    
