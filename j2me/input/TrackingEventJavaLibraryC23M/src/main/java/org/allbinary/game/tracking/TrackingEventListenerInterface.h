#ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTLISTENERINTERFACE_H
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
typedef struct TrackingEvent TrackingEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct TrackingEventListenerInterface TrackingEventListenerInterface;
struct TrackingEventListenerInterface {
    void (*onMovement)(void* this, TrackingEvent* trackingEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TrackingEventListenerInterface_staticInit(void);

static inline void TrackingEventListenerInterface_onMovement(void* this, TrackingEvent* trackingEvent) {
    ((__typeof__(((TrackingEventListenerInterface*) nullptr)->onMovement)) java_method_of(this, "onMovement"))(this, trackingEvent);
}
#define TrackingEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTLISTENERINTERFACE_H
