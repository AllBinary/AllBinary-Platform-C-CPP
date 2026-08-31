
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYER_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/NullIndexedAnimationFactory.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>

      
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/identification/GroupFactory.h>

      
#include <org/allbinary/game/input/GameInputInterface.h>

      
#include <org/allbinary/game/input/GameInputProcessor.h>

      
#include <org/allbinary/game/input/GameInputProcessorUtil.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>

      
#include <org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/view/event/ViewPositionEventHandler.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/LayerDistanceUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSInterface.h"
#include "PathFindingLayerInterface.h"
#include "RTSLayer2LogHelper.h"
#include "GeographicMapCellPositionAreaBase.h"
#include "GeographicMapCellPositionArea.h"
#include "AllBinaryTiledLayer.h"
#include "AllBinaryGameLayerManager.h"
#include "RTSPlayerLayerInterface.h"
#include "RTSLayerUtil.h"
#include "WaypointBehaviorBase.h"
#include "SelectionHudPaintable.h"

class RTSLayer: public MultiPlayerGameLayer: public TickableInterface, public GameInputInterface, public GameKeyEventSourceInterface, public RTSInterface, public PathFindingLayerInterface {
        

                //@Throws(Exception.constructor)
            
    public static RTSLayer createSimulatedInstance(RemoteInfo remoteInfo);

    private: static const id: int32_t = 0;

    static const MAIN_INDEX: int32_t = 0;

    static const SECONDARY_INDEX: int32_t = 1;

    public static int32_t getMinStaticType();

    public static int32_t getMaxStaticType();

    public static bool isRTSLayer(AllBinaryLayer layerInterface);

    const debug: bool = true;

    public const showMoreCaptionStates: bool = this.debug;

    const inputProcessorArray: std::vector<GameInputProcessor> = new Array(InputFactory.getInstance()!.MAX);

    public rtsLayer2LogHelper: RTSLayer2LogHelper = RTSLayer2LogHelper.getInstance()!;

    public waypointLogHelperP: WaypointLogHelper = WaypointLogHelper.getInstance()!;

    public waypoint2LogHelperP: Waypoint2LogHelper = Waypoint2LogHelper.getInstance()!;

    public waypointRunnableLogHelperP: WaypointRunnableLogHelper = WaypointRunnableLogHelper.getInstance()!;

    private: const rtsFormInput: RTSFormInput;

    private: verticleBuildAnimationInterface: IndexedAnimation;

    rangeAnimation: Animation;

    initRangeAnimation: Animation;

    sensorRangeAnimation: Animation;

    initSensorRangeAnimation: Animation;

    const baseAnimationInterface: Animation;

    private: const buildFrameTimeHelper: TimeDelayHelper = new TimeDelayHelper(50);

    private: const buildAnimationInterface: Animation;

    private: animationInterface: Animation;

    const initAnimationInterface: IndexedAnimation;

    indexedButShouldBeRotationAnimationInterface: IndexedAnimation;

    const emptyAnimationInterface: IndexedAnimation;

    const destroyAnimationInterface: IndexedAnimation;

    const fireTimeHelper: TimeDelayHelper = new TimeDelayHelper(700);

    private: const rootName: string;

    const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    private: const BUILD_VALUE: int32_t = 63;

    public const geographicMapCellPositionAreaBase: GeographicMapCellPositionAreaBase;

    private: healthInterface: Health = Health.NULL_HEALTH;

    private: level: int32_t = 1;

    private: maxLevel: int32_t = 1;

    private: hackVerticleBuild: int32_t = this.BUILD_VALUE;

    slightAngle: int32_t = 0;

    percentCompleteP: int32_t= 0;

    private: destroyed: bool = false;

    private: selected: bool = false;

protected constructor (RemoteInfo remoteInfo, std::vector<Group> groupInterface, string rootName, string name, Health healthInterface, RTSFormInput rtsFormInput, AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface proceduralAnimationInterfaceFactoryInterface, Rectangle rectangle, int32_t x, int32_t y, ViewPositionBase viewPosition);

                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public updateWaypointBehavior(BasicGeographicMap geographicMapInterface);

