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
// package org.allbinary.game.score.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/game/score/HighScoreCommandsFactory.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/HighScoresPaintable.h"
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#include "org/allbinary/game/score/NoHighScoresFactory.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/SimpleTextPaintable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/SecondaryThreadPool.h"

typedef struct HighScoresCanvas HighScoresCanvas;
struct HighScoresCanvas {
    GameCommandCanvas base;
    HighScoresResultsListener HighScoresResultsListener_interface;
    Paintable* paintable;
    HighScoreCommandsFactory* highScoreCommandsFactory;
    SimpleTextPaintable* waitPaintable;
    HighScoresPaintable* highScoresPaintable;
    HighScoresFactoryInterface* highScoresFactoryInterface;
    ColorFillBasePaintable* colorFillPaintable;
    HighScoresHelperBase* highScoresHelper;
    GameInfo* gameInfo;
    HighScoresCanvasInputProcessor* highScoresCanvasInputProcessor;
    Command* currentCommand;
    bool hasPainted;
};

const char* HighScoresCanvas_NAME = "HighScoresCanvas";

HighScoresCanvas* HighScoresCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface);

void HighScoresCanvas_init(HighScoresCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface);
void HighScoresCanvas_initCommands(HighScoresCanvas* this, CommandListener* cmdListener);
void HighScoresCanvas_open(HighScoresCanvas* this);
void HighScoresCanvas_close(HighScoresCanvas* this);
void HighScoresCanvas_paint(HighScoresCanvas* this, Graphics* graphics);
void HighScoresCanvas_executeUpdate(HighScoresCanvas* this);
static HighScoresPaintable* HighScoresCanvas_getHighScoresPaintable(HighScoresCanvas* this);
void HighScoresCanvas_setHighScoresArray(HighScoresCanvas* this, HighScores** highScoresArray);
void HighScoresCanvas_updateCommand(HighScoresCanvas* this, Command* command);
GameInfo* HighScoresCanvas_getGameInfo(HighScoresCanvas* this);
static void HighScoresCanvas_setPaintable(HighScoresCanvas* this, Paintable* paintable);

static void HighScoresCanvas_initFields(HighScoresCanvas* this) {
    this->paintable = NullPaintable_getInstance();
    this->highScoreCommandsFactory = HighScoreCommandsFactory_getInstance();
    this->waitPaintable = SimpleTextPaintable_new(this->commonStrings->PLEASE_WAIT_FOR_SERVER, BasicColorFactory_getInstance()->WHITE);
    
    
    
    this->highScoresHelper = HighScoresHelperBase_new();
    
    
    this->currentCommand = this->highScoreCommandsFactory->HIGH_SCORE_COMMANDS[0];
    this->hasPainted = false;
}


void HighScoresCanvas_init(HighScoresCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface) {
        GameCommandCanvas_init(&this->base, commandListener, HighScoresCanvas_NAME, AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        HighScoresCanvas_initFields(this);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->highScoresPaintable = paintable;
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        this->highScoresCanvasInputProcessor = HighScoresCanvasInputProcessorFactoryInterface_getInstance(highScoresCanvasInputProcessorFactoryInterface, this);
        this->gameInfo = gameInfo;
        SimpleTextPaintable_setBasicColorP(this->waitPaintable, AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        JAVA_CALL(HighScoresCanvas_getHighScoresPaintable(this), setBasicColorP, AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), false);
        if (java_array_length(HighScoresHelperBase_getHighScoresArray(this->highScoresHelper)) == java_array_length(NoHighScoresFactory_getInstance()->NO_HIGH_SCORES)) {
            HighScoresCanvas_setPaintable(this, this->waitPaintable);
        } else {
            JAVA_CALL(this->logUtil, putF, "Show HighScores that are already loaded", this, this->commonStrings->CONSTRUCTOR);
            HighScoresCanvas_updateCommand(this, this->currentCommand);
            HighScoresCanvas_setPaintable(this, HighScoresCanvas_getHighScoresPaintable(this));
        }
        SecondaryThreadPool_runTask(SecondaryThreadPool_getInstance(), HighScoreRunnable_new(this));
}

HighScoresCanvas* HighScoresCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface) {
    HighScoresCanvas* this = calloc(1, sizeof(HighScoresCanvas));
    HighScoresCanvas_init(this, commandListener, allBinaryGameLayerManager, gameInfo, paintable, highScoresFactoryInterface, highScoresCanvasInputProcessorFactoryInterface);
    return this;
}


