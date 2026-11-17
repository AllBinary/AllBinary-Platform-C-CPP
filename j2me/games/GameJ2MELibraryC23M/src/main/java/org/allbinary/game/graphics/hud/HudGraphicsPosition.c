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
// package org.allbinary.game.graphics.hud

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"

typedef struct HudGraphicsPosition HudGraphicsPosition;
struct HudGraphicsPosition {
    int32_t anchor;
    GPoint* point;
};

HudGraphicsPosition* HudGraphicsPosition_NULL_HUD_GRAPHICS_POSITION;

HudGraphicsPosition* HudGraphicsPosition_new(GPoint* point, int32_t anchor);

void HudGraphicsPosition_init(HudGraphicsPosition* this, GPoint* point, int32_t anchor);
int32_t HudGraphicsPosition_getAnchor(HudGraphicsPosition* this);
static void HudGraphicsPosition_setAnchor(HudGraphicsPosition* this, int32_t anchor);
GPoint* HudGraphicsPosition_getPoint(HudGraphicsPosition* this);
void HudGraphicsPosition_setPoint(HudGraphicsPosition* this, GPoint* point);

// Static fields with runtime initializers: call this once at startup
void HudGraphicsPosition_staticInit(void) {
    HudGraphicsPosition_NULL_HUD_GRAPHICS_POSITION = HudGraphicsPosition_new(PointFactory_getInstance()->ZERO_ZERO, 9);
}

static void HudGraphicsPosition_initFields(HudGraphicsPosition* this) {
    this->anchor = 0;
    this->point = PointFactory_getInstance()->ZERO_ZERO;
}


void HudGraphicsPosition_init(HudGraphicsPosition* this, GPoint* point, int32_t anchor) {
    HudGraphicsPosition_initFields(this);
        HudGraphicsPosition_setAnchor(this, anchor);
        HudGraphicsPosition_setPoint(this, point);
}

HudGraphicsPosition* HudGraphicsPosition_new(GPoint* point, int32_t anchor) {
    HudGraphicsPosition* this = calloc(1, sizeof(HudGraphicsPosition));
    HudGraphicsPosition_init(this, point, anchor);
    return this;
}


int32_t HudGraphicsPosition_getAnchor(HudGraphicsPosition* this) {
        return this->anchor;
}


static void HudGraphicsPosition_setAnchor(HudGraphicsPosition* this, int32_t anchor) {
        this->anchor = anchor;
}


GPoint* HudGraphicsPosition_getPoint(HudGraphicsPosition* this) {
        return this->point;
}


void HudGraphicsPosition_setPoint(HudGraphicsPosition* this, GPoint* point) {
        this->point = point;
}

