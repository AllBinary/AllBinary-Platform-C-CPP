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
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/ItemStateListener.h"
#include "org/allbinary/game/state/GameStateCompositeInterface.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/thread/RunnableInterface.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct GameCanvasRunnableInterface GameCanvasRunnableInterface;
struct GameCanvasRunnableInterface {
    const char* (*getTitle)(void* this);
    bool (*isInitialized)(void* this);
    bool (*isPaused)(void* this);
    void (*unPause)(void* this);
    void (*pause)(void* this);
    bool (*isHighScoreSubmitted)(void* this);
    void (*setHighScoreSubmitted)(void* this, bool highScoreSubmitted);
    void (*processGameOver)(void* this);
    bool (*isGameOver)(void* this);
    void (*initCommands)(void* this, CommandListener* cmdListener);
    ABHashtable* (*getCurrentStateHashtable)(void* this);
    ABHashtable* (*getLoadStateHashtable)(void* this);
    void (*setLoadStateHashtable)(void* this, ABHashtable* hashtable);
    int32_t (*getType)(void* this);
};


