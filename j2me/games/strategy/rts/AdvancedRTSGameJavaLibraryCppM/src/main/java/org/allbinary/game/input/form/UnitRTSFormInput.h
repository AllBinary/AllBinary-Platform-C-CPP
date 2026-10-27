
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_UNITRTSFORMINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_UNITRTSFORMINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class ABCustomItem;
class StringMaker;
class AdvancedPlayerOwnedRTSLayers;
class AdvancedRTSGameLayer;
class AdvancedRTSPlayerLayerInterface;
class RTSGameStrings;
class RTSLayer;
class RTSPlayerLayerInterface;
class Capital;
class UnitLayer;
class WorkWaypoint;
class BuildingSound;
class BooleanFactory;
class Group;
class AllBinaryGameLayerManager;
class GeographicMapCellPositionAreaBase;
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
class GeographicMapCompositeInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/form/RTSFormInput.h"
class AssignWaypointsUtil;
class PlayersSingletonFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UnitRTSFormInput: public RTSFormInput {

    public: static int32_t DECAL_ID;

    /*protected*/ public: GameNotificationEvent* noMoneyGameNotificationEvent;

    /*protected*/ public: GameNotificationEvent* newUnitGameNotificationEvent;

public: UnitRTSFormInput(std::vector<Group*> groupInterface);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex);

                //@Throws(Exception.constructor)
            
    private: void attemptBuild(RTSLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface, int32_t itemIndex);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_UNITRTSFORMINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_UNITRTSFORMINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_UNITRTSFORMINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h>)
#include <org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h>
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
#if __has_include(<org/allbinary/game/layer/RTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/capital/Capital.h>)
#include <org/allbinary/game/layer/capital/Capital.h>
#endif
#if __has_include(<org/allbinary/game/layer/unit/UnitLayer.h>)
#include <org/allbinary/game/layer/unit/UnitLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WorkWaypoint.h>)
#include <org/allbinary/game/layer/waypoint/WorkWaypoint.h>
#endif
#if __has_include(<org/allbinary/media/audio/BuildingSound.h>)
#include <org/allbinary/media/audio/BuildingSound.h>
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
#if __has_include(<org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>)
#include <org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>
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
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
#endif
#if __has_include("org/allbinary/game/input/form/RTSFormInput.h")
#include "org/allbinary/game/input/form/RTSFormInput.h"
#endif
#if __has_include("org/allbinary/game/input/form/AssignWaypointsUtil.h")
#include "org/allbinary/game/input/form/AssignWaypointsUtil.h"
#endif
#if __has_include("org/allbinary/game/input/form/PlayersSingletonFactory.h")
#include "org/allbinary/game/input/form/PlayersSingletonFactory.h"
#endif

        #endif
    
