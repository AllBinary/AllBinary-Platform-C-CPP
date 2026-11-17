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
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/RTSLayerInfoPaintable.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/form/NullRTSFormInputFactory.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/layer/NullRTSLayer.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/game/input/PlayerGameInput.h"

typedef struct RTSPlayerGameInput RTSPlayerGameInput;
struct RTSPlayerGameInput {
    PlayerGameInput base;
    GameInputProcessor** inputProcessorArray;
    GameInputProcessor** removeInputProcessorArray;
    BasicArrayList* inputList;
    bool isSingleKeyProcessing;
    AllBinaryGameCanvas* gameCanvas;
    BasicArrayList* motionGestureInputList;
    ScrollMapPlayerGameInput* scrollPlayerGameInput;
    SelectedRTSLayersPlayerGameInput* selectedRTSLayerPlayerGameInput;
    RTSLayerInfoPaintable* towerInfoPaintable;
    RTSPlayerLayerInterface* rtsPlayerLayerInterface;
    LayerPositionFinderInterface* layerPositionFinderInterface;
    RTSFormInput* selectedRtsFormInput;
};


RTSPlayerGameInput* RTSPlayerGameInput_new(AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface);

void RTSPlayerGameInput_init(RTSPlayerGameInput* this, AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface);
void RTSPlayerGameInput_setAllBinaryGameLayerManager(RTSPlayerGameInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void RTSPlayerGameInput_onDisplayChangeEvent(RTSPlayerGameInput* this, DisplayChangeEvent* displayChangeEvent);
void RTSPlayerGameInput_left(RTSPlayerGameInput* this);
void RTSPlayerGameInput_right(RTSPlayerGameInput* this);
void RTSPlayerGameInput_initInputProcessors(RTSPlayerGameInput* this);
void RTSPlayerGameInput_processInput(RTSPlayerGameInput* this, AllBinaryLayerManager* layerManager);
void RTSPlayerGameInput_processMotionInput(RTSPlayerGameInput* this, AllBinaryLayerManager* layerManager);
void RTSPlayerGameInput_select(RTSPlayerGameInput* this, MotionGestureEvent* motionGestureEvent);
void RTSPlayerGameInput_setSelectedRTSLayer(RTSPlayerGameInput* this, CollidableDestroyableDamageableLayer* rtsLayer, GeographicMapCellPosition* geographicMapCellPosition);
void RTSPlayerGameInput_paint(RTSPlayerGameInput* this, Graphics* graphics);
void RTSPlayerGameInput_updatePaintable(RTSPlayerGameInput* this);
SelectedRTSLayersPlayerGameInput* RTSPlayerGameInput_getSelectedBuildingPlayerGameInput(RTSPlayerGameInput* this);
RTSFormInput* RTSPlayerGameInput_getSelectedRtsFormInput(RTSPlayerGameInput* this);
void RTSPlayerGameInput_setSelectedRtsFormInput(RTSPlayerGameInput* this, RTSFormInput* selectedRtsFormInput);
RTSPlayerLayerInterface* RTSPlayerGameInput_getRtsPlayerLayerInterface(RTSPlayerGameInput* this);
RTSLayerInfoPaintable* RTSPlayerGameInput_getRTSLayerInfoPaintable(RTSPlayerGameInput* this);
BasicArrayList* RTSPlayerGameInput_getMotionGestureInputList(RTSPlayerGameInput* this);
AllBinaryGameCanvas* RTSPlayerGameInput_getGameCanvas(RTSPlayerGameInput* this);
bool RTSPlayerGameInput_isIsSingleKeyProcessing(RTSPlayerGameInput* this);
ScrollMapPlayerGameInput* RTSPlayerGameInput_getScrollPlayerGameInput(RTSPlayerGameInput* this);

static void RTSPlayerGameInput_initFields(RTSPlayerGameInput* this) {
    this->inputProcessorArray = ((GameInputProcessor**) java_array_new(sizeof(GameInputProcessor*), InputFactory_getInstance()->MAX));
    this->removeInputProcessorArray = ((GameInputProcessor**) java_array_new(sizeof(GameInputProcessor*), InputFactory_getInstance()->MAX));
    
    this->isSingleKeyProcessing = Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS) || Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_PRESS);
    
    this->motionGestureInputList = BasicArrayListD_new();
    
    
    
    
    
    this->selectedRtsFormInput = NullRTSFormInputFactory_getInstance();
}


