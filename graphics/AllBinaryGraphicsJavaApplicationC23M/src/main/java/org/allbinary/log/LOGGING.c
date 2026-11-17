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
// package org.allbinary.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct LOGGING LOGGING;
struct LOGGING {
    const char* name;
};

static BasicArrayList* LOGGING_logging;
LOGGING* LOGGING_GRAPHICSPAINT;
LOGGING* LOGGING_GRAPHICSCREATION;
LOGGING* LOGGING_GRAPHICSDELETION;
LOGGING* LOGGING_LOADINGERROR;
LOGGING* LOGGING_MENUEVENT;
LOGGING* LOGGING_MOUSEEVENT;
LOGGING* LOGGING_KEYEVENT;
LOGGING* LOGGING_ACTIONEVENT;
LOGGING* LOGGING_ADJUSTMENTEVENT;
LOGGING* LOGGING_COMPONENTEVENT;
LOGGING* LOGGING_CONTAINEREVENT;
LOGGING* LOGGING_FOCUSEVENT;
LOGGING* LOGGING_HIERARCHYEVENT;
LOGGING* LOGGING_INPUTEVENT;
LOGGING* LOGGING_INVOCATIONEVENT;
LOGGING* LOGGING_ITEMEVENT;
LOGGING* LOGGING_PAINTEVENT;
LOGGING* LOGGING_TEXTEVENT;
LOGGING* LOGGING_WINDOWEVENT;

LOGGING* LOGGING_new(const char* value);

void LOGGING_init(LOGGING* this, const char* value);
bool LOGGING_contains(LOGGING* logType);
const char* LOGGING_toString(LOGGING* this);

// Static fields with runtime initializers: call this once at startup
void LOGGING_staticInit(void) {
    LOGGING_logging = BasicArrayListD_new();
    LOGGING_GRAPHICSPAINT = LOGGING_new("Graphics Paint");
    LOGGING_GRAPHICSCREATION = LOGGING_new("Graphics Creation");
    LOGGING_GRAPHICSDELETION = LOGGING_new("Graphics Deletion");
    LOGGING_LOADINGERROR = LOGGING_new("Loading Error");
    LOGGING_MENUEVENT = LOGGING_new("Menu Action Event");
    LOGGING_MOUSEEVENT = LOGGING_new("Mouse Action Event");
    LOGGING_KEYEVENT = LOGGING_new("Keyboard Action Event");
    LOGGING_ACTIONEVENT = LOGGING_new("Action Event");
    LOGGING_ADJUSTMENTEVENT = LOGGING_new("Adjustment Action Event");
    LOGGING_COMPONENTEVENT = LOGGING_new("Component Action Event");
    LOGGING_CONTAINEREVENT = LOGGING_new("Container Action Event");
    LOGGING_FOCUSEVENT = LOGGING_new("Focus Action Event");
    LOGGING_HIERARCHYEVENT = LOGGING_new("Hierarchy Action Event");
    LOGGING_INPUTEVENT = LOGGING_new("Input Action Event");
    LOGGING_INVOCATIONEVENT = LOGGING_new("Invocation Action Event");
    LOGGING_ITEMEVENT = LOGGING_new("Item Action Event");
    LOGGING_PAINTEVENT = LOGGING_new("Paint Action Event");
    LOGGING_TEXTEVENT = LOGGING_new("Text Action Event");
    LOGGING_WINDOWEVENT = LOGGING_new("Window Action Event");
}

static void LOGGING_initFields(LOGGING* this) {
    
}


void LOGGING_init(LOGGING* this, const char* value) {
    LOGGING_initFields(this);
        this->name = value;
        JAVA_CALL(_LOGGING->logging, add, value);
}

LOGGING* LOGGING_new(const char* value) {
    LOGGING* this = calloc(1, sizeof(LOGGING));
    LOGGING_init(this, value);
    return this;
}


bool LOGGING_contains(LOGGING* logType) {
        return JAVA_CALL(_LOGGING->logging, contains, LOGGING_toString(logType));
}


const char* LOGGING_toString(LOGGING* this) {
        return this->name;
}