                //@Throws(Exception.constructor)
            
    public construct(RTSPlayerLayerInterface rtsPlayerLayerInterface);

    public select();

    public deselect();

    setSelected(bool selected);

    public bool isSelected();

    public int32_t getPercentComplete();

    public ScrollSelectionForm getScrollSelectionForm();

    public initInputProcessors();

                //@Throws(Exception.constructor)
            
    public processBuiltTick(AllBinaryLayerManager allBinaryLayerManager);

    public processTick(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager);

    reload();

    public onMovement(TrackingEvent trackingEvent);

                //@Throws(Exception.constructor)
            
    public onMovementFound(TrackingEvent trackingEvent);

    public paint(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public damage(int32_t damage, int32_t damageType);

    public int32_t getSourceId();

    private: const rtsLayerUtil: RTSLayerUtil = RTSLayerUtil.getInstance()!;

    public downgrade();

    public upgrade();

    public bool isCompleted();

                //@Throws(Exception.constructor)
            
    build();

    public bool isSelfUpgradeable();

    public int32_t getCost();

    public int32_t getDowngradeCost();

    public int32_t getUpgradeCost();

    public bool isUpgradeable();

    public bool isDowngradeable();

    public int32_t getLevel();

    public setLevel(int32_t level);

    public Animation getVerticleBuildAnimationInterface();

    public Animation getAnimationInterface();

    public setAnimationInterface(Animation animationInterface);

    private: const layerDistanceUtil: LayerDistanceUtil = LayerDistanceUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public setTarget(PathFindingLayerInterface targetGameLayer);

    public SelectionHudPaintable createHudPaintable();

    public SelectionHudPaintable getHudPaintable();

    public int32_t getMaxLevel();

    public setMaxLevel(int32_t maxLevel);

    public Health getHealthInterface();

    public setHealthInterface(Health healthInterface);

    public RTSFormInput getRTSFormInput();

                //@Throws(Exception.constructor)
            
    public bool isDestroyed();

                //@Throws(Exception.constructor)
            
    public setDestroyed(bool destroyed);

    public BasicArrayList getEndGeographicMapCellPositionList();

    public GeographicMapCellPositionAreaBase getGeographicMapCellPositionArea();

    public bool shouldHandleStartSameAsEnd();

                //@Throws(Exception.constructor)
            
    public handleCost(PathFindingLayerInterface ownerLayer);

    public WaypointBehaviorBase getWaypointBehavior();

    public PathFindingLayerInterface getParentLayer();

    public RTSLayer2LogHelper getRTSLayer2LogHelper();

    public WaypointLogHelper getWaypointLogHelper();

    public Waypoint2LogHelper getWaypoint2LogHelper();

    public WaypointRunnableLogHelper getWaypointRunnableLogHelper();

    public bool shouldAddWaypointFromBuilding();

    public CaptionAnimationHelperBase getCaptionAnimationHelper();

    public bool isShowMoreCaptionStates();

                //@Throws(Exception.constructor)
            
    public init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList);

                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCurrentGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getTopLeftGeographicMapCellPosition();

    public BasicArrayList getMoveOutOfBuildAreaPath(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public setClosestGeographicMapCellHistory(BasicArrayList pathsList);

    public teleportTo(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public setLoad(int32_t resource);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getSurroundingGeographicMapCellPositionList();

                //@Throws(Exception.constructor)
            
    public trackTo(string reason);

                //@Throws(Exception.constructor)
            
    public trackToDXY(int32_t dx, int32_t dy);

    public bool isWaypointListEmptyOrOnlyTargets();

    public TrackingEvent getTrackingEvent();

                //@Throws(Exception.constructor)
            
    public bool buildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition);

    public allStop();

    public bool implmentsTickableInterface();

    public bool implmentsGameInputInterface();

    public string getRootName();

    public RotationAnimation getRotationAnimationInterface();

    public setFrame(int32_t index);

    public setRotationAnimationInterface(RotationAnimation rotationAnimationInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYER_H
