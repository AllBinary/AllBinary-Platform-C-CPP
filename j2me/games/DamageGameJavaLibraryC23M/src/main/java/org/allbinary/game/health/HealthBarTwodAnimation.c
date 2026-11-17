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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/health/HealthBarAnimation.h"

typedef struct HealthBarTwodAnimation HealthBarTwodAnimation;
struct HealthBarTwodAnimation {
    HealthBarAnimation base;
};


HealthBarTwodAnimation* HealthBarTwodAnimation_new(AllBinaryLayer* layerInterface, int32_t location);

void HealthBarTwodAnimation_init(HealthBarTwodAnimation* this, AllBinaryLayer* layerInterface, int32_t location);
void HealthBarTwodAnimation_paintXY(HealthBarTwodAnimation* this, Graphics* graphics, int32_t x, int32_t y);


void HealthBarTwodAnimation_init(HealthBarTwodAnimation* this, AllBinaryLayer* layerInterface, int32_t location) {
        HealthBarAnimation_init(&this->base, layerInterface, location);
}

HealthBarTwodAnimation* HealthBarTwodAnimation_new(AllBinaryLayer* layerInterface, int32_t location) {
    HealthBarTwodAnimation* this = calloc(1, sizeof(HealthBarTwodAnimation));
    HealthBarTwodAnimation_init(this, layerInterface, location);
    return this;
}


void HealthBarTwodAnimation_paintXY(HealthBarTwodAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        int32_t ax = JAVA_CALL(JAVA_CALL(this->allbinaryLayer, getViewPosition), getX);
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, this->basicColor, this->colorP);
        Graphics_fillRect(graphics, ax, HealthBarTwodAnimation_getY(this) - 1, this->x2, this->thickness);
}

