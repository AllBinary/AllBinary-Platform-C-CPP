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
#include "org/allbinary/game/layer/RTSGameStrings.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/RTSLayerInfoPaintable.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/capital/Capital.h"
#include "org/allbinary/media/audio/DowngradeSound.h"
#include "org/allbinary/media/audio/UpgradeSound.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/game/input/PlayerGameInput.h"

typedef struct SelectedRTSLayersPlayerGameInput SelectedRTSLayersPlayerGameInput;
struct SelectedRTSLayersPlayerGameInput {
    PlayerGameInput base;
    GameInputProcessor** inputProcessorArray;
    BasicArrayList* list;
    bool isSingleKeyProcessing;
    BasicArrayList* selectedRTSLayersList;
    BasicArrayList* preSelectedRTSLayersList;
    BasicArrayList* paintSelectedRTSLayersList;
    RTSPlayerLayerInterface* rtsPlayerLayerInterface;
    Visitor* selectRTSLayerVisitorInterface;
    GameNotificationEvent* upgradeGameNotificationEvent;
    GameNotificationEvent* noMoneyGameNotificationEvent;
    GameNotificationEvent* downgradeGameNotificationEvent;
};


SelectedRTSLayersPlayerGameInput* SelectedRTSLayersPlayerGameInput_new(RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, BasicArrayList* list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface);

void SelectedRTSLayersPlayerGameInput_init(SelectedRTSLayersPlayerGameInput* this, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, BasicArrayList* list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface);
void SelectedRTSLayersPlayerGameInput_setAllBinaryGameLayerManager(SelectedRTSLayersPlayerGameInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
bool SelectedRTSLayersPlayerGameInput_isSelected(SelectedRTSLayersPlayerGameInput* this, RTSLayer* rtsLayer);
void SelectedRTSLayersPlayerGameInput_upgrade(SelectedRTSLayersPlayerGameInput* this);
void SelectedRTSLayersPlayerGameInput_downgrade(SelectedRTSLayersPlayerGameInput* this);
void SelectedRTSLayersPlayerGameInput_initInputProcessors(SelectedRTSLayersPlayerGameInput* this);
void SelectedRTSLayersPlayerGameInput_processInputKey(SelectedRTSLayersPlayerGameInput* this, int32_t key);
void SelectedRTSLayersPlayerGameInput_processInput(SelectedRTSLayersPlayerGameInput* this, AllBinaryLayerManager* layerManager);
BasicArrayList* SelectedRTSLayersPlayerGameInput_getSelectedBasicArrayList(SelectedRTSLayersPlayerGameInput* this);
void SelectedRTSLayersPlayerGameInput_addSelectedRTSLayer(SelectedRTSLayersPlayerGameInput* this, RTSLayer* selectedLayer);
void SelectedRTSLayersPlayerGameInput_setSelectedRTSLayer(SelectedRTSLayersPlayerGameInput* this, CollidableDestroyableDamageableLayer* selectedLayer);
CollidableDestroyableDamageableLayer* SelectedRTSLayersPlayerGameInput_getLastSelectedRtsLayer(SelectedRTSLayersPlayerGameInput* this);
void SelectedRTSLayersPlayerGameInput_selectAllPreselected(SelectedRTSLayersPlayerGameInput* this);
void SelectedRTSLayersPlayerGameInput_deselectAllPreselected(SelectedRTSLayersPlayerGameInput* this);
void SelectedRTSLayersPlayerGameInput_deselectAll(SelectedRTSLayersPlayerGameInput* this);
bool SelectedRTSLayersPlayerGameInput_isAnyRTSLayerSelected(SelectedRTSLayersPlayerGameInput* this);
BasicArrayList* SelectedRTSLayersPlayerGameInput_getPaintSelectedRTSLayersList(SelectedRTSLayersPlayerGameInput* this);
BasicArrayList* SelectedRTSLayersPlayerGameInput_getPreSelectedRTSLayersList(SelectedRTSLayersPlayerGameInput* this);

static void SelectedRTSLayersPlayerGameInput_initFields(SelectedRTSLayersPlayerGameInput* this) {
    this->inputProcessorArray = ((GameInputProcessor**) java_array_new(sizeof(GameInputProcessor*), InputFactory_getInstance()->MAX));
    
    this->isSingleKeyProcessing = Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS) || Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_PRESS);
    this->selectedRTSLayersList = BasicArrayListD_new();
    this->preSelectedRTSLayersList = BasicArrayListD_new();
    this->paintSelectedRTSLayersList = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    
    
    
    
    
}


