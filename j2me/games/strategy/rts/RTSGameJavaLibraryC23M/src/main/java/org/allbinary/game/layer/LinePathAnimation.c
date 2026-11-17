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

typedef struct LinePathAnimation LinePathAnimation;
struct LinePathAnimation {
    char unused;
};

static LinePathAnimation* LinePathAnimation_instance;

LinePathAnimation* LinePathAnimation_new(void);
LinePathAnimation* LinePathAnimation_getInstance(void);
void LinePathAnimation_paint(LinePathAnimation* this, Graphics* graphics, GPoint* point, GPoint* nextPoint, Layer* tiledLayer);

// Static fields with runtime initializers: call this once at startup
void LinePathAnimation_staticInit(void) {
    LinePathAnimation_instance = LinePathAnimation_new();
}

void LinePathAnimation_init(LinePathAnimation* this) {
}

LinePathAnimation* LinePathAnimation_new(void) {
    LinePathAnimation* this = calloc(1, sizeof(LinePathAnimation));
    LinePathAnimation_init(this);
    return this;
}


LinePathAnimation* LinePathAnimation_getInstance(void) {
        return LinePathAnimation_instance;
}


void LinePathAnimation_paint(LinePathAnimation* this, Graphics* graphics, GPoint* point, GPoint* nextPoint, Layer* tiledLayer) {
        Graphics_drawLine(graphics, GPoint_getX(nextPoint), GPoint_getY(nextPoint), GPoint_getX(point), GPoint_getY(point));
}

