
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Canvas;
class RTSGameStrings;
class RTSLayer;
class RTSLayerInfoPaintable;
class RTSPlayerLayerInterface;
class Capital;
class DowngradeSound;
class UpgradeSound;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
class StringMaker;
class BooleanFactory;
class Features;
class InputFeatureFactory;
class GameKeyEvent;
class AllBinaryGameLayerManager;
class GameNotificationEvent;
class GameNotificationEventHandler;
class CollidableDestroyableDamageableLayer;
class BasicColorFactory;
class AllBinaryLayerManager;
class Visitor;
class SmallIntegerSingletonFactory;
class ErrorSound;
class BasicGeographicMap;
class GeographicMapCompositeInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInput.h"
class InputFactory;
class GameInputProcessor;
class SelectRTSLayerVisitorFactoryInterface;
class RTSPlayerGameInput;
class SelectedRTSLayersPlayerUpgradeGameInputProcessor;
class SelectedRTSLayersPlayerDowngradeGameInputProcessor;
class GameInputProcessorUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectedRTSLayersPlayerGameInput: public PlayerGameInput {

    /*protected*/ public: std::vector<GameInputProcessor*> inputProcessorArray;

    private: BasicArrayList* list;

    /*protected*/ public: const bool isSingleKeyProcessing;

    private: BasicArrayList* selectedRTSLayersList;

    private: BasicArrayList* preSelectedRTSLayersList;

    private: BasicArrayList* paintSelectedRTSLayersList;

    private: RTSPlayerLayerInterface* rtsPlayerLayerInterface;

    private: Visitor* selectRTSLayerVisitorInterface;

    private: GameNotificationEvent* upgradeGameNotificationEvent;

    private: GameNotificationEvent* noMoneyGameNotificationEvent;

    private: GameNotificationEvent* downgradeGameNotificationEvent;

public: SelectedRTSLayersPlayerGameInput(RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, BasicArrayList* list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

    public: bool isSelected(RTSLayer* rtsLayer);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void upgrade();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void downgrade();

    public: void initInputProcessors();

                //@Throws(Exception.constructor)
            
    public: void processInputKey(int32_t key);

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager);

    public: BasicArrayList* getSelectedBasicArrayList();

    public: void addSelectedRTSLayer(RTSLayer* selectedLayer);

    public: void setSelectedRTSLayer(CollidableDestroyableDamageableLayer* selectedLayer);

    public: CollidableDestroyableDamageableLayer* getLastSelectedRtsLayer();

    public: void selectAllPreselected();

    public: void deselectAllPreselected();

    public: void deselectAll();

    public: bool isAnyRTSLayerSelected();

    public: BasicArrayList* getPaintSelectedRTSLayersList();

    public: BasicArrayList* getPreSelectedRTSLayersList();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSGameStrings.h>)
#include <org/allbinary/game/layer/RTSGameStrings.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerInfoPaintable.h>)
#include <org/allbinary/game/layer/RTSLayerInfoPaintable.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/capital/Capital.h>)
#include <org/allbinary/game/layer/capital/Capital.h>
#endif
#if __has_include(<org/allbinary/media/audio/DowngradeSound.h>)
#include <org/allbinary/media/audio/DowngradeSound.h>
#endif
#if __has_include(<org/allbinary/media/audio/UpgradeSound.h>)
#include <org/allbinary/media/audio/UpgradeSound.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/InputFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
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
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
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
#if __has_include("org/allbinary/game/input/PlayerGameInput.h")
#include "org/allbinary/game/input/PlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h")
#include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/input/RTSPlayerGameInput.h")
#include "org/allbinary/game/input/RTSPlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/SelectedRTSLayersPlayerUpgradeGameInputProcessor.h")
#include "org/allbinary/game/input/SelectedRTSLayersPlayerUpgradeGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/SelectedRTSLayersPlayerDowngradeGameInputProcessor.h")
#include "org/allbinary/game/input/SelectedRTSLayersPlayerDowngradeGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessorUtil.h")
#include "org/allbinary/game/input/GameInputProcessorUtil.h"
#endif

        #endif
    
