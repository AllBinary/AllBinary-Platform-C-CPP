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
// package org.allbinary.graphics.j2me

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/GuiLog.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/graphics/j2me/Exception.h"

typedef struct GraphicsException GraphicsException;
struct GraphicsException {
    Exception base;
    LogUtil* logUtil;
    GuiLog* guiLog;
};


GraphicsException* GraphicsException_new(const char* msg, Any* obj, const char* method);

void GraphicsException_init(GraphicsException* this, const char* msg, Any* obj, const char* method);

GraphicsException* GraphicsException_new3(const char* msg, const char* className, const char* method);
void GraphicsException_init3(GraphicsException* this, const char* msg, const char* className, const char* method);

static void GraphicsException_initFields(GraphicsException* this) {
    this->logUtil = LogUtil_getInstance();
    this->guiLog = GuiLog_getInstance();
}


void GraphicsException_init(GraphicsException* this, const char* msg, Any* obj, const char* method) {
        Exception_init(&this->base, msg);
        GraphicsException_initFields(this);
        JAVA_TRY {
            GuiLog_showDialog(this->guiLog, msg);
            LogUtil_put(this->logUtil, msg, obj, method, this);
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}

GraphicsException* GraphicsException_new(const char* msg, Any* obj, const char* method) {
    GraphicsException* this = calloc(1, sizeof(GraphicsException));
    GraphicsException_init(this, msg, obj, method);
    return this;
}


void GraphicsException_init3(GraphicsException* this, const char* msg, const char* className, const char* method) {
        Exception_init(&this->base, msg);
        GraphicsException_initFields(this);
        JAVA_TRY {
            GuiLog_showDialog(this->guiLog, msg);
            LogUtil_put(this->logUtil, msg, className, method, this);
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}

GraphicsException* GraphicsException_new3(const char* msg, const char* className, const char* method) {
    GraphicsException* this = calloc(1, sizeof(GraphicsException));
    GraphicsException_init3(this, msg, className, method);
    return this;
}

