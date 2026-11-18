#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H
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
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct EventStrings EventStrings;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct RawKeyEventHandler RawKeyEventHandler;
struct RawKeyEventHandler {
    LogUtil* logUtil;
    BasicArrayList* eventListenerInterfaceList;
};


RawKeyEventHandler* RawKeyEventHandler_new(void);

RawKeyEventHandler* RawKeyEventHandler_getInstance(void);

void RawKeyEventHandler_init(RawKeyEventHandler* this);

void RawKeyEventHandler_removeAllListeners(RawKeyEventHandler* this);

void RawKeyEventHandler_addListeners(RawKeyEventHandler* this, BasicArrayList* vector);

void RawKeyEventHandler_addListenerSingleThreaded(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface);

void RawKeyEventHandler_addListener(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface);

void RawKeyEventHandler_removeListenerSingleThreaded(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface);

void RawKeyEventHandler_removeListener(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface);

void RawKeyEventHandler_fireEvent(RawKeyEventHandler* this, int32_t keyCode, int32_t deviceId, bool repeated);

void RawKeyEventHandler_process(RawKeyEventHandler* this, int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener* eventListenerInterface);

BasicArrayList* RawKeyEventHandler_getEventListenerInterfaceListP(RawKeyEventHandler* this);

const char* RawKeyEventHandler_toString(RawKeyEventHandler* this);
#define RawKeyEventHandler_new0 RawKeyEventHandler_new
#define RawKeyEventHandler_init0 RawKeyEventHandler_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RawKeyEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RawKeyEventHandler_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H
