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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Displayable.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/NullDisplayable.h"
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/graphics/GraphicsStrings.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/NullRunnable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct CurrentDisplayableFactory CurrentDisplayableFactory;
struct CurrentDisplayableFactory {
    CommonStrings* commonStrings;
    CanvasStrings* canvasStrings;
    StringUtil* stringUtil;
    const char* SET_DISPLAYABLE;
    const char* SET_RUNNABLE;
    const char* CLEAR_RUNNABLE;
    const char* SET_USED_RUNNABLE;
    const char* RUNNABLE;
    const char* RUNNABLE_WAS_ALREADY_IN_USE;
    BasicArrayList* DEFAULT_CHILD_NAME_LIST;
    Displayable* displayable;
    Displayable* openGlReadydisplayable;
    GameRunnable* runnable;
    GameRunnable* usedRunnable;
};

static CurrentDisplayableFactory* CurrentDisplayableFactory_instance;

CurrentDisplayableFactory* CurrentDisplayableFactory_new(void);
CurrentDisplayableFactory* CurrentDisplayableFactory_getInstance(void);

void CurrentDisplayableFactory_init(CurrentDisplayableFactory* this);
void CurrentDisplayableFactory_setMyCanvas(CurrentDisplayableFactory* this, MyCanvas* displayable);
void CurrentDisplayableFactory_setDisplayable(CurrentDisplayableFactory* this, Displayable* displayable);
void CurrentDisplayableFactory_setOpenGlReadydisplayable(CurrentDisplayableFactory* this, Displayable* openGlReadydisplayable);
Displayable* CurrentDisplayableFactory_getOpenGlReadydisplayable(CurrentDisplayableFactory* this);
void CurrentDisplayableFactory_setRunnable(CurrentDisplayableFactory* this, GameRunnable* runnable);
void CurrentDisplayableFactory_clearRunnable(CurrentDisplayableFactory* this);
static void CurrentDisplayableFactory_update(CurrentDisplayableFactory* this);
Displayable* CurrentDisplayableFactory_getDisplayable(CurrentDisplayableFactory* this);
GameRunnable* CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory* this);
void CurrentDisplayableFactory_setUsedRunnable(CurrentDisplayableFactory* this, GameRunnable* usedRunnable);

// Static fields with runtime initializers: call this once at startup
void CurrentDisplayableFactory_staticInit(void) {
    CurrentDisplayableFactory_instance = CurrentDisplayableFactory_new();
}

static void CurrentDisplayableFactory_initFields(CurrentDisplayableFactory* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->canvasStrings = CanvasStrings_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->SET_DISPLAYABLE = "setDisplayable";
    this->SET_RUNNABLE = "setRunnable";
    this->CLEAR_RUNNABLE = "clearRunnable";
    this->SET_USED_RUNNABLE = "setUsedRunnable";
    this->RUNNABLE = "Runnable: ";
    this->RUNNABLE_WAS_ALREADY_IN_USE = "Runnable was already in use: ";
    this->DEFAULT_CHILD_NAME_LIST = BasicArrayListD_new();
    this->displayable = NullDisplayable_getInstance();
    this->openGlReadydisplayable = NullDisplayable_getInstance();
    this->runnable = NullWaitGameRunnable_getInstance();
    this->usedRunnable = NullWaitGameRunnable_getInstance();
}


CurrentDisplayableFactory* CurrentDisplayableFactory_getInstance(void) {
        return CurrentDisplayableFactory_instance;
}


void CurrentDisplayableFactory_init(CurrentDisplayableFactory* this) {
    CurrentDisplayableFactory_initFields(this);
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, this->canvasStrings->ABOUT);
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, this->canvasStrings->OPTIONS);
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, GameInputMappingCanvas_NAME);
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, GameInputMappingInstructionsCanvas_NAME);
        BasicArrayList_add(this->DEFAULT_CHILD_NAME_LIST, HighScoresCanvas_NAME);
}

CurrentDisplayableFactory* CurrentDisplayableFactory_new(void) {
    CurrentDisplayableFactory* this = calloc(1, sizeof(CurrentDisplayableFactory));
    CurrentDisplayableFactory_init(this);
    return this;
}


void CurrentDisplayableFactory_setMyCanvas(CurrentDisplayableFactory* this, MyCanvas* displayable) {
        if (java_instanceof(this->displayable, "MyCanvas")) {
            if (Displayable_hasChild(displayable, ((MyCanvas*) this->displayable))) {
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Child Displayable is already set for: "), append, StringUtil_toString(this->stringUtil, displayable)), toString), this, this->SET_DISPLAYABLE);
                return;
            }
        }
        CurrentDisplayableFactory_setDisplayable(this, displayable);
}


