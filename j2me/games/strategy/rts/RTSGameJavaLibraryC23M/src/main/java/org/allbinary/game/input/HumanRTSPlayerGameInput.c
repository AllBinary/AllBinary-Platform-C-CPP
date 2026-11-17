/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot 
 *   
 */
// Generated Code Do Not Modify
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"
#include "org/allbinary/game/layer/MultiSelectPaintable.h"
#include "org/allbinary/game/layer/RTSGameStrings.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/RTSLayerInfoPaintable.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/input/motion/button/EndLevelNoBuildingSelectedTouchButtonsBuilder.h"
#include "org/allbinary/input/motion/button/EndLevelTouchButtonsBuilder.h"
#include "org/allbinary/input/motion/button/NoBuildingSelectedTouchButtonsBuilder.h"
#include "org/allbinary/input/motion/button/RTSTouchButtonsBuilder.h"
#include "org/allbinary/media/audio/SelectBuildingSound.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/paint/NullInitUpdatePaintable.h"
#include "org/allbinary/input/motion/button/TouchButtonsBuilderFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/RectangleCollisionUtil.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/input/RTSPlayerGameInput.h"

typedef struct HumanRTSPlayerGameInput HumanRTSPlayerGameInput;
struct HumanRTSPlayerGameInput {
    RTSPlayerGameInput base;
    BaseMotionGestureEventListener BaseMotionGestureEventListener_interface;
    bool isDragging;
    GameStateFactory* gameStateFactory;
    RectangleCollisionUtil* rectangleCollisionUtil;
    TouchMotionGestureFactory* touchMotionGestureFactory;
    MotionGestureInput* PRESSED;
    MotionGestureInput* RELEASED;
    TouchButtonsBuilderFactory* touchButtonsBuilderFactory;
    GameNotificationEvent* notYoursGameNotificationEvent;
    CollidableDestroyableDamageableLayer* selectedRtsLayer;
    GPoint* startPoint;
    GPoint* endPoint;
    const char* POSSIBLE;
    const char* AT;
    const char* METHOD;
    const char* ADDING;
    const char* SPACE;
    MultiSelectPaintable* multiSelectPaintable;
};


HumanRTSPlayerGameInput* HumanRTSPlayerGameInput_new(AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory* touchButtonsBuilderFactory);

