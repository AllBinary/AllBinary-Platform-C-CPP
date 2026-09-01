
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_H

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Math.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/NullIndexedAnimationFactory.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/animation/caption/CaptionAnimationHelper.h>

      
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>

      
#include <org/allbinary/animation/vector/AdjustedCircleAnimation.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/game/combat/damage/DamageFloaters.h>

      
#include <org/allbinary/game/combat/damage/PtsDamageFloaters.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/health/HealthBar.h>

      
#include <org/allbinary/game/health/HealthBarTwodAnimation.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>

      
#include <org/allbinary/game/input/form/VisibleCellPositionsSingleton.h>

      
#include <org/allbinary/game/input/form/WaypointRTSFormInput.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/AdvancedRTSProperties.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/layer/CaptionResources.h>

      
#include <org/allbinary/game/layer/LinePathRelativeAnimation.h>

      
#include <org/allbinary/game/layer/PathAnimation.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayer2LogHelper.h>

      
#include <org/allbinary/game/layer/RTSLayer2SelectedLogHelper.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/RTSLayerHudPaintable.h>

      
#include <org/allbinary/game/layer/RTSLayerLogHelper.h>

      
#include <org/allbinary/game/layer/RTSLayerSelectedLogHelper.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/SelectionHudPaintable.h>

      
#include <org/allbinary/game/layer/SensorActionFactory.h>

      
#include <org/allbinary/game/layer/SteeringVisitor.h>

      
#include <org/allbinary/game/layer/TiledLayerUtil.h>

      
#include <org/allbinary/game/layer/VehicleFrictionProperties.h>

      
#include <org/allbinary/game/layer/VehicleProperties.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/building/BuildingLayer.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventHandler.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>

      
#include <org/allbinary/game/layer/capital/event/CapitalEvent.h>

      
#include <org/allbinary/game/layer/capital/event/CapitalEventHandlerFactory.h>

      
#include <org/allbinary/game/layer/geographic/map/LayerPartialCellPositionsUtil.h>

      
#include <org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h>

      
#include <org/allbinary/game/layer/special/SpecialFireGameInputProcessor.h>

      
#include <org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h>

      
#include <org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h>

      
#include <org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h>

      
#include <org/allbinary/game/layer/waypoint/MultipassNoCacheWaypoint.h>

      
#include <org/allbinary/game/layer/waypoint/NoCacheWaypoint.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>

      
#include <org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>

      
#include <org/allbinary/game/part/weapon/SalvoInterface.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/FrameUtil.h>

      
#include <org/allbinary/math/LayerDistanceUtil.h>

      
#include <org/allbinary/math/NamedAngle.h>

      
#include <org/allbinary/media/audio/AttackSound.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableUnitBehavior.h"
#include "UnitWaypointBehavior2.h"
#include "UnitWaypointBehavior.h"

class UnitLayer: public AdvancedRTSGameLayer, public BuildingEventListenerInterface, public TrackingEventListenerInterface {

    private: static const BasicArrayList partialPositionList = BasicArrayListS(4);

    private: static const int32_t SENSOR_RANGE_MULTIPLIER = 6;

    private: static const std::string MOVE = "Moving";

    public: static int32_t getStaticType();

    public: static BasicArrayList getPartialpositionlist();

    private: const BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();

    private: const GroupCommonFactory groupCommonFactory = GroupCommonFactory::getInstance();

    private: const LayerPartialCellPositionsUtil layerPartialCellPositionsUtil = LayerPartialCellPositionsUtil::getInstance();

    private: const LayerDistanceUtil layerDistanceUtil = LayerDistanceUtil::getInstance();

    private: const AngleFactory angleFactory = AngleFactory::getInstance();

    private: const CellPositionFactory cellPositionFactory = CellPositionFactory::getInstance();

    private: int16_t maxResourceLoad;

    private: VehicleProperties vehicleProperties;

    protected: BasicDecimal accelerationBasicDecimal = BasicDecimal(1600);

    protected: BasicDecimal decelerationBasicDecimal = BasicDecimal( -1000);

    private: TrackingEvent trackingEvent;

    private: const DamageFloaters damageFloaters;

    private: const Paintable damageFloatersPaintableInterface;

    private: const Paintable healthBar;

    private: Sound moveSoundInterface;

    private: RotationAnimation initResourceAnimation;

    private: IndexedAnimation resourceAnimation = NullIndexedAnimationFactory::getFactoryInstance().getInstance(0) as IndexedAnimation;

    private: PathAnimation initPathAnimation;

    private: Animation pathAnimation = NullAnimationFactory::getFactoryInstance().getInstance(0);

