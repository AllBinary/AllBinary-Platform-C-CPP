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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/view/event/ViewPositionEvent.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/LayerInterface.h"

typedef struct AllBinaryLayer AllBinaryLayer;
struct AllBinaryLayer {
    Layer base;
    LayerInterface LayerInterface_interface;
    ViewPositionEvent* viewPositionEvent;
    int32_t halfWidth;
    int32_t halfHeight;
    const char* name;
    ViewPositionBase* viewPosition;
};

AllBinaryLayer* AllBinaryLayer_NULL_ALLBINARY_LAYER;
static const char* AllBinaryLayer_TYPE = "Type: ";

AllBinaryLayer* AllBinaryLayer_new(const char* name, Rectangle* rectangle, ViewPositionBase* viewPosition);

void AllBinaryLayer_init(AllBinaryLayer* this, const char* name, Rectangle* rectangle, ViewPositionBase* viewPosition);
void AllBinaryLayer_setPosition(AllBinaryLayer* this, int32_t x, int32_t y, int32_t z);
void AllBinaryLayer_moveDXYZ(AllBinaryLayer* this, int32_t dx, int32_t dy, int32_t dz);
int32_t AllBinaryLayer_getXP(AllBinaryLayer* this);
int32_t AllBinaryLayer_getYP(AllBinaryLayer* this);
int32_t AllBinaryLayer_getZP(AllBinaryLayer* this);
int32_t AllBinaryLayer_getWidth(AllBinaryLayer* this);
int32_t AllBinaryLayer_getHeight(AllBinaryLayer* this);
void AllBinaryLayer_setVisible(AllBinaryLayer* this, bool visible);
bool AllBinaryLayer_isVisible(AllBinaryLayer* this);
void AllBinaryLayer_paint(AllBinaryLayer* this, Graphics* graphics);
void AllBinaryLayer_onChangeEvent(AllBinaryLayer* this, ViewPositionEvent* layerManagerEvent);
void AllBinaryLayer_paintThreed(AllBinaryLayer* this, Graphics* graphics);
int32_t AllBinaryLayer_getX2(AllBinaryLayer* this);
int32_t AllBinaryLayer_getY2(AllBinaryLayer* this);
int32_t AllBinaryLayer_getZ2(AllBinaryLayer* this);
const char* AllBinaryLayer_getName(AllBinaryLayer* this);
void AllBinaryLayer_setHalfWidth(AllBinaryLayer* this, int32_t halfWidth);
int32_t AllBinaryLayer_getHalfWidth(AllBinaryLayer* this);
void AllBinaryLayer_setHalfHeight(AllBinaryLayer* this, int32_t halfHeight);
int32_t AllBinaryLayer_getHalfHeight(AllBinaryLayer* this);
int32_t AllBinaryLayer_getHalfDepth(AllBinaryLayer* this);
ViewPositionBase* AllBinaryLayer_getViewPosition(AllBinaryLayer* this);
void AllBinaryLayer_setViewPosition(AllBinaryLayer* this, ViewPositionBase* viewPosition);
Group** AllBinaryLayer_getGroupInterface(AllBinaryLayer* this);
bool AllBinaryLayer_implmentsTickableInterface(AllBinaryLayer* this);
bool AllBinaryLayer_implmentsGameInputInterface(AllBinaryLayer* this);
bool AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface(AllBinaryLayer* this);
bool AllBinaryLayer_implmentsCollidableInterface(AllBinaryLayer* this);
bool AllBinaryLayer_implementsThreedInterface(AllBinaryLayer* this);
int32_t AllBinaryLayer_getType(AllBinaryLayer* this);
int32_t AllBinaryLayer_getMultiPlayerType(AllBinaryLayer* this);
void AllBinaryLayer_toStringAppend(AllBinaryLayer* this, StringMaker* stringBuffer);
const char* AllBinaryLayer_toString(AllBinaryLayer* this);

// Static fields with runtime initializers: call this once at startup
void AllBinaryLayer_staticInit(void) {
    AllBinaryLayer_NULL_ALLBINARY_LAYER = AllBinaryLayer_new(StringUtil_getInstance()->EMPTY_STRING, RectangleFactory_SINGLETON, ViewPositionBase_NULL_VIEW_POSITION);
}

static void AllBinaryLayer_initFields(AllBinaryLayer* this) {
    this->viewPositionEvent = ViewPositionEvent_new(this);
    this->halfWidth = 0;
    this->halfHeight = 0;
    
    this->viewPosition = ViewPositionBase_NULL_VIEW_POSITION;
}


void AllBinaryLayer_init(AllBinaryLayer* this, const char* name, Rectangle* rectangle, ViewPositionBase* viewPosition) {
        Layer_init(&this->base, Rectangle_getWidth(rectangle), Rectangle_getHeight(rectangle));
        AllBinaryLayer_initFields(this);
        const char* localName = nullptr;
        localName = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), name), append, CommonSeps_getInstance()->COLON), append, Integer_toHexString(TsUtil_hashCode(TsUtil_getInstance(), this))), toString);
        this->name = localName;
        GPoint* point = Rectangle_getPoint(rectangle);
        AllBinaryLayer_setPosition(this, GPoint_getX(point), GPoint_getY(point), GPoint_getZ(point));
        AllBinaryLayer_setHalfWidth(this, (AllBinaryLayer_getWidth(this) >> 1));
        AllBinaryLayer_setHalfHeight(this, (AllBinaryLayer_getHeight(this) >> 1));
        this->viewPosition = viewPosition;
        ViewPositionBase_setAllbinaryLayer(this->viewPosition, this);
}