void HighScoresCanvas_initCommands(HighScoresCanvas* this, CommandListener* cmdListener) {
        HighScoresCanvas_removeAllCommands(this);
        HighScoresCanvas_addCommand(this, GameCommandsFactory_getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
        HighScoresCanvas_setCommandListener(this, cmdListener);
}


void HighScoresCanvas_open(HighScoresCanvas* this) {
        GameCommandCanvas_open((&this->base));
        HighScoresCanvasInputProcessor_open(this->highScoresCanvasInputProcessor);
}


// throws Exception
void HighScoresCanvas_close(HighScoresCanvas* this) {
        GameCommandCanvas_close((&this->base));
        HighScoresCanvasInputProcessor_close(this->highScoresCanvasInputProcessor);
}


void HighScoresCanvas_paint(HighScoresCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        Paintable_paint(this->paintable, graphics);
        if (this->waitPaintable != this->paintable) {
            HighScoresCanvasInputProcessor_paint(this->highScoresCanvasInputProcessor, graphics);
        }
        GameCommandCanvas_paint((&this->base), graphics);
        this->hasPainted = true;
}


void HighScoresCanvas_executeUpdate(HighScoresCanvas* this) {
        JAVA_TRY {
            HighScoresFactoryInterface_fetchHighScores(this->highScoresFactoryInterface, HighScoresCanvas_getGameInfo(this), this);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


static HighScoresPaintable* HighScoresCanvas_getHighScoresPaintable(HighScoresCanvas* this) {
        return this->highScoresPaintable;
}


void HighScoresCanvas_setHighScoresArray(HighScoresCanvas* this, HighScores** highScoresArray) {
        JAVA_TRY {
            if (highScoresArray != nullptr) {
                JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->START), appendint, java_array_length(highScoresArray)), toString), this, "setHighScoresArray");
            } else {
                JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, "setHighScoresArray");
            }
            HighScoresHelperBase_setHighScoresArray(this->highScoresHelper, highScoresArray);
            HighScoresCanvas_updateCommand(this, this->currentCommand);
            HighScoresCanvas_setPaintable(this, HighScoresCanvas_getHighScoresPaintable(this));
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


// throws Exception
void HighScoresCanvas_updateCommand(HighScoresCanvas* this, Command* command) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->START), append, JAVA_CALL(this->stringUtil, toString, command)), toString), this, this->commonStrings->UPDATE);
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        if (HighScoreCommandsFactory_isHighScoreCommand(this->highScoreCommandsFactory, command)) {
            int32_t index = HighScoreCommandsFactory_getIndex(this->highScoreCommandsFactory, command);
            int32_t nextIndex = index + 1;
            HighScores** highScoresArray = HighScoresHelperBase_getHighScoresArray(this->highScoresHelper);
            if (nextIndex >= java_array_length(highScoresArray)) {
                nextIndex = 0;
            }
            if (java_array_length(highScoresArray) > 0) {
                JAVA_CALL(HighScoresCanvas_getHighScoresPaintable(this), setHighScores, highScoresArray[index]);
            } else {
                JAVA_CALL(HighScoresCanvas_getHighScoresPaintable(this), setHighScores, NullHighScoresSingletonFactory_getInstance());
            }
            if (index != nextIndex) {
                HighScoresCanvas_removeAllCommands(this);
                HighScoresCanvas_addCommand(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
                HighScoresCanvas_addCommand(this, this->highScoreCommandsFactory->HIGH_SCORE_COMMANDS[nextIndex]);
            }
        }
        this->currentCommand = command;
        HighScoresCanvas_close(this);
        GameCommandCanvas_initMenu((&this->base));
        HighScoresCanvas_open(this);
        JAVA_CALL(this->repaintBehavior, onChangeRepaint, this);
}


GameInfo* HighScoresCanvas_getGameInfo(HighScoresCanvas* this) {
        return this->gameInfo;
}


static void HighScoresCanvas_setPaintable(HighScoresCanvas* this, Paintable* paintable) {
        this->paintable = paintable;
        JAVA_CALL(this->repaintBehavior, onChangeRepaint, this);
}

