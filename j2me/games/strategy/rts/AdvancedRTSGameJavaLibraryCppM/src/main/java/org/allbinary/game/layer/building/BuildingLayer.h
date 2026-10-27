
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class ExplosionBasicSound;
class NullAnimationFactory;
class NullIndexedAnimationFactory;
class GroupFactory;
class NullRTSFormInputFactory;
class RTSFormInput;
class VisibleCellPositionsSingleton;
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
class AdvancedRTSPlayerLayerInterface;
class AdvancedRTSProperties;
class CollidableRTSBehavior;
class RTSLayerUtil;
class RTSPlayerLayerInterface;
class SelectionHudPaintable;
class Waypoint;
class TileLayerPositionIntoViewPosition;
class RectangleFactory;
class StringUtil;
class BasicArrayList;
class BasicArrayListD;
class AnimationInterfaceFactoryInterface;
class ProceduralAnimationInterfaceFactoryInterface;
#include <org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>
class Direction;
class DirectionFactory;
class DamageFloaters;
class Health;
class Group;
class GeographicMapCellPositionAreaBase;
class NullPathFindingLayer;
class TrackingEvent;
class TrackingEventHandler;
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>
class Rectangle;
class Paintable;
class AllBinaryLayerManager;
class SecondaryPlayerQueueFactory;
class SelectSound;
class GeographicMapCellPosition;
class GeographicMapDirectionUtil;
class DropCellPositionHistory;
class TimeDelayHelper;
class BasicArrayListS;
class RemoteInfo;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SimulatedBuildingPropertiesFactory;
class BuildingPropertiesFactory;
class BuildingInfoHudPaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BuildingLayer: public AdvancedRTSGameLayer, public RotationAnimationInterfaceCompositeInterface, public TrackingEventListenerInterface {

                //@Throws(Exception.constructor)
            
    public: static BuildingLayer* createSimulated();

    public: static int32_t getStaticType();

    private: int32_t buildingLevelCost= 0;

    private: int32_t productivity= 0;

    private: int32_t efficiency;

    private: int32_t efficiencyPerLevel;

    private: TrackingEvent* trackingEvent;

    private: DamageFloaters* damageFloaters;

    private: Paintable* damageFloatersPaintableInterface;

    private: Paintable* healthBar;

    private: ABHashtable<Object*, Object*>* pathsHashtable;

public: BuildingLayer(RemoteInfo* remoteInfo, BuildingPropertiesFactory* buildingPropertiesFactory, AdvancedRTSProperties* advancedRTSProperties, std::vector<Group*> groupInterface, std::string rootName, std::string name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);

    /*protected*/ public: bool local= false;

    /*protected*/ public: void initVisibility(RTSPlayerLayerInterface* rtsPlayerLayerInterface);

                //@Throws(Exception.constructor)
            
    public: void construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface);

    public: void onMovement(TrackingEvent* trackingEvent);

    /*protected*/ public: TimeDelayHelper* timeDelayHelper;

                //@Throws(Exception.constructor)
            
    public: void processBuiltTick(AllBinaryLayerManager* allBinaryLayerManager);

    private: int32_t calculateEfficiency();

    public: int32_t getCost();

    public: int32_t getDowngradeCost();

    public: int32_t getUpgradeCost();

    public: void downgrade();

    public: void upgrade();

    private: int32_t getBuildingLevelCost();

    /*protected*/ public: void setBuildingLevelCost(int32_t buildingLevelCost);

    public: int32_t getProductivity();

    public: void setProductivity(int32_t productivity);

    public: int32_t getEfficiency();

    public: void setEfficiency(int32_t efficiency);

                //@Throws(Exception.constructor)
            
    private: void generateMoveOutOfBuildAreaPaths();

    public: BasicArrayList* getMoveOutOfBuildAreaPath(GeographicMapCellPosition* geographicMapCellPosition);

    public: BasicArrayList* getEndGeographicMapCellPositionList();

    public: bool shouldHandleStartSameAsEnd();

    public: void paint(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void damage(int32_t damage, int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: int32_t getDamage(int32_t damageType);

    public: void addVisibility();

    public: void removeVisibility();

                //@Throws(Exception.constructor)
            
    public: void setDestroyed(bool destroyed);

    public: SelectionHudPaintable* createHudPaintable();

    public: SelectionHudPaintable* getHudPaintable();

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h>)
#include <org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/animation/NullIndexedAnimationFactory.h>)
#include <org/allbinary/animation/NullIndexedAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/game/identification/GroupFactory.h>)
#include <org/allbinary/game/identification/GroupFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/form/NullRTSFormInputFactory.h>)
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/form/RTSFormInput.h>)
#include <org/allbinary/game/input/form/RTSFormInput.h>
#endif
#if __has_include(<org/allbinary/game/input/form/VisibleCellPositionsSingleton.h>)
#include <org/allbinary/game/input/form/VisibleCellPositionsSingleton.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSProperties.h>)
#include <org/allbinary/game/layer/AdvancedRTSProperties.h>
#endif
#if __has_include(<org/allbinary/game/layer/CollidableRTSBehavior.h>)
#include <org/allbinary/game/layer/CollidableRTSBehavior.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerUtil.h>)
#include <org/allbinary/game/layer/RTSLayerUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/SelectionHudPaintable.h>)
#include <org/allbinary/game/layer/SelectionHudPaintable.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/Waypoint.h>)
#include <org/allbinary/game/layer/waypoint/Waypoint.h>
#endif
#if __has_include(<org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>)
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>
#endif
#if __has_include(<org/allbinary/graphics/RectangleFactory.h>)
#include <org/allbinary/graphics/RectangleFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>)
#include <org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
#endif
#if __has_include(<org/allbinary/game/combat/damage/DamageFloaters.h>)
#include <org/allbinary/game/combat/damage/DamageFloaters.h>
#endif
#if __has_include(<org/allbinary/game/health/Health.h>)
#include <org/allbinary/game/health/Health.h>
#endif
#if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>)
#include <org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/NullPathFindingLayer.h>)
#include <org/allbinary/game/layer/NullPathFindingLayer.h>
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
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>)
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/SelectSound.h>)
#include <org/allbinary/media/audio/SelectSound.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>)
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/layer/building/SimulatedBuildingPropertiesFactory.h")
#include "org/allbinary/game/layer/building/SimulatedBuildingPropertiesFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/building/BuildingPropertiesFactory.h")
#include "org/allbinary/game/layer/building/BuildingPropertiesFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/building/BuildingInfoHudPaintable.h")
#include "org/allbinary/game/layer/building/BuildingInfoHudPaintable.h"
#endif

        #endif
    
