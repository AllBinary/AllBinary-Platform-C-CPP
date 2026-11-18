#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDLEVELINTERMISSIONPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDLEVELINTERMISSIONPROCESSOR_H
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
#include "org/allbinary/canvas/Processor.h"
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct EndLevelIntermissionProcessor EndLevelIntermissionProcessor;
struct EndLevelIntermissionProcessor {
    Processor base;
    AllBinaryGameCanvas* gameCanvas;
};


EndLevelIntermissionProcessor* EndLevelIntermissionProcessor_new(AllBinaryGameCanvas* gameCanvas);

void EndLevelIntermissionProcessor_init(EndLevelIntermissionProcessor* this, AllBinaryGameCanvas* gameCanvas);

void EndLevelIntermissionProcessor_process(EndLevelIntermissionProcessor* this);
#define EndLevelIntermissionProcessor_new1 EndLevelIntermissionProcessor_new
#define EndLevelIntermissionProcessor_init1 EndLevelIntermissionProcessor_init
#ifndef EndLevelIntermissionProcessor_getInstance
#define EndLevelIntermissionProcessor_getInstance Processor_getInstance
#endif
#ifndef EndLevelIntermissionProcessor_processt
#define EndLevelIntermissionProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EndLevelIntermissionProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void EndLevelIntermissionProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDLEVELINTERMISSIONPROCESSOR_H