void HumanRTSPlayerGameInput_init(HumanRTSPlayerGameInput* this, AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory* touchButtonsBuilderFactory);
void HumanRTSPlayerGameInput_setAllBinaryGameLayerManager(HumanRTSPlayerGameInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
static bool HumanRTSPlayerGameInput_processDraggingMotionInput(HumanRTSPlayerGameInput* this, AllBinaryLayerManager* layerManager);
static void HumanRTSPlayerGameInput_makeSelection(HumanRTSPlayerGameInput* this);
static void HumanRTSPlayerGameInput_processSelectionBoxMotionInput(HumanRTSPlayerGameInput* this, AllBinaryLayerManager* layerManager);
void HumanRTSPlayerGameInput_processMotionInput(HumanRTSPlayerGameInput* this, AllBinaryLayerManager* layerManager);
void HumanRTSPlayerGameInput_setSelectedRtsFormInput(HumanRTSPlayerGameInput* this, RTSFormInput* selectedRtsFormInput);
static void HumanRTSPlayerGameInput_updateFormForLayer(HumanRTSPlayerGameInput* this, RTSLayer* rtsLayer);
static void HumanRTSPlayerGameInput_updateForm(HumanRTSPlayerGameInput* this, ScrollSelectionForm* scrollSelectionForm, RTSFormInput* rtfFormInput);
void HumanRTSPlayerGameInput_setSelectedRTSLayer(HumanRTSPlayerGameInput* this, CollidableDestroyableDamageableLayer* rtSLayer, GeographicMapCellPosition* geographicMapCellPosition);
void HumanRTSPlayerGameInput_updatePaintable(HumanRTSPlayerGameInput* this);
void HumanRTSPlayerGameInput_paint(HumanRTSPlayerGameInput* this, Graphics* graphics);
void HumanRTSPlayerGameInput_onMotionGestureEvent(HumanRTSPlayerGameInput* this, MotionGestureEvent* motionGestureEvent);
void HumanRTSPlayerGameInput_onScrolledMotionGestureEvent(HumanRTSPlayerGameInput* this, MotionGestureEvent* motionGestureEvent);
static CollidableDestroyableDamageableLayer* HumanRTSPlayerGameInput_getSelectedRtsLayer(HumanRTSPlayerGameInput* this);
static void HumanRTSPlayerGameInput_setSelectedRtsLayer(HumanRTSPlayerGameInput* this, CollidableDestroyableDamageableLayer* selectedRtsLayer);

static void HumanRTSPlayerGameInput_initFields(HumanRTSPlayerGameInput* this) {
    this->isDragging = false;
    this->gameStateFactory = GameStateFactory_getInstance();
    this->rectangleCollisionUtil = RectangleCollisionUtil_getInstance();
    this->touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
    this->PRESSED = this->touchMotionGestureFactory->PRESSED;
    this->RELEASED = this->touchMotionGestureFactory->RELEASED;
    
    
    this->selectedRtsLayer = CollidableDestroyableDamageableLayer_getNullInstance();
    this->startPoint = PointFactory_getInstance()->ZERO_ZERO;
    this->endPoint = PointFactory_getInstance()->ZERO_ZERO;
    this->POSSIBLE = "Possible: ";
    this->AT = "At: ";
    this->METHOD = "makeSelection";
    this->ADDING = "Adding: ";
    this->SPACE = CommonSeps_getInstance()->SPACE;
    this->multiSelectPaintable = MultiSelectPaintable_new();
}


void HumanRTSPlayerGameInput_init(HumanRTSPlayerGameInput* this, AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory* touchButtonsBuilderFactory) {
        RTSPlayerGameInput_init(&this->base, gameCanvas, inputList, playerInputId, towerInfoPaintable, rtsPlayerLayerInterface, layerPositionFinderInterface, selectRTSLayerVisitorFactoryInterface);
        HumanRTSPlayerGameInput_initFields(this);
        this->touchButtonsBuilderFactory = touchButtonsBuilderFactory;
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        this->notYoursGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->NOT_YOURS, SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        BasicMotionGesturesHandler_addListenerInterface(BasicMotionGesturesHandler_getInstance(), this);
}

HumanRTSPlayerGameInput* HumanRTSPlayerGameInput_new(AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory* touchButtonsBuilderFactory) {
    HumanRTSPlayerGameInput* this = calloc(1, sizeof(HumanRTSPlayerGameInput));
    HumanRTSPlayerGameInput_init(this, gameCanvas, inputList, playerInputId, towerInfoPaintable, rtsPlayerLayerInterface, layerPositionFinderInterface, selectRTSLayerVisitorFactoryInterface, touchButtonsBuilderFactory);
    return this;
}


// throws Exception
void HumanRTSPlayerGameInput_setAllBinaryGameLayerManager(HumanRTSPlayerGameInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) allBinaryGameLayerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        GameNotificationEvent_setBasicColorP(this->notYoursGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
}


// throws Exception
static bool HumanRTSPlayerGameInput_processDraggingMotionInput(HumanRTSPlayerGameInput* this, AllBinaryLayerManager* layerManager) {
        MotionGestureEvent* motionGestureEvent = ((MotionGestureEvent*) JAVA_CALL(HumanRTSPlayerGameInput_getMotionGestureInputList(this), get, JAVA_CALL(HumanRTSPlayerGameInput_getMotionGestureInputList(this), size) - 1));
        MotionGestureInput* motionGestureInput = MotionGestureEvent_getMotionGesture(motionGestureEvent);
        RTSFormInput* rtsFormInput = HumanRTSPlayerGameInput_getSelectedRtsFormInput(this);
        if (motionGestureInput == this->PRESSED) {
            GPoint* point = MotionGestureEvent_getCurrentPoint(motionGestureEvent);
            if (JAVA_CALL(JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), getCurrentScrollSelectionForm), isInForm, point)) {
                this->isDragging = RTSFormInput_processSticky(rtsFormInput, HumanRTSPlayerGameInput_getSelectedRtsLayer(this), HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), layerManager, point);
            }
        } else if (motionGestureInput == this->RELEASED) {
            GPoint* point = MotionGestureEvent_getCurrentPoint(motionGestureEvent);
            if (JAVA_CALL(JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), getCurrentScrollSelectionForm), isInForm, point)) {
                RTSFormInput_processAtPoint(rtsFormInput, HumanRTSPlayerGameInput_getSelectedRtsLayer(this), HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), layerManager, point);
            } else if (RTSFormInput_isStickyItemSelected(rtsFormInput)) {
                RTSFormInput* previousRtsFormInput = rtsFormInput;
                HumanRTSPlayerGameInput_select(this, motionGestureEvent);
                JAVA_CALL(HumanRTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), selectAllPreselected);
                RTSFormInput_processAtPoint(previousRtsFormInput, HumanRTSPlayerGameInput_getSelectedRtsLayer(this), HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), layerManager, point);
                JAVA_CALL(HumanRTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), deselectAllPreselected);
            } else {
                HumanRTSPlayerGameInput_select(this, motionGestureEvent);
            }
            RTSFormInput_setStickyItemSelected(rtsFormInput, false);
            RTSFormInput_setSelectedStickyItem(rtsFormInput, ABCustomItem_getNullInstance());
            RTSFormInput_setSelectedStickyItemIndex(rtsFormInput, -1);
            return true;
        }
        return false;
}


