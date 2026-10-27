
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/layer/MultiSelectPaintable.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerInfoPaintable.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/input/motion/button/EndLevelNoBuildingSelectedTouchButtonsBuilder.h>

      
#include <org/allbinary/input/motion/button/EndLevelTouchButtonsBuilder.h>

      
#include <org/allbinary/input/motion/button/NoBuildingSelectedTouchButtonsBuilder.h>

      
#include <org/allbinary/input/motion/button/RTSTouchButtonsBuilder.h>

      
#include <org/allbinary/media/audio/SelectBuildingSound.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/paint/NullInitUpdatePaintable.h>

      
#include <org/allbinary/input/motion/button/TouchButtonsBuilderFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/RTSPlayerGameInput.h"
#include "org/allbinary/game/input/LayerPositionFinderInterface.h"
#include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"

class HumanRTSPlayerGameInput: public RTSPlayerGameInput, public BaseMotionGestureEventListener {

    private: bool isDragging = false;

    protected: GameStateFactory* gameStateFactory = GameStateFactory::getInstance();

    private: RectangleCollisionUtil* rectangleCollisionUtil = RectangleCollisionUtil::getInstance();

    private: TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory::getInstance();

    private: MotionGestureInput* PRESSED = this->touchMotionGestureFactory->PRESSED;

    private: MotionGestureInput* RELEASED = this->touchMotionGestureFactory->RELEASED;

    private: TouchButtonsBuilderFactory* touchButtonsBuilderFactory;

    private: GameNotificationEvent* notYoursGameNotificationEvent;

    private: CollidableDestroyableDamageableLayer* selectedRtsLayer = CollidableDestroyableDamageableLayer::getNullInstance();

public: HumanRTSPlayerGameInput(AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory* touchButtonsBuilderFactory);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    private: bool processDraggingMotionInput(AllBinaryLayerManager* layerManager);

    private: GPoint* startPoint = PointFactory::getInstance()->ZERO_ZERO;

    private: GPoint* endPoint = PointFactory::getInstance()->ZERO_ZERO;

    const std::string POSSIBLE = "Possible: ";

    const std::string AT = "At: ";

    const std::string METHOD = "makeSelection";

    const std::string ADDING = "Adding: ";

    const std::string SPACE = CommonSeps::getInstance()->SPACE;

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

    private: MultiSelectPaintable* multiSelectPaintable = new MultiSelectPaintable();

    public: void updatePaintable();

    public: void paint(Graphics* graphics);

    public: void onMotionGestureEvent(MotionGestureEvent* motionGestureEvent);

    public: void onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent);

    private: CollidableDestroyableDamageableLayer* getSelectedRtsLayer();

    private: void setSelectedRtsLayer(CollidableDestroyableDamageableLayer* selectedRtsLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_H
