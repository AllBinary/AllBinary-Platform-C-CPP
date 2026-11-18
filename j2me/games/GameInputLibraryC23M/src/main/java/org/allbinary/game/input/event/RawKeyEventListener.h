#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTLISTENER_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTLISTENER_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct RawKeyEventListener RawKeyEventListener;
struct RawKeyEventListener {
    void (*onEventRaw)(void* this, int32_t keyCode, int32_t deviceId, bool repeated);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RawKeyEventListener_staticInit(void);

static inline void RawKeyEventListener_onEventRaw(void* this, int32_t keyCode, int32_t deviceId, bool repeated) {
    ((__typeof__(((RawKeyEventListener*) nullptr)->onEventRaw)) java_method_of(this, "onEventRaw"))(this, keyCode, deviceId, repeated);
}


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTLISTENER_H
