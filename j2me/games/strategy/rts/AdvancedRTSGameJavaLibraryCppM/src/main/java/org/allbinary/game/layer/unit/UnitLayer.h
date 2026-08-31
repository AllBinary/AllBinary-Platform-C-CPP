
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

class UnitLayer: public AdvancedRTSGameLayer: public BuildingEventListenerInterface, public TrackingEventListenerInterface {
        

    private: static const partialPositionList: BasicArrayList = new BasicArrayListS(4);

    private: static const SENSOR_RANGE_MULTIPLIER: int32_t = 6;

    private: static const MOVE: string = "Moving";

    public static int32_t getStaticType();

    public static BasicArrayList getPartialpositionlist();

    private: const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

    private: const groupCommonFactory: GroupCommonFactory = GroupCommonFactory.getInstance()!;

    private: const layerPartialCellPositionsUtil: LayerPartialCellPositionsUtil = LayerPartialCellPositionsUtil.getInstance()!;

    private: const layerDistanceUtil: LayerDistanceUtil = LayerDistanceUtil.getInstance()!;

    private: const angleFactory: AngleFactory = AngleFactory.getInstance()!;

    private: const cellPositionFactory: CellPositionFactory = CellPositionFactory.getInstance()!;

    private: const maxResourceLoad: int16_t;

    private: const vehicleProperties: VehicleProperties;

    accelerationBasicDecimal: BasicDecimal = new BasicDecimal(1600);

    decelerationBasicDecimal: BasicDecimal = new BasicDecimal( -1000);

    private: const trackingEvent: TrackingEvent;

    private: const damageFloaters: DamageFloaters;

    private: const damageFloatersPaintableInterface: Paintable;

    private: const healthBar: Paintable;

    private: const moveSoundInterface: Sound;

    private: const initResourceAnimation: RotationAnimation;

    private: resourceAnimation: IndexedAnimation = NullIndexedAnimationFactory.getFactoryInstance()!.getInstance(0) as IndexedAnimation;

    private: const initPathAnimation: PathAnimation;

    private: pathAnimation: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

    private: const captionAnimationHelper: CaptionAnimationHelperBase = new CaptionAnimationHelper(FeaturedAnimationInterfaceFactoryInterfaceFactory.getInstance()!.get(CaptionResources.getInstance()!.RESOURCE)!.getInstance(0),  -23,  -25, 6, 0);

    private: const decalAnimation: RotationAnimation;

    private: const waypointLayerInterfaceFactoryInterface: LayerInterfaceFactoryInterface;

    private: resourceLoad: int32_t = 0;

    private: weaponRange: int32_t= 0;

    rtsLogHelper: RTSLayerLogHelper = RTSLayerLogHelper.getInstance()!;

    rotationAnimationInterfaceP: RotationAnimation;

    private: movementAngle: NamedAngle = this.angleFactory!.NOT_ANGLE;

    private: steeringInsideGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

protected constructor (RemoteInfo remoteInfo, PathFindingLayerInterface parentLayer, AdvancedRTSProperties advancedRTSProperties, std::vector<Group> groupInterface, string rootName, string name, VehicleProperties vehicleProperties, Health healthInterface, Integer maxResourceLoad, Sound moveSoundInterface, LayerInterfaceFactoryInterface waypointLayerInterfaceFactoryInterface, AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface verticleBuildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface decalAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface resourceAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface proceduralAnimationInterfaceFactoryInterface, Rectangle rectangle, Direction direction, int32_t x, int32_t y, int32_t z, ViewPositionBase viewPosition);

                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public updateWaypointBehavior(BasicGeographicMap geographicMapInterface);

                //@Throws(Exception.constructor)
            
    public construct(RTSPlayerLayerInterface rtsPlayerLayerInterface);

    private: const sensorGeographicMapCellPositionList: BasicArrayList = new BasicArrayListD();

                //@Throws(Exception.constructor)
            
    public updateSensorGeographicMapCellPositionList();

    public BasicArrayList getSensorGeographicMapCellPositionList();

    public select();

    public deselect();

    setSelected(bool selected);

                //@Throws(Exception.constructor)
            
    public setClosestGeographicMapCellHistory(BasicArrayList pathsList);

                //@Throws(Exception.constructor)
            
    public init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList);

    public onMovement(TrackingEvent trackingEvent);

                //@Throws(Exception.constructor)
            
    public onMovementFound(TrackingEvent trackingEvent);

    public initRangeHack();

                //@Throws(Exception.constructor)
            
    public processBuiltTick(AllBinaryLayerManager allBinaryLayerManager);

    public teleportTo(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCurrentGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    public fire(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public left();

                //@Throws(Exception.constructor)
            
    public right();

    public down();

    public up();

    public initInputProcessors();

                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager);

    public accelerate(BasicDecimal accelerate);

                //@Throws(Exception.constructor)
            
    fireAll(AllBinaryLayerManager layerManager);

    public downgrade();

    public upgrade();

    groundFriction();

                //@Throws(Exception.constructor)
            
    public trackTo(string reason);

                //@Throws(Exception.constructor)
            
    public trackToDXY(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    bool turnTo(int32_t dx, int32_t dy, int32_t targetAngle);

    handleDeltalX(int32_t dx, int32_t dy);

    handleDeltalY(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    trackToDXYTargetAngle(int32_t dx, int32_t dy, int32_t targetAngle);

                //@Throws(Exception.constructor)
            
    fireOrMove();

    public move();

    public allStop();

    public paint(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public onBuildingEvent(RTSLayerEvent event);

    public VehicleProperties getVehicleProperties();

                //@Throws(Exception.constructor)
            
    public damage(int32_t damage, int32_t damageType);

                //@Throws(Exception.constructor)
            
    public int32_t getDamage(int32_t damageType);

                //@Throws(Exception.constructor)
            
    public setDestroyed(bool destroyed);

    public int32_t getLoad();

                //@Throws(Exception.constructor)
            
    public clearResourceAnimation();

                //@Throws(Exception.constructor)
            
    public setLoad(int32_t resource);

    public addLoad(int32_t resource);

    private: const CAPITAL_EVENT: CapitalEvent = new CapitalEvent(this);

                //@Throws(Exception.constructor)
            
    public handleCost(PathFindingLayerInterface ownerLayer);

    public SelectionHudPaintable createHudPaintable();

    public SelectionHudPaintable getHudPaintable();

    public int32_t getType();

    UnitWaypointBehavior getUnitWaypointBehavior();

    public TrackingEvent getTrackingEvent();

    public CaptionAnimationHelperBase getCaptionAnimationHelper();

    public bool isSelfUpgradeable();

    public int16_t getMaxResourceLoad();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_H