    private: const CaptionAnimationHelperBase captionAnimationHelper = CaptionAnimationHelper(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance().get(CaptionResources::getInstance().RESOURCE).getInstance(0),  -23,  -25, 6, 0);

    private: RotationAnimation decalAnimation;

    private: LayerInterfaceFactoryInterface waypointLayerInterfaceFactoryInterface;

    private: int32_t resourceLoad = 0;

    private: int32_t weaponRange= 0;

    protected: RTSLayerLogHelper rtsLogHelper = RTSLayerLogHelper::getInstance();

    protected: RotationAnimation rotationAnimationInterfaceP;

    private: NamedAngle movementAngle = this->angleFactory.NOT_ANGLE;

    private: GeographicMapCellPosition steeringInsideGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

protected: UnitLayer(RemoteInfo remoteInfo, PathFindingLayerInterface parentLayer, AdvancedRTSProperties advancedRTSProperties, std::vector<Group> groupInterface, std::string rootName, std::string name, VehicleProperties vehicleProperties, Health healthInterface, Integer maxResourceLoad, Sound moveSoundInterface, LayerInterfaceFactoryInterface waypointLayerInterfaceFactoryInterface, AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface verticleBuildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface decalAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface resourceAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface proceduralAnimationInterfaceFactoryInterface, Rectangle rectangle, Direction direction, int32_t x, int32_t y, int32_t z, ViewPositionBase viewPosition);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public: void updateWaypointBehavior(BasicGeographicMap geographicMapInterface);

                //@Throws(Exception.constructor)
            
    public: void construct(RTSPlayerLayerInterface rtsPlayerLayerInterface);

    private: const BasicArrayList sensorGeographicMapCellPositionList = BasicArrayListD();

                //@Throws(Exception.constructor)
            
    public: void updateSensorGeographicMapCellPositionList();

    public: BasicArrayList getSensorGeographicMapCellPositionList();

    public: void select();

    public: void deselect();

    protected: void setSelected(bool selected);

                //@Throws(Exception.constructor)
            
    public: void setClosestGeographicMapCellHistory(BasicArrayList pathsList);

                //@Throws(Exception.constructor)
            
    public: void init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList);

    public: void onMovement(TrackingEvent trackingEvent);

                //@Throws(Exception.constructor)
            
    public: void onMovementFound(TrackingEvent trackingEvent);

    public: void initRangeHack();

                //@Throws(Exception.constructor)
            
    public: void processBuiltTick(AllBinaryLayerManager allBinaryLayerManager);

    public: void teleportTo(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getCurrentGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    public: void fire(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void left();

                //@Throws(Exception.constructor)
            
    public: void right();

    public: void down();

    public: void up();

    public: void initInputProcessors();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager layerManager);

    public: void accelerate(BasicDecimal accelerate);

                //@Throws(Exception.constructor)
            
    protected: void fireAll(AllBinaryLayerManager layerManager);

    public: void downgrade();

    public: void upgrade();

    protected: void groundFriction();

                //@Throws(Exception.constructor)
            
    public: void trackTo(std::string reason);

                //@Throws(Exception.constructor)
            
    public: void trackToDXY(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    private: bool turnTo(int32_t dx, int32_t dy, int32_t targetAngle);

    private: void handleDeltalX(int32_t dx, int32_t dy);

    private: void handleDeltalY(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    private: void trackToDXYTargetAngle(int32_t dx, int32_t dy, int32_t targetAngle);

                //@Throws(Exception.constructor)
            
    protected: void fireOrMove();

    public: void move();

    public: void allStop();

    public: void paint(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public: void onBuildingEvent(RTSLayerEvent event);

    public: VehicleProperties getVehicleProperties();

                //@Throws(Exception.constructor)
            
    public: void damage(int32_t damage, int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: int32_t getDamage(int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: void setDestroyed(bool destroyed);

    public: int32_t getLoad();

                //@Throws(Exception.constructor)
            
    public: void clearResourceAnimation();

                //@Throws(Exception.constructor)
            
    public: void setLoad(int32_t resource);

    public: void addLoad(int32_t resource);

    private: const CapitalEvent CAPITAL_EVENT = CapitalEvent(this);

                //@Throws(Exception.constructor)
            
    public: void handleCost(PathFindingLayerInterface ownerLayer);

    public: SelectionHudPaintable createHudPaintable();

    public: SelectionHudPaintable getHudPaintable();

    public: int32_t getType();

    protected: UnitWaypointBehavior getUnitWaypointBehavior();

    public: TrackingEvent getTrackingEvent();

    public: CaptionAnimationHelperBase getCaptionAnimationHelper();

    public: bool isSelfUpgradeable();

    public: int16_t getMaxResourceLoad();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_H