static void HumanRTSPlayerGameInput_makeSelection(HumanRTSPlayerGameInput* this) {
        BasicArrayList* rtsLayerList = JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), getPlayerOwnedRTSLayers)->rtsLayerList;
        int32_t rectX1 = GPoint_getX(this->startPoint);
        int32_t rectY1 = GPoint_getY(this->startPoint);
        int32_t rectX2 = GPoint_getX(this->endPoint);
        int32_t rectY2 = GPoint_getY(this->endPoint);
        if (rectX1 > rectX2) {
            rectX2 = rectX1;
            rectX1 = GPoint_getX(this->endPoint);
        }
        if (rectY1 > rectY2) {
            rectY2 = rectY1;
            rectY1 = GPoint_getY(this->endPoint);
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->AT);
        StringMaker_appendint(stringBuffer, rectX1);
        StringMaker_append(stringBuffer, this->SPACE);
        StringMaker_appendint(stringBuffer, rectY1);
        StringMaker_append(stringBuffer, this->SPACE);
        StringMaker_appendint(stringBuffer, rectX2);
        StringMaker_append(stringBuffer, this->SPACE);
        StringMaker_appendint(stringBuffer, rectY2);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD);
        RTSLayer* rtsLayer = nullptr;
        for (int32_t index = BasicArrayList_size(rtsLayerList) - 1; index >= 0; index--) {
            rtsLayer = ((RTSLayer*) BasicArrayList_get(rtsLayerList, index));
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            ViewPositionBase* viewPosition = RTSLayer_getViewPosition(rtsLayer);
            StringMaker_append(stringBuffer, this->POSSIBLE);
            StringMaker_append(stringBuffer, RTSLayer_getName(rtsLayer));
            StringMaker_append(stringBuffer, this->SPACE);
            StringMaker_append(stringBuffer, this->AT);
            StringMaker_appendint(stringBuffer, ((int32_t) (ViewPositionBase_getX(viewPosition) + RTSLayer_getHalfWidth(rtsLayer))));
            StringMaker_append(stringBuffer, this->SPACE);
            StringMaker_appendint(stringBuffer, ((int32_t) (ViewPositionBase_getY(viewPosition) + RTSLayer_getHalfHeight(rtsLayer))));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD);
            if (RectangleCollisionUtil_isInside(this->rectangleCollisionUtil, rectX1, rectY1, rectX2, rectY2, ViewPositionBase_getX(viewPosition) + RTSLayer_getHalfWidth(rtsLayer), ViewPositionBase_getY(viewPosition) + RTSLayer_getHalfHeight(rtsLayer))) {
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->ADDING), append, RTSLayer_getName(rtsLayer)), toString), this, this->METHOD);
                RTSLayer_select(rtsLayer);
                JAVA_CALL(HumanRTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), addSelectedRTSLayer, rtsLayer);
            }
        }
        CollidableDestroyableDamageableLayer* gameLayer = JAVA_CALL(HumanRTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), getLastSelectedRtsLayer);
        if (gameLayer != CollidableDestroyableDamageableLayer_getNullInstance()) {
            RTSLayer* lastRTSLayer = ((RTSLayer*) gameLayer);
            if (RTSLayer_getScrollSelectionForm(lastRTSLayer) != ScrollSelectionForm_getNullScrollSelectionForm()) {
                HumanRTSPlayerGameInput_updateForm(this, RTSLayer_getScrollSelectionForm(lastRTSLayer), RTSLayer_getRTSFormInput(lastRTSLayer));
                HumanRTSPlayerGameInput_setSelectedRtsLayer(this, lastRTSLayer);
            }
        }
        HumanRTSPlayerGameInput_updatePaintable(this);
}


