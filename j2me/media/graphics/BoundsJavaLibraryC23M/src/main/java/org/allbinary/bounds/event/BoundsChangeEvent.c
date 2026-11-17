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
// package org.allbinary.bounds.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct BoundsChangeEvent BoundsChangeEvent;
struct BoundsChangeEvent {
    AllBinaryEventObject base;
};


BoundsChangeEvent* BoundsChangeEvent_new(Rectangle* rectangle);

void BoundsChangeEvent_init(BoundsChangeEvent* this, Rectangle* rectangle);
Rectangle* BoundsChangeEvent_getRectangle(BoundsChangeEvent* this);


void BoundsChangeEvent_init(BoundsChangeEvent* this, Rectangle* rectangle) {
        AllBinaryEventObject_init(&this->base, rectangle);
}

BoundsChangeEvent* BoundsChangeEvent_new(Rectangle* rectangle) {
    BoundsChangeEvent* this = calloc(1, sizeof(BoundsChangeEvent));
    BoundsChangeEvent_init(this, rectangle);
    return this;
}


Rectangle* BoundsChangeEvent_getRectangle(BoundsChangeEvent* this) {
        return ((Rectangle*) BoundsChangeEvent_getSource(this));
}

