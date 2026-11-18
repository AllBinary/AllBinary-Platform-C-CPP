#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTLISTENERINTERFACE_H
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
// package org.allbinary.game.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "java/lang/Integer.h"

typedef struct UpKeyEventListenerInterface UpKeyEventListenerInterface;
struct UpKeyEventListenerInterface {
    void (*onUpKeyEvent)(void* this, int32_t keyAsInteger);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpKeyEventListenerInterface_staticInit(void);

static inline void UpKeyEventListenerInterface_onUpKeyEvent(void* this, int32_t keyAsInteger) {
    ((__typeof__(((UpKeyEventListenerInterface*) nullptr)->onUpKeyEvent)) java_method_of(this, "onUpKeyEvent"))(this, keyAsInteger);
}
#define UpKeyEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTLISTENERINTERFACE_H
