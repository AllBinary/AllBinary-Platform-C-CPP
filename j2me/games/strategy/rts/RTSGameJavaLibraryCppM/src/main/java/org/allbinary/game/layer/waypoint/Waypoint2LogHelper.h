
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2LOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2LOGHELPER_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Waypoint2LogHelper
            : public Object
         {
        

    private: static const instance: Waypoint2LogHelper = new Waypoint2LogHelper();

    public static Waypoint2LogHelper getInstance();

    public initRange(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange);

    public processPossibleTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed);

    public processSetTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance);

    public processPossibleTargetCloser(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance);

    public setTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance);

    public setTargetPath(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public setTargetPathIgnoreNewPath(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2);

    public processWaypoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, PathFindingLayerInterface targetLayer, int32_t size);

    public processWaypointTracked(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2);

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

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2LOGHELPER_H
