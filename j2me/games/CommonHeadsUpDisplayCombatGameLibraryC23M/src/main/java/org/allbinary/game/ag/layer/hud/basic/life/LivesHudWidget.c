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
// package org.allbinary.game.ag.layer.hud.basic.life

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
#include "org/allbinary/game/ag/life/Life.h"
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"

typedef struct LivesHudWidget LivesHudWidget;
struct LivesHudWidget {
    BasicHud base;
    PaintableInterface PaintableInterface_interface;
    Life* lifeInterface;
    int32_t* xArray;
    Animation* animationInterface;
};


LivesHudWidget* LivesHudWidget_new(Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction);

void LivesHudWidget_init(LivesHudWidget* this, Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction);
void LivesHudWidget_updateMeasurement(LivesHudWidget* this, Graphics* graphics);
void LivesHudWidget_onDisplayChangeEvent(LivesHudWidget* this, DisplayChangeEvent* displayChangeEvent);
void LivesHudWidget_setX(LivesHudWidget* this, int32_t x);
void LivesHudWidget_paint(LivesHudWidget* this, Graphics* graphics);
void LivesHudWidget_paintThreed(LivesHudWidget* this, Graphics* graphics);
Life* LivesHudWidget_getLifeInterface(LivesHudWidget* this);

static void LivesHudWidget_initFields(LivesHudWidget* this) {
    
    
    
}


void LivesHudWidget_init(LivesHudWidget* this, Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction) {
        BasicHud_init(&this->base, location, direction, 2, BasicColorFactory_getInstance()->WHITE);
        LivesHudWidget_initFields(this);
        this->lifeInterface = lifeInterface;
        int32_t size = ((int32_t) JAVA_CALL(LivesHudWidget_getLifeInterface(this), getMaxlives));
        this->xArray = ((int32_t*) java_array_new(sizeof(int32_t), size));
        this->animationInterface = animationInterface;
        this->updateMaxWidth = Life_getMaxlives(this->lifeInterface) * 16;
        this->updateMaxHeight = 16;
}

LivesHudWidget* LivesHudWidget_new(Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction) {
    LivesHudWidget* this = calloc(1, sizeof(LivesHudWidget));
    LivesHudWidget_init(this, animationInterface, lifeInterface, location, direction);
    return this;
}


void LivesHudWidget_updateMeasurement(LivesHudWidget* this, Graphics* graphics) {
        BasicHud_updateMeasurement((&this->base), graphics);
        int32_t maxLives = ((int32_t) JAVA_CALL(LivesHudWidget_getLifeInterface(this), getMaxlives));
        for (int32_t index = 0; index < maxLives; index++) {
            this->xArray[index] = LivesHudWidget_getX(this) + (index * 16);
        }
}


void LivesHudWidget_onDisplayChangeEvent(LivesHudWidget* this, DisplayChangeEvent* displayChangeEvent) {
        BasicHud_onDisplayChangeEvent((&this->base), displayChangeEvent);
        this->myFontProcessor = this->updateMyFontProcessor;
}


void LivesHudWidget_setX(LivesHudWidget* this, int32_t x) {
        BasicHud_setX((&this->base), x);
        this->myFontProcessor = this->updateMyFontProcessor;
}


void LivesHudWidget_paint(LivesHudWidget* this, Graphics* graphics) {
        JAVA_CALL(this->myFontProcessor, process, graphics);
        for (int32_t index = ((int32_t) JAVA_CALL(LivesHudWidget_getLifeInterface(this), get)); --index >= 0; ) {
            Animation_paintXY(this->animationInterface, graphics, this->xArray[index], LivesHudWidget_getY(this));
        }
}


void LivesHudWidget_paintThreed(LivesHudWidget* this, Graphics* graphics) {
}


Life* LivesHudWidget_getLifeInterface(LivesHudWidget* this) {
        return this->lifeInterface;
}

