
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGADVANCEDRTSFORMINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGADVANCEDRTSFORMINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AdvancedPlayerOwnedRTSLayers;
class AdvancedRTSPlayerLayerInterface;
class RTSLayer;
class RTSLayerEvent;
class RTSPlayerLayerInterface;
class BuildingEventHandler;
class LocalPlayerBuildingEventHandler;
class WaypointCellPositionHistory;
class BooleanFactory;
class Group;
class AllBinaryGameLayerManager;
class NullPathFindingLayer;
class GameNotificationEvent;
class GameNotificationEventHandler;
class BasicColorFactory;
class AllBinaryLayerManager;
class SmallIntegerSingletonFactory;
class ErrorSound;
class BasicGeographicMap;
class GeographicMapCompositeInterface;
class DropCellPositionHistory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/form/BuildingRTSFormInput.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BuildingAdvancedRTSFormInput: public BuildingRTSFormInput {

    /*protected*/ public: GameNotificationEvent* atLeastOneHouseGameNotificationEvent;

public: BuildingAdvancedRTSFormInput(std::vector<Group*> groupInterface, bool isUnitProducer);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

    public: bool isPositionBlocked();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: bool isBuildAttemptValid(RTSPlayerLayerInterface* rtsPlayerLayerInterface, RTSLayer* layerInterface);

    private: RTSLayerEvent* BUILD_BUILDING_RTS_LAYER_EVENT;

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void add(RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGADVANCEDRTSFORMINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGADVANCEDRTSFORMINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGADVANCEDRTSFORMINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h>)
#include <org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerEvent.h>)
#include <org/allbinary/game/layer/RTSLayerEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/event/BuildingEventHandler.h>)
#include <org/allbinary/game/layer/building/event/BuildingEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h>)
#include <org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h>)
#include <org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h>
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
#if __has_include(<org/allbinary/game/layer/NullPathFindingLayer.h>)
#include <org/allbinary/game/layer/NullPathFindingLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationEvent.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
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
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>)
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>
#endif
#if __has_include("org/allbinary/game/input/form/BuildingRTSFormInput.h")
#include "org/allbinary/game/input/form/BuildingRTSFormInput.h"
#endif

        #endif
    
