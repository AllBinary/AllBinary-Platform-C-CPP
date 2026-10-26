
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

            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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

class UnitWaypointBehavior: public WaypointBehaviorBase, public WaypointEventListenerInterface {

    private: static const std::string PATHING = "Pathing";

    protected: CommonSeps commonSeps = CommonSeps::getInstance();

    private: int32_t longWeaponRange = 0;

    private: SensorAction sensorAction = SensorActionFactory::getInstance().ATTACK;

    private: TimeDelayHelper completeTimeDelayHelper;

    protected: GeographicMapCellHistory currentGeographicMapCellHistoryP;

    private: GeographicMapCellPosition lastPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition currentPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: CollidableDestroyableDamageableLayer FAKE_WAYPOINT_LAYER;

    protected: BasicArrayList targetList;

    private: BasicArrayList possibleTargetList;

    protected: UnitLayer associatedAdvancedRTSGameLayer;

    private: bool moving = false;

    private: bool movingFromStopped = false;

    protected: BasicArrayList waypointPathsListP = BasicArrayListUtil::getInstance().getImmutableInstance();

    private: int32_t currentTargetDistance = Integer::MAX_VALUE;

    protected: CollidableDestroyableDamageableLayer currentTargetLayerInterfaceP = CollidableDestroyableDamageableLayer::getNullInstance();

    private: bool trackingWaypoint= false;

protected: UnitWaypointBehavior(UnitLayer associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer fakeWaypoint);

    protected: void initRange(int32_t weaponRange);

    public: void onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    public: void onWaypointEvent(RTSLayerEvent event);

                //@Throws(Exception.constructor)
            
    protected: void addWaypointFromUser(AdvancedRTSGameLayer advancedRTSGameLayer);

                //@Throws(Exception.constructor)
            
    private: void addWaypointFromBuilding(AdvancedRTSGameLayer advancedRTSGameLayer);

    public: bool isWaypointListEmptyOrOnlyTargets();

                //@Throws(Exception.constructor)
            
    public: bool insertWaypoint(int32_t index, CollidableDestroyableDamageableLayer rtsLayer);

    protected: void move();

                //@Throws(Exception.constructor)
            
    protected: void setRandomGeographicMapCellHistory(BasicArrayList pathsList);

                //@Throws(Exception.constructor)
            
    protected: void setGeographicMapCellHistoryPath(BasicArrayList geographicMapCellPositionBasicArrayList);

    protected: bool canInsertWaypoint(int32_t index, CollidableDestroyableDamageableLayer rtsLayer);

                //@Throws(Exception.constructor)
            
    public: void addBuildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition);

                //@Throws(Exception.constructor)
            
    protected: void moveAwayFromBuilding(BuildingLayer buildingLayer);

    private: const TimeDelayHelper repeatedToLong = TimeDelayHelper(22000);

    public: bool needToMove();

    public: std::string getMovementLogicAsString();

    public: bool isMovingFromStopped();

    protected: void setMovingFromStopped(bool movingFromStopped);

    public: void setWaypointPathsList(BasicArrayList waypointPathsList);

    public: BasicArrayList getWaypointPathsList();

    protected: bool isMoving();

    protected: void setMoving(bool moving);

    public: bool isTrackingWaypoint();

    protected: BasicArrayList getPossibleTargetList();

    protected: void setLastPathGeographicMapCellPosition(GeographicMapCellPosition lastPathGeographicMapCellPosition);

    protected: GeographicMapCellPosition getLastPathGeographicMapCellPosition();

    protected: void setCurrentPathGeographicMapCellPosition(GeographicMapCellPosition currentPathGeographicMapCellPosition);

    public: GeographicMapCellPosition getCurrentPathGeographicMapCellPosition();

    protected: void setSensorAction(SensorAction sensorAction);

    protected: SensorAction getSensorAction();

    protected: void setCurrentTargetLayerInterface(CollidableDestroyableDamageableLayer currentTargetLayerInterface);

    public: CollidableDestroyableDamageableLayer getCurrentTargetLayerInterface();

    protected: void setCurrentTargetDistance(int32_t currentTargetDistance);

    protected: int32_t getCurrentTargetDistance();

    protected: TimeDelayHelper getCompleteTimeDelayHelper();

    public: GeographicMapCellHistory getCurrentGeographicMapCellHistory();

    protected: void setTrackingWaypoint(bool trackingWaypoint);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_H