void SelectedRTSLayersPlayerGameInput_init(SelectedRTSLayersPlayerGameInput* this, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, BasicArrayList* list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface) {
        PlayerGameInput_init(&this->base, list, BasicArrayListD_new(), playerInputId);
        SelectedRTSLayersPlayerGameInput_initFields(this);
        SelectedRTSLayersPlayerGameInput_initInputProcessors(this);
        this->rtsPlayerLayerInterface = rtsPlayerLayerInterface;
        this->list = list;
        this->selectRTSLayerVisitorInterface = SelectRTSLayerVisitorFactoryInterface_create(selectRTSLayerVisitorFactoryInterface, this);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        this->upgradeGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->UPGRADE, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->noMoneyGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->NO_MONEY, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
        this->downgradeGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->DOWNGRADE, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), basicColorFactory->PINK, BooleanFactory_getInstance()->FALSE);
}

SelectedRTSLayersPlayerGameInput* SelectedRTSLayersPlayerGameInput_new(RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, BasicArrayList* list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface) {
    SelectedRTSLayersPlayerGameInput* this = calloc(1, sizeof(SelectedRTSLayersPlayerGameInput));
    SelectedRTSLayersPlayerGameInput_init(this, towerInfoPaintable, rtsPlayerLayerInterface, list, playerInputId, selectRTSLayerVisitorFactoryInterface);
    return this;
}


// throws Exception
void SelectedRTSLayersPlayerGameInput_setAllBinaryGameLayerManager(SelectedRTSLayersPlayerGameInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) allBinaryGameLayerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        GameNotificationEvent_setBasicColorP(this->upgradeGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->noMoneyGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
        GameNotificationEvent_setBasicColorP(this->downgradeGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
}


bool SelectedRTSLayersPlayerGameInput_isSelected(SelectedRTSLayersPlayerGameInput* this, RTSLayer* rtsLayer) {
        if (BasicArrayList_contains(this->selectedRTSLayersList, rtsLayer)) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
void SelectedRTSLayersPlayerGameInput_upgrade(SelectedRTSLayersPlayerGameInput* this) {
        bool anyChanged = false;
        for (int32_t index = BasicArrayList_size(this->selectedRTSLayersList) - 1; index >= 0; index--) {
            RTSLayer* rtsLayer = ((RTSLayer*) BasicArrayList_get(this->selectedRTSLayersList, index));
            if (RTSLayer_isUpgradeable(rtsLayer)) {
                Capital* capital = RTSPlayerLayerInterface_getCapital(this->rtsPlayerLayerInterface);
                int32_t upgradeCost = RTSLayer_getUpgradeCost(rtsLayer);
                if (upgradeCost <= Capital_getTotalMoney(capital)) {
                    anyChanged = true;
                    RTSPlayerLayerInterface_add(this->rtsPlayerLayerInterface, UpgradeSound_getInstance());
                    RTSLayer_upgrade(rtsLayer);
                    Capital_removeMoney(capital, upgradeCost);
                    if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(this->rtsPlayerLayerInterface)) {
                        GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->upgradeGameNotificationEvent);
                    }
                } else {
                    RTSPlayerLayerInterface_add(this->rtsPlayerLayerInterface, ErrorSound_getInstance());
                    if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(this->rtsPlayerLayerInterface)) {
                        GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->noMoneyGameNotificationEvent);
                    }
                }
            }
        }
        if (anyChanged) {
            RTSPlayerGameInput* rtsPlayerGameInput = (((RTSPlayerGameInput*) RTSPlayerLayerInterface_getPlayerGameInput(this->rtsPlayerLayerInterface)));
            RTSPlayerGameInput_updatePaintable(rtsPlayerGameInput);
        }
}


