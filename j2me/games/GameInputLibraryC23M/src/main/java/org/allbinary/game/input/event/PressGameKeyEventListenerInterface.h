#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_PRESSGAMEKEYEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_PRESSGAMEKEYEVENTLISTENERINTERFACE_H
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

typedef struct PressGameKeyEventListenerInterface PressGameKeyEventListenerInterface;
struct PressGameKeyEventListenerInterface {
    void (*onPressGameKeyEvent)(void* this, GameKeyEvent* gameKeyEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PressGameKeyEventListenerInterface_staticInit(void);

static inline void PressGameKeyEventListenerInterface_onPressGameKeyEvent(void* this, GameKeyEvent* gameKeyEvent) {
    ((__typeof__(((PressGameKeyEventListenerInterface*) nullptr)->onPressGameKeyEvent)) java_method_of(this, "onPressGameKeyEvent"))(this, gameKeyEvent);
}
#define PressGameKeyEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_PRESSGAMEKEYEVENTLISTENERINTERFACE_H
