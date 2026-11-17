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
// package org.allbinary.layer.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct ScrollMapEvent ScrollMapEvent;
struct ScrollMapEvent {
    AllBinaryEventObject base;
    int32_t dx;
    int32_t dy;
};


ScrollMapEvent* ScrollMapEvent_new(Any* anyType);

void ScrollMapEvent_init(ScrollMapEvent* this, Any* anyType);
void ScrollMapEvent_setDx(ScrollMapEvent* this, int32_t dx);
int32_t ScrollMapEvent_getDx(ScrollMapEvent* this);
void ScrollMapEvent_setDy(ScrollMapEvent* this, int32_t dy);
int32_t ScrollMapEvent_getDy(ScrollMapEvent* this);
void ScrollMapEvent_setDxDy(ScrollMapEvent* this, int32_t dx, int32_t dy);

static void ScrollMapEvent_initFields(ScrollMapEvent* this) {
    this->dx = 0;
    this->dy = 0;
}


void ScrollMapEvent_init(ScrollMapEvent* this, Any* anyType) {
        AllBinaryEventObject_init(&this->base, anyType);
        ScrollMapEvent_initFields(this);
}

ScrollMapEvent* ScrollMapEvent_new(Any* anyType) {
    ScrollMapEvent* this = calloc(1, sizeof(ScrollMapEvent));
    ScrollMapEvent_init(this, anyType);
    return this;
}


void ScrollMapEvent_setDx(ScrollMapEvent* this, int32_t dx) {
        this->dx = dx;
}


int32_t ScrollMapEvent_getDx(ScrollMapEvent* this) {
        return this->dx;
}


void ScrollMapEvent_setDy(ScrollMapEvent* this, int32_t dy) {
        this->dy = dy;
}


int32_t ScrollMapEvent_getDy(ScrollMapEvent* this) {
        return this->dy;
}


void ScrollMapEvent_setDxDy(ScrollMapEvent* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}

