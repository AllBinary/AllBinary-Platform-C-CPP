
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Canvas;
class Graphics;
class RTSFormInput;
class RTSLayer;
class RTSLayerInfoPaintable;
class RTSPlayerLayerInterface;
class BasicArrayList;
class BasicArrayListD;
class Features;
class InputFeatureFactory;
class AllBinaryGameCanvas;
class GameKeyEvent;
class NullRTSFormInputFactory;
class AllBinaryGameLayerManager;
class AllBinaryTiledLayer;
class NullRTSLayer;
class CollidableDestroyableDamageableLayer;
class GPoint;
class BasicColorFactory;
class DisplayChangeEvent;
class MotionGestureEvent;
class AllBinaryLayer;
class AllBinaryLayerManager;
class StringMaker;
class StringUtil;
class SecondaryPlayerQueueFactory;
class SelectSound;
class BasicGeographicMap;
class GeographicMapCellPosition;
class GeographicMapCompositeInterface;
class SimpleGeographicMapCellPositionFactory;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInput.h"
class InputFactory;
class GameInputProcessor;
class ScrollMapPlayerGameInput;
class SelectedRTSLayersPlayerGameInput;
class LayerPositionFinderInterface;
class SelectRTSLayerVisitorFactoryInterface;
class RTSPlayerLeftGameInputProcessor;
class RTSPlayerRightGameInputProcessor;
class RTSPlayerFireGameInputProcessor;
class GameInputProcessorUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSPlayerGameInput: public PlayerGameInput {

    /*protected*/ public: std::vector<GameInputProcessor*> inputProcessorArray;

    /*protected*/ public: std::vector<GameInputProcessor*> removeInputProcessorArray;

    private: BasicArrayList* inputList;

    private: const bool isSingleKeyProcessing;

    private: AllBinaryGameCanvas* gameCanvas;

    private: BasicArrayList* motionGestureInputList;

    private: ScrollMapPlayerGameInput* scrollPlayerGameInput;

    private: SelectedRTSLayersPlayerGameInput* selectedRTSLayerPlayerGameInput;

    private: RTSLayerInfoPaintable* towerInfoPaintable;

    private: RTSPlayerLayerInterface* rtsPlayerLayerInterface;

    private: LayerPositionFinderInterface* layerPositionFinderInterface;

    private: RTSFormInput* selectedRtsFormInput;

public: RTSPlayerGameInput(AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

    public: void onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void left();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void right();

    public: void initInputProcessors();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager);

                //@Throws(Exception.constructor)
            
    public: void processMotionInput(AllBinaryLayerManager* layerManager);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void select(MotionGestureEvent* motionGestureEvent);

                //@Throws(Exception.constructor)
            
    public: void setSelectedRTSLayer(CollidableDestroyableDamageableLayer* rtsLayer, GeographicMapCellPosition* geographicMapCellPosition);

    public: void paint(Graphics* graphics);

    public: void updatePaintable();

    public: SelectedRTSLayersPlayerGameInput* getSelectedBuildingPlayerGameInput();

    public: RTSFormInput* getSelectedRtsFormInput();

    public: void setSelectedRtsFormInput(RTSFormInput* selectedRtsFormInput);

    public: RTSPlayerLayerInterface* getRtsPlayerLayerInterface();

    public: RTSLayerInfoPaintable* getRTSLayerInfoPaintable();

    public: BasicArrayList* getMotionGestureInputList();

    /*protected*/ public: AllBinaryGameCanvas* getGameCanvas();

    public: bool isIsSingleKeyProcessing();

    public: ScrollMapPlayerGameInput* getScrollPlayerGameInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/input/form/RTSFormInput.h>)
#include <org/allbinary/game/input/form/RTSFormInput.h>
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
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/InputFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/form/NullRTSFormInputFactory.h>)
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/NullRTSLayer.h>)
#include <org/allbinary/game/layer/NullRTSLayer.h>
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
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>)
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/SelectSound.h>)
#include <org/allbinary/media/audio/SelectSound.h>
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
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
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
#if __has_include("org/allbinary/game/input/ScrollMapPlayerGameInput.h")
#include "org/allbinary/game/input/ScrollMapPlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h")
#include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/LayerPositionFinderInterface.h")
#include "org/allbinary/game/input/LayerPositionFinderInterface.h"
#endif
#if __has_include("org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h")
#include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/input/RTSPlayerLeftGameInputProcessor.h")
#include "org/allbinary/game/input/RTSPlayerLeftGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/RTSPlayerRightGameInputProcessor.h")
#include "org/allbinary/game/input/RTSPlayerRightGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/RTSPlayerFireGameInputProcessor.h")
#include "org/allbinary/game/input/RTSPlayerFireGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessorUtil.h")
#include "org/allbinary/game/input/GameInputProcessorUtil.h"
#endif

        #endif
    
