
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Integer.h"
        
class Canvas;
class Graphics;
class J2MEUtil;
class ExplosionBasicSound;
class Animation;
class AnimationInterfaceFactoryInterface;
class FeaturedAnimationInterfaceFactoryInterfaceFactory;
class IndexedAnimation;
class NullAnimationFactory;
class NullIndexedAnimationFactory;
class ProceduralAnimationInterfaceFactoryInterface;
class RotationAnimation;
class CaptionAnimationHelper;
class CaptionAnimationHelperBase;
class AdjustedCircleAnimation;
class Direction;
class DamageFloaters;
class PtsDamageFloaters;
class WeaponProperties;
class Features;
class GameFeatureFactory;
class BasicHudFactory;
class Health;
class HealthBar;
class HealthBarTwodAnimation;
class Group;
class GroupCommonFactory;
class GameKeyEvent;
class GameKeyEventFactory;
class GameKeyEventUtil;
class VisibleCellPositionsSingleton;
class WaypointRTSFormInput;
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
class AdvancedRTSProperties;
class AllBinaryGameLayerManager;
class AllBinaryTiledLayer;
class CaptionResources;
class LinePathRelativeAnimation;
class PathAnimation;
class PathFindingLayerInterface;
class RTSLayer2LogHelper;
class RTSLayer2SelectedLogHelper;
class RTSLayerEvent;
class RTSLayerHudPaintable;
class RTSLayerLogHelper;
class RTSLayerSelectedLogHelper;
class RTSPlayerLayerInterface;
class SelectionHudPaintable;
class SensorActionFactory;
class SteeringVisitor;
class TiledLayerUtil;
class VehicleFrictionProperties;
class VehicleProperties;
class WaypointBehaviorBase;
class BuildingLayer;
class BuildingEventHandler;
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>
class CapitalEvent;
class CapitalEventHandlerFactory;
class LayerPartialCellPositionsUtil;
class SpecialDownGameInputProcessor;
class SpecialFireGameInputProcessor;
class SpecialLeftGameInputProcessor;
class SpecialRightGameInputProcessor;
class SpecialUpGameInputProcessor;
class MultipassNoCacheWaypoint;
class NoCacheWaypoint;
class WaypointBase;
class WaypointEventHandlerFactory;
class RemoteInfo;
class BasicWeaponPart;
class SalvoInterface;
class VelocityProperties;
class TrackingEvent;
class TrackingEventHandler;
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>
class CellPositionFactory;
class GPoint;
class Rectangle;
class BasicColorFactory;
class NullPaintable;
class Paintable;
class AllBinaryLayer;
class AllBinaryLayerManager;
class Layer;
class LayerInterfaceFactoryInterface;
class StdUtil;
class BasicDecimal;
class SmallIntegerSingletonFactory;
class AngleFactory;
class AngleInfo;
class FrameUtil;
class LayerDistanceUtil;
class NamedAngle;
class AttackSound;
class SecondaryPlayerQueueFactory;
class Sound;
class BasicGeographicMap;
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellHistory;
class GeographicMapCellPosition;
class GeographicMapCompositeInterface;
class SimpleGeographicMapCellPositionFactory;
class DropCellPositionHistory;
class RaceTrackGeographicMap;
class CommonPhoneStrings;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListS;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CollidableUnitBehavior;
class UnitWaypointBehavior2;
class UnitWaypointBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UnitLayer: public AdvancedRTSGameLayer, public BuildingEventListenerInterface, public TrackingEventListenerInterface {

    private: static BasicArrayList* partialPositionList;

    private: static inline const int32_t SENSOR_RANGE_MULTIPLIER = 6;

    private: static inline const std::string MOVE = "Moving";

    public: static int32_t getStaticType();

    public: static BasicArrayList* getPartialpositionlist();

    private: BasicColorFactory* basicColorFactory;

    private: GroupCommonFactory* groupCommonFactory;

    private: LayerPartialCellPositionsUtil* layerPartialCellPositionsUtil;

    private: LayerDistanceUtil* layerDistanceUtil;

    private: AngleFactory* angleFactory;

    private: CellPositionFactory* cellPositionFactory;

    private: int16_t maxResourceLoad;

    private: VehicleProperties* vehicleProperties;

    /*protected*/ public: BasicDecimal* accelerationBasicDecimal;

    /*protected*/ public: BasicDecimal* decelerationBasicDecimal;

    private: TrackingEvent* trackingEvent;

    private: DamageFloaters* damageFloaters;

    private: Paintable* damageFloatersPaintableInterface;

    private: Paintable* healthBar;

    private: Sound* moveSoundInterface;

    private: RotationAnimation* initResourceAnimation;

    private: IndexedAnimation* resourceAnimation;

    private: PathAnimation* initPathAnimation;

    private: Animation* pathAnimation;

    private: CaptionAnimationHelperBase* captionAnimationHelper;

    private: RotationAnimation* decalAnimation;

