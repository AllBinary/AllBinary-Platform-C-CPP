#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPROCESSOR_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct Processor Processor;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/canvas/Processor.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct StartIntermissionProcessor StartIntermissionProcessor;
struct StartIntermissionProcessor {
    Processor base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AllBinaryGameCanvas* gameCanvas;
    int64_t WAIT;
};


StartIntermissionProcessor* StartIntermissionProcessor_new(AllBinaryGameCanvas* gameCanvas);

void StartIntermissionProcessor_init(StartIntermissionProcessor* this, AllBinaryGameCanvas* gameCanvas);

void StartIntermissionProcessor_process(StartIntermissionProcessor* this);
#define StartIntermissionProcessor_new1 StartIntermissionProcessor_new
#define StartIntermissionProcessor_init1 StartIntermissionProcessor_init
#ifndef StartIntermissionProcessor_getInstance
#define StartIntermissionProcessor_getInstance Processor_getInstance
#endif
#ifndef StartIntermissionProcessor_processt
#define StartIntermissionProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StartIntermissionProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StartIntermissionProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPROCESSOR_H
