#ifndef ORG_ALLBINARY_MIDLET_MIDLETCOMPOSITEINTERFACE_H
#define ORG_ALLBINARY_MIDLET_MIDLETCOMPOSITEINTERFACE_H
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
// package org.allbinary.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryMidlet AllBinaryMidlet;
typedef struct Displayable Displayable;
typedef struct MIDlet MIDlet;

typedef struct MidletCompositeInterface MidletCompositeInterface;
struct MidletCompositeInterface {
    void (*setMidlet)(void* this, MIDlet* midlet);
    AllBinaryMidlet* (*getMidlet)(void* this);
    Displayable* (*getDisplayable)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MidletCompositeInterface_staticInit(void);

static inline void MidletCompositeInterface_setMidlet(void* this, MIDlet* midlet) {
    ((__typeof__(((MidletCompositeInterface*) nullptr)->setMidlet)) java_method_of(this, "setMidlet"))(this, midlet);
}

static inline AllBinaryMidlet* MidletCompositeInterface_getMidlet(void* this) {
    return ((__typeof__(((MidletCompositeInterface*) nullptr)->getMidlet)) java_method_of(this, "getMidlet"))(this);
}

static inline Displayable* MidletCompositeInterface_getDisplayable(void* this) {
    return ((__typeof__(((MidletCompositeInterface*) nullptr)->getDisplayable)) java_method_of(this, "getDisplayable"))(this);
}

#if __has_include("javax/microedition/lcdui/Displayable.h")
#include "javax/microedition/lcdui/Displayable.h"
#endif

#endif // ORG_ALLBINARY_MIDLET_MIDLETCOMPOSITEINTERFACE_H