// throws Exception
void SelectedRTSLayersPlayerGameInput_downgrade(SelectedRTSLayersPlayerGameInput* this) {
        bool anyChanged = false;
        for (int32_t index = BasicArrayList_size(this->selectedRTSLayersList); --index >= 0; ) {
            RTSLayer* rtsLayer = ((RTSLayer*) BasicArrayList_get(this->selectedRTSLayersList, index));
            if (RTSLayer_isDowngradeable(rtsLayer)) {
                anyChanged = true;
                RTSPlayerLayerInterface_add(this->rtsPlayerLayerInterface, DowngradeSound_getInstance());
                int32_t downgradeCost = RTSLayer_getDowngradeCost(rtsLayer);
                RTSLayer_downgrade(rtsLayer);
                Capital* capital = RTSPlayerLayerInterface_getCapital(this->rtsPlayerLayerInterface);
                Capital_addMoney(capital, downgradeCost);
                if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(this->rtsPlayerLayerInterface)) {
                    GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->downgradeGameNotificationEvent);
                }
            }
        }
        if (anyChanged) {
            RTSPlayerGameInput* rtsPlayerGameInput = (((RTSPlayerGameInput*) RTSPlayerLayerInterface_getPlayerGameInput(this->rtsPlayerLayerInterface)));
            RTSPlayerGameInput_updatePaintable(rtsPlayerGameInput);
        }
}


void SelectedRTSLayersPlayerGameInput_initInputProcessors(SelectedRTSLayersPlayerGameInput* this) {
        this->inputProcessorArray[Canvas_KEY_NUM1] = SelectedRTSLayersPlayerUpgradeGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_KEY_NUM3] = SelectedRTSLayersPlayerDowngradeGameInputProcessor_new(this);
        GameInputProcessorUtil_init(this->inputProcessorArray);
}


// throws Exception
void SelectedRTSLayersPlayerGameInput_processInputKey(SelectedRTSLayersPlayerGameInput* this, int32_t key) {
        if (this->selectedRTSLayersList != nullptr) {
            JAVA_CALL(this->inputProcessorArray[key], processEvent, AllBinaryGameLayerManager_getNullInstance(), GameKeyEvent_NONE);
        }
}


// throws Exception
void SelectedRTSLayersPlayerGameInput_processInput(SelectedRTSLayersPlayerGameInput* this, AllBinaryLayerManager* layerManager) {
        JAVA_TRY {
            int32_t size = BasicArrayList_size(this->list);
            int32_t key = 0;
            for (int32_t index = 0; index < size; index++) {
                GameKeyEvent* gameKeyEvent = ((GameKeyEvent*) BasicArrayList_get(this->list, index));
                key = GameKeyEvent_getKey(gameKeyEvent);
                SelectedRTSLayersPlayerGameInput_processInputKey(this, key);
            }
            if (this->isSingleKeyProcessing) {
                SelectedRTSLayersPlayerGameInput_clear(this);
            } else {
                SelectedRTSLayersPlayerGameInput_update(this);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->gameInputStrings->PROCESS_INPUT, e);
        } JAVA_END_TRY;
}


BasicArrayList* SelectedRTSLayersPlayerGameInput_getSelectedBasicArrayList(SelectedRTSLayersPlayerGameInput* this) {
        return this->selectedRTSLayersList;
}


void SelectedRTSLayersPlayerGameInput_addSelectedRTSLayer(SelectedRTSLayersPlayerGameInput* this, RTSLayer* selectedLayer) {
        this->paintSelectedRTSLayersList = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        if (selectedLayer == CollidableDestroyableDamageableLayer_getNullInstance()) {
            SelectedRTSLayersPlayerGameInput_deselectAll(this);
            BasicArrayList_clear(this->selectedRTSLayersList);
        } else {
            if (!BasicArrayList_contains(this->selectedRTSLayersList, selectedLayer)) {
                BasicArrayList_add(this->selectedRTSLayersList, selectedLayer);
            }
        }
        this->paintSelectedRTSLayersList = this->selectedRTSLayersList;
}


