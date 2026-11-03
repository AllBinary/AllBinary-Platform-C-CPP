
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLOGHELPER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLOGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/WaypointLogHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

WaypointLogHelper::WaypointLogHelper() {
        }
        auto WaypointLogHelper::instance_owner() -> WaypointLogHelper* { static std::unique_ptr<WaypointLogHelper> value(new WaypointLogHelper()); return value.get(); }
WaypointLogHelper* WaypointLogHelper::instance = WaypointLogHelper::instance_owner();

    auto WaypointLogHelper::getInstance() -> WaypointLogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return WaypointLogHelper::instance;
    
}


    auto WaypointLogHelper::onWaypointEvent(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) -> void{
}


    auto WaypointLogHelper::addWaypointFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) -> void{
}


    auto WaypointLogHelper::addWaypointFromBuildingList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer, BasicArrayList* list) -> void{
}


    auto WaypointLogHelper::insertWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName) -> void{
}


    auto WaypointLogHelper::insertWaypointList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName, BasicArrayList* list) -> void{
}


    auto WaypointLogHelper::setRandomGeographicMapCellHistoryList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList) -> void{
}


    auto WaypointLogHelper::moveAwayFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto WaypointLogHelper::needToMove(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior) -> void{
}


    auto WaypointLogHelper::setRandomGeographicMapCellHistory(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto WaypointLogHelper::setCurrentPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition* currentPathGeographicMapCellPosition) -> void{
}


    auto WaypointLogHelper::setNextUnvisitedPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition) -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLOGHELPER_CPP