    private: LayerInterfaceFactoryInterface* waypointLayerInterfaceFactoryInterface;

    private: int32_t resourceLoad = 0;

    private: int32_t weaponRange= 0;

    /*protected*/ public: RTSLayerLogHelper* rtsLogHelper;

    /*protected*/ public: RotationAnimation* rotationAnimationInterfaceP;

    private: NamedAngle* movementAngle;

    private: GeographicMapCellPosition* steeringInsideGeographicMapCellPosition;

/*protected*/ public: UnitLayer(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, std::vector<Group*> groupInterface, std::string rootName, std::string name, VehicleProperties* vehicleProperties, Health* healthInterface, int32_t maxResourceLoad, Sound* moveSoundInterface, LayerInterfaceFactoryInterface* waypointLayerInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* decalAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* resourceAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, Direction* direction, int32_t x, int32_t y, int32_t z, ViewPositionBase* viewPosition);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public: void updateWaypointBehavior(BasicGeographicMap* geographicMapInterface);

                //@Throws(Exception.constructor)
            
    public: void construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface);

    private: BasicArrayList* sensorGeographicMapCellPositionList;

                //@Throws(Exception.constructor)
            
    public: void updateSensorGeographicMapCellPositionList();

    public: BasicArrayList* getSensorGeographicMapCellPositionList();

    public: void select();

    public: void deselect();

    /*protected*/ public: void setSelected(bool selected);

                //@Throws(Exception.constructor)
            
    public: void setClosestGeographicMapCellHistory(BasicArrayList* pathsList);

                //@Throws(Exception.constructor)
            
    public: void init(GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList);

    public: void onMovement(TrackingEvent* trackingEvent);

                //@Throws(Exception.constructor)
            
    public: void onMovementFound(TrackingEvent* trackingEvent);

    public: void initRangeHack();

                //@Throws(Exception.constructor)
            
    public: void processBuiltTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: void teleportTo(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCurrentGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    public: void fire(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void left();

                //@Throws(Exception.constructor)
            
    public: void right();

    public: void down();

    public: void up();

    public: void initInputProcessors();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager);

    public: void accelerate(BasicDecimal* accelerate);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void fireAll(AllBinaryLayerManager* layerManager);

    public: void downgrade();

    public: void upgrade();

    /*protected*/ public: void groundFriction();

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
            
    /*protected*/ public: void fireOrMove();

    public: void move();

    public: void allStop();

    public: void paint(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void onBuildingEvent(RTSLayerEvent* event);

    public: VehicleProperties* getVehicleProperties();

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

    private: CapitalEvent* CAPITAL_EVENT;

                //@Throws(Exception.constructor)
            
    public: void handleCost(PathFindingLayerInterface* ownerLayer);

    public: SelectionHudPaintable* createHudPaintable();

    public: SelectionHudPaintable* getHudPaintable();

    public: int32_t getType();

    /*protected*/ public: UnitWaypointBehavior* getUnitWaypointBehavior();

    public: TrackingEvent* getTrackingEvent();

    public: CaptionAnimationHelperBase* getCaptionAnimationHelper();

    public: bool isSelfUpgradeable();

    public: int16_t getMaxResourceLoad();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h>)
#include <org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>)
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/animation/NullIndexedAnimationFactory.h>)
#include <org/allbinary/animation/NullIndexedAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/RotationAnimation.h>)
#include <org/allbinary/animation/RotationAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/caption/CaptionAnimationHelper.h>)
#include <org/allbinary/animation/caption/CaptionAnimationHelper.h>
#endif
#if __has_include(<org/allbinary/animation/caption/CaptionAnimationHelperBase.h>)
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>
#endif
#if __has_include(<org/allbinary/animation/vector/AdjustedCircleAnimation.h>)
#include <org/allbinary/animation/vector/AdjustedCircleAnimation.h>
#endif
#if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/game/combat/damage/DamageFloaters.h>)
#include <org/allbinary/game/combat/damage/DamageFloaters.h>
#endif
#if __has_include(<org/allbinary/game/combat/damage/PtsDamageFloaters.h>)
#include <org/allbinary/game/combat/damage/PtsDamageFloaters.h>
#endif
#if __has_include(<org/allbinary/game/combat/weapon/WeaponProperties.h>)
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/graphics/hud/BasicHudFactory.h>)
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>
#endif
#if __has_include(<org/allbinary/game/health/Health.h>)
#include <org/allbinary/game/health/Health.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthBar.h>)
#include <org/allbinary/game/health/HealthBar.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthBarTwodAnimation.h>)
#include <org/allbinary/game/health/HealthBarTwodAnimation.h>
#endif
#if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/game/identification/GroupCommonFactory.h>)
#include <org/allbinary/game/identification/GroupCommonFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventUtil.h>)
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>
#endif
#if __has_include(<org/allbinary/game/input/form/VisibleCellPositionsSingleton.h>)
#include <org/allbinary/game/input/form/VisibleCellPositionsSingleton.h>
#endif
#if __has_include(<org/allbinary/game/input/form/WaypointRTSFormInput.h>)
#include <org/allbinary/game/input/form/WaypointRTSFormInput.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSProperties.h>)
#include <org/allbinary/game/layer/AdvancedRTSProperties.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/CaptionResources.h>)
#include <org/allbinary/game/layer/CaptionResources.h>
#endif
#if __has_include(<org/allbinary/game/layer/LinePathRelativeAnimation.h>)
#include <org/allbinary/game/layer/LinePathRelativeAnimation.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathAnimation.h>)
#include <org/allbinary/game/layer/PathAnimation.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer2LogHelper.h>)
#include <org/allbinary/game/layer/RTSLayer2LogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer2SelectedLogHelper.h>)
#include <org/allbinary/game/layer/RTSLayer2SelectedLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerEvent.h>)
#include <org/allbinary/game/layer/RTSLayerEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerHudPaintable.h>)
#include <org/allbinary/game/layer/RTSLayerHudPaintable.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerLogHelper.h>)
#include <org/allbinary/game/layer/RTSLayerLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerSelectedLogHelper.h>)
#include <org/allbinary/game/layer/RTSLayerSelectedLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/SelectionHudPaintable.h>)
#include <org/allbinary/game/layer/SelectionHudPaintable.h>
#endif
#if __has_include(<org/allbinary/game/layer/SensorActionFactory.h>)
#include <org/allbinary/game/layer/SensorActionFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/SteeringVisitor.h>)
#include <org/allbinary/game/layer/SteeringVisitor.h>
#endif
#if __has_include(<org/allbinary/game/layer/TiledLayerUtil.h>)
#include <org/allbinary/game/layer/TiledLayerUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/VehicleFrictionProperties.h>)
#include <org/allbinary/game/layer/VehicleFrictionProperties.h>
#endif
#if __has_include(<org/allbinary/game/layer/VehicleProperties.h>)
#include <org/allbinary/game/layer/VehicleProperties.h>
#endif
#if __has_include(<org/allbinary/game/layer/WaypointBehaviorBase.h>)
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/BuildingLayer.h>)
#include <org/allbinary/game/layer/building/BuildingLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/event/BuildingEventHandler.h>)
#include <org/allbinary/game/layer/building/event/BuildingEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>)
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/capital/event/CapitalEvent.h>)
#include <org/allbinary/game/layer/capital/event/CapitalEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/capital/event/CapitalEventHandlerFactory.h>)
#include <org/allbinary/game/layer/capital/event/CapitalEventHandlerFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/geographic/map/LayerPartialCellPositionsUtil.h>)
#include <org/allbinary/game/layer/geographic/map/LayerPartialCellPositionsUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h>)
#include <org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/SpecialFireGameInputProcessor.h>)
#include <org/allbinary/game/layer/special/SpecialFireGameInputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h>)
#include <org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h>)
#include <org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h>)
#include <org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/MultipassNoCacheWaypoint.h>)
#include <org/allbinary/game/layer/waypoint/MultipassNoCacheWaypoint.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/NoCacheWaypoint.h>)
#include <org/allbinary/game/layer/waypoint/NoCacheWaypoint.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointBase.h>)
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h>)
#include <org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/game/part/weapon/BasicWeaponPart.h>)
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>
#endif
#if __has_include(<org/allbinary/game/part/weapon/SalvoInterface.h>)
#include <org/allbinary/game/part/weapon/SalvoInterface.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/VelocityProperties.h>)
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEvent.h>)
#include <org/allbinary/game/tracking/TrackingEvent.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEventHandler.h>)
#include <org/allbinary/game/tracking/TrackingEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEventListenerInterface.h>)
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPositionFactory.h>)
#include <org/allbinary/graphics/CellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif
#if __has_include(<org/allbinary/layer/LayerInterfaceFactoryInterface.h>)
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/BasicDecimal.h>)
#include <org/allbinary/logic/math/BasicDecimal.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/math/FrameUtil.h>)
#include <org/allbinary/math/FrameUtil.h>
#endif
#if __has_include(<org/allbinary/math/LayerDistanceUtil.h>)
#include <org/allbinary/math/LayerDistanceUtil.h>
#endif
#if __has_include(<org/allbinary/math/NamedAngle.h>)
#include <org/allbinary/math/NamedAngle.h>
#endif
#if __has_include(<org/allbinary/media/audio/AttackSound.h>)
#include <org/allbinary/media/audio/AttackSound.h>
#endif
#if __has_include(<org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>)
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/Sound.h>)
#include <org/allbinary/media/audio/Sound.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>)
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/layer/unit/CollidableUnitBehavior.h")
#include "org/allbinary/game/layer/unit/CollidableUnitBehavior.h"
#endif
#if __has_include("org/allbinary/game/layer/unit/UnitWaypointBehavior2.h")
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior2.h"
#endif
#if __has_include("org/allbinary/game/layer/unit/UnitWaypointBehavior.h")
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"
#endif

        #endif
    
