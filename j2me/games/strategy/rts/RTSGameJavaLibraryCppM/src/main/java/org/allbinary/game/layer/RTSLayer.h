
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class Graphics;
class RTSFormInput;
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>
class Animation;
class AnimationInterfaceFactoryInterface;
class IndexedAnimation;
class NullAnimationFactory;
class NullIndexedAnimationFactory;
class ProceduralAnimationInterfaceFactoryInterface;
class RotationAnimation;
class CaptionAnimationHelperBase;
class DestroyedLayerProcessor;
class Health;
class Group;
class GroupFactory;
#include <org/allbinary/game/input/GameInputInterface.h>
class GameInputProcessor;
class GameInputProcessorUtil;
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
class InputFactory;
class NullRTSFormInputFactory;
class Waypoint2LogHelper;
class WaypointLogHelper;
class WaypointRunnableLogHelper;
#include <org/allbinary/game/tick/TickableInterface.h>
class TrackingEvent;
class TileLayerPositionIntoViewPosition;
class Rectangle;
class RectangleFactory;
class ScrollSelectionForm;
class AllBinaryLayer;
class AllBinaryLayerManager;
class BasicGeographicMap;
class TimeDelayHelper;
class ViewPositionEventHandler;
class RemoteInfo;
class StdUtil;
class StringUtil;
class LayerDistanceUtil;
class GeographicMapCellHistory;
class GeographicMapCellPosition;
class GeographicMapCompositeInterface;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSInterface.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
class RTSLayer2LogHelper;
class GeographicMapCellPositionAreaBase;
class GeographicMapCellPositionArea;
class AllBinaryTiledLayer;
class AllBinaryGameLayerManager;
class RTSPlayerLayerInterface;
class RTSLayerUtil;
class WaypointBehaviorBase;
class SelectionHudPaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayer: public MultiPlayerGameLayer, public TickableInterface, public GameInputInterface, public GameKeyEventSourceInterface, public RTSInterface, public PathFindingLayerInterface {

                //@Throws(Exception.constructor)
            
    public: static RTSLayer* createSimulatedInstance(RemoteInfo* remoteInfo);

    private: static inline const int32_t id = 0;

    /*protected*/ public: static inline const int32_t MAIN_INDEX = 0;

    /*protected*/ public: static inline const int32_t SECONDARY_INDEX = 1;

    public: static int32_t getMinStaticType();

    public: static int32_t getMaxStaticType();

    public: static bool isRTSLayer(AllBinaryLayer* layerInterface);

    /*protected*/ public: const bool debug = true;

    public: const bool showMoreCaptionStates;

    /*protected*/ public: std::vector<GameInputProcessor*> inputProcessorArray;

    public: RTSLayer2LogHelper* rtsLayer2LogHelper;

    public: WaypointLogHelper* waypointLogHelperP;

    public: Waypoint2LogHelper* waypoint2LogHelperP;

    public: WaypointRunnableLogHelper* waypointRunnableLogHelperP;

    private: RTSFormInput* rtsFormInput;

    private: IndexedAnimation* verticleBuildAnimationInterface;

    /*protected*/ public: Animation* rangeAnimation;

    /*protected*/ public: Animation* initRangeAnimation;

    /*protected*/ public: Animation* sensorRangeAnimation;

    /*protected*/ public: Animation* initSensorRangeAnimation;

    /*protected*/ public: Animation* baseAnimationInterface;

    private: TimeDelayHelper* buildFrameTimeHelper;

    private: Animation* buildAnimationInterface;

    private: Animation* animationInterface;

    /*protected*/ public: IndexedAnimation* initAnimationInterface;

    /*protected*/ public: IndexedAnimation* indexedButShouldBeRotationAnimationInterface;

    /*protected*/ public: IndexedAnimation* emptyAnimationInterface;

    /*protected*/ public: IndexedAnimation* destroyAnimationInterface;

    /*protected*/ public: TimeDelayHelper* fireTimeHelper;

    private: std::string rootName;

    /*protected*/ public: ABHashtable<Object*, Object*>* hashtable;

    private: const int32_t BUILD_VALUE = 63;

    public: GeographicMapCellPositionAreaBase* geographicMapCellPositionAreaBase;

    private: Health* healthInterface;

    private: int32_t level = 1;

    private: int32_t maxLevel = 1;

    private: int32_t hackVerticleBuild;

    /*protected*/ public: int32_t slightAngle = 0;

    /*protected*/ public: int32_t percentCompleteP= 0;

    private: bool destroyed = false;

    private: bool selected = false;

/*protected*/ public: RTSLayer(RemoteInfo* remoteInfo, std::vector<Group*> groupInterface, std::string rootName, std::string name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public: void updateWaypointBehavior(BasicGeographicMap* geographicMapInterface);

                //@Throws(Exception.constructor)
            
    public: void construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface);

    public: void select();

    public: void deselect();

    /*protected*/ public: void setSelected(bool selected);

    public: bool isSelected();

    public: int32_t getPercentComplete();

    public: ScrollSelectionForm* getScrollSelectionForm();

    public: void initInputProcessors();

                //@Throws(Exception.constructor)
            
