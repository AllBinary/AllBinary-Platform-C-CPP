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
// package org.allbinary.graphics.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"

typedef struct BasicColorSetUtil BasicColorSetUtil;
struct BasicColorSetUtil {
    char unused;
};

static BasicColorSetUtil* BasicColorSetUtil_instance;

BasicColorSetUtil* BasicColorSetUtil_new(void);
BasicColorSetUtil* BasicColorSetUtil_getInstance(void);

void BasicColorSetUtil_init(BasicColorSetUtil* this);
void BasicColorSetUtil_setBasicColorP(BasicColorSetUtil* this, Graphics* graphics, BasicColor* basicColor);
void BasicColorSetUtil_setBasicColorP3(BasicColorSetUtil* this, Graphics* graphics, BasicColor* basicColor, int32_t value);

// Static fields with runtime initializers: call this once at startup
void BasicColorSetUtil_staticInit(void) {
    BasicColorSetUtil_instance = BasicColorSetUtil_new();
}


BasicColorSetUtil* BasicColorSetUtil_getInstance(void) {
        return BasicColorSetUtil_instance;
}


void BasicColorSetUtil_init(BasicColorSetUtil* this) {
}

BasicColorSetUtil* BasicColorSetUtil_new(void) {
    BasicColorSetUtil* this = calloc(1, sizeof(BasicColorSetUtil));
    BasicColorSetUtil_init(this);
    return this;
}


void BasicColorSetUtil_setBasicColorP(BasicColorSetUtil* this, Graphics* graphics, BasicColor* basicColor) {
        Graphics_setColor(graphics, BasicColor_intValue(basicColor));
}


void BasicColorSetUtil_setBasicColorP3(BasicColorSetUtil* this, Graphics* graphics, BasicColor* basicColor, int32_t value) {
        Graphics_setColor(graphics, value);
}

