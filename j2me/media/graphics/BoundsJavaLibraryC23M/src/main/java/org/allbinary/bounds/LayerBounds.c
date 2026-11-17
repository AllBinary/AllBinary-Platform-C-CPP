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
// package org.allbinary.bounds

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/bounds/event/BoundsChangeEvent.h"
#include "org/allbinary/bounds/event/BoundsChangeEventListener.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"

typedef struct LayerBounds LayerBounds;
struct LayerBounds {
    BoundsChangeEventListener BoundsChangeEventListener_interface;
    LogUtil* logUtil;
    Rectangle* rectangle;
};


LayerBounds* LayerBounds_new(Rectangle* rectangle);

void LayerBounds_init(LayerBounds* this, Rectangle* rectangle);
Rectangle* LayerBounds_getRectangleP(LayerBounds* this);
void LayerBounds_visit(LayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface);
void LayerBounds_onEvent(LayerBounds* this, AllBinaryEventObject* eventObject);
void LayerBounds_onBoundsChangeEvent(LayerBounds* this, BoundsChangeEvent* boundsChangeEvent);

static void LayerBounds_initFields(LayerBounds* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void LayerBounds_init(LayerBounds* this, Rectangle* rectangle) {
    LayerBounds_initFields(this);
        this->rectangle = rectangle;
}

LayerBounds* LayerBounds_new(Rectangle* rectangle) {
    LayerBounds* this = calloc(1, sizeof(LayerBounds));
    LayerBounds_init(this, rectangle);
    return this;
}


Rectangle* LayerBounds_getRectangleP(LayerBounds* this) {
        return this->rectangle;
}


void LayerBounds_visit(LayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface) {
}


void LayerBounds_onEvent(LayerBounds* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void LayerBounds_onBoundsChangeEvent(LayerBounds* this, BoundsChangeEvent* boundsChangeEvent) {
        this->rectangle = BoundsChangeEvent_getRectangle(boundsChangeEvent);
}