void RTSPlayerGameInput_init(RTSPlayerGameInput* this, AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface) {
        PlayerGameInput_init(&this->base, inputList, BasicArrayListD_new(), playerInputId);
        RTSPlayerGameInput_initFields(this);
        RTSPlayerGameInput_initInputProcessors(this);
        this->gameCanvas = gameCanvas;
        this->inputList = inputList;
        this->towerInfoPaintable = towerInfoPaintable;
        this->rtsPlayerLayerInterface = rtsPlayerLayerInterface;
        this->selectedRTSLayerPlayerGameInput = SelectedRTSLayersPlayerGameInput_new(RTSPlayerGameInput_getRTSLayerInfoPaintable(this), RTSPlayerGameInput_getRtsPlayerLayerInterface(this), this->inputList, playerInputId, selectRTSLayerVisitorFactoryInterface);
        if (this->rtsPlayerLayerInterface != NullRTSLayer_NULL_RTS_LAYER) {
            RTSPlayerGameInput_setSelectedRtsFormInput(this, RTSPlayerLayerInterface_getRTSFormInput(this->rtsPlayerLayerInterface));
        }
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) AllBinaryGameCanvas_getLayerManager(this->gameCanvas));
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        this->scrollPlayerGameInput = ScrollMapPlayerGameInput_new(geographicMapInterface, this->inputList, playerInputId);
        this->layerPositionFinderInterface = layerPositionFinderInterface;
}

RTSPlayerGameInput* RTSPlayerGameInput_new(AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface) {
    RTSPlayerGameInput* this = calloc(1, sizeof(RTSPlayerGameInput));
    RTSPlayerGameInput_init(this, gameCanvas, inputList, playerInputId, towerInfoPaintable, rtsPlayerLayerInterface, layerPositionFinderInterface, selectRTSLayerVisitorFactoryInterface);
    return this;
}


// throws Exception
void RTSPlayerGameInput_setAllBinaryGameLayerManager(RTSPlayerGameInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        SelectedRTSLayersPlayerGameInput_setAllBinaryGameLayerManager(this->selectedRTSLayerPlayerGameInput, allBinaryGameLayerManager);
        if (this->selectedRtsFormInput != NullRTSFormInputFactory_getInstance()) {
            RTSFormInput_setAllBinaryGameLayerManager(this->selectedRtsFormInput, allBinaryGameLayerManager);
        }
}


void RTSPlayerGameInput_onDisplayChangeEvent(RTSPlayerGameInput* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, "onDisplayChangeEvent");
            JAVA_CALL(RTSPlayerGameInput_getRTSLayerInfoPaintable(this), update);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "onDisplayChangeEvent", e);
        } JAVA_END_TRY;
}


// throws Exception
void RTSPlayerGameInput_left(RTSPlayerGameInput* this) {
        JAVA_CALL(RTSPlayerLayerInterface_getCurrentScrollSelectionForm(this->rtsPlayerLayerInterface), processInputKey, Canvas_LEFT);
}


// throws Exception
void RTSPlayerGameInput_right(RTSPlayerGameInput* this) {
        JAVA_CALL(RTSPlayerLayerInterface_getCurrentScrollSelectionForm(this->rtsPlayerLayerInterface), processInputKey, Canvas_RIGHT);
}


