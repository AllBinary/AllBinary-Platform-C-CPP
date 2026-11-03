
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSGAMELAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSGAMELAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Canvas;
class AnimationInterfaceFactoryInterface;
class NullAnimationFactory;
class NullIndexedAnimationFactory;
class ProceduralAnimationInterfaceFactoryInterface;
class ShakeAnimationListener;
class Direction;
class DirectionFactory;
class GameTypeFactory;
class DestroyedEvent;
class DestroyedEventHandler;
#include <org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>
class Health;
class Group;
class GroupFactory;
class GameKeyEventFactory;
class NullRTSFormInputFactory;
class RTSFormInput;
class BuildingEventHandler;
class Waypoint2LogHelper;
class Waypoint2SelectedLogHelper;
class WaypointBase;
class WaypointLogHelper;
class WaypointRunnableLogHelper;
class WaypointRunnableSelectedLogHelper;
class WaypointSelectedLogHelper;
class RemoteInfo;
class NullTickable;
class TickableInterface;
class TileLayerPositionIntoViewPosition;
class Rectangle;
class RectangleFactory;
class AllBinaryLayer;
class StringUtil;
class AngleInfo;
class FrameUtil;
class AllBinaryVibrationME;
class BasicGeographicMap;
class GeographicMapCellPosition;
class GeographicMapCompositeInterface;
class GeographicMapDirectionUtil;
class BasicArrayList;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayer.h"
class NullPathFindingLayer;
class AdvancedRTSProperties;
class PathFindingLayerInterface;
class WaypointBehaviorBase;
class AdvancedRTSPlayerLayerInterface;
class RTSPlayerLayerInterface;
class RTSLayerUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvancedRTSGameLayer: public RTSLayer, public virtual DestroyedEventListenerInterface {

                //@Throws(Exception.constructor)
            
    public: static AdvancedRTSGameLayer* createSimulated();

    /*protected*/ public: ShakeAnimationListener* shakeListener;

    /*protected*/ public: AllBinaryVibrationME* vibration;

    /*protected*/ public: int32_t duration;

    private: PathFindingLayerInterface* parentLayer;

    /*protected*/ public: TickableInterface* waypointBehaviorBase;

public: AdvancedRTSGameLayer(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, std::vector<Group*> groupInterface, std::string rootName, std::string name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition);

                //@Throws(Exception.constructor)
            
    public: void updateWaypointBehavior(BasicGeographicMap* geographicMapInterface);

    /*protected*/ public: void initVisibility(RTSPlayerLayerInterface* rtsPlayerLayerInterface);

                //@Throws(Exception.constructor)
            
    public: void construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface);

                //@Throws(Exception.constructor)
            
    public: void setDestroyed(bool destroyed);

    public: PathFindingLayerInterface* getParentLayer();

    public: void setParentLayer(PathFindingLayerInterface* parentLayer);

    public: WaypointBehaviorBase* getWaypointBehavior();

    /*protected*/ public: void setWaypointBehavior(WaypointBehaviorBase* unitWaypointHelper);

    public: WaypointLogHelper* getWaypointLogHelper();

    public: Waypoint2LogHelper* getWaypoint2LogHelper();

    public: WaypointRunnableLogHelper* getWaypointRunnableLogHelper();

    public: bool shouldAddWaypointFromBuilding();

    public: bool isWaypointListEmptyOrOnlyTargets();

                //@Throws(Exception.constructor)
            
    public: bool buildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getSurroundingGeographicMapCellPositionList();

    /*protected*/ public: void setSelected(bool selected);

    public: void onDestroyed(DestroyedEvent* destroyedEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSGAMELAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSGAMELAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSGAMELAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
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
#if __has_include(<org/allbinary/animation/transition/shake/ShakeAnimationListener.h>)
#include <org/allbinary/animation/transition/shake/ShakeAnimationListener.h>
#endif
#if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
#endif
#if __has_include(<org/allbinary/game/GameTypeFactory.h>)
#include <org/allbinary/game/GameTypeFactory.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyedEvent.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>
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
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/form/NullRTSFormInputFactory.h>)
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/form/RTSFormInput.h>)
#include <org/allbinary/game/input/form/RTSFormInput.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/event/BuildingEventHandler.h>)
#include <org/allbinary/game/layer/building/event/BuildingEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>)
#include <org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/Waypoint2SelectedLogHelper.h>)
#include <org/allbinary/game/layer/waypoint/Waypoint2SelectedLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointBase.h>)
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointLogHelper.h>)
#include <org/allbinary/game/layer/waypoint/WaypointLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>)
#include <org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointRunnableSelectedLogHelper.h>)
#include <org/allbinary/game/layer/waypoint/WaypointRunnableSelectedLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointSelectedLogHelper.h>)
#include <org/allbinary/game/layer/waypoint/WaypointSelectedLogHelper.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/game/tick/NullTickable.h>)
#include <org/allbinary/game/tick/NullTickable.h>
#endif
#if __has_include(<org/allbinary/game/tick/TickableInterface.h>)
#include <org/allbinary/game/tick/TickableInterface.h>
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
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/math/FrameUtil.h>)
#include <org/allbinary/math/FrameUtil.h>
#endif
#if __has_include(<org/allbinary/media/AllBinaryVibrationME.h>)
#include <org/allbinary/media/AllBinaryVibrationME.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer.h")
#include "org/allbinary/game/layer/RTSLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/NullPathFindingLayer.h")
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/AdvancedRTSProperties.h")
#include "org/allbinary/game/layer/AdvancedRTSProperties.h"
#endif
#if __has_include("org/allbinary/game/layer/PathFindingLayerInterface.h")
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/WaypointBehaviorBase.h")
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#endif
#if __has_include("org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h")
#include "org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSPlayerLayerInterface.h")
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayerUtil.h")
#include "org/allbinary/game/layer/RTSLayerUtil.h"
#endif

        #endif
    
