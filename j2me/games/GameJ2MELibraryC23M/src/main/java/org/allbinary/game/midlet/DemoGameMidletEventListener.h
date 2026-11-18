#ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTLISTENER_H
#define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTLISTENER_H
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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DemoGameMidletEvent DemoGameMidletEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct DemoGameMidletEventListener DemoGameMidletEventListener;
struct DemoGameMidletEventListener {
    void (*onDemoStart)(void* this);
    void (*onGameStart)(void* this);
    void (*onDemoGameMidletEvent)(void* this, DemoGameMidletEvent* demoGameMidletEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoGameMidletEventListener_staticInit(void);

static inline void DemoGameMidletEventListener_onDemoStart(void* this) {
    ((__typeof__(((DemoGameMidletEventListener*) nullptr)->onDemoStart)) java_method_of(this, "onDemoStart"))(this);
}

static inline void DemoGameMidletEventListener_onGameStart(void* this) {
    ((__typeof__(((DemoGameMidletEventListener*) nullptr)->onGameStart)) java_method_of(this, "onGameStart"))(this);
}

static inline void DemoGameMidletEventListener_onDemoGameMidletEvent(void* this, DemoGameMidletEvent* demoGameMidletEvent) {
    ((__typeof__(((DemoGameMidletEventListener*) nullptr)->onDemoGameMidletEvent)) java_method_of(this, "onDemoGameMidletEvent"))(this, demoGameMidletEvent);
}
#define DemoGameMidletEventListener_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTLISTENER_H