// throws Exception
static void HumanRTSPlayerGameInput_processSelectionBoxMotionInput(HumanRTSPlayerGameInput* this, AllBinaryLayerManager* layerManager) {
        for (int32_t index = JAVA_CALL(HumanRTSPlayerGameInput_getMotionGestureInputList(this), size) - 1; index >= 0; index--) {
            MotionGestureEvent* motionGestureEvent = ((MotionGestureEvent*) JAVA_CALL(HumanRTSPlayerGameInput_getMotionGestureInputList(this), get, index));
            MotionGestureInput* motionGestureInput = MotionGestureEvent_getMotionGesture(motionGestureEvent);
            GPoint* point = MotionGestureEvent_getCurrentPoint(motionGestureEvent);
            if (motionGestureInput == this->touchMotionGestureFactory->PRESSED) {
                this->startPoint = point;
                this->endPoint = point;
            } else if (motionGestureInput == this->touchMotionGestureFactory->RELEASED) {
                this->endPoint = point;
                HumanRTSPlayerGameInput_makeSelection(this);
                this->startPoint = PointFactory_getInstance()->ZERO_ZERO;
                this->endPoint = PointFactory_getInstance()->ZERO_ZERO;
            } else {
                this->endPoint = point;
            }
        }
}


// throws Exception
void HumanRTSPlayerGameInput_processMotionInput(HumanRTSPlayerGameInput* this, AllBinaryLayerManager* layerManager) {
        if (JAVA_CALL(HumanRTSPlayerGameInput_getMotionGestureInputList(this), size) > 0) {
            bool endDrag = HumanRTSPlayerGameInput_processDraggingMotionInput(this, layerManager);
            if (!this->isDragging) {
                HumanRTSPlayerGameInput_processSelectionBoxMotionInput(this, layerManager);
            }
            if (endDrag) {
                this->isDragging = false;
            }
        }
        JAVA_CALL(HumanRTSPlayerGameInput_getMotionGestureInputList(this), clear);
}


void HumanRTSPlayerGameInput_setSelectedRtsFormInput(HumanRTSPlayerGameInput* this, RTSFormInput* selectedRtsFormInput) {
        LogUtil* logUtil = LogUtil_getInstance();
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START), append, StringUtil_toString(StringUtil_getInstance(), selectedRtsFormInput)), toString), this, "setSelectedRtsFormInput");
        RTSPlayerGameInput_setSelectedRtsFormInput((&this->base), selectedRtsFormInput);
        HumanRTSPlayerGameInput_setSelectedRtsLayer(this, CollidableDestroyableDamageableLayer_getNullInstance());
}


static void HumanRTSPlayerGameInput_updateFormForLayer(HumanRTSPlayerGameInput* this, RTSLayer* rtsLayer) {
        ScrollSelectionForm* scrollSelectionForm = RTSLayer_getScrollSelectionForm(rtsLayer);
        if (scrollSelectionForm != ScrollSelectionForm_getNullScrollSelectionForm() && JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), getGroupInterface)[0] == RTSLayer_getGroupInterface(rtsLayer)[0]) {
            HumanRTSPlayerGameInput_updateForm(this, scrollSelectionForm, RTSLayer_getRTSFormInput(rtsLayer));
            JAVA_CALL(HumanRTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), setSelectedRTSLayer, CollidableDestroyableDamageableLayer_getNullInstance());
            HumanRTSPlayerGameInput_setSelectedRtsLayer(this, rtsLayer);
        } else {
            JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), setCurrentScrollSelectionForm, JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), getBuildingScrollSelectionForm));
            HumanRTSPlayerGameInput_setSelectedRtsFormInput(this, JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), getRTSFormInput));
            JAVA_CALL(HumanRTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), setSelectedRTSLayer, CollidableDestroyableDamageableLayer_getNullInstance());
        }
}


