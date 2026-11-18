#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLEINTERFACE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLEINTERFACE_H
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
typedef struct CommandListener CommandListener;
typedef struct ItemStateListener ItemStateListener;
typedef struct GameStateCompositeInterface GameStateCompositeInterface;
typedef struct PaintableInterface PaintableInterface;
typedef struct RunnableInterface RunnableInterface;
typedef struct ABHashtable ABHashtable;
#include "javax/microedition/lcdui/ItemStateListener.h"
#include "org/allbinary/game/state/GameStateCompositeInterface.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/thread/RunnableInterface.h"

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

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameCanvasRunnableInterface_staticInit(void);

static inline const char* GameCanvasRunnableInterface_getTitle(void* this) {
    return ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->getTitle)) java_method_of(this, "getTitle"))(this);
}

static inline bool GameCanvasRunnableInterface_isInitialized(void* this) {
    return ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->isInitialized)) java_method_of(this, "isInitialized"))(this);
}

static inline bool GameCanvasRunnableInterface_isPaused(void* this) {
    return ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->isPaused)) java_method_of(this, "isPaused"))(this);
}

static inline void GameCanvasRunnableInterface_unPause(void* this) {
    ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->unPause)) java_method_of(this, "unPause"))(this);
}

static inline void GameCanvasRunnableInterface_pause(void* this) {
    ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->pause)) java_method_of(this, "pause"))(this);
}

static inline bool GameCanvasRunnableInterface_isHighScoreSubmitted(void* this) {
    return ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->isHighScoreSubmitted)) java_method_of(this, "isHighScoreSubmitted"))(this);
}

static inline void GameCanvasRunnableInterface_setHighScoreSubmitted(void* this, bool highScoreSubmitted) {
    ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->setHighScoreSubmitted)) java_method_of(this, "setHighScoreSubmitted"))(this, highScoreSubmitted);
}

static inline void GameCanvasRunnableInterface_processGameOver(void* this) {
    ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->processGameOver)) java_method_of(this, "processGameOver"))(this);
}

static inline bool GameCanvasRunnableInterface_isGameOver(void* this) {
    return ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->isGameOver)) java_method_of(this, "isGameOver"))(this);
}

static inline void GameCanvasRunnableInterface_initCommands(void* this, CommandListener* cmdListener) {
    ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->initCommands)) java_method_of(this, "initCommands"))(this, cmdListener);
}

static inline ABHashtable* GameCanvasRunnableInterface_getCurrentStateHashtable(void* this) {
    return ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->getCurrentStateHashtable)) java_method_of(this, "getCurrentStateHashtable"))(this);
}

static inline ABHashtable* GameCanvasRunnableInterface_getLoadStateHashtable(void* this) {
    return ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->getLoadStateHashtable)) java_method_of(this, "getLoadStateHashtable"))(this);
}

static inline void GameCanvasRunnableInterface_setLoadStateHashtable(void* this, ABHashtable* hashtable) {
    ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->setLoadStateHashtable)) java_method_of(this, "setLoadStateHashtable"))(this, hashtable);
}

static inline int32_t GameCanvasRunnableInterface_getType(void* this) {
    return ((__typeof__(((GameCanvasRunnableInterface*) nullptr)->getType)) java_method_of(this, "getType"))(this);
}
#define GameCanvasRunnableInterface_isRunning RunnableInterface_isRunning
#define GameCanvasRunnableInterface_setRunning RunnableInterface_setRunning
#define GameCanvasRunnableInterface_setThread RunnableInterface_setThread
#define GameCanvasRunnableInterface_paint PaintableInterface_paint
#define GameCanvasRunnableInterface_paintThreed PaintableInterface_paintThreed
#define GameCanvasRunnableInterface_itemStateChanged ItemStateListener_itemStateChanged
#define GameCanvasRunnableInterface_setGameState GameStateCompositeInterface_setGameState
#define GameCanvasRunnableInterface_getGameState GameStateCompositeInterface_getGameState

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLEINTERFACE_H
