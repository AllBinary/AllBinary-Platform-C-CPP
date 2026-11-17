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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct SWTBlackPaintable SWTBlackPaintable;
struct SWTBlackPaintable {
    Paintable base;
    BasicColorSetUtil* basicSetColorUtil;
    BasicColor* BLACK;
};


SWTBlackPaintable* SWTBlackPaintable_new(void);
void SWTBlackPaintable_paint(SWTBlackPaintable* this, Graphics* graphics);

static void SWTBlackPaintable_initFields(SWTBlackPaintable* this) {
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->BLACK = BasicColorFactory_getInstance()->BLACK;
}

void SWTBlackPaintable_init(SWTBlackPaintable* this) {
    Paintable_init(&this->base);
    SWTBlackPaintable_initFields(this);
}

SWTBlackPaintable* SWTBlackPaintable_new(void) {
    SWTBlackPaintable* this = calloc(1, sizeof(SWTBlackPaintable));
    SWTBlackPaintable_init(this);
    return this;
}


void SWTBlackPaintable_paint(SWTBlackPaintable* this, Graphics* graphics) {
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, this->BLACK);
}