static void HumanRTSPlayerGameInput_updateForm(HumanRTSPlayerGameInput* this, ScrollSelectionForm* scrollSelectionForm, RTSFormInput* rtfFormInput) {
        JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), setCurrentScrollSelectionForm, scrollSelectionForm);
        HumanRTSPlayerGameInput_setSelectedRtsFormInput(this, rtfFormInput);
}


// throws Exception
void HumanRTSPlayerGameInput_setSelectedRTSLayer(HumanRTSPlayerGameInput* this, CollidableDestroyableDamageableLayer* rtSLayer, GeographicMapCellPosition* geographicMapCellPosition) {
        if (rtSLayer != CollidableDestroyableDamageableLayer_getNullInstance() && JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), getGroupInterface)[0] != CollidableDestroyableDamageableLayer_getGroupInterface(rtSLayer)[0]) {
            JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), add, ErrorSound_getInstance());
            GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->notYoursGameNotificationEvent);
            return;
        }
        AllBinaryGameCanvas* gameCanvas = HumanRTSPlayerGameInput_getGameCanvas(this);
        if (rtSLayer != CollidableDestroyableDamageableLayer_getNullInstance()) {
            JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), add, SelectBuildingSound_getInstance());
            RTSLayer* rtsLayer = ((RTSLayer*) rtSLayer);
            RTSLayer_select(rtsLayer);
            HumanRTSPlayerGameInput_updateFormForLayer(this, rtsLayer);
            if (AllBinaryGameCanvas_getGameState(gameCanvas) == this->gameStateFactory->PLAYING_GAME_STATE) {
                if (RTSLayer_isSelfUpgradeable(rtsLayer)) {
                    AllBinaryGameCanvas_updateCurrentTouchInputFactory(gameCanvas, RTSTouchButtonsBuilder_new());
                } else {
                    AllBinaryGameCanvas_updateCurrentTouchInputFactory(gameCanvas, NoBuildingSelectedTouchButtonsBuilder_new());
                }
            } else {
                EndLevelTouchButtonsBuilder* endLevelTouchButtonsBuilder = EndLevelTouchButtonsBuilder_new();
                if (this->touchButtonsBuilderFactory != nullptr) {
                    EndLevelTouchButtonsBuilder_add(endLevelTouchButtonsBuilder, TouchButtonsBuilderFactory_getInstance(this->touchButtonsBuilderFactory));
                }
                AllBinaryGameCanvas_updateCurrentTouchInputFactory(gameCanvas, endLevelTouchButtonsBuilder);
            }
        } else {
            LogUtil_putF(this->logUtil, "Set Player Default Form", this, "setSelectedRTSLayer");
            JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), setCurrentScrollSelectionForm, JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), getBuildingScrollSelectionForm));
            HumanRTSPlayerGameInput_setSelectedRtsFormInput(this, JAVA_CALL(HumanRTSPlayerGameInput_getRtsPlayerLayerInterface(this), getRTSFormInput));
            JAVA_CALL(HumanRTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), setSelectedRTSLayer, CollidableDestroyableDamageableLayer_getNullInstance());
            if (AllBinaryGameCanvas_getGameState(gameCanvas) == this->gameStateFactory->PLAYING_GAME_STATE) {
                AllBinaryGameCanvas_updateCurrentTouchInputFactory(gameCanvas, NoBuildingSelectedTouchButtonsBuilder_new());
            } else {
                EndLevelNoBuildingSelectedTouchButtonsBuilder* endLevelNoBuildingSelectedTouchButtonsBuilder = EndLevelNoBuildingSelectedTouchButtonsBuilder_new();
                if (this->touchButtonsBuilderFactory != nullptr) {
                    EndLevelNoBuildingSelectedTouchButtonsBuilder_add(endLevelNoBuildingSelectedTouchButtonsBuilder, TouchButtonsBuilderFactory_getInstance(this->touchButtonsBuilderFactory));
                }
                AllBinaryGameCanvas_updateCurrentTouchInputFactory(gameCanvas, endLevelNoBuildingSelectedTouchButtonsBuilder);
            }
        }
        JAVA_CALL(HumanRTSPlayerGameInput_getSelectedRtsFormInput(this), setSelectedGeographicCellPosition, geographicMapCellPosition);
        JAVA_CALL(HumanRTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), setSelectedRTSLayer, rtSLayer);
        HumanRTSPlayerGameInput_updatePaintable(this);
}


