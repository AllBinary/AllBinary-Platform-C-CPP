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
// package org.allbinary.input.automation.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"
// #include "java/io/FileOutputStream.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/automation/ImageOutputData.h"
#include "org/allbinary/logic/java/number/LongUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct FrameLog FrameLog;
struct FrameLog {
    int64_t frame;
    StringMaker* infoStringBuffer;
    StringMaker* actionsStringBuffer;
};

static int8_t* FrameLog_frameBytes;
static int8_t* FrameLog_info;
static int8_t* FrameLog_actions;

FrameLog* FrameLog_new(int64_t frame);

void FrameLog_init(FrameLog* this, int64_t frame);
void FrameLog_addInfo(FrameLog* this, const char* infoString);
void FrameLog_addActions(FrameLog* this, BasicArrayList* vectorOfStrings);
void FrameLog_addAction(FrameLog* this, const char* action);
void FrameLog_write(FrameLog* this);
int64_t FrameLog_getFrame(FrameLog* this);

// Static fields with runtime initializers: call this once at startup
void FrameLog_staticInit(void) {
    FrameLog_frameBytes = String_getBytes(java_string_new("Frame: "));
    FrameLog_info = String_getBytes(java_string_new("Info: \n"));
    FrameLog_actions = String_getBytes(java_string_new("Actions: \n"));
}

static void FrameLog_initFields(FrameLog* this) {
    
    this->infoStringBuffer = StringMaker_new();
    this->actionsStringBuffer = StringMaker_new();
}


void FrameLog_init(FrameLog* this, int64_t frame) {
    FrameLog_initFields(this);
        this->frame = frame;
}

FrameLog* FrameLog_new(int64_t frame) {
    FrameLog* this = calloc(1, sizeof(FrameLog));
    FrameLog_init(this, frame);
    return this;
}


void FrameLog_addInfo(FrameLog* this, const char* infoString) {
        StringMaker_append(this->infoStringBuffer, infoString);
}


void FrameLog_addActions(FrameLog* this, BasicArrayList* vectorOfStrings) {
        int32_t size = BasicArrayList_size(vectorOfStrings);
        for (int32_t index = 0; index < size; index++) {
            FrameLog_addAction(this, ((const char*) BasicArrayList_get(vectorOfStrings, index)));
        }
}


void FrameLog_addAction(FrameLog* this, const char* action) {
        StringMaker_append(this->actionsStringBuffer, action);
        StringMaker_append(this->actionsStringBuffer, CommonSeps_getInstance()->NEW_LINE);
}


// throws Exception
void FrameLog_write(FrameLog* this) {
        StringMaker* filePathStringBuffer = StringMaker_new();
        StringMaker_append(filePathStringBuffer, ImageOutputData_SAVE_PATH);
        StringMaker_append(filePathStringBuffer, LongUtil_fillIn(Long_toString(this->frame)));
        StringMaker_append(filePathStringBuffer, ".txt");
        const char* filePath = StringMaker_toString(filePathStringBuffer);
        FileOutputStream* fileOutputStream = FileOutputStream_new(File_new(filePath));
        FileOutputStream_write(fileOutputStream, FrameLog_frameBytes);
        FileOutputStream_write(fileOutputStream, java_string_getBytes(JAVA_CALL(FrameLog_getFrame(this), toString)));
        FileOutputStream_write(fileOutputStream, u'\n');
        FileOutputStream_write(fileOutputStream, FrameLog_info);
        FileOutputStream_write(fileOutputStream, java_string_getBytes(StringMaker_toString(this->infoStringBuffer)));
        FileOutputStream_write(fileOutputStream, u'\n');
        FileOutputStream_write(fileOutputStream, FrameLog_actions);
        FileOutputStream_write(fileOutputStream, java_string_getBytes(StringMaker_toString(this->actionsStringBuffer)));
        FileOutputStream_close(fileOutputStream);
}


int64_t FrameLog_getFrame(FrameLog* this) {
        return this->frame;
}