void CurrentDisplayableFactory_setDisplayable(CurrentDisplayableFactory* this, Displayable* displayable) {
        this->displayable = displayable;
        CurrentDisplayableFactory_setOpenGlReadydisplayable(this, displayable);
}


void CurrentDisplayableFactory_setOpenGlReadydisplayable(CurrentDisplayableFactory* this, Displayable* openGlReadydisplayable) {
        this->openGlReadydisplayable = openGlReadydisplayable;
        CurrentDisplayableFactory_update(this);
}


Displayable* CurrentDisplayableFactory_getOpenGlReadydisplayable(CurrentDisplayableFactory* this) {
        return this->openGlReadydisplayable;
}


void CurrentDisplayableFactory_setRunnable(CurrentDisplayableFactory* this, GameRunnable* runnable) {
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->RUNNABLE), append, StringUtil_toString(this->stringUtil, runnable)), toString), this, this->SET_RUNNABLE);
        this->runnable = runnable;
        if (this->usedRunnable != this->runnable) {
            CurrentDisplayableFactory_update(this);
        } else {
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->RUNNABLE_WAS_ALREADY_IN_USE), append, StringUtil_toString(this->stringUtil, runnable)), toString), this, this->SET_RUNNABLE);
        }
}


void CurrentDisplayableFactory_clearRunnable(CurrentDisplayableFactory* this) {
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->RUNNABLE), append, StringUtil_toString(this->stringUtil, NullRunnable_getInstance())), toString), this, this->CLEAR_RUNNABLE);
        CurrentDisplayableFactory_setUsedRunnable(this, NullWaitGameRunnable_getInstance());
}


static void CurrentDisplayableFactory_update(CurrentDisplayableFactory* this) {
        java_monitor_enter(this);
        {
            CommonSeps* commonSeps = CommonSeps_getInstance();
            Features* features = Features_getInstance();
            StringMaker* stringMaker = StringMaker_new();
            StringMaker_append(stringMaker, StringUtil_toString(this->stringUtil, this->openGlReadydisplayable));
            if (SWTUtil_isSWT && !Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, commonSeps->SPACE), append, SWTUtil_SWT), append, commonSeps->SPACE), append, this->RUNNABLE), append, StringUtil_toString(this->stringUtil, NullRunnable_getInstance())), toString), this, this->commonStrings->UPDATE);
                CurrentDisplayableFactory_setUsedRunnable(this, NullWaitGameRunnable_getInstance());
            } else if (J2MEUtil_isHTML()) {
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, commonSeps->SPACE), append, GraphicsStrings_getInstance()->HTML), append, commonSeps->SPACE), append, this->RUNNABLE), append, StringUtil_toString(this->stringUtil, this->runnable)), toString), this, this->commonStrings->UPDATE);
                CurrentDisplayableFactory_setUsedRunnable(this, this->runnable);
            } else if (java_instanceof(this->openGlReadydisplayable, "DemoCanvas") || java_instanceof(this->openGlReadydisplayable, "AllBinaryGameCanvas") || Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, commonSeps->SPACE), append, JAVA_CALL(OpenGLFeatureFactory_getInstance()->OPENGL, toString)), append, commonSeps->SPACE), append, this->RUNNABLE), append, StringUtil_toString(this->stringUtil, this->runnable)), toString), this, this->commonStrings->UPDATE);
                CurrentDisplayableFactory_setUsedRunnable(this, this->runnable);
            } else {
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, this->RUNNABLE), append, StringUtil_toString(this->stringUtil, NullRunnable_getInstance())), toString), this, this->commonStrings->UPDATE);
                CurrentDisplayableFactory_setUsedRunnable(this, NullWaitGameRunnable_getInstance());
            }
        }
        java_monitor_exit(this);
}


Displayable* CurrentDisplayableFactory_getDisplayable(CurrentDisplayableFactory* this) {
        return this->displayable;
}


GameRunnable* CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory* this) {
        return this->usedRunnable;
}


void CurrentDisplayableFactory_setUsedRunnable(CurrentDisplayableFactory* this, GameRunnable* usedRunnable) {
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->RUNNABLE), append, StringUtil_toString(this->stringUtil, this->runnable)), append, CommonSeps_getInstance()->COLON_SEP), append, StringUtil_toString(this->stringUtil, usedRunnable)), toString), this, this->SET_USED_RUNNABLE);
        this->usedRunnable = usedRunnable;
}

