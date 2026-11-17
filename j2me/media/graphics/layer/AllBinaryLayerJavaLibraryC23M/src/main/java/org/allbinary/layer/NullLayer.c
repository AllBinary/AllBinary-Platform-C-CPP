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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/layer/Layer.h"

typedef struct NullLayer NullLayer;
struct NullLayer {
    Layer base;
};

static NullLayer* NullLayer_instance;

NullLayer* NullLayer_new(void);
NullLayer* NullLayer_getInstance(void);

void NullLayer_init(NullLayer* this);
void NullLayer_paint(NullLayer* this, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void NullLayer_staticInit(void) {
    NullLayer_instance = NullLayer_new();
}


NullLayer* NullLayer_getInstance(void) {
        return NullLayer_instance;
}


void NullLayer_init(NullLayer* this) {
        Layer_init(&this->base, 0, 0);
}

NullLayer* NullLayer_new(void) {
    NullLayer* this = calloc(1, sizeof(NullLayer));
    NullLayer_init(this);
    return this;
}


void NullLayer_paint(NullLayer* this, Graphics* graphics) {
}

