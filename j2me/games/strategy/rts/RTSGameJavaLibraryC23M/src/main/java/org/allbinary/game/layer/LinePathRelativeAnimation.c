/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/game/layer/LinePathAnimation.h"

typedef struct LinePathRelativeAnimation LinePathRelativeAnimation;
struct LinePathRelativeAnimation {
    LinePathAnimation base;
};

static LinePathRelativeAnimation* LinePathRelativeAnimation_instanceC;

LinePathRelativeAnimation* LinePathRelativeAnimation_new(void);
LinePathAnimation* LinePathRelativeAnimation_getInstance(void);
void LinePathRelativeAnimation_paint(LinePathRelativeAnimation* this, Graphics* graphics, GPoint* point, GPoint* nextPoint, Layer* tiledLayer);

// Static fields with runtime initializers: call this once at startup
void LinePathRelativeAnimation_staticInit(void) {
    LinePathRelativeAnimation_instanceC = LinePathRelativeAnimation_new();
}

void LinePathRelativeAnimation_init(LinePathRelativeAnimation* this) {
    LinePathAnimation_init(&this->base);
}

LinePathRelativeAnimation* LinePathRelativeAnimation_new(void) {
    LinePathRelativeAnimation* this = calloc(1, sizeof(LinePathRelativeAnimation));
    LinePathRelativeAnimation_init(this);
    return this;
}


LinePathAnimation* LinePathRelativeAnimation_getInstance(void) {
        return LinePathRelativeAnimation_instanceC;
}


void LinePathRelativeAnimation_paint(LinePathRelativeAnimation* this, Graphics* graphics, GPoint* point, GPoint* nextPoint, Layer* tiledLayer) {
        Graphics_drawLine(graphics, GPoint_getX(nextPoint) - Layer_getXP(tiledLayer), GPoint_getY(nextPoint) - Layer_getYP(tiledLayer), GPoint_getX(point) - Layer_getXP(tiledLayer), GPoint_getY(point) - Layer_getYP(tiledLayer));
}

