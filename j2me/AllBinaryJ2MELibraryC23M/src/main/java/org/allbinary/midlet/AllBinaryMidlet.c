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
// package org.allbinary.midlet

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
// #include "javax/microedition/lcdui/Display.h"
// #include "javax/microedition/lcdui/Displayable.h"
// #include "javax/microedition/lcdui/NullCanvas.h"
// #include "javax/microedition/midlet/MIDlet.h"
// #include "javax/microedition/midlet/MIDletStateChangeException.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/system/Memory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct AllBinaryMidlet AllBinaryMidlet;
struct AllBinaryMidlet {
    MIDlet base;
    CommandListener CommandListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* SET_DISPLAY;
    const char* SETTING_;
    const char* _DISPLAY_;
    const char* SETTING_NO_TITLE;
    ABHashtable* hashtable;
    bool midletDestroyed;
};

static Any* AllBinaryMidlet_NULL_ALLBINARY_MIDLET;

AllBinaryMidlet* AllBinaryMidlet_new(void);
AllBinaryMidlet* AllBinaryMidlet_getNullInstance(void);

void AllBinaryMidlet_init(AllBinaryMidlet* this);
void AllBinaryMidlet_setDisplay(AllBinaryMidlet* this, Displayable* newDisplay);
Display* AllBinaryMidlet_getDisplay(AllBinaryMidlet* this);
Displayable* AllBinaryMidlet_getCurrentDisplayable(AllBinaryMidlet* this);
void AllBinaryMidlet_setDestroyed(AllBinaryMidlet* this, bool destroyed);
bool AllBinaryMidlet_isDestroyed(AllBinaryMidlet* this);
void AllBinaryMidlet_startApp(AllBinaryMidlet* this);
void AllBinaryMidlet_pauseApp(AllBinaryMidlet* this);
void AllBinaryMidlet_destroyAppInRunnable(AllBinaryMidlet* this, bool unconditional, bool isProgress);
void AllBinaryMidlet_destroyApp(AllBinaryMidlet* this, bool unconditional);
void AllBinaryMidlet_setStartStateHashtable(AllBinaryMidlet* this, ABHashtable* hashtable);
ABHashtable* AllBinaryMidlet_getStartStateHashtable(AllBinaryMidlet* this);
ABHashtable* AllBinaryMidlet_getCurrentStateHashtable(AllBinaryMidlet* this);
void AllBinaryMidlet_commandAction(AllBinaryMidlet* this, Command* command, Displayable* displayable);

// Static fields with runtime initializers: call this once at startup
void AllBinaryMidlet_staticInit(void) {
    AllBinaryMidlet_NULL_ALLBINARY_MIDLET = NullUtil_getInstance()->NULL_OBJECT;
}

static void AllBinaryMidlet_initFields(AllBinaryMidlet* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->SET_DISPLAY = "setDisplay";
    this->SETTING_ = "Setting: ";
    this->_DISPLAY_ = " Display: ";
    this->SETTING_NO_TITLE = "Setting: No Title, Display: ";
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->midletDestroyed = false;
}


AllBinaryMidlet* AllBinaryMidlet_getNullInstance(void) {
        if (AllBinaryMidlet_NULL_ALLBINARY_MIDLET == NullUtil_getInstance()->NULL_OBJECT) {
            AllBinaryMidlet_NULL_ALLBINARY_MIDLET = AllBinaryMidlet_new();
        }
        return ((AllBinaryMidlet*) AllBinaryMidlet_NULL_ALLBINARY_MIDLET);
}


void AllBinaryMidlet_init(AllBinaryMidlet* this) {
    MIDlet_init(&this->base);
    AllBinaryMidlet_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, "AllBinaryMidlet::AllBinaryMidlet");
}

AllBinaryMidlet* AllBinaryMidlet_new(void) {
    AllBinaryMidlet* this = calloc(1, sizeof(AllBinaryMidlet));
    AllBinaryMidlet_init(this);
    return this;
}


void AllBinaryMidlet_setDisplay(AllBinaryMidlet* this, Displayable* newDisplay) {
        const char* title = StringUtil_getInstance()->EMPTY_STRING;
        if (newDisplay != NullCanvas_NULL_CANVAS) {
            title = Displayable_getTitle(newDisplay);
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->SETTING_), append, title), append, this->_DISPLAY_), append, StringUtil_toString(StringUtil_getInstance(), newDisplay)), toString), this, this->SET_DISPLAY);
        }
        Display* display = AllBinaryMidlet_getDisplay(this);
        Display_setCurrent(display, newDisplay);
}


Display* AllBinaryMidlet_getDisplay(AllBinaryMidlet* this) {
        return Display_getDisplay(this);
}


Displayable* AllBinaryMidlet_getCurrentDisplayable(AllBinaryMidlet* this) {
        return JAVA_CALL(Display_getDisplay(this), getCurrent);
}


void AllBinaryMidlet_setDestroyed(AllBinaryMidlet* this, bool destroyed) {
        this->midletDestroyed = destroyed;
}


bool AllBinaryMidlet_isDestroyed(AllBinaryMidlet* this) {
        return this->midletDestroyed;
}


// throws MIDletStateChangeException
void AllBinaryMidlet_startApp(AllBinaryMidlet* this) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void AllBinaryMidlet_pauseApp(AllBinaryMidlet* this) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void AllBinaryMidlet_destroyAppInRunnable(AllBinaryMidlet* this, bool unconditional, bool isProgress) {
}


void AllBinaryMidlet_destroyApp(AllBinaryMidlet* this, bool unconditional) {
        const char* METHOD_NAME = "AllBinaryMidlet::destroyApp";
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, METHOD_NAME);
            PreLogUtil_put(Memory_getInfo(), this, METHOD_NAME);
            AllBinaryMidlet_setDestroyed(this, true);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, METHOD_NAME, e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryMidlet_setStartStateHashtable(AllBinaryMidlet* this, ABHashtable* hashtable) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), append, StringUtil_toString(StringUtil_getInstance(), hashtable)), toString), this, "setStartStateHashtable");
        this->hashtable = hashtable;
}


// throws Exception
ABHashtable* AllBinaryMidlet_getStartStateHashtable(AllBinaryMidlet* this) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), append, StringUtil_toString(StringUtil_getInstance(), this->hashtable)), toString), this, "getStartStateHashtable");
        return this->hashtable;
}


// throws Exception
ABHashtable* AllBinaryMidlet_getCurrentStateHashtable(AllBinaryMidlet* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getStateHashtable");
        return StdUtil_getInstance()->NULL_TABLE;
}


void AllBinaryMidlet_commandAction(AllBinaryMidlet* this, Command* command, Displayable* displayable) {
}

