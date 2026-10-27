
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2LOGHELPER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2LOGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Waypoint2LogHelper::Waypoint2LogHelper() {
        }
        auto Waypoint2LogHelper::instance_owner() -> Waypoint2LogHelper* { static std::unique_ptr<Waypoint2LogHelper> value(new Waypoint2LogHelper()); return value.get(); }
Waypoint2LogHelper* Waypoint2LogHelper::instance = Waypoint2LogHelper::instance_owner();

    auto Waypoint2LogHelper::getInstance() -> Waypoint2LogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Waypoint2LogHelper::instance;
    
}


    auto Waypoint2LogHelper::initRange(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange) -> void{
}


    auto Waypoint2LogHelper::processPossibleTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed) -> void{
}


    auto Waypoint2LogHelper::processSetTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) -> void{
}


    auto Waypoint2LogHelper::processPossibleTargetCloser(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) -> void{
}


    auto Waypoint2LogHelper::setTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) -> void{
}


    auto Waypoint2LogHelper::setTargetPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto Waypoint2LogHelper::setTargetPathIgnoreNewPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2) -> void{
}


    auto Waypoint2LogHelper::processWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* targetLayer, int32_t size) -> void{
}


    auto Waypoint2LogHelper::processWaypointTracked(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2) -> void{
}


    auto Waypoint2LogHelper::processWaypointTrackedVisit(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* geographicMapCellPosition) -> void{
}


    auto Waypoint2LogHelper::processWaypointTrackedWithoutProgress(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, std::string reason) -> void{
}


    auto Waypoint2LogHelper::wander(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto Waypoint2LogHelper::targetDestroyed(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto Waypoint2LogHelper::processTargeting(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy) -> void{
}


    auto Waypoint2LogHelper::processTargetingNonWayPoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy) -> void{
}


    auto Waypoint2LogHelper::removeWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* waypointLayer, std::string reason) -> void{
}


    auto Waypoint2LogHelper::removeWaypointList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, BasicArrayList* list) -> void{
}


    auto Waypoint2LogHelper::removeWaypointClear(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto Waypoint2LogHelper::clearTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto Waypoint2LogHelper::addWaypointFromUser(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) -> void{
}


    auto Waypoint2LogHelper::targetMovedSoRetarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2LOGHELPER_CPP
