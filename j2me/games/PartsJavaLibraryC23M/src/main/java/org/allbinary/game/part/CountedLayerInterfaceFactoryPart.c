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
// package org.allbinary.game.part

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/part/PartInterface.h"

typedef struct CountedLayerInterfaceFactoryPart CountedLayerInterfaceFactoryPart;
struct CountedLayerInterfaceFactoryPart {
    PartInterface PartInterface_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    Animation* animationInterface;
    int32_t total;
    uint16_t* totalString;
    int32_t xOffset;
    CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory;
    PrimitiveLongUtil* primitiveLongUtil;
};

CountedLayerInterfaceFactoryPart* CountedLayerInterfaceFactoryPart_NULL_COUNTED_LAYER_INTERFACE_FACTORY;

CountedLayerInterfaceFactoryPart* CountedLayerInterfaceFactoryPart_new(int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);

void CountedLayerInterfaceFactoryPart_init(CountedLayerInterfaceFactoryPart* this, int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);
void CountedLayerInterfaceFactoryPart_updateMeasurement(CountedLayerInterfaceFactoryPart* this, Graphics* graphics);
static void CountedLayerInterfaceFactoryPart_init(CountedLayerInterfaceFactoryPart* this, int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);
AllBinaryLayer* CountedLayerInterfaceFactoryPart_getInstance(CountedLayerInterfaceFactoryPart* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z);
int32_t CountedLayerInterfaceFactoryPart_getTotal(CountedLayerInterfaceFactoryPart* this);
void CountedLayerInterfaceFactoryPart_setTotal(CountedLayerInterfaceFactoryPart* this, int32_t total);
void CountedLayerInterfaceFactoryPart_paint(CountedLayerInterfaceFactoryPart* this, Graphics* graphics);
void CountedLayerInterfaceFactoryPart_paintThreed(CountedLayerInterfaceFactoryPart* this, Graphics* graphics);
Animation* CountedLayerInterfaceFactoryPart_getAnimationInterface(CountedLayerInterfaceFactoryPart* this);
void CountedLayerInterfaceFactoryPart_setAnimationInterface(CountedLayerInterfaceFactoryPart* this, Animation* animationInterface);
int32_t CountedLayerInterfaceFactoryPart_getXOffset(CountedLayerInterfaceFactoryPart* this);
static void CountedLayerInterfaceFactoryPart_setXOffset(CountedLayerInterfaceFactoryPart* this, int32_t totalStringWidth);
uint16_t* CountedLayerInterfaceFactoryPart_getTotalString(CountedLayerInterfaceFactoryPart* this);
CountedPickedUpLayerInterfaceFactory* CountedLayerInterfaceFactoryPart_getCountedPickedUpLayerInterfaceFactory(CountedLayerInterfaceFactoryPart* this);
void CountedLayerInterfaceFactoryPart_setCountedPickedUpLayerInterfaceFactory(CountedLayerInterfaceFactoryPart* this, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);

// Static fields with runtime initializers: call this once at startup
void CountedLayerInterfaceFactoryPart_staticInit(void) {
    CountedLayerInterfaceFactoryPart_NULL_COUNTED_LAYER_INTERFACE_FACTORY = CountedLayerInterfaceFactoryPart_new(0, CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY);
}

static void CountedLayerInterfaceFactoryPart_initFields(CountedLayerInterfaceFactoryPart* this) {
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->animationInterface = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
    this->total = 0;
    this->totalString = NullUtil_getInstance()->NULL_CHAR_ARRAY;
    this->xOffset = 0;
    this->countedPickedUpLayerInterfaceFactory = CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY;
    
}


void CountedLayerInterfaceFactoryPart_init(CountedLayerInterfaceFactoryPart* this, int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) {
    CountedLayerInterfaceFactoryPart_initFields(this);
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(1000);
        CountedLayerInterfaceFactoryPart_init(this, total, countedPickedUpLayerInterfaceFactory);
}

CountedLayerInterfaceFactoryPart* CountedLayerInterfaceFactoryPart_new(int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) {
    CountedLayerInterfaceFactoryPart* this = calloc(1, sizeof(CountedLayerInterfaceFactoryPart));
    CountedLayerInterfaceFactoryPart_init(this, total, countedPickedUpLayerInterfaceFactory);
    return this;
}


void CountedLayerInterfaceFactoryPart_updateMeasurement(CountedLayerInterfaceFactoryPart* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        CountedLayerInterfaceFactoryPart_setXOffset(this, Font_charsWidth(font, this->totalString, 0, PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil)) + (Font_getSize(font) >> 1));
        this->myFontProcessor = MyFontProcessor_getInstance();
}


static void CountedLayerInterfaceFactoryPart_init(CountedLayerInterfaceFactoryPart* this, int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) {
        CountedLayerInterfaceFactoryPart_setCountedPickedUpLayerInterfaceFactory(this, countedPickedUpLayerInterfaceFactory);
        this->total = total;
}


// throws Exception
AllBinaryLayer* CountedLayerInterfaceFactoryPart_getInstance(CountedLayerInterfaceFactoryPart* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z) {
        if (this->total > 0) {
            CountedLayerInterfaceFactoryPart_setTotal(this, this->total - 1);
            return JAVA_CALL(CountedLayerInterfaceFactoryPart_getCountedPickedUpLayerInterfaceFactory(this), getNextInstance, hashtable, x, y, z);
        } else {
            java_throw(java_exception_new("Exception", "No more left. Could use a listener to automatically remove"));
        }
}


int32_t CountedLayerInterfaceFactoryPart_getTotal(CountedLayerInterfaceFactoryPart* this) {
        return this->total;
}


void CountedLayerInterfaceFactoryPart_setTotal(CountedLayerInterfaceFactoryPart* this, int32_t total) {
        this->total = total;
        this->totalString = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, total);
        this->myFontProcessor = this->updateMyFontProcessor;
}


void CountedLayerInterfaceFactoryPart_paint(CountedLayerInterfaceFactoryPart* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
}


void CountedLayerInterfaceFactoryPart_paintThreed(CountedLayerInterfaceFactoryPart* this, Graphics* graphics) {
}


Animation* CountedLayerInterfaceFactoryPart_getAnimationInterface(CountedLayerInterfaceFactoryPart* this) {
        return this->animationInterface;
}


void CountedLayerInterfaceFactoryPart_setAnimationInterface(CountedLayerInterfaceFactoryPart* this, Animation* animationInterface) {
        this->animationInterface = animationInterface;
}


int32_t CountedLayerInterfaceFactoryPart_getXOffset(CountedLayerInterfaceFactoryPart* this) {
        return this->xOffset;
}


static void CountedLayerInterfaceFactoryPart_setXOffset(CountedLayerInterfaceFactoryPart* this, int32_t totalStringWidth) {
        this->xOffset = totalStringWidth;
}


uint16_t* CountedLayerInterfaceFactoryPart_getTotalString(CountedLayerInterfaceFactoryPart* this) {
        return this->totalString;
}


CountedPickedUpLayerInterfaceFactory* CountedLayerInterfaceFactoryPart_getCountedPickedUpLayerInterfaceFactory(CountedLayerInterfaceFactoryPart* this) {
        return this->countedPickedUpLayerInterfaceFactory;
}


void CountedLayerInterfaceFactoryPart_setCountedPickedUpLayerInterfaceFactory(CountedLayerInterfaceFactoryPart* this, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) {
        this->countedPickedUpLayerInterfaceFactory = countedPickedUpLayerInterfaceFactory;
}

