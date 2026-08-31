
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
        

    private: static const instanceC: Waypoint2SelectedLogHelper = new Waypoint2SelectedLogHelper();

    public static Waypoint2LogHelper getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const positionStrings: PositionStrings = PositionStrings.getInstance()!;

    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: const ENEMY_POSSIBLE_TARGET: string = " Enemy Possible Target: ";

    private: const CLOSE_RANGE: string = "closeRange: ";

    private: const SENSOR_RANGE: string = " sensorRange: ";

    private: const ONLY_TARGETS: string = " Only Targets: ";

    private: const SHORTER_THAN_CURRENT_TARGET_DISTANCE: string = " isShorterThanCurrentTargetDistance: ";

    private: const CURRENT_TARGET_DESTROYED: string = " isCurrentTargetDestroyed: ";

    private: const CURRENT_TARGET_NOT_AVAILABLE: string = " isCurrentTargetNotAvailable: ";

    private: const PROCESS_POSSIBLE_TARGET: string = "selected: processPossibleTarget1";

    public initRange(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange);

    public processPossibleTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed);

    public processSetTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance);

    public processPossibleTargetCloser(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance);

    public setTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance);

    public setTargetPath(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public setTargetPathIgnoreNewPath(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase);

    public processWaypoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface targetLayer, int32_t size);

    public processWaypointTracked(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase);

    public processWaypointTrackedVisit(PathFindingLayerInterface associatedAdvancedRTSGameLayer, GeographicMapCellPosition geographicMapCellPosition);

    public processWaypointTrackedWithoutProgress(PathFindingLayerInterface associatedAdvancedRTSGameLayer, string reason);

    public wander(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public targetDestroyed(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public processTargeting(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);

    public processTargetingNonWayPoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);

    public removeWaypoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, PathFindingLayerInterface waypointLayer, string reason);

    public removeWaypointList(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, BasicArrayList list);

    public removeWaypointClear(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public clearTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public addWaypointFromUser(PathFindingLayerInterface associatedAdvancedRTSGameLayer, PathFindingLayerInterface advancedRTSGameLayer);

    public targetMovedSoRetarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_H
