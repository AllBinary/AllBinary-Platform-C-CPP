
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINTBEHAVIORBASE_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTBEHAVIORBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class CollidableDestroyableDamageableLayer;
class WaypointBase;
class BasicArrayList;
class BasicArrayListD;
#include <org/allbinary/game/tick/TickableInterface.h>
class AllBinaryLayerManager;
class GeographicMapCellHistory;
class GeographicMapCellPosition;
class BasicArrayListS;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PathFindingLayerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointBehaviorBase
            : public virtual Object
        , public virtual TickableInterface {

    private: BasicArrayList* ownedWaypointList;

    /*protected*/ public: bool waypointOverridesAttacking = true;

    private: WaypointBase* waypoint;

public: WaypointBehaviorBase();

    public: std::string getName();

    public: bool isRunning();

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: BasicArrayList* getOwnedWaypointList();

    public: WaypointBase* getWaypoint();

    public: void setWaypoint(WaypointBase* waypoint);

    public: BasicArrayList* getSteeringVisitorList();

    public: std::string getMovementLogicAsString();

    public: bool isWaypointListEmptyOrOnlyTargets();

    public: bool isInSensorRange(CollidableDestroyableDamageableLayer* layerInterface, int32_t targetDistance);

    public: CollidableDestroyableDamageableLayer* getCurrentTargetLayerInterface();

    public: std::string getCurrentTargetingStateString();

    public: bool isTrackingWaypoint();

    public: GeographicMapCellPosition* getCurrentPathGeographicMapCellPosition();

    public: GeographicMapCellHistory* getCurrentGeographicMapCellHistory();

    public: bool isWaypointOverridesAttacking();

    public: GeographicMapCellPosition* getNextUnvisitedPathGeographicMapCellPosition();

    public: bool needToMove();

    public: void setWaypointPathsList(BasicArrayList* waypointPathsList);

    public: BasicArrayList* getWaypointPathsList();

                //@Throws(Exception.constructor)
            
    public: void setTarget(PathFindingLayerInterface* layerInterface);

                //@Throws(Exception.constructor)
            
    public: void setTargetWithDistance(PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);

                //@Throws(Exception.constructor)
            
    public: void clearTarget();

                //@Throws(Exception.constructor)
            
    public: void updatePathOnTargetMove(std::string reason);

    private: BasicArrayList* steeringVisitorList;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINTBEHAVIORBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINTBEHAVIORBASE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTBEHAVIORBASE_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointBase.h>)
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/game/tick/TickableInterface.h>)
#include <org/allbinary/game/tick/TickableInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif
#if __has_include("org/allbinary/game/layer/PathFindingLayerInterface.h")
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#endif

        #endif
    
