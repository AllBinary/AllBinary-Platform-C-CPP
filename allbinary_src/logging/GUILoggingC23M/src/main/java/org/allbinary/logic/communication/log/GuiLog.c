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
// package org.allbinary.logic.communication.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct GuiLog GuiLog;
struct GuiLog {
    LogFormatUtil* logFormatUtil;
    CommonStrings* commonStrings;
};

static GuiLog* GuiLog_instance;

GuiLog* GuiLog_new(void);
GuiLog* GuiLog_getInstance(void);

void GuiLog_init(GuiLog* this);
void GuiLog_showDialog(GuiLog* this, const char* msg);
const char* GuiLog_put(GuiLog* this, const char* specialMessage, Any* anyType, const char* functionName);
const char* GuiLog_put(GuiLog* this, const char* specialMessage, Any* anyType, const char* functionName, JavaException* exception);
const char* GuiLog_put(GuiLog* this, const char* specialMessage, const char* className, const char* functionName);
const char* GuiLog_put(GuiLog* this, const char* specialMessage, const char* className, const char* functionName, JavaException* exception);

// Static fields with runtime initializers: call this once at startup
void GuiLog_staticInit(void) {
    GuiLog_instance = GuiLog_new();
}

static void GuiLog_initFields(GuiLog* this) {
    this->logFormatUtil = LogFormatUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


GuiLog* GuiLog_getInstance(void) {
        return GuiLog_instance;
}


void GuiLog_init(GuiLog* this) {
    GuiLog_initFields(this);
}

GuiLog* GuiLog_new(void) {
    GuiLog* this = calloc(1, sizeof(GuiLog));
    GuiLog_init(this);
    return this;
}


// synchronized
void GuiLog_showDialog(GuiLog* this, const char* msg) {
        JDialog* error = JDialog_new();
        int32_t size = ((int32_t) strlen(msg)) * 9;
        int32_t x = size;
        if (x > 550) {
            x = 550;
        }
        JAVA_CALL(JDialog_getContentPane(error), setLayout, GridLayout_new(1, 1));
        if (size > 255) {
            int32_t y = 550;
            JDialog_setSize(error, x, y);
            JAVA_CALL(JDialog_getContentPane(error), add, JScrollPane_new(JTextArea_new(msg)));
        } else if (size > 0) {
            int32_t y = 50;
            JDialog_setSize(error, x, y);
            JAVA_CALL(JDialog_getContentPane(error), add, JScrollPane_new(JLabel_new(msg)));
        }
        JDialog_show(error);
}


// synchronized
const char* GuiLog_put(GuiLog* this, const char* specialMessage, Any* anyType, const char* functionName) {
        return GuiLog_put(this, specialMessage, anyType, functionName, nullptr);
}


// Java overloaded method: C needs a different name
// synchronized
const char* GuiLog_put(GuiLog* this, const char* specialMessage, Any* anyType, const char* functionName, JavaException* exception) {
        JAVA_TRY {
            const char* data = LogFormatUtil_get(this->logFormatUtil, specialMessage, java_class_of(anyType), functionName, exception);
            GuiLog_showDialog(this, data);
            puts(java_string_of(data));
            return data;
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(this->commonStrings->EXCEPTION, this, "put", e);
            return "Logging Error";
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
// synchronized
const char* GuiLog_put(GuiLog* this, const char* specialMessage, const char* className, const char* functionName) {
        return GuiLog_put(this, specialMessage, className, functionName, nullptr);
}


// Java overloaded method: C needs a different name
// synchronized
const char* GuiLog_put(GuiLog* this, const char* specialMessage, const char* className, const char* functionName, JavaException* exception) {
        JAVA_TRY {
            const char* data = LogFormatUtil_get(this->logFormatUtil, specialMessage, className, functionName, exception);
            GuiLog_showDialog(this, data);
            puts(java_string_of(data));
            return data;
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(this->commonStrings->EXCEPTION, this, "put", e);
            return "Logging Error";
        } JAVA_END_TRY;
}

