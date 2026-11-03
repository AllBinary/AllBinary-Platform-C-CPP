
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class RTSFormInput;
class MultiSelectPaintable;
class RTSGameStrings;
class RTSLayer;
class RTSLayerInfoPaintable;
class RTSPlayerLayerInterface;
class GameStateFactory;
class EndLevelNoBuildingSelectedTouchButtonsBuilder;
class EndLevelTouchButtonsBuilder;
class NoBuildingSelectedTouchButtonsBuilder;
class RTSTouchButtonsBuilder;
class SelectBuildingSound;
class BasicArrayList;
class CommonSeps;
class StringMaker;
class LogUtil;
class BooleanFactory;
class AllBinaryGameCanvas;
class AllBinaryGameLayerManager;
class GameNotificationEvent;
class GameNotificationEventHandler;
class CollidableDestroyableDamageableLayer;
class GPoint;
class PointFactory;
class BasicColorFactory;
class ScrollSelectionForm;
class ABCustomItem;
class NullInitUpdatePaintable;
class TouchButtonsBuilderFactory;
class MotionGestureInput;
class TouchMotionGestureFactory;
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>
class BasicMotionGesturesHandler;
class MotionGestureEvent;
class AllBinaryLayerManager;
class SmallIntegerSingletonFactory;
class CommonLabels;
class StringUtil;
class RectangleCollisionUtil;
class ErrorSound;
class BasicGeographicMap;
class GeographicMapCellPosition;
class GeographicMapCompositeInterface;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/RTSPlayerGameInput.h"
class LayerPositionFinderInterface;
class SelectRTSLayerVisitorFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HumanRTSPlayerGameInput: public RTSPlayerGameInput, public virtual BaseMotionGestureEventListener {

    private: bool isDragging = false;

    /*protected*/ public: GameStateFactory* gameStateFactory;

    private: RectangleCollisionUtil* rectangleCollisionUtil;

    private: TouchMotionGestureFactory* touchMotionGestureFactory;

    private: MotionGestureInput* PRESSED;

    private: MotionGestureInput* RELEASED;

    private: TouchButtonsBuilderFactory* touchButtonsBuilderFactory;

    private: GameNotificationEvent* notYoursGameNotificationEvent;

    private: CollidableDestroyableDamageableLayer* selectedRtsLayer;

public: HumanRTSPlayerGameInput(AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory* touchButtonsBuilderFactory);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    private: bool processDraggingMotionInput(AllBinaryLayerManager* layerManager);

    private: GPoint* startPoint;

    private: GPoint* endPoint;

    public: const std::string POSSIBLE = "Possible: ";

    public: const std::string AT = "At: ";

    public: const std::string METHOD = "makeSelection";

    public: const std::string ADDING = "Adding: ";

    public: const std::string SPACE;

    private: void makeSelection();

                //@Throws(Exception.constructor)
            
    private: void processSelectionBoxMotionInput(AllBinaryLayerManager* layerManager);

                //@Throws(Exception.constructor)
            
    public: void processMotionInput(AllBinaryLayerManager* layerManager);

    public: void setSelectedRtsFormInput(RTSFormInput* selectedRtsFormInput);

    private: void updateFormForLayer(RTSLayer* rtsLayer);

    private: void updateForm(ScrollSelectionForm* scrollSelectionForm, RTSFormInput* rtfFormInput);

                //@Throws(Exception.constructor)
            
    public: void setSelectedRTSLayer(CollidableDestroyableDamageableLayer* rtSLayer, GeographicMapCellPosition* geographicMapCellPosition);

    private: MultiSelectPaintable* multiSelectPaintable;

    public: void updatePaintable();

    public: void paint(Graphics* graphics);

    public: void onMotionGestureEvent(MotionGestureEvent* motionGestureEvent);

    public: void onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent);

    private: CollidableDestroyableDamageableLayer* getSelectedRtsLayer();

    private: void setSelectedRtsLayer(CollidableDestroyableDamageableLayer* selectedRtsLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/input/form/RTSFormInput.h>)
#include <org/allbinary/game/input/form/RTSFormInput.h>
#endif
#if __has_include(<org/allbinary/game/layer/MultiSelectPaintable.h>)
#include <org/allbinary/game/layer/MultiSelectPaintable.h>
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
#if __has_include(<org/allbinary/game/state/GameStateFactory.h>)
#include <org/allbinary/game/state/GameStateFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/EndLevelNoBuildingSelectedTouchButtonsBuilder.h>)
#include <org/allbinary/input/motion/button/EndLevelNoBuildingSelectedTouchButtonsBuilder.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/EndLevelTouchButtonsBuilder.h>)
#include <org/allbinary/input/motion/button/EndLevelTouchButtonsBuilder.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/NoBuildingSelectedTouchButtonsBuilder.h>)
#include <org/allbinary/input/motion/button/NoBuildingSelectedTouchButtonsBuilder.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/RTSTouchButtonsBuilder.h>)
#include <org/allbinary/input/motion/button/RTSTouchButtonsBuilder.h>
#endif
#if __has_include(<org/allbinary/media/audio/SelectBuildingSound.h>)
#include <org/allbinary/media/audio/SelectBuildingSound.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
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
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullInitUpdatePaintable.h>)
#include <org/allbinary/graphics/paint/NullInitUpdatePaintable.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/TouchButtonsBuilderFactory.h>)
#include <org/allbinary/input/motion/button/TouchButtonsBuilderFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/MotionGestureInput.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>)
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>)
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/math/RectangleCollisionUtil.h>)
#include <org/allbinary/math/RectangleCollisionUtil.h>
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
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/input/RTSPlayerGameInput.h")
#include "org/allbinary/game/input/RTSPlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/LayerPositionFinderInterface.h")
#include "org/allbinary/game/input/LayerPositionFinderInterface.h"
#endif
#if __has_include("org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h")
#include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"
#endif

        #endif
    
