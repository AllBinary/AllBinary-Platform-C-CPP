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
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"

typedef struct ImmediateCommandFormInputProcessor ImmediateCommandFormInputProcessor;
struct ImmediateCommandFormInputProcessor {
    CommandFormInputProcessor base;
    TimeDelayHelper* timeHelper;
    GameCommandCanvas* gameCommandCanvas;
};


ImmediateCommandFormInputProcessor* ImmediateCommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, GameCommandCanvas* gameCommandCanvas, ScrollSelectionForm* form);

void ImmediateCommandFormInputProcessor_init(ImmediateCommandFormInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, GameCommandCanvas* gameCommandCanvas, ScrollSelectionForm* form);
void ImmediateCommandFormInputProcessor_onPressGameKeyEvent(ImmediateCommandFormInputProcessor* this, GameKeyEvent* gameKeyEvent);
void ImmediateCommandFormInputProcessor_onDownGameKeyEvent(ImmediateCommandFormInputProcessor* this, GameKeyEvent* gameKeyEvent);
void ImmediateCommandFormInputProcessor_onUpGameKeyEvent(ImmediateCommandFormInputProcessor* this, GameKeyEvent* gameKeyEvent);
void ImmediateCommandFormInputProcessor_onMotionGestureEvent(ImmediateCommandFormInputProcessor* this, MotionGestureEvent* motionGestureEvent);

static void ImmediateCommandFormInputProcessor_initFields(ImmediateCommandFormInputProcessor* this) {
    this->timeHelper = TimeDelayHelper_new(25);
    
}


void ImmediateCommandFormInputProcessor_init(ImmediateCommandFormInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, GameCommandCanvas* gameCommandCanvas, ScrollSelectionForm* form) {
        CommandFormInputProcessor_init(&this->base, gameKeyEventList, playerInputId, gameCommandCanvas, form);
        ImmediateCommandFormInputProcessor_initFields(this);
        this->gameCommandCanvas = gameCommandCanvas;
}

ImmediateCommandFormInputProcessor* ImmediateCommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, GameCommandCanvas* gameCommandCanvas, ScrollSelectionForm* form) {
    ImmediateCommandFormInputProcessor* this = calloc(1, sizeof(ImmediateCommandFormInputProcessor));
    ImmediateCommandFormInputProcessor_init(this, gameKeyEventList, playerInputId, gameCommandCanvas, form);
    return this;
}


// synchronized
void ImmediateCommandFormInputProcessor_onPressGameKeyEvent(ImmediateCommandFormInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        JAVA_TRY {
            CommandFormInputProcessor_onPressGameKeyEvent((&this->base), gameKeyEvent);
            if (TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                ImmediateCommandFormInputProcessor_processInputList(this);
                JAVA_CALL(this->gameCommandCanvas->repaintBehavior, onChangeRepaint, ImmediateCommandFormInputProcessor_getCanvas(this));
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->gameInputStrings->ON_PRESS_GAME_KEY, e);
        } JAVA_END_TRY;
}


// synchronized
void ImmediateCommandFormInputProcessor_onDownGameKeyEvent(ImmediateCommandFormInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        JAVA_TRY {
            CommandFormInputProcessor_onDownGameKeyEvent((&this->base), gameKeyEvent);
            if (TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                ImmediateCommandFormInputProcessor_processInputList(this);
                JAVA_CALL(this->gameCommandCanvas->repaintBehavior, onChangeRepaint, ImmediateCommandFormInputProcessor_getCanvas(this));
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->gameInputStrings->ON_DOWN_GAME_KEY, e);
        } JAVA_END_TRY;
}


// synchronized
void ImmediateCommandFormInputProcessor_onUpGameKeyEvent(ImmediateCommandFormInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        JAVA_TRY {
            CommandFormInputProcessor_onUpGameKeyEvent((&this->base), gameKeyEvent);
            if (TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                ImmediateCommandFormInputProcessor_processInputList(this);
                JAVA_CALL(this->gameCommandCanvas->repaintBehavior, onChangeRepaint, ImmediateCommandFormInputProcessor_getCanvas(this));
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->gameInputStrings->ON_UP_GAME_KEY, e);
        } JAVA_END_TRY;
}


void ImmediateCommandFormInputProcessor_onMotionGestureEvent(ImmediateCommandFormInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
        JAVA_TRY {
            CommandFormInputProcessor_onMotionGestureEvent((&this->base), motionGestureEvent);
            if (TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                ImmediateCommandFormInputProcessor_processInputList(this);
                JAVA_CALL(this->gameCommandCanvas->repaintBehavior, onChangeRepaint, ImmediateCommandFormInputProcessor_getCanvas(this));
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "onMotionGestureEvent", e);
        } JAVA_END_TRY;
}

