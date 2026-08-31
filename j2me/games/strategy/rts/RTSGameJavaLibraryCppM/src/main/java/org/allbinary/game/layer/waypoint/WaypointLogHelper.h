
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLOGHELPER_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WaypointLogHelper
            : public Object
         {
        

    private: static const instance: WaypointLogHelper = new WaypointLogHelper();

    public static WaypointLogHelper getInstance();

    public onWaypointEvent(PathFindingLayerInterface associatedAdvancedRTSGameLayer, PathFindingLayerInterface advancedRTSGameLayer);

    public addWaypointFromBuilding(PathFindingLayerInterface associatedAdvancedRTSGameLayer, PathFindingLayerInterface advancedRTSGameLayer);

    public addWaypointFromBuildingList(PathFindingLayerInterface associatedAdvancedRTSGameLayer, PathFindingLayerInterface advancedRTSGameLayer, BasicArrayList list);

    public insertWaypoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer rtsLayer, string waypointName);

    public insertWaypointList(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer rtsLayer, string waypointName, BasicArrayList list);

    public setRandomGeographicMapCellHistoryList(PathFindingLayerInterface associatedAdvancedRTSGameLayer, BasicArrayList pathsList);

    public moveAwayFromBuilding(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public needToMove(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior);

    public setRandomGeographicMapCellHistory(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public setCurrentPathGeographicMapCellPosition(PathFindingLayerInterface associatedAdvancedRTSGameLayer, GeographicMapCellPosition existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition currentPathGeographicMapCellPosition);

    public setNextUnvisitedPathGeographicMapCellPosition(PathFindingLayerInterface associatedAdvancedRTSGameLayer, GeographicMapCellPosition existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition nextUnvisitedPathGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLOGHELPER_H
