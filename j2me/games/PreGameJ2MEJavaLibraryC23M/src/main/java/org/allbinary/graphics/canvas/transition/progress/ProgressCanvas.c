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
// package org.allbinary.graphics.canvas.transition.progress

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/NullCanvas.h"
// #include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/item/ABCustomGaugeItem.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#include "org/allbinary/thread/PathFindingThreadPool.h"
#include "org/allbinary/thread/ThreadPool.h"

typedef struct ProgressCanvas ProgressCanvas;
struct ProgressCanvas {
    RunnableCanvas base;
    PaintableInterface PaintableInterface_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    bool hasPainted;
    BasicColor* backgroundBasicColor;
    Paintable* GAUGE_PAINTABLE;
    float maxValue;
    ABCustomGaugeItem* gauge;
    const char* TEXT;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    AllBinaryMidlet* allbinaryMidlet;
    float value;
    const char* text;
    bool background;
    PaintableInterface* paintable;
    bool inProgress;
    Processor* IN_GAME_PROCESSOR;
    Processor* inGameProcessor;
    ProgressEndListener* progressEndListener;
    const char* backgroundLabel;
    const char* START_BACKGROUND;
    const char* ADD_PORTION;
    const char* ADD_EARLY_PORTION;
};


ProgressCanvas* ProgressCanvas_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ProgressCanvas_init(ProgressCanvas* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void ProgressCanvas_updateMeasurement(ProgressCanvas* this, Graphics* graphics);
void ProgressCanvas_init(ProgressCanvas* this, AllBinaryMidlet* gameMidlet);
void ProgressCanvas_update(ProgressCanvas* this, Graphics* graphics);
void ProgressCanvas_initCommands(ProgressCanvas* this, CommandListener* cmdListener);
float ProgressCanvas_getMaxValue(ProgressCanvas* this);
void ProgressCanvas_start(ProgressCanvas* this);
void ProgressCanvas_startBackground(ProgressCanvas* this, bool background);
void ProgressCanvas_endActual(ProgressCanvas* this);
void ProgressCanvas_inGame(ProgressCanvas* this);
void ProgressCanvas_end(ProgressCanvas* this);
void ProgressCanvas_endFromInitialLazyLoadingComplete(ProgressCanvas* this);
bool ProgressCanvas_isInGame(ProgressCanvas* this);
void ProgressCanvas_endIfPaintedSinceStart(ProgressCanvas* this);
void ProgressCanvas_addEarlyPortion(ProgressCanvas* this, int32_t value, const char* text, int32_t index);
void ProgressCanvas_addPortion(ProgressCanvas* this, int32_t value, const char* text, int32_t index);
void ProgressCanvas_addNormalPortion(ProgressCanvas* this, int32_t value, const char* text);
void ProgressCanvas_setValue(ProgressCanvas* this, int32_t value);
void ProgressCanvas_paint(ProgressCanvas* this, Graphics* graphics);
void ProgressCanvas_paint2(ProgressCanvas* this, Graphics* graphics);
void ProgressCanvas_paintThreed(ProgressCanvas* this, Graphics* graphics);
float ProgressCanvas_getValue(ProgressCanvas* this);
void ProgressCanvas_setText(ProgressCanvas* this, const char* text);
const char* ProgressCanvas_getText(ProgressCanvas* this);
void ProgressCanvas_setBackground(ProgressCanvas* this, bool background);
bool ProgressCanvas_isBackground(ProgressCanvas* this);

static void ProgressCanvas_initFields(ProgressCanvas* this) {
    this->hasPainted = false;
    
    this->GAUGE_PAINTABLE = ProgressPaintable_new(this);
    this->maxValue = 100.0f;
    
    this->TEXT = this->commonStrings->LOADING;
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->allbinaryMidlet = AllBinaryMidlet_getNullInstance();
    this->value = 0.0f;
    this->text = this->TEXT;
    this->background = true;
    this->paintable = this->GAUGE_PAINTABLE;
    this->inProgress = false;
    this->IN_GAME_PROCESSOR = Processor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
        this->pathFindingThreadPool = PathFindingThreadPool_getInstance();
        

    // throws Exception
    void ProgressCanvas_process(ProgressCanvas* this) {
            ThreadPool_runAPriorityTask(this->pathFindingThreadPool);
    }
#endif
;
    this->inGameProcessor = Processor_getInstance();
    this->progressEndListener = ProgressEndListener_instance;
    this->backgroundLabel = "Background AI Game Loading...";
    this->START_BACKGROUND = "startBackground";
    this->ADD_PORTION = "addPortion";
    this->ADD_EARLY_PORTION = "addEarlyPortion";
}


void ProgressCanvas_init(ProgressCanvas* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        RunnableCanvas_init(&this->base, NullCommandListener_NULL_COMMAND_LISTENER, CanvasStrings_getInstance()->EMPTY_CHILD_NAME_LIST, false);
        ProgressCanvas_initFields(this);
        this->backgroundBasicColor = backgroundBasicColor;
        this->gauge = ABCustomGaugeItem_new(StringUtil_getInstance()->EMPTY_STRING, ((int32_t) this->maxValue), 0, backgroundBasicColor, foregroundBasicColor);
}

ProgressCanvas* ProgressCanvas_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ProgressCanvas* this = calloc(1, sizeof(ProgressCanvas));
    ProgressCanvas_init(this, title, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void ProgressCanvas_updateMeasurement(ProgressCanvas* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        ABCustomGaugeItem_setHeight(this->gauge, Font_getHeight(font) + 2);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void ProgressCanvas_init(ProgressCanvas* this, AllBinaryMidlet* gameMidlet) {
        this->allbinaryMidlet = gameMidlet;
}


// throws Exception
void ProgressCanvas_update(ProgressCanvas* this, Graphics* graphics) {
}


void ProgressCanvas_initCommands(ProgressCanvas* this, CommandListener* cmdListener) {
}


float ProgressCanvas_getMaxValue(ProgressCanvas* this) {
        return this->maxValue;
}


void ProgressCanvas_start(ProgressCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->START_METHOD_NAME);
        ProgressCanvas_setBackground(this, true);
        ABCustomGaugeItem_setHeight(this->gauge, 30);
        ABCustomGaugeItem_setLabel(this->gauge, this->commonStrings->PLEASE_WAIT);
        ProgressCanvas_setText(this, this->TEXT);
        ProgressCanvas_setValue(this, 0);
        this->inGameProcessor = Processor_getInstance();
        this->paintable = this->GAUGE_PAINTABLE;
        this->inProgress = true;
}


void ProgressCanvas_startBackground(ProgressCanvas* this, bool background) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->START_BACKGROUND);
        ProgressCanvas_setBackground(this, background);
        this->myFontProcessor = this->updateMyFontProcessor;
        ABCustomGaugeItem_setLabel(this->gauge, this->backgroundLabel);
        ProgressCanvas_setText(this, this->TEXT);
        ProgressCanvas_setValue(this, 0);
        this->inGameProcessor = Processor_getInstance();
        this->paintable = this->GAUGE_PAINTABLE;
}


