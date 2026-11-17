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
// package org.allbinary.input.motion.button

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
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct TouchButtonsPaintable TouchButtonsPaintable;
struct TouchButtonsPaintable {
    Paintable base;
    BasicColor* foregroundBasicColor;
    int32_t foregroundColor;
    BasicColorSetUtil* basicSetColorUtil;
    TouchButtonFactory* touchButtonFactory;
};


TouchButtonsPaintable* TouchButtonsPaintable_new(BasicColor* basicColor);

void TouchButtonsPaintable_init(TouchButtonsPaintable* this, BasicColor* basicColor);
void TouchButtonsPaintable_paint(TouchButtonsPaintable* this, Graphics* graphics);

static void TouchButtonsPaintable_initFields(TouchButtonsPaintable* this) {
    
    
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->touchButtonFactory = TouchButtonFactory_getInstance();
}


void TouchButtonsPaintable_init(TouchButtonsPaintable* this, BasicColor* basicColor) {
    Paintable_init(&this->base);
    TouchButtonsPaintable_initFields(this);
        this->foregroundBasicColor = basicColor;
        this->foregroundColor = BasicColor_intValue(basicColor);
}

TouchButtonsPaintable* TouchButtonsPaintable_new(BasicColor* basicColor) {
    TouchButtonsPaintable* this = calloc(1, sizeof(TouchButtonsPaintable));
    TouchButtonsPaintable_init(this, basicColor);
    return this;
}


void TouchButtonsPaintable_paint(TouchButtonsPaintable* this, Graphics* graphics) {
        BasicArrayList* list = TouchButtonFactory_getList(this->touchButtonFactory);
        BasicColorSetUtil_setBasicColorP3(this->basicSetColorUtil, graphics, this->foregroundBasicColor, this->foregroundColor);
        TouchButton* touchButton = nullptr;
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            touchButton = ((TouchButton*) list->objectArray[index]);
            TouchButton_paint(touchButton, graphics);
        }
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            touchButton = ((TouchButton*) list->objectArray[index]);
            TouchButton_paintHint(touchButton, graphics);
        }
}

