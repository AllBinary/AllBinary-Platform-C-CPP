#ifndef ORG_ALLBINARY_GAME_INTERMISSIONINTERFACE_H
#define ORG_ALLBINARY_GAME_INTERMISSIONINTERFACE_H
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
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct IntermissionEnableListenerInterface IntermissionEnableListenerInterface;
typedef struct TimeDelayHelper TimeDelayHelper;

typedef struct IntermissionInterface IntermissionInterface;
struct IntermissionInterface {
    TimeDelayHelper* (*getTimeDelayHelper)(void* this);
    bool (*isEnabled)(void* this);
    void (*setEnabled)(void* this, bool value);
    void (*setListener)(void* this, IntermissionEnableListenerInterface* enableListener);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void IntermissionInterface_staticInit(void);

static inline TimeDelayHelper* IntermissionInterface_getTimeDelayHelper(void* this) {
    return ((__typeof__(((IntermissionInterface*) nullptr)->getTimeDelayHelper)) java_method_of(this, "getTimeDelayHelper"))(this);
}

static inline bool IntermissionInterface_isEnabled(void* this) {
    return ((__typeof__(((IntermissionInterface*) nullptr)->isEnabled)) java_method_of(this, "isEnabled"))(this);
}

static inline void IntermissionInterface_setEnabled(void* this, bool value) {
    ((__typeof__(((IntermissionInterface*) nullptr)->setEnabled)) java_method_of(this, "setEnabled"))(this, value);
}

static inline void IntermissionInterface_setListener(void* this, IntermissionEnableListenerInterface* enableListener) {
    ((__typeof__(((IntermissionInterface*) nullptr)->setListener)) java_method_of(this, "setListener"))(this, enableListener);
}

#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

#endif // ORG_ALLBINARY_GAME_INTERMISSIONINTERFACE_H
