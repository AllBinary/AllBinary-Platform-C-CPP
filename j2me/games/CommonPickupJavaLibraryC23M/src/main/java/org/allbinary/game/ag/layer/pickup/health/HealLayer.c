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
// package org.allbinary.game.ag.layer.pickup.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/game/health/HealthVisitorInterface.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/view/ViewPosition.h"

typedef struct HealLayer HealLayer;
struct HealLayer {
    AllBinaryLayer base;
    HealthVisitorInterface HealthVisitorInterface_interface;
};


HealLayer* HealLayer_new(void);

void HealLayer_init(HealLayer* this);
void HealLayer_paint(HealLayer* this, Graphics* graphics);
void HealLayer_visit(HealLayer* this, HealthInterface* healthInterface);


void HealLayer_init(HealLayer* this) {
        AllBinaryLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), ViewPosition_getInstanceD());
}

HealLayer* HealLayer_new(void) {
    HealLayer* this = calloc(1, sizeof(HealLayer));
    HealLayer_init(this);
    return this;
}


void HealLayer_paint(HealLayer* this, Graphics* graphics) {
}


void HealLayer_visit(HealLayer* this, HealthInterface* healthInterface) {
        if (HealthInterface_isAlive(healthInterface)) {
            HealthInterface_healMax(healthInterface);
        } else {
            JAVA_CALL(this->logUtil, putF, "Heal attempt on dead: Does not currently occur", this, "visit");
        }
}

