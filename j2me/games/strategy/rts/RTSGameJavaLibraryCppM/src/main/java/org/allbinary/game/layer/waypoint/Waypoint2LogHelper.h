
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class PathFindingLayerInterface;
class WaypointBehaviorBase;
class GeographicMapCellPosition;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Waypoint2LogHelper
            : public virtual Object
         {

    private: static Waypoint2LogHelper* instance_owner();
    private: static Waypoint2LogHelper* instance;

    public: static Waypoint2LogHelper* getInstance();


            
    public: Waypoint2LogHelper();
        
    public: void initRange(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange);

    public: void processPossibleTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed);

    public: void processSetTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);

    public: void processPossibleTargetCloser(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);

    public: void setTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);

    public: void setTargetPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void setTargetPathIgnoreNewPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2);

    public: void processWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* targetLayer, int32_t size);

    public: void processWaypointTracked(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2);

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

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2LOGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2LOGHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2LOGHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/WaypointBehaviorBase.h>)
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
