
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class PathFindingLayerInterface;
class WaypointBehaviorBase;
class CollidableDestroyableDamageableLayer;
class GeographicMapCellPosition;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointLogHelper
            : public virtual Object
         {

    private: static WaypointLogHelper* instance_owner();
    private: static WaypointLogHelper* instance;

    public: static WaypointLogHelper* getInstance();


            
    public: WaypointLogHelper();
        
    public: void onWaypointEvent(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);

    public: void addWaypointFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);

    public: void addWaypointFromBuildingList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer, BasicArrayList* list);

    public: void insertWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName);

    public: void insertWaypointList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName, BasicArrayList* list);

    public: void setRandomGeographicMapCellHistoryList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList);

    public: void moveAwayFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void needToMove(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior);

    public: void setRandomGeographicMapCellHistory(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void setCurrentPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition* currentPathGeographicMapCellPosition);

    public: void setNextUnvisitedPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLOGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLOGHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLOGHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/WaypointBehaviorBase.h>)
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
