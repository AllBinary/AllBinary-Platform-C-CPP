#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTLISTENERINTERFACE_H
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
typedef struct GameKeyEvent GameKeyEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "java/lang/Integer.h"

typedef struct DownKeyEventListenerInterface DownKeyEventListenerInterface;
struct DownKeyEventListenerInterface {
    void (*onDownKeyEvent)(void* this, GameKeyEvent* keyInteger);
    void (*onDownKey)(void* this, int32_t keyInteger);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DownKeyEventListenerInterface_staticInit(void);

static inline void DownKeyEventListenerInterface_onDownKeyEvent(void* this, GameKeyEvent* keyInteger) {
    ((__typeof__(((DownKeyEventListenerInterface*) nullptr)->onDownKeyEvent)) java_method_of(this, "onDownKeyEvent"))(this, keyInteger);
}

static inline void DownKeyEventListenerInterface_onDownKey(void* this, int32_t keyInteger) {
    ((__typeof__(((DownKeyEventListenerInterface*) nullptr)->onDownKey)) java_method_of(this, "onDownKey"))(this, keyInteger);
}
#define DownKeyEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTLISTENERINTERFACE_H