void RTSPlayerGameInput_initInputProcessors(RTSPlayerGameInput* this) {
        this->inputProcessorArray[Canvas_LEFT] = RTSPlayerLeftGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_KEY_NUM0] = this->inputProcessorArray[Canvas_LEFT];
        this->inputProcessorArray[Canvas_RIGHT] = RTSPlayerRightGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_KEY_POUND] = this->inputProcessorArray[Canvas_RIGHT];
        this->removeInputProcessorArray[Canvas_KEY_NUM1] = RTSPlayerFireGameInputProcessor_new(this);
        this->removeInputProcessorArray[Canvas_KEY_NUM3] = this->removeInputProcessorArray[Canvas_KEY_NUM1];
        this->removeInputProcessorArray[Canvas_KEY_NUM3] = this->removeInputProcessorArray[Canvas_KEY_NUM1];
        this->removeInputProcessorArray[Canvas_LEFT] = this->removeInputProcessorArray[Canvas_KEY_NUM1];
        this->removeInputProcessorArray[Canvas_RIGHT] = this->removeInputProcessorArray[Canvas_KEY_NUM1];
        this->removeInputProcessorArray[Canvas_KEY_NUM0] = this->removeInputProcessorArray[Canvas_KEY_NUM1];
        this->removeInputProcessorArray[Canvas_KEY_POUND] = this->removeInputProcessorArray[Canvas_KEY_NUM1];
        GameInputProcessorUtil_init(this->inputProcessorArray);
        GameInputProcessorUtil_init(this->removeInputProcessorArray);
}


// throws Exception
void RTSPlayerGameInput_processInput(RTSPlayerGameInput* this, AllBinaryLayerManager* layerManager) {
        JAVA_TRY {
            RTSPlayerGameInput_processMotionInput(this, layerManager);
            int32_t size = BasicArrayList_size(this->inputList);
            int32_t key = 0;
            for (int32_t index = 0; index < size; index++) {
                GameKeyEvent* gameKeyEvent = ((GameKeyEvent*) BasicArrayList_get(this->inputList, index));
                key = GameKeyEvent_getKey(gameKeyEvent);
                JAVA_CALL(RTSPlayerGameInput_getScrollPlayerGameInput(this), processInputKey, key);
                JAVA_CALL(RTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), processInputKey, key);
                JAVA_CALL(this->inputProcessorArray[key], processEvent, layerManager, gameKeyEvent);
                JAVA_CALL(this->removeInputProcessorArray[key], processEvent, layerManager, gameKeyEvent);
            }
            if (RTSPlayerGameInput_isIsSingleKeyProcessing(this)) {
                RTSPlayerGameInput_clear(this);
            } else {
                RTSPlayerGameInput_update(this);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->gameInputStrings->PROCESS_INPUT, e);
        } JAVA_END_TRY;
}


// throws Exception
void RTSPlayerGameInput_processMotionInput(RTSPlayerGameInput* this, AllBinaryLayerManager* layerManager) {
}


// throws Exception
void RTSPlayerGameInput_select(RTSPlayerGameInput* this, MotionGestureEvent* motionGestureEvent) {
        GPoint* point = MotionGestureEvent_getCurrentPoint(motionGestureEvent);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) AllBinaryGameCanvas_getLayerManager(this->gameCanvas));
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        int32_t x = GPoint_getX(point) + AllBinaryTiledLayer_getXP(allBinaryTiledLayer);
        int32_t y = GPoint_getY(point) + AllBinaryTiledLayer_getYP(allBinaryTiledLayer);
        GeographicMapCellPosition* geographicMapCellPosition = BasicGeographicMap_getCellPositionAtXYNoThrow(geographicMapInterface, x, y);
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
            AllBinaryLayer* layer = LayerPositionFinderInterface_getLayerInterface(this->layerPositionFinderInterface, geographicMapCellPosition);
            if (layer == AllBinaryLayer_NULL_ALLBINARY_LAYER) {
                layer = CollidableDestroyableDamageableLayer_getNullInstance();
            } else {
                geographicMapCellPosition = BasicGeographicMap_getCellPositionAtXY(geographicMapInterface, AllBinaryLayer_getXP(layer), AllBinaryLayer_getYP(layer));
            }
            CollidableDestroyableDamageableLayer* foundRTSLayer = ((CollidableDestroyableDamageableLayer*) layer);
            RTSPlayerGameInput_setSelectedRTSLayer(this, foundRTSLayer, geographicMapCellPosition);
        } else {
            CommonLabels* commonLabels = CommonLabels_getInstance();
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Off Of Map -"), append, commonLabels->WIDTH_LABEL), appendint, ((int32_t) AllBinaryTiledLayer_getWidth(allBinaryTiledLayer))), append, commonLabels->HEIGHT_LABEL), appendint, ((int32_t) AllBinaryTiledLayer_getHeight(allBinaryTiledLayer))), toString), this, "select");
        }
}


