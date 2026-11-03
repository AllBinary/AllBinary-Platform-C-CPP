
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class PrimaryWaypointHelper;
class AdvancedRTSGameLayer;
class RTSLayerEvent;
class SensorAction;
class SensorActionFactory;
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>
class BuildingLayer;
class CollidableDestroyableDamageableLayer;
#include <org/allbinary/game/layer/waypoint/event/WaypointEventListenerInterface.h>
class BasicColorFactory;
class AllBinaryLayer;
class ForcedLogUtil;
class StringMaker;
class StringUtil;
class AllBinaryEventObject;
class EventStrings;
class GeographicMapCellHistory;
class GeographicMapCellPosition;
class SimpleGeographicMapCellPositionFactory;
class CommonSeps;
class TimeDelayHelper;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UnitWaypointStrings;
class UnitLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UnitWaypointBehavior: public WaypointBehaviorBase, public virtual WaypointEventListenerInterface {

    /*protected*/ public: CommonSeps* commonSeps;

    private: UnitWaypointStrings* unitWaypointStrings;

    private: int32_t longWeaponRange = 0;

    private: SensorAction* sensorAction;

    private: TimeDelayHelper* completeTimeDelayHelper;

    /*protected*/ public: GeographicMapCellHistory* currentGeographicMapCellHistoryP;

    private: GeographicMapCellPosition* lastPathGeographicMapCellPosition;

    private: GeographicMapCellPosition* currentPathGeographicMapCellPosition;

    private: CollidableDestroyableDamageableLayer* FAKE_WAYPOINT_LAYER;

    /*protected*/ public: BasicArrayList* targetList;

    private: BasicArrayList* possibleTargetList;

    /*protected*/ public: UnitLayer* associatedAdvancedRTSGameLayer;

    private: bool moving = false;

    private: bool movingFromStopped = false;

    /*protected*/ public: BasicArrayList* waypointPathsListP;

    private: int32_t currentTargetDistance;

    /*protected*/ public: CollidableDestroyableDamageableLayer* currentTargetLayerInterfaceP;

    private: bool trackingWaypoint= false;

/*protected*/ public: UnitWaypointBehavior(UnitLayer* associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer* fakeWaypoint);

    /*protected*/ public: void initRange(int32_t weaponRange);

    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    public: void onWaypointEvent(RTSLayerEvent* event);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void addWaypointFromUser(AdvancedRTSGameLayer* advancedRTSGameLayer);

                //@Throws(Exception.constructor)
            
    private: void addWaypointFromBuilding(AdvancedRTSGameLayer* advancedRTSGameLayer);

    public: bool isWaypointListEmptyOrOnlyTargets();

                //@Throws(Exception.constructor)
            
    public: bool insertWaypoint(int32_t index, CollidableDestroyableDamageableLayer* rtsLayer);

    /*protected*/ public: void move();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void setRandomGeographicMapCellHistory(BasicArrayList* pathsList);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void setGeographicMapCellHistoryPath(BasicArrayList* geographicMapCellPositionBasicArrayList);

    /*protected*/ public: bool canInsertWaypoint(int32_t index, CollidableDestroyableDamageableLayer* rtsLayer);

                //@Throws(Exception.constructor)
            
    public: void addBuildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void moveAwayFromBuilding(BuildingLayer* buildingLayer);

    private: TimeDelayHelper* repeatedToLong;

    public: bool needToMove();

    public: std::string getMovementLogicAsString();

    public: bool isMovingFromStopped();

    /*protected*/ public: void setMovingFromStopped(bool movingFromStopped);

    public: void setWaypointPathsList(BasicArrayList* waypointPathsList);

    public: BasicArrayList* getWaypointPathsList();

    /*protected*/ public: bool isMoving();

    /*protected*/ public: void setMoving(bool moving);

    public: bool isTrackingWaypoint();

    /*protected*/ public: BasicArrayList* getPossibleTargetList();

    /*protected*/ public: void setLastPathGeographicMapCellPosition(GeographicMapCellPosition* lastPathGeographicMapCellPosition);

    /*protected*/ public: GeographicMapCellPosition* getLastPathGeographicMapCellPosition();

    /*protected*/ public: void setCurrentPathGeographicMapCellPosition(GeographicMapCellPosition* currentPathGeographicMapCellPosition);

    public: GeographicMapCellPosition* getCurrentPathGeographicMapCellPosition();

    /*protected*/ public: void setSensorAction(SensorAction* sensorAction);

    /*protected*/ public: SensorAction* getSensorAction();

    /*protected*/ public: void setCurrentTargetLayerInterface(CollidableDestroyableDamageableLayer* currentTargetLayerInterface);

    public: CollidableDestroyableDamageableLayer* getCurrentTargetLayerInterface();

    /*protected*/ public: void setCurrentTargetDistance(int32_t currentTargetDistance);

    /*protected*/ public: int32_t getCurrentTargetDistance();

    /*protected*/ public: TimeDelayHelper* getCompleteTimeDelayHelper();

    public: GeographicMapCellHistory* getCurrentGeographicMapCellHistory();

    /*protected*/ public: void setTrackingWaypoint(bool trackingWaypoint);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/form/PrimaryWaypointHelper.h>)
#include <org/allbinary/game/input/form/PrimaryWaypointHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerEvent.h>)
#include <org/allbinary/game/layer/RTSLayerEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/SensorAction.h>)
#include <org/allbinary/game/layer/SensorAction.h>
#endif
#if __has_include(<org/allbinary/game/layer/SensorActionFactory.h>)
#include <org/allbinary/game/layer/SensorActionFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/WaypointBehaviorBase.h>)
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/BuildingLayer.h>)
#include <org/allbinary/game/layer/building/BuildingLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/event/WaypointEventListenerInterface.h>)
#include <org/allbinary/game/layer/waypoint/event/WaypointEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/unit/UnitWaypointStrings.h")
#include "org/allbinary/game/layer/unit/UnitWaypointStrings.h"
#endif
#if __has_include("org/allbinary/game/layer/unit/UnitLayer.h")
#include "org/allbinary/game/layer/unit/UnitLayer.h"
#endif

        #endif
    
