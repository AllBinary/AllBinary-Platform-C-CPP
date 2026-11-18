#ifndef ORG_ALLBINARY_VIEW_EMULATORVIEWINTERFACE_H
#define ORG_ALLBINARY_VIEW_EMULATORVIEWINTERFACE_H
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
typedef struct Displayable Displayable;
typedef struct MIDlet MIDlet;

typedef struct EmulatorViewInterface EmulatorViewInterface;
struct EmulatorViewInterface {
    void (*setMidlet)(void* this, MIDlet* midlet);
    void (*onEmulatorInitComplete)(void* this, void* midletActivity);
    void (*onSetDisplayable)(void* this, Displayable* displayable);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EmulatorViewInterface_staticInit(void);

static inline void EmulatorViewInterface_setMidlet(void* this, MIDlet* midlet) {
    ((__typeof__(((EmulatorViewInterface*) nullptr)->setMidlet)) java_method_of(this, "setMidlet"))(this, midlet);
}

static inline void EmulatorViewInterface_onEmulatorInitComplete(void* this, void* midletActivity) {
    ((__typeof__(((EmulatorViewInterface*) nullptr)->onEmulatorInitComplete)) java_method_of(this, "onEmulatorInitComplete"))(this, midletActivity);
}

static inline void EmulatorViewInterface_onSetDisplayable(void* this, Displayable* displayable) {
    ((__typeof__(((EmulatorViewInterface*) nullptr)->onSetDisplayable)) java_method_of(this, "onSetDisplayable"))(this, displayable);
}


#endif // ORG_ALLBINARY_VIEW_EMULATORVIEWINTERFACE_H
