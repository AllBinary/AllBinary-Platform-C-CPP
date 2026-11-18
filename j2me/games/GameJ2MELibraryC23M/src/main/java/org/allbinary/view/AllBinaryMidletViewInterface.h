#ifndef ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H
#define ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H
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
typedef struct EmulatorViewInterface EmulatorViewInterface;
typedef struct GameInitializedListenerInterface GameInitializedListenerInterface;
typedef struct DemoGameMidletEventListener DemoGameMidletEventListener;
typedef struct MidletCompositeInterface MidletCompositeInterface;
#include "org/allbinary/game/configuration/event/GameInitializedListenerInterface.h"
#include "org/allbinary/game/midlet/DemoGameMidletEventListener.h"
#include "org/allbinary/midlet/MidletCompositeInterface.h"
#include "org/allbinary/view/EmulatorViewInterface.h"

typedef struct AllBinaryMidletViewInterface AllBinaryMidletViewInterface;
struct AllBinaryMidletViewInterface {
    void (*onResume)(void* this);
    void (*onPause)(void* this);
    void (*onDestroy)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryMidletViewInterface_staticInit(void);

static inline void AllBinaryMidletViewInterface_onResume(void* this) {
    ((__typeof__(((AllBinaryMidletViewInterface*) nullptr)->onResume)) java_method_of(this, "onResume"))(this);
}

static inline void AllBinaryMidletViewInterface_onPause(void* this) {
    ((__typeof__(((AllBinaryMidletViewInterface*) nullptr)->onPause)) java_method_of(this, "onPause"))(this);
}

static inline void AllBinaryMidletViewInterface_onDestroy(void* this) {
    ((__typeof__(((AllBinaryMidletViewInterface*) nullptr)->onDestroy)) java_method_of(this, "onDestroy"))(this);
}
#define AllBinaryMidletViewInterface_setMidlet MidletCompositeInterface_setMidlet
#define AllBinaryMidletViewInterface_getMidlet MidletCompositeInterface_getMidlet
#define AllBinaryMidletViewInterface_getDisplayable MidletCompositeInterface_getDisplayable
#define AllBinaryMidletViewInterface_setMidlet EmulatorViewInterface_setMidlet
#define AllBinaryMidletViewInterface_onEmulatorInitComplete EmulatorViewInterface_onEmulatorInitComplete
#define AllBinaryMidletViewInterface_onSetDisplayable EmulatorViewInterface_onSetDisplayable
#define AllBinaryMidletViewInterface_onDemoStart DemoGameMidletEventListener_onDemoStart
#define AllBinaryMidletViewInterface_onGameStart DemoGameMidletEventListener_onGameStart
#define AllBinaryMidletViewInterface_onDemoGameMidletEvent DemoGameMidletEventListener_onDemoGameMidletEvent
#define AllBinaryMidletViewInterface_onGameInitialized GameInitializedListenerInterface_onGameInitialized


#endif // ORG_ALLBINARY_VIEW_ALLBINARYMIDLETVIEWINTERFACE_H
