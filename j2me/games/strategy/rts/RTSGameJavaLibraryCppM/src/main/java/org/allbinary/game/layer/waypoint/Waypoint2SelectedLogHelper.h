
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class PathFindingLayerInterface;
class WaypointBehaviorBase;
class CollidableDestroyableDamageableLayer;
class LogUtil;
class CommonSeps;
class StringMaker;
class StringUtil;
class PositionStrings;
class GeographicMapCellPosition;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Waypoint2SelectedLogHelper: public Waypoint2LogHelper {

    private: static Waypoint2SelectedLogHelper* instanceC_owner();
    private: static Waypoint2SelectedLogHelper* instanceC;

    public: static Waypoint2LogHelper* getInstance();


            
    public: Waypoint2SelectedLogHelper();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonSeps* commonSeps;

    private: PositionStrings* positionStrings;

    private: StringUtil* stringUtil;

    private: const std::string ENEMY_POSSIBLE_TARGET = " Enemy Possible Target: ";

    private: const std::string CLOSE_RANGE = "closeRange: ";

    private: const std::string SENSOR_RANGE = " sensorRange: ";

    private: const std::string ONLY_TARGETS = " Only Targets: ";

    private: const std::string SHORTER_THAN_CURRENT_TARGET_DISTANCE = " isShorterThanCurrentTargetDistance: ";

    private: const std::string CURRENT_TARGET_DESTROYED = " isCurrentTargetDestroyed: ";

    private: const std::string CURRENT_TARGET_NOT_AVAILABLE = " isCurrentTargetNotAvailable: ";

    private: const std::string PROCESS_POSSIBLE_TARGET = "selected: processPossibleTarget1";

    public: void initRange(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange);

    public: void processPossibleTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed);

    public: void processSetTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);

    public: void processPossibleTargetCloser(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);

    public: void setTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);

    public: void setTargetPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void setTargetPathIgnoreNewPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase);

    public: void processWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* targetLayer, int32_t size);

    public: void processWaypointTracked(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase);

    public: void processWaypointTrackedVisit(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* geographicMapCellPosition);

    public: void processWaypointTrackedWithoutProgress(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, std::string reason);

    public: void wander(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void targetDestroyed(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void processTargeting(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);

    public: void processTargetingNonWayPoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);

    public: void removeWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* waypointLayer, std::string reason);

    public: void removeWaypointList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, BasicArrayList* list);

    public: void removeWaypointClear(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void clearTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void addWaypointFromUser(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);

    public: void targetMovedSoRetarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/WaypointBehaviorBase.h>)
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/math/PositionStrings.h>)
#include <org/allbinary/math/PositionStrings.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h")
#include "org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h"
#endif

        #endif
    
