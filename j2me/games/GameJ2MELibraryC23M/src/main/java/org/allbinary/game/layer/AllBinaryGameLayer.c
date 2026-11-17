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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/view/event/ViewPositionEvent.h"
#include "org/allbinary/view/event/ViewPositionEventListenerInterface.h"

typedef struct AllBinaryGameLayer AllBinaryGameLayer;
struct AllBinaryGameLayer {
    AllBinaryLayer base;
    ViewPositionEventListenerInterface ViewPositionEventListenerInterface_interface;
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    CommonStrings* commonStrings;
    BasicColorSetUtil* basicSetColorUtil;
    BasicColor* RED;
    Paintable* paintable;
    BasicArrayList* gameKeyEventList;
};


AllBinaryGameLayer* AllBinaryGameLayer_new(const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition);
static Paintable* AllBinaryGameLayer_createPaintable(void);

void AllBinaryGameLayer_init(AllBinaryGameLayer* this, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition);
void AllBinaryGameLayer_set(AllBinaryGameLayer* this, GL* gl);
void AllBinaryGameLayer_move(AllBinaryGameLayer* this);
BasicArrayList* AllBinaryGameLayer_getGameKeyEventList(AllBinaryGameLayer* this);
void AllBinaryGameLayer_processInput(AllBinaryGameLayer* this, AllBinaryLayerManager* allBinaryLayerManager);
void AllBinaryGameLayer_processTick(AllBinaryGameLayer* this, AllBinaryLayerManager* allBinaryLayerManager);
void AllBinaryGameLayer_onEvent(AllBinaryGameLayer* this, AllBinaryEventObject* eventObject);
void AllBinaryGameLayer_onViewPositionChangeEvent(AllBinaryGameLayer* this);
void AllBinaryGameLayer_onChangeEvent(AllBinaryGameLayer* this, ViewPositionEvent* layerManagerEvent);
void AllBinaryGameLayer_paintFirst(AllBinaryGameLayer* this, Graphics* graphics);
void AllBinaryGameLayer_paintDebug(AllBinaryGameLayer* this, Graphics* graphics);
void AllBinaryGameLayer_setWidth(AllBinaryGameLayer* this, int32_t width);
void AllBinaryGameLayer_setHeight(AllBinaryGameLayer* this, int32_t height);

static void AllBinaryGameLayer_initFields(AllBinaryGameLayer* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->RED = BasicColorFactory_getInstance()->RED;
    this->paintable = AllBinaryGameLayer_createPaintable();
    this->gameKeyEventList = BasicArrayListD_new();
}


static Paintable* AllBinaryGameLayer_createPaintable(void) {
        if (SWTUtil_isSWT) {
            return SWTBlackPaintable_new();
        }
        return NullPaintable_getInstance();
}


void AllBinaryGameLayer_init(AllBinaryGameLayer* this, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
        AllBinaryLayer_init(&this->base, name, layerInfo, viewPosition);
        AllBinaryGameLayer_initFields(this);
}

AllBinaryGameLayer* AllBinaryGameLayer_new(const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
    AllBinaryGameLayer* this = calloc(1, sizeof(AllBinaryGameLayer));
    AllBinaryGameLayer_init(this, name, layerInfo, viewPosition);
    return this;
}


// throws Exception
void AllBinaryGameLayer_set(AllBinaryGameLayer* this, GL* gl) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


void AllBinaryGameLayer_move(AllBinaryGameLayer* this) {
}


BasicArrayList* AllBinaryGameLayer_getGameKeyEventList(AllBinaryGameLayer* this) {
        return this->gameKeyEventList;
}


// throws Exception
void AllBinaryGameLayer_processInput(AllBinaryGameLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void AllBinaryGameLayer_processTick(AllBinaryGameLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


void AllBinaryGameLayer_onEvent(AllBinaryGameLayer* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void AllBinaryGameLayer_onViewPositionChangeEvent(AllBinaryGameLayer* this) {
        AllBinaryGameLayer_onChangeEvent(this, this->viewPositionEvent);
}


// throws Exception
void AllBinaryGameLayer_onChangeEvent(AllBinaryGameLayer* this, ViewPositionEvent* layerManagerEvent) {
        if (GameLayerUtil_isOnScreen(this)) {
            AllBinaryGameLayer_setVisible(this, true);
        } else {
            AllBinaryGameLayer_setVisible(this, false);
        }
}


void AllBinaryGameLayer_paintFirst(AllBinaryGameLayer* this, Graphics* graphics) {
        Paintable_paint(this->paintable, graphics);
}


void AllBinaryGameLayer_paintDebug(AllBinaryGameLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = AllBinaryGameLayer_getViewPosition(this);
        int32_t viewX = ViewPositionBase_getX(viewPosition);
        int32_t viewY = ViewPositionBase_getY(viewPosition);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, this->RED);
        Graphics_drawRect(graphics, viewX, viewY, AllBinaryGameLayer_getWidth(this), AllBinaryGameLayer_getHeight(this));
}


void AllBinaryGameLayer_setWidth(AllBinaryGameLayer* this, int32_t width) {
        AllBinaryLayer_setLayerWidth((&this->base), width);
        AllBinaryGameLayer_setHalfWidth(this, width >> 1);
}


void AllBinaryGameLayer_setHeight(AllBinaryGameLayer* this, int32_t height) {
        AllBinaryLayer_setLayerHeight((&this->base), height);
        AllBinaryGameLayer_setHalfHeight(this, height >> 1);
}

