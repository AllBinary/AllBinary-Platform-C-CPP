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
// package org.allbinary.graphics.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/displayable/StateControlledInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct StatePaintable StatePaintable;
struct StatePaintable {
    Paintable base;
    StateControlledInterface StateControlledInterface_interface;
};


StatePaintable* StatePaintable_new(void);

void StatePaintable_init(StatePaintable* this);
void StatePaintable_setState(StatePaintable* this, int32_t state);


void StatePaintable_init(StatePaintable* this) {
    Paintable_init(&this->base);
}

StatePaintable* StatePaintable_new(void) {
    StatePaintable* this = calloc(1, sizeof(StatePaintable));
    StatePaintable_init(this);
    return this;
}


void StatePaintable_setState(StatePaintable* this, int32_t state) {
}

