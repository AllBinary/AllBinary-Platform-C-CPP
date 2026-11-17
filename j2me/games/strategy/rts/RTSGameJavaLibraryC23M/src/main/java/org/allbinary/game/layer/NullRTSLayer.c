/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/form/NullRTSFormInputFactory.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"
#include "org/allbinary/game/layer/capital/Capital.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"

typedef struct NullRTSLayer NullRTSLayer;
struct NullRTSLayer {
    NullPathFindingLayer base;
    RTSPlayerLayerInterface RTSPlayerLayerInterface_interface;
};

NullRTSLayer* NullRTSLayer_NULL_RTS_LAYER;

NullRTSLayer* NullRTSLayer_new(void);
const char* NullRTSLayer_getName(NullRTSLayer* this);
void NullRTSLayer_processInput(NullRTSLayer* this, AllBinaryLayerManager* layerManager);
void NullRTSLayer_initInputProcessors(NullRTSLayer* this);
GameNotificationHud* NullRTSLayer_getGameNotificationHud(NullRTSLayer* this);
ScrollSelectionForm* NullRTSLayer_getCurrentScrollSelectionForm(NullRTSLayer* this);
void NullRTSLayer_setCurrentScrollSelectionForm(NullRTSLayer* this, ScrollSelectionForm* currentScrollSelectionForm);
ScrollSelectionForm* NullRTSLayer_getBuildingScrollSelectionForm(NullRTSLayer* this);
PlayerGameInput* NullRTSLayer_getPlayerGameInput(NullRTSLayer* this);
void NullRTSLayer_onEvent(NullRTSLayer* this, AllBinaryEventObject* eventObject);
void NullRTSLayer_onDestroyed(NullRTSLayer* this, DestroyedEvent* destroyedEvent);
void NullRTSLayer_processTick(NullRTSLayer* this, AllBinaryLayerManager* allBinaryLayerManager);
Capital* NullRTSLayer_getCapital(NullRTSLayer* this);
RTSFormInput* NullRTSLayer_getRTSFormInput(NullRTSLayer* this);
void NullRTSLayer_add(NullRTSLayer* this, Sound* sound);
PlayerOwnedRTSLayers* NullRTSLayer_getPlayerOwnedRTSLayers(NullRTSLayer* this);
bool NullRTSLayer_implmentsArtificialIntelligenceCompositeInterface(NullRTSLayer* this);

// Static fields with runtime initializers: call this once at startup
void NullRTSLayer_staticInit(void) {
    NullRTSLayer_NULL_RTS_LAYER = NullRTSLayer_new();
}

void NullRTSLayer_init(NullRTSLayer* this) {
    NullPathFindingLayer_init(&this->base);
}

NullRTSLayer* NullRTSLayer_new(void) {
    NullRTSLayer* this = calloc(1, sizeof(NullRTSLayer));
    NullRTSLayer_init(this);
    return this;
}


const char* NullRTSLayer_getName(NullRTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullRTSLayer_processInput(NullRTSLayer* this, AllBinaryLayerManager* layerManager) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullRTSLayer_initInputProcessors(NullRTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


GameNotificationHud* NullRTSLayer_getGameNotificationHud(NullRTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


ScrollSelectionForm* NullRTSLayer_getCurrentScrollSelectionForm(NullRTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullRTSLayer_setCurrentScrollSelectionForm(NullRTSLayer* this, ScrollSelectionForm* currentScrollSelectionForm) {
        java_throw(java_exception_new("RuntimeException", ""));
}


ScrollSelectionForm* NullRTSLayer_getBuildingScrollSelectionForm(NullRTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


PlayerGameInput* NullRTSLayer_getPlayerGameInput(NullRTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullRTSLayer_onEvent(NullRTSLayer* this, AllBinaryEventObject* eventObject) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullRTSLayer_onDestroyed(NullRTSLayer* this, DestroyedEvent* destroyedEvent) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullRTSLayer_processTick(NullRTSLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        java_throw(java_exception_new("RuntimeException", ""));
}


Capital* NullRTSLayer_getCapital(NullRTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


RTSFormInput* NullRTSLayer_getRTSFormInput(NullRTSLayer* this) {
        return NullRTSFormInputFactory_getInstance();
}


void NullRTSLayer_add(NullRTSLayer* this, Sound* sound) {
        java_throw(java_exception_new("RuntimeException", ""));
}


PlayerOwnedRTSLayers* NullRTSLayer_getPlayerOwnedRTSLayers(NullRTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullRTSLayer_implmentsArtificialIntelligenceCompositeInterface(NullRTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

