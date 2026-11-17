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
// package org.allbinary.game.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/StatePaintable.h"

typedef struct BasicGameDemoPaintable BasicGameDemoPaintable;
struct BasicGameDemoPaintable {
    StatePaintable base;
    Paintable* mainDemoStatePaintable;
    Paintable* ownershipPaintable;
    Paintable* helpPaintableInterface;
    Paintable* currentStatePaintable;
};


BasicGameDemoPaintable* BasicGameDemoPaintable_new(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface);

void BasicGameDemoPaintable_init(BasicGameDemoPaintable* this, Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface);
void BasicGameDemoPaintable_setState(BasicGameDemoPaintable* this, int32_t state);
void BasicGameDemoPaintable_paint(BasicGameDemoPaintable* this, Graphics* graphics);
Paintable* BasicGameDemoPaintable_getHelpPaintableInterface(BasicGameDemoPaintable* this);
void BasicGameDemoPaintable_setCurrentStatePaintable(BasicGameDemoPaintable* this, Paintable* currentStatePaintable);
Paintable* BasicGameDemoPaintable_getCurrentStatePaintable(BasicGameDemoPaintable* this);
Paintable* BasicGameDemoPaintable_getMainDemoStatePaintable(BasicGameDemoPaintable* this);

static void BasicGameDemoPaintable_initFields(BasicGameDemoPaintable* this) {
    
    
    
    this->currentStatePaintable = NullPaintable_getInstance();
}


void BasicGameDemoPaintable_init(BasicGameDemoPaintable* this, Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface) {
    StatePaintable_init(&this->base);
    BasicGameDemoPaintable_initFields(this);
        this->mainDemoStatePaintable = mainDemoStatePaintable;
        BasicGameDemoPaintable_setCurrentStatePaintable(this, NullPaintable_getInstance());
        this->ownershipPaintable = ownershipPaintable;
        this->helpPaintableInterface = helpPaintableInterface;
}

BasicGameDemoPaintable* BasicGameDemoPaintable_new(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface) {
    BasicGameDemoPaintable* this = calloc(1, sizeof(BasicGameDemoPaintable));
    BasicGameDemoPaintable_init(this, mainDemoStatePaintable, ownershipPaintable, helpPaintableInterface);
    return this;
}


void BasicGameDemoPaintable_setState(BasicGameDemoPaintable* this, int32_t state) {
        if (state == 0) {
            BasicGameDemoPaintable_setCurrentStatePaintable(this, BasicGameDemoPaintable_getMainDemoStatePaintable(this));
        } else if (state == 1) {
            BasicGameDemoPaintable_setCurrentStatePaintable(this, this->helpPaintableInterface);
        } else {
            BasicGameDemoPaintable_setCurrentStatePaintable(this, this->ownershipPaintable);
        }
}


void BasicGameDemoPaintable_paint(BasicGameDemoPaintable* this, Graphics* graphics) {
        JAVA_CALL(BasicGameDemoPaintable_getCurrentStatePaintable(this), paint, graphics);
}


Paintable* BasicGameDemoPaintable_getHelpPaintableInterface(BasicGameDemoPaintable* this) {
        return this->helpPaintableInterface;
}


void BasicGameDemoPaintable_setCurrentStatePaintable(BasicGameDemoPaintable* this, Paintable* currentStatePaintable) {
        this->currentStatePaintable = currentStatePaintable;
}


Paintable* BasicGameDemoPaintable_getCurrentStatePaintable(BasicGameDemoPaintable* this) {
        return this->currentStatePaintable;
}


Paintable* BasicGameDemoPaintable_getMainDemoStatePaintable(BasicGameDemoPaintable* this) {
        return this->mainDemoStatePaintable;
}