// throws Exception
void RTSPlayerGameInput_setSelectedRTSLayer(RTSPlayerGameInput* this, CollidableDestroyableDamageableLayer* rtsLayer, GeographicMapCellPosition* geographicMapCellPosition) {
        JAVA_CALL(RTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), setSelectedRTSLayer, rtsLayer);
}


void RTSPlayerGameInput_paint(RTSPlayerGameInput* this, Graphics* graphics) {
        GeographicMapCellPosition* geographicMapCellPosition = JAVA_CALL(RTSPlayerGameInput_getSelectedRtsFormInput(this), getSelectedGeographicCellPosition);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) AllBinaryGameCanvas_getLayerManager(this->gameCanvas));
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        Graphics_setColor(graphics, JAVA_CALL(BasicColorFactory_getInstance()->GREEN, intValue));
        BasicArrayList* list = JAVA_CALL(RTSPlayerGameInput_getSelectedBuildingPlayerGameInput(this), getPaintSelectedRTSLayersList);
        int32_t width = 0;
        int32_t height = 0;
        if (BasicArrayList_size(list) > 0) {
            for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
                RTSLayer* rtsLayer = ((RTSLayer*) BasicArrayList_get(list, index));
                width = CollidableDestroyableDamageableLayer_getWidth(rtsLayer);
                height = CollidableDestroyableDamageableLayer_getHeight(rtsLayer);
                Graphics_drawRect(graphics, CollidableDestroyableDamageableLayer_getXP(rtsLayer) - AllBinaryTiledLayer_getXP(allBinaryTiledLayer), CollidableDestroyableDamageableLayer_getYP(rtsLayer) - AllBinaryTiledLayer_getYP(allBinaryTiledLayer), width, height);
            }
        } else if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            GPoint* point = GeographicMapCellPosition_getPoint(geographicMapCellPosition);
            width = AllBinaryTiledLayer_getCellWidth(allBinaryTiledLayer);
            height = AllBinaryTiledLayer_getCellHeight(allBinaryTiledLayer);
            Graphics_drawRect(graphics, GPoint_getX(point) - AllBinaryTiledLayer_getXP(allBinaryTiledLayer), GPoint_getY(point) - AllBinaryTiledLayer_getYP(allBinaryTiledLayer), width, height);
        }
}


void RTSPlayerGameInput_updatePaintable(RTSPlayerGameInput* this) {
}


SelectedRTSLayersPlayerGameInput* RTSPlayerGameInput_getSelectedBuildingPlayerGameInput(RTSPlayerGameInput* this) {
        return this->selectedRTSLayerPlayerGameInput;
}


RTSFormInput* RTSPlayerGameInput_getSelectedRtsFormInput(RTSPlayerGameInput* this) {
        return this->selectedRtsFormInput;
}


void RTSPlayerGameInput_setSelectedRtsFormInput(RTSPlayerGameInput* this, RTSFormInput* selectedRtsFormInput) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "RTSFormInput: "), append, StringUtil_toString(StringUtil_getInstance(), selectedRtsFormInput)), toString), this, "setSelectedRtsFormInput");
        this->selectedRtsFormInput = selectedRtsFormInput;
}


RTSPlayerLayerInterface* RTSPlayerGameInput_getRtsPlayerLayerInterface(RTSPlayerGameInput* this) {
        return this->rtsPlayerLayerInterface;
}


RTSLayerInfoPaintable* RTSPlayerGameInput_getRTSLayerInfoPaintable(RTSPlayerGameInput* this) {
        return this->towerInfoPaintable;
}


BasicArrayList* RTSPlayerGameInput_getMotionGestureInputList(RTSPlayerGameInput* this) {
        return this->motionGestureInputList;
}


AllBinaryGameCanvas* RTSPlayerGameInput_getGameCanvas(RTSPlayerGameInput* this) {
        return this->gameCanvas;
}


bool RTSPlayerGameInput_isIsSingleKeyProcessing(RTSPlayerGameInput* this) {
        return this->isSingleKeyProcessing;
}


ScrollMapPlayerGameInput* RTSPlayerGameInput_getScrollPlayerGameInput(RTSPlayerGameInput* this) {
        return this->scrollPlayerGameInput;
}