void ProgressCanvas_endActual(ProgressCanvas* this) {
        AllBinaryMidlet_commandAction(this->allbinaryMidlet, GameCommandsFactory_getInstance()->SHOW_GAME_CANVAS, NullCanvas_NULL_CANVAS);
        this->inProgress = false;
        ProgressCanvas_inGame(this);
}


void ProgressCanvas_inGame(ProgressCanvas* this) {
        ProgressEndListener_onEndEvent(this->progressEndListener);
        this->inGameProcessor = this->IN_GAME_PROCESSOR;
}


void ProgressCanvas_end(ProgressCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->END_METHOD_NAME);
        ABCustomGaugeItem_setValue(this->gauge, ProgressCanvas_getMaxValue(this));
        ProgressCanvas_endActual(this);
        this->paintable = NullPaintable_getInstance();
}


void ProgressCanvas_endFromInitialLazyLoadingComplete(ProgressCanvas* this) {
        ProgressEndListener_onEndEvent(this->progressEndListener);
        ABCustomGaugeItem_setValue(this->gauge, ProgressCanvas_getMaxValue(this));
        this->inGameProcessor = this->IN_GAME_PROCESSOR;
}


bool ProgressCanvas_isInGame(ProgressCanvas* this) {
        if (this->inGameProcessor == this->IN_GAME_PROCESSOR) {
            return true;
        }
        return false;
}


void ProgressCanvas_endIfPaintedSinceStart(ProgressCanvas* this) {
}


void ProgressCanvas_addEarlyPortion(ProgressCanvas* this, int32_t value, const char* text, int32_t index) {
        ProgressCanvas_setText(this, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), text), append, JAVA_CALL(SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), index), toString)), toString));
        ABCustomGaugeItem_setValue(this->gauge, ABCustomGaugeItem_getValue(this->gauge) + ProgressCanvas_getMaxValue(this) / ((float) value));
}


void ProgressCanvas_addPortion(ProgressCanvas* this, int32_t value, const char* text, int32_t index) {
        ProgressCanvas_setText(this, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), text), append, JAVA_CALL(SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), index), toString)), toString));
        PreLogUtil_put(this->text, this, this->ADD_PORTION);
        ABCustomGaugeItem_setValue(this->gauge, ABCustomGaugeItem_getValue(this->gauge) + ProgressCanvas_getMaxValue(this) / ((float) value));
}


void ProgressCanvas_addNormalPortion(ProgressCanvas* this, int32_t value, const char* text) {
        if (this->text != text) {
            PreLogUtil_put(text, this, this->ADD_PORTION);
        }
        ProgressCanvas_setText(this, text);
        ABCustomGaugeItem_setValue(this->gauge, ABCustomGaugeItem_getValue(this->gauge) + ProgressCanvas_getMaxValue(this) / ((float) value));
}


void ProgressCanvas_setValue(ProgressCanvas* this, int32_t value) {
        this->value = ((float) value);
        ABCustomGaugeItem_setValue(this->gauge, ((float) value));
}


void ProgressCanvas_paint(ProgressCanvas* this, Graphics* graphics) {
        PaintableInterface_paint(this->paintable, graphics);
}


void ProgressCanvas_paint2(ProgressCanvas* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, BasicColor_intValue(this->backgroundBasicColor));
        Graphics_fillRect(graphics, 0, 0, JAVA_CALL(this->displayInfo, getLastWidth), JAVA_CALL(this->displayInfo, getLastHeight));
        ABCustomGaugeItem_paintXY(this->gauge, graphics, 0, 0);
        this->hasPainted = true;
}


void ProgressCanvas_paintThreed(ProgressCanvas* this, Graphics* graphics) {
}


float ProgressCanvas_getValue(ProgressCanvas* this) {
        return this->value;
}


void ProgressCanvas_setText(ProgressCanvas* this, const char* text) {
        this->text = text;
}


const char* ProgressCanvas_getText(ProgressCanvas* this) {
        return this->text;
}


void ProgressCanvas_setBackground(ProgressCanvas* this, bool background) {
        this->background = background;
}


bool ProgressCanvas_isBackground(ProgressCanvas* this) {
        return this->background;
}