void SelectedRTSLayersPlayerGameInput_setSelectedRTSLayer(SelectedRTSLayersPlayerGameInput* this, CollidableDestroyableDamageableLayer* selectedLayer) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Selected Layer: ");
        if (selectedLayer != nullptr) {
            StringMaker_append(stringBuffer, RTSLayer_getName(selectedLayer));
        }
        JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, "setSelectedRTSLayer");
        this->paintSelectedRTSLayersList = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        Visitor_visit(this->selectRTSLayerVisitorInterface, selectedLayer);
        SelectedRTSLayersPlayerGameInput_deselectAll(this);
        if (BasicArrayList_size(this->selectedRTSLayersList) > 0) {
            JAVA_CALL(SelectedRTSLayersPlayerGameInput_getPreSelectedRTSLayersList(this), clear);
            BasicArrayList* tempList = SelectedRTSLayersPlayerGameInput_getPreSelectedRTSLayersList(this);
            this->preSelectedRTSLayersList = this->selectedRTSLayersList;
            this->selectedRTSLayersList = tempList;
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Preselected: "), append, BasicArrayList_toString(this->preSelectedRTSLayersList)), toString), this, "setSelectedRTSLayer");
        }
        if (selectedLayer != CollidableDestroyableDamageableLayer_getNullInstance()) {
            BasicArrayList_add(this->selectedRTSLayersList, selectedLayer);
        }
        this->paintSelectedRTSLayersList = this->selectedRTSLayersList;
}


CollidableDestroyableDamageableLayer* SelectedRTSLayersPlayerGameInput_getLastSelectedRtsLayer(SelectedRTSLayersPlayerGameInput* this) {
        if (SelectedRTSLayersPlayerGameInput_isAnyRTSLayerSelected(this)) {
            return ((CollidableDestroyableDamageableLayer*) BasicArrayList_get(this->selectedRTSLayersList, BasicArrayList_size(this->selectedRTSLayersList) - 1));
        } else {
            return CollidableDestroyableDamageableLayer_getNullInstance();
        }
}


void SelectedRTSLayersPlayerGameInput_selectAllPreselected(SelectedRTSLayersPlayerGameInput* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Select all Preselected: ");
        StringMaker_append(stringBuffer, BasicArrayList_toString(this->preSelectedRTSLayersList));
        JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, "selectAllPreselected");
        for (int32_t index = BasicArrayList_size(this->preSelectedRTSLayersList) - 1; index >= 0; index--) {
            RTSLayer* rtsLayer = ((RTSLayer*) BasicArrayList_get(this->preSelectedRTSLayersList, index));
            RTSLayer_select(rtsLayer);
        }
}


void SelectedRTSLayersPlayerGameInput_deselectAllPreselected(SelectedRTSLayersPlayerGameInput* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Deselect all Preselected: ");
        StringMaker_append(stringBuffer, BasicArrayList_toString(this->preSelectedRTSLayersList));
        JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, "deselectAllPreselected");
        for (int32_t index = BasicArrayList_size(this->preSelectedRTSLayersList) - 1; index >= 0; index--) {
            RTSLayer* rtsLayer = ((RTSLayer*) BasicArrayList_get(this->preSelectedRTSLayersList, index));
            RTSLayer_deselect(rtsLayer);
        }
        BasicArrayList_clear(this->preSelectedRTSLayersList);
}


void SelectedRTSLayersPlayerGameInput_deselectAll(SelectedRTSLayersPlayerGameInput* this) {
        for (int32_t index = BasicArrayList_size(this->selectedRTSLayersList) - 1; index >= 0; index--) {
            RTSLayer* rtsLayer = ((RTSLayer*) BasicArrayList_get(this->selectedRTSLayersList, index));
            RTSLayer_deselect(rtsLayer);
        }
}


bool SelectedRTSLayersPlayerGameInput_isAnyRTSLayerSelected(SelectedRTSLayersPlayerGameInput* this) {
        if (BasicArrayList_size(this->selectedRTSLayersList) == 0) {
            return false;
        }
        return true;
}


BasicArrayList* SelectedRTSLayersPlayerGameInput_getPaintSelectedRTSLayersList(SelectedRTSLayersPlayerGameInput* this) {
        return this->paintSelectedRTSLayersList;
}


BasicArrayList* SelectedRTSLayersPlayerGameInput_getPreSelectedRTSLayersList(SelectedRTSLayersPlayerGameInput* this) {
        return this->preSelectedRTSLayersList;
}

