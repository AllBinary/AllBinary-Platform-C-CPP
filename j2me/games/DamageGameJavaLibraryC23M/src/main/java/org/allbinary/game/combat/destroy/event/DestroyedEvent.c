/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
// package org.allbinary.game.combat.destroy.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/NullGameCanvas.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct DestroyedEvent DestroyedEvent;
struct DestroyedEvent {
    AllBinaryEventObject base;
    AllBinaryGameCanvas* allBinaryGameCanvas;
    AllBinaryLayer* allBinaryLayerInterface;
};


DestroyedEvent* DestroyedEvent_new(AllBinaryGameCanvas* combatGameCanvas);

void DestroyedEvent_init(DestroyedEvent* this, AllBinaryGameCanvas* combatGameCanvas);
AllBinaryGameCanvas* DestroyedEvent_getAllBinaryGameCanvas(DestroyedEvent* this);
AllBinaryLayer* DestroyedEvent_getLayerInterface(DestroyedEvent* this);
static void DestroyedEvent_setAllBinaryGameCanvas(DestroyedEvent* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DestroyedEvent_setLayerInterfaceForCircularStaticPool(DestroyedEvent* this, AllBinaryLayer* allBinaryLayerInterface);
const char* DestroyedEvent_toString(DestroyedEvent* this);

static void DestroyedEvent_initFields(DestroyedEvent* this) {
    this->allBinaryGameCanvas = NullGameCanvas_getInstance();
    this->allBinaryLayerInterface = AllBinaryLayer_NULL_ALLBINARY_LAYER;
}


void DestroyedEvent_init(DestroyedEvent* this, AllBinaryGameCanvas* combatGameCanvas) {
        AllBinaryEventObject_init(&this->base, DestroyedEventHandler_getInstance());
        DestroyedEvent_initFields(this);
        DestroyedEvent_setAllBinaryGameCanvas(this, combatGameCanvas);
}

DestroyedEvent* DestroyedEvent_new(AllBinaryGameCanvas* combatGameCanvas) {
    DestroyedEvent* this = calloc(1, sizeof(DestroyedEvent));
    DestroyedEvent_init(this, combatGameCanvas);
    return this;
}


AllBinaryGameCanvas* DestroyedEvent_getAllBinaryGameCanvas(DestroyedEvent* this) {
        return this->allBinaryGameCanvas;
}


AllBinaryLayer* DestroyedEvent_getLayerInterface(DestroyedEvent* this) {
        return this->allBinaryLayerInterface;
}


static void DestroyedEvent_setAllBinaryGameCanvas(DestroyedEvent* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}


void DestroyedEvent_setLayerInterfaceForCircularStaticPool(DestroyedEvent* this, AllBinaryLayer* allBinaryLayerInterface) {
        this->allBinaryLayerInterface = allBinaryLayerInterface;
}


const char* DestroyedEvent_toString(DestroyedEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "DestroyedEvent: \n");
        StringMaker_append(stringBuffer, "AllBinaryLayerInterface: ");
        StringMaker_append(stringBuffer, AllBinaryLayer_toString(this->allBinaryLayerInterface));
        StringMaker_append(stringBuffer, "\nAllBinaryGameCanvas: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), DestroyedEvent_getAllBinaryGameCanvas(this)));
        return StringMaker_toString(stringBuffer);
}

