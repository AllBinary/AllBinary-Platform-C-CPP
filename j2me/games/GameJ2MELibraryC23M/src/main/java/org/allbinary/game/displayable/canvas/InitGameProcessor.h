#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INITGAMEPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INITGAMEPROCESSOR_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2026 AllBinary
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
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
#include "org/allbinary/canvas/Processor.h"
// #include "org/allbinary/logic/communication/log/LogUtil.h"
// #include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct InitGameProcessor InitGameProcessor;
struct InitGameProcessor {
    Processor base;
    AllBinaryGameCanvas* gameCanvas;
};


InitGameProcessor* InitGameProcessor_new(AllBinaryGameCanvas* gameCanvas);

void InitGameProcessor_init(InitGameProcessor* this, AllBinaryGameCanvas* gameCanvas);

void InitGameProcessor_process(InitGameProcessor* this);
#define InitGameProcessor_new1 InitGameProcessor_new
#define InitGameProcessor_init1 InitGameProcessor_init
#ifndef InitGameProcessor_getInstance
#define InitGameProcessor_getInstance Processor_getInstance
#endif
#ifndef InitGameProcessor_processt
#define InitGameProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InitGameProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InitGameProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INITGAMEPROCESSOR_H
