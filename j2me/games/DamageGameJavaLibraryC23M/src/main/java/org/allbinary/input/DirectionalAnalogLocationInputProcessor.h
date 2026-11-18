#ifndef ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H
#define ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H
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
// package org.allbinary.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AnalogLocationInputProcessor AnalogLocationInputProcessor;
typedef struct GameInputProcessor GameInputProcessor;
typedef struct GameKeyEventSourceInterface GameKeyEventSourceInterface;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct AnalogLocationInput AnalogLocationInput;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct GameKeyEventFactory GameKeyEventFactory;
typedef struct CustomGPoint CustomGPoint;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/android/input/motion/AnalogLocationInputProcessor.h"
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEvent.h")
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct DirectionalAnalogLocationInputProcessor DirectionalAnalogLocationInputProcessor;
struct DirectionalAnalogLocationInputProcessor {
    AnalogLocationInputProcessor base;
    GameKeyEventSourceInterface GameKeyEventSourceInterface_interface;
    LogUtil* logUtil;
    GameInputProcessor** inputProcessorArray;
    GameKeyFactory* gameKeyFactory;
    GameKeyEvent* leftGameKeyEvent;
    GameKeyEvent* rightGameKeyEvent;
    GameKeyEvent* upGameKeyEvent;
    GameKeyEvent* downGameKeyEvent;
    GameKeyEvent* leftTriggerGameKeyEvent;
    GameKeyEvent* rightTriggerGameKeyEvent;
};


DirectionalAnalogLocationInputProcessor* DirectionalAnalogLocationInputProcessor_new(GameInputProcessor** inputProcessorArray);

void DirectionalAnalogLocationInputProcessor_init(DirectionalAnalogLocationInputProcessor* this, GameInputProcessor** inputProcessorArray);

void DirectionalAnalogLocationInputProcessor_process(DirectionalAnalogLocationInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInput* analogLocationInput);

int32_t DirectionalAnalogLocationInputProcessor_getSourceId(DirectionalAnalogLocationInputProcessor* this);
#define DirectionalAnalogLocationInputProcessor_new1 DirectionalAnalogLocationInputProcessor_new
#define DirectionalAnalogLocationInputProcessor_init1 DirectionalAnalogLocationInputProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DirectionalAnalogLocationInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DirectionalAnalogLocationInputProcessor_register(void);


#endif // ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H
