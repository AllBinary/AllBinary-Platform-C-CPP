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
// package org.allbinary.game.tracking

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"

typedef struct TrackingEventFactory TrackingEventFactory;
struct TrackingEventFactory {
    AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface_interface;
};


TrackingEventFactory* TrackingEventFactory_new(void);

void TrackingEventFactory_init(TrackingEventFactory* this);
AllBinaryEventObject* TrackingEventFactory_getInstance(TrackingEventFactory* this);


void TrackingEventFactory_init(TrackingEventFactory* this) {
}

TrackingEventFactory* TrackingEventFactory_new(void) {
    TrackingEventFactory* this = calloc(1, sizeof(TrackingEventFactory));
    TrackingEventFactory_init(this);
    return this;
}


AllBinaryEventObject* TrackingEventFactory_getInstance(TrackingEventFactory* this) {
        return TrackingEvent_new(TrackingEventHandler_getInstance());
}

