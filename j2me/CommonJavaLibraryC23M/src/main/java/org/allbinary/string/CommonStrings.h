#ifndef ORG_ALLBINARY_STRING_COMMONSTRINGS_H
#define ORG_ALLBINARY_STRING_COMMONSTRINGS_H
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
// package org.allbinary.string

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsProperty.h"

typedef struct CommonStrings CommonStrings;
struct CommonStrings {
    const char* EMPTY;
    const char* CREATE_IMAGE;
    const char* PLEASE_WAIT;
    const char* PLEASE_WAIT_FOR_SERVER;
    const char* PERIODS;
    const char* LOADING;
    const char* CONSTRUCTOR;
    const char* START;
    const char* END;
    const char* EXCEPTION;
    const char* EXCEPTION_LABEL;
    const char* CLEANUP;
    const char* INIT;
    const char* CLOSE;
    const char* UP;
    const char* DOWN;
    const char* LEFT;
    const char* RIGHT;
    const char** DIRECTION_NAME;
    const char* CREATE;
    const char* REMOVE;
    const char* UPDATE;
    const char* DELETE;
    const char* delete;
    const char* LOAD;
    const char* SAVE;
    const char* ADD;
    const char* DROP;
    const char* INSERT;
    const char* VISIT;
    const char* START_METHOD_NAME;
    const char* END_METHOD_NAME;
    const char* GET;
    const char* PROCESS;
    const char* GET_INSTANCE;
    const char* GET_LIST;
    const char* RUN;
    const char* START_RUNNABLE;
    const char* RUNNING;
    const char* END_RUNNABLE;
    const char* DISABLE;
    const char* ENABLE;
    const char* SUCCESS;
    const char* FAILURE;
    const char* NOT_IMPLEMENTED;
    const char* UNKNOWN;
    const char* ON_EVENT;
    const char* IS_VALID;
    const char* TOSTRING;
    const char* ADD_LISTENER;
    const char* REMOVE_LISTENER;
    const char* SIZE;
};


CommonStrings* CommonStrings_new(void);
void CommonStrings_init(CommonStrings* this);

CommonStrings* CommonStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommonStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommonStrings_register(void);


#endif // ORG_ALLBINARY_STRING_COMMONSTRINGS_H