AllBinaryLayer* AllBinaryLayer_new(const char* name, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    AllBinaryLayer* this = calloc(1, sizeof(AllBinaryLayer));
    AllBinaryLayer_init(this, name, rectangle, viewPosition);
    return this;
}


void AllBinaryLayer_setPosition(AllBinaryLayer* this, int32_t x, int32_t y, int32_t z) {
        Layer_setPosition((&this->base), x, y, z);
}


void AllBinaryLayer_moveDXYZ(AllBinaryLayer* this, int32_t dx, int32_t dy, int32_t dz) {
        Layer_moveDXYZ((&this->base), dx, dy, dz);
}


int32_t AllBinaryLayer_getXP(AllBinaryLayer* this) {
        return Layer_getXP((&this->base));
}


int32_t AllBinaryLayer_getYP(AllBinaryLayer* this) {
        return Layer_getYP((&this->base));
}


int32_t AllBinaryLayer_getZP(AllBinaryLayer* this) {
        return Layer_getZP((&this->base));
}


int32_t AllBinaryLayer_getWidth(AllBinaryLayer* this) {
        return Layer_getWidth((&this->base));
}


int32_t AllBinaryLayer_getHeight(AllBinaryLayer* this) {
        return Layer_getHeight((&this->base));
}


void AllBinaryLayer_setVisible(AllBinaryLayer* this, bool visible) {
        Layer_setVisible((&this->base), visible);
}


bool AllBinaryLayer_isVisible(AllBinaryLayer* this) {
        return Layer_isVisible((&this->base));
}


void AllBinaryLayer_paint(AllBinaryLayer* this, Graphics* graphics) {
        Layer_paint((&this->base), graphics);
}


// throws Exception
void AllBinaryLayer_onChangeEvent(AllBinaryLayer* this, ViewPositionEvent* layerManagerEvent) {
}


void AllBinaryLayer_paintThreed(AllBinaryLayer* this, Graphics* graphics) {
}


int32_t AllBinaryLayer_getX2(AllBinaryLayer* this) {
        return AllBinaryLayer_getXP(this) + AllBinaryLayer_getWidth(this);
}


int32_t AllBinaryLayer_getY2(AllBinaryLayer* this) {
        return AllBinaryLayer_getYP(this) + AllBinaryLayer_getHeight(this);
}


int32_t AllBinaryLayer_getZ2(AllBinaryLayer* this) {
        return ((int32_t) (AllBinaryLayer_getZP(this) + AllBinaryLayer_getDepth(this)));
}


const char* AllBinaryLayer_getName(AllBinaryLayer* this) {
        return this->name;
}


void AllBinaryLayer_setHalfWidth(AllBinaryLayer* this, int32_t halfWidth) {
        this->halfWidth = halfWidth;
}


int32_t AllBinaryLayer_getHalfWidth(AllBinaryLayer* this) {
        return this->halfWidth;
}


void AllBinaryLayer_setHalfHeight(AllBinaryLayer* this, int32_t halfHeight) {
        this->halfHeight = halfHeight;
}


int32_t AllBinaryLayer_getHalfHeight(AllBinaryLayer* this) {
        return this->halfHeight;
}


int32_t AllBinaryLayer_getHalfDepth(AllBinaryLayer* this) {
        return ((int32_t) AllBinaryLayer_getDepth(this)) / 2;
}


ViewPositionBase* AllBinaryLayer_getViewPosition(AllBinaryLayer* this) {
        return this->viewPosition;
}


void AllBinaryLayer_setViewPosition(AllBinaryLayer* this, ViewPositionBase* viewPosition) {
        this->viewPosition = viewPosition;
}


Group** AllBinaryLayer_getGroupInterface(AllBinaryLayer* this) {
        return BasicGroupFactory_getInstance()->NONE_ARRAY;
}


bool AllBinaryLayer_implmentsTickableInterface(AllBinaryLayer* this) {
        return false;
}


bool AllBinaryLayer_implmentsGameInputInterface(AllBinaryLayer* this) {
        return false;
}


bool AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface(AllBinaryLayer* this) {
        return false;
}


bool AllBinaryLayer_implmentsCollidableInterface(AllBinaryLayer* this) {
        return false;
}


bool AllBinaryLayer_implementsThreedInterface(AllBinaryLayer* this) {
        return OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance());
}


int32_t AllBinaryLayer_getType(AllBinaryLayer* this) {
        return -1;
}


int32_t AllBinaryLayer_getMultiPlayerType(AllBinaryLayer* this) {
        return -1;
}


void AllBinaryLayer_toStringAppend(AllBinaryLayer* this, StringMaker* stringBuffer) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        PositionStrings* positionStrings = PositionStrings_getInstance();
        CommonLabels* commonLabels = CommonLabels_getInstance();
        StringMaker_append(stringBuffer, AllBinaryLayer_getName(this));
        StringMaker_append(stringBuffer, commonSeps->COLON);
        StringMaker_append(stringBuffer, AllBinaryLayer_TYPE);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getType(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->X_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getXP(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Y_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getYP(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Z_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getZP(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getWidth(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getHeight(this));
}


const char* AllBinaryLayer_toString(AllBinaryLayer* this) {
        StringMaker* stringBuffer = StringMaker_new();
        AllBinaryLayer_toStringAppend(this, stringBuffer);
        return StringMaker_toString(stringBuffer);
}

