
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

#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Waypoint2LogHelper.h"

class Waypoint2SelectedLogHelper: public Waypoint2LogHelper {

    private: static const Waypoint2SelectedLogHelper instanceC = Waypoint2SelectedLogHelper();

    public: static Waypoint2LogHelper getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const PositionStrings positionStrings = PositionStrings::getInstance();

    private: const StringUtil stringUtil = StringUtil::getInstance();

    private: const std::string ENEMY_POSSIBLE_TARGET = " Enemy Possible Target: ";

    private: const std::string CLOSE_RANGE = "closeRange: ";

    private: const std::string SENSOR_RANGE = " sensorRange: ";

    private: const std::string ONLY_TARGETS = " Only Targets: ";

    private: const std::string SHORTER_THAN_CURRENT_TARGET_DISTANCE = " isShorterThanCurrentTargetDistance: ";

    private: const std::string CURRENT_TARGET_DESTROYED = " isCurrentTargetDestroyed: ";

    private: const std::string CURRENT_TARGET_NOT_AVAILABLE = " isCurrentTargetNotAvailable: ";

    private: const std::string PROCESS_POSSIBLE_TARGET = "selected: processPossibleTarget1";

    public: void initRange(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange);

    public: void processPossibleTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed);

    public: void processSetTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance);

    public: void processPossibleTargetCloser(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance);

    public: void setTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance);

    public: void setTargetPath(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public: void setTargetPathIgnoreNewPath(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase);

    public: void processWaypoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface targetLayer, int32_t size);

    public: void processWaypointTracked(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase);

    public: void processWaypointTrackedVisit(PathFindingLayerInterface associatedAdvancedRTSGameLayer, GeographicMapCellPosition geographicMapCellPosition);

    public: void processWaypointTrackedWithoutProgress(PathFindingLayerInterface associatedAdvancedRTSGameLayer, std::string reason);

    public: void wander(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public: void targetDestroyed(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public: void processTargeting(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);

    public: void processTargetingNonWayPoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);

    public: void removeWaypoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, PathFindingLayerInterface waypointLayer, std::string reason);

    public: void removeWaypointList(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, BasicArrayList list);

    public: void removeWaypointClear(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public: void clearTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public: void addWaypointFromUser(PathFindingLayerInterface associatedAdvancedRTSGameLayer, PathFindingLayerInterface advancedRTSGameLayer);

    public: void targetMovedSoRetarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_H
