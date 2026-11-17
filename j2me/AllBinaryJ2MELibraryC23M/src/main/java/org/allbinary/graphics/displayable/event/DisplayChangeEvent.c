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
// package org.allbinary.graphics.displayable.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct DisplayChangeEvent DisplayChangeEvent;
struct DisplayChangeEvent {
    AllBinaryEventObject base;
};


DisplayChangeEvent* DisplayChangeEvent_new(Any* anyType);

void DisplayChangeEvent_init(DisplayChangeEvent* this, Any* anyType);


void DisplayChangeEvent_init(DisplayChangeEvent* this, Any* anyType) {
        AllBinaryEventObject_init(&this->base, anyType);
}

DisplayChangeEvent* DisplayChangeEvent_new(Any* anyType) {
    DisplayChangeEvent* this = calloc(1, sizeof(DisplayChangeEvent));
    DisplayChangeEvent_init(this, anyType);
    return this;
}

