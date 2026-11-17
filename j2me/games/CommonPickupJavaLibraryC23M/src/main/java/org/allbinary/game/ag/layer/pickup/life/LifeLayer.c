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
// package org.allbinary.game.ag.layer.pickup.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/ag/life/Life.h"
#include "org/allbinary/game/ag/life/LifeVisitorInterface.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/view/ViewPosition.h"

typedef struct LifeLayer LifeLayer;
struct LifeLayer {
    AllBinaryLayer base;
    LifeVisitorInterface LifeVisitorInterface_interface;
};


LifeLayer* LifeLayer_new(void);

void LifeLayer_init(LifeLayer* this);
void LifeLayer_paint(LifeLayer* this, Graphics* graphics);
void LifeLayer_visit(LifeLayer* this, Life* lifeInterface);


void LifeLayer_init(LifeLayer* this) {
        AllBinaryLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), ViewPosition_getInstanceD());
}

LifeLayer* LifeLayer_new(void) {
    LifeLayer* this = calloc(1, sizeof(LifeLayer));
    LifeLayer_init(this);
    return this;
}


void LifeLayer_paint(LifeLayer* this, Graphics* graphics) {
}


void LifeLayer_visit(LifeLayer* this, Life* lifeInterface) {
        Life_add(lifeInterface, ((int16_t) 1));
}