void HumanRTSPlayerGameInput_updatePaintable(HumanRTSPlayerGameInput* this) {
        BasicArrayList* list = JAVA_CALL(HumanRTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), getSelectedBasicArrayList);
        if (BasicArrayList_size(list) > 1) {
            GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) HumanRTSPlayerGameInput_getGameCanvas(this));
            BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
            MultiSelectPaintable_setBasicColorP(this->multiSelectPaintable, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
            MultiSelectPaintable_update(this->multiSelectPaintable, list);
            JAVA_CALL(HumanRTSPlayerGameInput_getRTSLayerInfoPaintable(this), updateRTSLayerInfoSelection, this->multiSelectPaintable);
        } else if (BasicArrayList_size(list) == 1) {
            RTSLayer* rtsLayer = ((RTSLayer*) BasicArrayList_get(list, 0));
            JAVA_CALL(HumanRTSPlayerGameInput_getRTSLayerInfoPaintable(this), updateRTSLayerInfoSelection, RTSLayer_createHudPaintable(rtsLayer));
        } else {
            JAVA_CALL(HumanRTSPlayerGameInput_getRTSLayerInfoPaintable(this), updateRTSLayerInfoInit, NullInitUpdatePaintable_getInstance());
        }
}


void HumanRTSPlayerGameInput_paint(HumanRTSPlayerGameInput* this, Graphics* graphics) {
        RTSPlayerGameInput_paint((&this->base), graphics);
        if (this->startPoint != PointFactory_getInstance()->ZERO_ZERO && this->endPoint != PointFactory_getInstance()->ZERO_ZERO) {
            Graphics_setColor(graphics, JAVA_CALL(BasicColorFactory_getInstance()->RED, intValue));
            int32_t rectX1 = GPoint_getX(this->startPoint);
            int32_t rectY1 = GPoint_getY(this->startPoint);
            int32_t rectX2 = GPoint_getX(this->endPoint);
            int32_t rectY2 = GPoint_getY(this->endPoint);
            if (rectX1 > rectX2) {
                rectX2 = rectX1;
                rectX1 = GPoint_getX(this->endPoint);
            }
            if (rectY1 > rectY2) {
                rectY2 = rectY1;
                rectY1 = GPoint_getY(this->endPoint);
            }
            Graphics_drawRect(graphics, rectX1, rectY1, rectX2 - rectX1, rectY2 - rectY1);
        }
}


void HumanRTSPlayerGameInput_onMotionGestureEvent(HumanRTSPlayerGameInput* this, MotionGestureEvent* motionGestureEvent) {
        JAVA_CALL(HumanRTSPlayerGameInput_getMotionGestureInputList(this), add, motionGestureEvent);
}


void HumanRTSPlayerGameInput_onScrolledMotionGestureEvent(HumanRTSPlayerGameInput* this, MotionGestureEvent* motionGestureEvent) {
}


static CollidableDestroyableDamageableLayer* HumanRTSPlayerGameInput_getSelectedRtsLayer(HumanRTSPlayerGameInput* this) {
        return this->selectedRtsLayer;
}


static void HumanRTSPlayerGameInput_setSelectedRtsLayer(HumanRTSPlayerGameInput* this, CollidableDestroyableDamageableLayer* selectedRtsLayer) {
        this->selectedRtsLayer = selectedRtsLayer;
}

