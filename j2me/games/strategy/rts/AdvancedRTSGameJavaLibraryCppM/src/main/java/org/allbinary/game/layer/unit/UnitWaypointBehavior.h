
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

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <org/allbinary/game/input/form/PrimaryWaypointHelper.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/SensorAction.h>

      
#include <org/allbinary/game/layer/SensorActionFactory.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/building/BuildingLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/waypoint/event/WaypointEventListenerInterface.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UnitLayer.h"

class UnitWaypointBehavior: public WaypointBehaviorBase: public WaypointEventListenerInterface {
        

    private: static const PATHING: string = "Pathing";

    commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: longWeaponRange: int32_t = 0;

    private: sensorAction: SensorAction = SensorActionFactory.getInstance()!.ATTACK;

    private: const completeTimeDelayHelper: TimeDelayHelper;

    const currentGeographicMapCellHistoryP: GeographicMapCellHistory;

    private: lastPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: currentPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: const FAKE_WAYPOINT_LAYER: CollidableDestroyableDamageableLayer;

    const targetList: BasicArrayList;

    private: const possibleTargetList: BasicArrayList;

    const associatedAdvancedRTSGameLayer: UnitLayer;

    private: moving: bool = false;

    private: movingFromStopped: bool = false;

    waypointPathsListP: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    private: currentTargetDistance: int32_t = Integer.MAX_VALUE;

    currentTargetLayerInterfaceP: CollidableDestroyableDamageableLayer = CollidableDestroyableDamageableLayer.getNullInstance()!;

    private: trackingWaypoint: bool= false;

protected constructor (UnitLayer associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer fakeWaypoint);

    initRange(int32_t weaponRange);

    public onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    public onWaypointEvent(RTSLayerEvent event);

                //@Throws(Exception.constructor)
            
    addWaypointFromUser(AdvancedRTSGameLayer advancedRTSGameLayer);

                //@Throws(Exception.constructor)
            
    addWaypointFromBuilding(AdvancedRTSGameLayer advancedRTSGameLayer);

    public bool isWaypointListEmptyOrOnlyTargets();

                //@Throws(Exception.constructor)
            
    public bool insertWaypoint(int32_t index, CollidableDestroyableDamageableLayer rtsLayer);

    move();

                //@Throws(Exception.constructor)
            
    setRandomGeographicMapCellHistory(BasicArrayList pathsList);

                //@Throws(Exception.constructor)
            
    setGeographicMapCellHistoryPath(BasicArrayList geographicMapCellPositionBasicArrayList);

    bool canInsertWaypoint(int32_t index, CollidableDestroyableDamageableLayer rtsLayer);

                //@Throws(Exception.constructor)
            
    public addBuildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition);

                //@Throws(Exception.constructor)
            
    moveAwayFromBuilding(BuildingLayer buildingLayer);

    private: const repeatedToLong: TimeDelayHelper = new TimeDelayHelper(22000);

    public bool needToMove();

    public string getMovementLogicAsString();

    public bool isMovingFromStopped();

    setMovingFromStopped(bool movingFromStopped);

    public setWaypointPathsList(BasicArrayList waypointPathsList);

    public BasicArrayList getWaypointPathsList();

    bool isMoving();

    setMoving(bool moving);

    public bool isTrackingWaypoint();

    BasicArrayList getPossibleTargetList();

    setLastPathGeographicMapCellPosition(GeographicMapCellPosition lastPathGeographicMapCellPosition);

    GeographicMapCellPosition getLastPathGeographicMapCellPosition();

    setCurrentPathGeographicMapCellPosition(GeographicMapCellPosition currentPathGeographicMapCellPosition);

    public GeographicMapCellPosition getCurrentPathGeographicMapCellPosition();

    setSensorAction(SensorAction sensorAction);

    SensorAction getSensorAction();

    setCurrentTargetLayerInterface(CollidableDestroyableDamageableLayer currentTargetLayerInterface);

    public CollidableDestroyableDamageableLayer getCurrentTargetLayerInterface();

    setCurrentTargetDistance(int32_t currentTargetDistance);

    int32_t getCurrentTargetDistance();

    TimeDelayHelper getCompleteTimeDelayHelper();

    public GeographicMapCellHistory getCurrentGeographicMapCellHistory();

    setTrackingWaypoint(bool trackingWaypoint);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_H
