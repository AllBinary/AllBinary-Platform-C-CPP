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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/view/ViewPosition.h"

typedef struct IconLayer IconLayer;
struct IconLayer {
    AllBinaryLayer base;
    Animation* animationInterface;
};

IconLayer* IconLayer_NULL_ICON_LAYER;

IconLayer* IconLayer_new(Animation* animationInterface, int32_t width, int32_t height);

void IconLayer_init(IconLayer* this, Animation* animationInterface, int32_t width, int32_t height);
void IconLayer_paint(IconLayer* this, Graphics* graphics);
void IconLayer_paintThreed(IconLayer* this, Graphics* graphics);
Animation* IconLayer_getAnimationInterface(IconLayer* this);

// Static fields with runtime initializers: call this once at startup
void IconLayer_staticInit(void) {
    IconLayer_NULL_ICON_LAYER = IconLayer_new(JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0), 0, 0);
}

static void IconLayer_initFields(IconLayer* this) {
    
}


void IconLayer_init(IconLayer* this, Animation* animationInterface, int32_t width, int32_t height) {
        AllBinaryLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, width, height), ViewPosition_getInstanceD());
        IconLayer_initFields(this);
        this->animationInterface = animationInterface;
}

IconLayer* IconLayer_new(Animation* animationInterface, int32_t width, int32_t height) {
    IconLayer* this = calloc(1, sizeof(IconLayer));
    IconLayer_init(this, animationInterface, width, height);
    return this;
}


void IconLayer_paint(IconLayer* this, Graphics* graphics) {
        Animation_paintXY(this->animationInterface, graphics, this->x, this->y);
}


void IconLayer_paintThreed(IconLayer* this, Graphics* graphics) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, this->x, this->y, this->z);
}


Animation* IconLayer_getAnimationInterface(IconLayer* this) {
        return this->animationInterface;
}

