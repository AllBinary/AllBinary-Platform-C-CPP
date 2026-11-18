#ifndef ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H
#define ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H
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
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct Display Display;
typedef struct Displayable Displayable;
typedef struct NullCanvas NullCanvas;
typedef struct MIDlet MIDlet;
typedef struct MIDletStateChangeException MIDletStateChangeException;
typedef struct StdUtil StdUtil;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct EventStrings EventStrings;
typedef struct CommonLabels CommonLabels;
typedef struct CommonStrings CommonStrings;
typedef struct Memory Memory;
typedef struct NullUtil NullUtil;
typedef struct ABHashtable ABHashtable;
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/midlet/MIDlet.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

typedef struct AllBinaryMidlet AllBinaryMidlet;
struct AllBinaryMidlet {
    MIDlet base;
    CommandListener CommandListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* SET_DISPLAY;
    const char* SETTING_;
    const char* _DISPLAY__;
    const char* SETTING_NO_TITLE;
    ABHashtable* hashtable;
    bool midletDestroyed;
};


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
#define AllBinaryMidlet_new0 AllBinaryMidlet_new
#define AllBinaryMidlet_init0 AllBinaryMidlet_init
#ifndef AllBinaryMidlet_checkPermission
#define AllBinaryMidlet_checkPermission MIDlet_checkPermission
#endif
#ifndef AllBinaryMidlet_getAppProperty
#define AllBinaryMidlet_getAppProperty MIDlet_getAppProperty
#endif
#ifndef AllBinaryMidlet_notifyDestroyed
#define AllBinaryMidlet_notifyDestroyed MIDlet_notifyDestroyed
#endif
#ifndef AllBinaryMidlet_notifyPaused
#define AllBinaryMidlet_notifyPaused MIDlet_notifyPaused
#endif
#ifndef AllBinaryMidlet_platformRequest
#define AllBinaryMidlet_platformRequest MIDlet_platformRequest
#endif
#ifndef AllBinaryMidlet_resumeRequest
#define AllBinaryMidlet_resumeRequest MIDlet_resumeRequest
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryMidlet_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryMidlet_register(void);

#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Displayable.h")
#include "javax/microedition/lcdui/Displayable.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H