    public: void processBuiltTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager);

    /*protected*/ public: void reload();

    public: void onMovement(TrackingEvent* trackingEvent);

                //@Throws(Exception.constructor)
            
    public: void onMovementFound(TrackingEvent* trackingEvent);

    public: void paint(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void damage(int32_t damage, int32_t damageType);

    public: int32_t getSourceId();

    private: RTSLayerUtil* rtsLayerUtil;

    public: void downgrade();

    public: void upgrade();

    public: bool isCompleted();

                //@Throws(Exception.constructor)
            
    private: void build();

    public: bool isSelfUpgradeable();

    public: int32_t getCost();

    public: int32_t getDowngradeCost();

    public: int32_t getUpgradeCost();

    public: bool isUpgradeable();

    public: bool isDowngradeable();

    public: int32_t getLevel();

    public: void setLevel(int32_t level);

    public: Animation* getVerticleBuildAnimationInterface();

    public: Animation* getAnimationInterface();

    public: void setAnimationInterface(Animation* animationInterface);

    private: LayerDistanceUtil* layerDistanceUtil;

                //@Throws(Exception.constructor)
            
    public: void setTarget(PathFindingLayerInterface* targetGameLayer);

    public: SelectionHudPaintable* createHudPaintable();

    public: SelectionHudPaintable* getHudPaintable();

    public: int32_t getMaxLevel();

    public: void setMaxLevel(int32_t maxLevel);

    public: Health* getHealthInterface();

    public: void setHealthInterface(Health* healthInterface);

    public: RTSFormInput* getRTSFormInput();

                //@Throws(Exception.constructor)
            
    public: bool isDestroyed();

                //@Throws(Exception.constructor)
            
    public: void setDestroyed(bool destroyed);

    public: BasicArrayList* getEndGeographicMapCellPositionList();

    public: GeographicMapCellPositionAreaBase* getGeographicMapCellPositionArea();

    public: bool shouldHandleStartSameAsEnd();

                //@Throws(Exception.constructor)
            
    public: void handleCost(PathFindingLayerInterface* ownerLayer);

    public: WaypointBehaviorBase* getWaypointBehavior();

    public: PathFindingLayerInterface* getParentLayer();

    public: RTSLayer2LogHelper* getRTSLayer2LogHelper();

    public: WaypointLogHelper* getWaypointLogHelper();

    public: Waypoint2LogHelper* getWaypoint2LogHelper();

    public: WaypointRunnableLogHelper* getWaypointRunnableLogHelper();

    public: bool shouldAddWaypointFromBuilding();

    public: CaptionAnimationHelperBase* getCaptionAnimationHelper();

    public: bool isShowMoreCaptionStates();

                //@Throws(Exception.constructor)
            
    public: void init(GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCurrentGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getTopLeftGeographicMapCellPosition();

    public: BasicArrayList* getMoveOutOfBuildAreaPath(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: void setClosestGeographicMapCellHistory(BasicArrayList* pathsList);

    public: void teleportTo(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: void setLoad(int32_t resource);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getSurroundingGeographicMapCellPositionList();

                //@Throws(Exception.constructor)
            
    public: void trackTo(std::string reason);

                //@Throws(Exception.constructor)
            
    public: void trackToDXY(int32_t dx, int32_t dy);

    public: bool isWaypointListEmptyOrOnlyTargets();

    public: TrackingEvent* getTrackingEvent();

                //@Throws(Exception.constructor)
            
    public: bool buildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);

    public: void allStop();

    public: bool implmentsTickableInterface();

    public: bool implmentsGameInputInterface();

    public: std::string getRootName();

    public: RotationAnimation* getRotationAnimationInterface();

    public: void setFrame(int32_t index);

    public: void setRotationAnimationInterface(RotationAnimation* rotationAnimationInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/input/form/RTSFormInput.h>)
#include <org/allbinary/game/input/form/RTSFormInput.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>)
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
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
#if __has_include(<org/allbinary/animation/caption/CaptionAnimationHelperBase.h>)
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>)
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>
#endif
#if __has_include(<org/allbinary/game/health/Health.h>)
#include <org/allbinary/game/health/Health.h>
#endif
#if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/game/identification/GroupFactory.h>)
#include <org/allbinary/game/identification/GroupFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInputInterface.h>)
#include <org/allbinary/game/input/GameInputInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInputProcessor.h>)
#include <org/allbinary/game/input/GameInputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInputProcessorUtil.h>)
#include <org/allbinary/game/input/GameInputProcessorUtil.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyEventSourceInterface.h>)
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/form/NullRTSFormInputFactory.h>)
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>)
#include <org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointLogHelper.h>)
#include <org/allbinary/game/layer/waypoint/WaypointLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>)
#include <org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/tick/TickableInterface.h>)
#include <org/allbinary/game/tick/TickableInterface.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEvent.h>)
#include <org/allbinary/game/tracking/TrackingEvent.h>
#endif
#if __has_include(<org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>)
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/RectangleFactory.h>)
#include <org/allbinary/graphics/RectangleFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/view/event/ViewPositionEventHandler.h>)
#include <org/allbinary/view/event/ViewPositionEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/math/LayerDistanceUtil.h>)
#include <org/allbinary/math/LayerDistanceUtil.h>
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
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/layer/RTSInterface.h")
#include "org/allbinary/game/layer/RTSInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/PathFindingLayerInterface.h")
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer2LogHelper.h")
#include "org/allbinary/game/layer/RTSLayer2LogHelper.h"
#endif
#if __has_include("org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h")
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
#endif
#if __has_include("org/allbinary/game/layer/GeographicMapCellPositionArea.h")
#include "org/allbinary/game/layer/GeographicMapCellPositionArea.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryTiledLayer.h")
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSPlayerLayerInterface.h")
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayerUtil.h")
#include "org/allbinary/game/layer/RTSLayerUtil.h"
#endif
#if __has_include("org/allbinary/game/layer/WaypointBehaviorBase.h")
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#endif
#if __has_include("org/allbinary/game/layer/SelectionHudPaintable.h")
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#endif

        #endif
    
