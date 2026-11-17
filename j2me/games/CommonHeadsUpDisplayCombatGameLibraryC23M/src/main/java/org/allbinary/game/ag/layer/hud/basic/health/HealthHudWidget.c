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
// package org.allbinary.game.ag.layer.hud.basic.health

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
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/game/health/HealthListenerInterface.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/NoTimeDelayHelper.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct HealthHudWidget HealthHudWidget;
struct HealthHudWidget {
    BasicHud base;
    PaintableInterface PaintableInterface_interface;
    HealthListenerInterface HealthListenerInterface_interface;
    int32_t healthScale;
    Animation* animationInterface;
    Health* healthInterface;
    int32_t max;
    int32_t* xArray;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    TimeDelayHelper* timeDelayHelper;
    TimeDelayHelper* slowBeatTimeDelayHelper;
    TimeDelayHelper* mediumBeatTimeDelayHelper;
    TimeDelayHelper* fastBeatTimeDelayHelper;
};


HealthHudWidget* HealthHudWidget_new(Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction);

void HealthHudWidget_init(HealthHudWidget* this, Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction);
static void HealthHudWidget_update(HealthHudWidget* this);
void HealthHudWidget_setX(HealthHudWidget* this, int32_t x);
void HealthHudWidget_onHealthChange(HealthHudWidget* this);
void HealthHudWidget_paint(HealthHudWidget* this, Graphics* graphics);
void HealthHudWidget_paintThreed(HealthHudWidget* this, Graphics* graphics);

static void HealthHudWidget_initFields(HealthHudWidget* this) {
    
    
    
    this->max = 0;
    
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->timeDelayHelper = NoTimeDelayHelper_SINGLETON;
    this->slowBeatTimeDelayHelper = TimeDelayHelper_new(1280);
    this->mediumBeatTimeDelayHelper = TimeDelayHelper_new(640);
    this->fastBeatTimeDelayHelper = TimeDelayHelper_new(320);
}


void HealthHudWidget_init(HealthHudWidget* this, Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction) {
        BasicHud_init(&this->base, location, direction, 2, BasicColorFactory_getInstance()->WHITE);
        HealthHudWidget_initFields(this);
        this->animationInterface = animationInterface;
        this->healthInterface = healthInterface;
        Health_addListener(this->healthInterface, this);
        this->healthScale = (Health_getMaxHealth(this->healthInterface) / 6) + 1;
        HealthHudWidget_onHealthChange(this);
        this->updateMaxWidth = Health_getMaxHealth(healthInterface) * 16;
        this->updateMaxHeight = 16;
        this->xArray = ((int32_t*) java_array_new(sizeof(int32_t), 30));
        HealthHudWidget_update(this);
}

HealthHudWidget* HealthHudWidget_new(Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction) {
    HealthHudWidget* this = calloc(1, sizeof(HealthHudWidget));
    HealthHudWidget_init(this, animationInterface, healthInterface, location, direction);
    return this;
}


static void HealthHudWidget_update(HealthHudWidget* this) {
        if (this->xArray != nullptr) {
            for (int32_t index = 0; index < java_array_length(this->xArray); index++) {
                this->xArray[index] = HealthHudWidget_getX(this) + (index * 16);
            }
        }
}


void HealthHudWidget_setX(HealthHudWidget* this, int32_t x) {
        BasicHud_setX((&this->base), x);
        HealthHudWidget_update(this);
}


void HealthHudWidget_onHealthChange(HealthHudWidget* this) {
        this->max = (Health_getHealth(this->healthInterface) / this->healthScale);
        this->timeDelayHelper = NoTimeDelayHelper_SINGLETON;
        if (this->max <= 1 && Health_isAlive(this->healthInterface)) {
            this->max = 1;
            if (this->healthScale - Health_getHealth(this->healthInterface) > (this->healthScale * 2) / 3) {
                this->timeDelayHelper = this->slowBeatTimeDelayHelper;
            } else if (this->healthScale - Health_getHealth(this->healthInterface) > this->healthScale / 3) {
                this->timeDelayHelper = this->mediumBeatTimeDelayHelper;
            } else {
                this->timeDelayHelper = this->fastBeatTimeDelayHelper;
            }
        }
}


void HealthHudWidget_paint(HealthHudWidget* this, Graphics* graphics) {
        JAVA_CALL(this->myFontProcessor, process, graphics);
        for (int32_t index = 0; index < this->max; index++) {
            if (TimeDelayHelper_isTime(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime)) {
                Animation_paintXY(this->animationInterface, graphics, this->xArray[index], HealthHudWidget_getY(this));
            }
        }
}


void HealthHudWidget_paintThreed(HealthHudWidget* this, Graphics* graphics) {
}

