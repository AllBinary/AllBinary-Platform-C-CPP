// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Item.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


NullGameCanvasRunnable* NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE;
























void NullGameCanvasRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE = NullGameCanvasRunnable_new();
}

void NullGameCanvasRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullGameCanvasRunnable", nullptr);
    java_register_method("NullGameCanvasRunnable", "getTitle", (void*) NullGameCanvasRunnable_getTitle);
    java_register_method("NullGameCanvasRunnable", "isInitialized", (void*) NullGameCanvasRunnable_isInitialized);
    java_register_method("NullGameCanvasRunnable", "isPaused", (void*) NullGameCanvasRunnable_isPaused);
    java_register_method("NullGameCanvasRunnable", "unPause", (void*) NullGameCanvasRunnable_unPause);
    java_register_method("NullGameCanvasRunnable", "pause", (void*) NullGameCanvasRunnable_pause);
    java_register_method("NullGameCanvasRunnable", "isHighScoreSubmitted", (void*) NullGameCanvasRunnable_isHighScoreSubmitted);
    java_register_method("NullGameCanvasRunnable", "setHighScoreSubmitted", (void*) NullGameCanvasRunnable_setHighScoreSubmitted);
    java_register_method("NullGameCanvasRunnable", "processGameOver", (void*) NullGameCanvasRunnable_processGameOver);
    java_register_method("NullGameCanvasRunnable", "isGameOver", (void*) NullGameCanvasRunnable_isGameOver);
    java_register_method("NullGameCanvasRunnable", "initCommands", (void*) NullGameCanvasRunnable_initCommands);
    java_register_method("NullGameCanvasRunnable", "getCurrentStateHashtable", (void*) NullGameCanvasRunnable_getCurrentStateHashtable);
    java_register_method("NullGameCanvasRunnable", "getLoadStateHashtable", (void*) NullGameCanvasRunnable_getLoadStateHashtable);
    java_register_method("NullGameCanvasRunnable", "setLoadStateHashtable", (void*) NullGameCanvasRunnable_setLoadStateHashtable);
    java_register_method("NullGameCanvasRunnable", "getType", (void*) NullGameCanvasRunnable_getType);
    java_register_method("NullGameCanvasRunnable", "setGameState", (void*) NullGameCanvasRunnable_setGameState);
    java_register_method("NullGameCanvasRunnable", "getGameState", (void*) NullGameCanvasRunnable_getGameState);
    java_register_method("NullGameCanvasRunnable", "itemStateChanged", (void*) NullGameCanvasRunnable_itemStateChanged);
    java_register_method("NullGameCanvasRunnable", "paint", (void*) NullGameCanvasRunnable_paint);
    java_register_method("NullGameCanvasRunnable", "paintThreed", (void*) NullGameCanvasRunnable_paintThreed);
    java_register_method("NullGameCanvasRunnable", "isRunning", (void*) NullGameCanvasRunnable_isRunning);
    java_register_method("NullGameCanvasRunnable", "setRunning", (void*) NullGameCanvasRunnable_setRunning);
    java_register_method("NullGameCanvasRunnable", "setThread", (void*) NullGameCanvasRunnable_setThread);
    java_register_method("NullGameCanvasRunnable", "run", (void*) NullGameCanvasRunnable_run);
}

static void NullGameCanvasRunnable_initFields(NullGameCanvasRunnable* this) {
    this->gameStateFactory = GameStateFactory_getInstance();
}

void NullGameCanvasRunnable_init(NullGameCanvasRunnable* this) {
    NullGameCanvasRunnable_register();
    NullGameCanvasRunnable_initFields(this);
}

NullGameCanvasRunnable* NullGameCanvasRunnable_new(void) {
    NullGameCanvasRunnable* this = java_object_alloc(sizeof(NullGameCanvasRunnable), "NullGameCanvasRunnable");
    NullGameCanvasRunnable_init(this);
    return this;
}


const char* NullGameCanvasRunnable_getTitle(NullGameCanvasRunnable* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool NullGameCanvasRunnable_isInitialized(NullGameCanvasRunnable* this) {
        return false;
}


bool NullGameCanvasRunnable_isPaused(NullGameCanvasRunnable* this) {
        return false;
}


void NullGameCanvasRunnable_unPause(NullGameCanvasRunnable* this) {
}


void NullGameCanvasRunnable_pause(NullGameCanvasRunnable* this) {
}


bool NullGameCanvasRunnable_isHighScoreSubmitted(NullGameCanvasRunnable* this) {
        return false;
}


// throws Exception
void NullGameCanvasRunnable_setHighScoreSubmitted(NullGameCanvasRunnable* this, bool highScoreSubmitted) {
}


// throws Exception
void NullGameCanvasRunnable_processGameOver(NullGameCanvasRunnable* this) {
}


bool NullGameCanvasRunnable_isGameOver(NullGameCanvasRunnable* this) {
        return false;
}


void NullGameCanvasRunnable_initCommands(NullGameCanvasRunnable* this, CommandListener* cmdListener) {
}


// throws Exception
ABHashtable* NullGameCanvasRunnable_getCurrentStateHashtable(NullGameCanvasRunnable* this) {
        return StdUtil_getInstance()->NULL_TABLE;
}


// throws Exception
ABHashtable* NullGameCanvasRunnable_getLoadStateHashtable(NullGameCanvasRunnable* this) {
        return StdUtil_getInstance()->NULL_TABLE;
}


// throws Exception
void NullGameCanvasRunnable_setLoadStateHashtable(NullGameCanvasRunnable* this, ABHashtable* hashtable) {
}


int32_t NullGameCanvasRunnable_getType(NullGameCanvasRunnable* this) {
        return -1;
}


// throws Exception
void NullGameCanvasRunnable_setGameState(NullGameCanvasRunnable* this, GameState* gameState) {
}


GameState* NullGameCanvasRunnable_getGameState(NullGameCanvasRunnable* this) {
        return this->gameStateFactory->NO_GAME_STATE;
}


void NullGameCanvasRunnable_itemStateChanged(NullGameCanvasRunnable* this, Item* item) {
}


void NullGameCanvasRunnable_paint(NullGameCanvasRunnable* this, Graphics* graphics) {
}


void NullGameCanvasRunnable_paintThreed(NullGameCanvasRunnable* this, Graphics* graphics) {
}


bool NullGameCanvasRunnable_isRunning(NullGameCanvasRunnable* this) {
        return false;
}


void NullGameCanvasRunnable_setRunning(NullGameCanvasRunnable* this, bool isRunning) {
}


// throws Exception
void NullGameCanvasRunnable_setThread(NullGameCanvasRunnable* this, Thread* thread) {
}


void NullGameCanvasRunnable_run(NullGameCanvasRunnable* this) {
}

