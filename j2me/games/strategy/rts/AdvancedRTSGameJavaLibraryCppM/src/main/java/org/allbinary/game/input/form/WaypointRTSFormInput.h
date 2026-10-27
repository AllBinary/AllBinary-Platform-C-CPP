
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_WAYPOINTRTSFORMINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_WAYPOINTRTSFORMINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class StringMaker;
class RTSPlayerGameInput;
class AdvancedRTSGameLayer;
class AdvancedRTSPlayerLayerInterface;
class RTSGameStrings;
class RTSLayer;
class RTSLayerEvent;
class RTSLayerUtil;
class RTSPlayerLayerInterface;
class Capital;
class WaypointCellPositionHistory;
class WaypointLayer;
class WaypointEventHandlerFactory;
class ABCustomItem;
class BasicArrayList;
class BooleanFactory;
class Group;
class AllBinaryGameLayerManager;
class AllBinaryTiledLayer;
class GeographicMapCellPositionAreaBase;
class NullPathFindingLayer;
class NullRTSLayer;
class PathFindingLayerInterface;
class GameNotificationEvent;
class GameNotificationEventHandler;
class CollidableDestroyableDamageableLayer;
class GPoint;
class BasicColorFactory;
class AllBinaryLayerManager;
class Layer;
class SmallIntegerSingletonFactory;
class ErrorSound;
class BasicGeographicMap;
class GeographicMapCellPosition;
class GeographicMapCellType;
class GeographicMapCompositeInterface;
class DropCellPositionHistory;
class RaceTrackGeographicMapCellTypeFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/form/RTSFormInput.h"
class PrimaryWaypointHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointRTSFormInput: public RTSFormInput {

    private: RTSLayerEvent* WAYPOINT_EVENT;

    /*protected*/ public: GameNotificationEvent* dragToSpotGameNotificationEvent;

    /*protected*/ public: GameNotificationEvent* spotTakenGameNotificationEvent;

    /*protected*/ public: GameNotificationEvent* buildingCollisionGameNotificationEvent;

    /*protected*/ public: GameNotificationEvent* roadCollisionGameNotificationEvent;

    /*protected*/ public: GameNotificationEvent* newWaypointGameNotificationEvent;

    /*protected*/ public: GameNotificationEvent* noMoneyGameNotificationEvent;

    private: bool isPrimaryWaypointCreator;

    private: PathFindingLayerInterface* stickyAssociatedRtsLayer;

public: WaypointRTSFormInput(std::vector<Group*> groupInterface, bool isPrimaryWaypointCreator);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processAtPoint(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);

                //@Throws(Exception.constructor)
            
    private: void processCellPosition(RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: void processStickyGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: bool attemptBuild(RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface, int32_t itemIndex);

                //@Throws(Exception.constructor)
            
    private: void addWayPoint(WaypointLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_WAYPOINTRTSFORMINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_WAYPOINTRTSFORMINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_WAYPOINTRTSFORMINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/game/input/RTSPlayerGameInput.h>)
#include <org/allbinary/game/input/RTSPlayerGameInput.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSGameStrings.h>)
#include <org/allbinary/game/layer/RTSGameStrings.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerEvent.h>)
#include <org/allbinary/game/layer/RTSLayerEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerUtil.h>)
#include <org/allbinary/game/layer/RTSLayerUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/capital/Capital.h>)
#include <org/allbinary/game/layer/capital/Capital.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h>)
#include <org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointLayer.h>)
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h>)
#include <org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>)
#include <org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/NullPathFindingLayer.h>)
#include <org/allbinary/game/layer/NullPathFindingLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/NullRTSLayer.h>)
#include <org/allbinary/game/layer/NullRTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationEvent.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/ErrorSound.h>)
#include <org/allbinary/media/audio/ErrorSound.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>)
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>
#endif
#if __has_include("org/allbinary/game/input/form/RTSFormInput.h")
#include "org/allbinary/game/input/form/RTSFormInput.h"
#endif
#if __has_include("org/allbinary/game/input/form/PrimaryWaypointHelper.h")
#include "org/allbinary/game/input/form/PrimaryWaypointHelper.h"
#endif

        #endif
    
