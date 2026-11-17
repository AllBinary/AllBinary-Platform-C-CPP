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
// package org.allbinary.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/view/ViewPosition.h"

typedef struct StaticViewPosition StaticViewPosition;
struct StaticViewPosition {
    ViewPosition base;
};


StaticViewPosition* StaticViewPosition_new(int32_t x, int32_t y, int32_t z);

void StaticViewPosition_init(StaticViewPosition* this, int32_t x, int32_t y, int32_t z);
int32_t StaticViewPosition_getX(StaticViewPosition* this);
int32_t StaticViewPosition_getY(StaticViewPosition* this);
int32_t StaticViewPosition_getZ(StaticViewPosition* this);


void StaticViewPosition_init(StaticViewPosition* this, int32_t x, int32_t y, int32_t z) {
        ViewPosition_init(&this->base, x, y, z);
}

StaticViewPosition* StaticViewPosition_new(int32_t x, int32_t y, int32_t z) {
    StaticViewPosition* this = calloc(1, sizeof(StaticViewPosition));
    StaticViewPosition_init(this, x, y, z);
    return this;
}


int32_t StaticViewPosition_getX(StaticViewPosition* this) {
        return StaticViewPosition_getRawX(this);
}


int32_t StaticViewPosition_getY(StaticViewPosition* this) {
        return StaticViewPosition_getRawY(this);
}


int32_t StaticViewPosition_getZ(StaticViewPosition* this) {
        return StaticViewPosition_getRawZ(this);
}

