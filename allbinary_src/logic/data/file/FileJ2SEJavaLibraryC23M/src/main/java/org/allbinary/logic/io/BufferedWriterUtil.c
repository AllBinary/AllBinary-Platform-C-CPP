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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/BufferedWriter.h"
// #include "java/io/FileWriter.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct BufferedWriterUtil BufferedWriterUtil;
struct BufferedWriterUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommonLabels* commonLabels;
    const char* REMOVING_OLD;
};

static BufferedWriterUtil* BufferedWriterUtil_instance;

BufferedWriterUtil* BufferedWriterUtil_new(void);
BufferedWriterUtil* BufferedWriterUtil_getInstance(void);
void BufferedWriterUtil_overwrite(BufferedWriterUtil* this, const char* path, const char* data);
void BufferedWriterUtil_overwrite(BufferedWriterUtil* this, AbFile* abFile, const char* data);
void BufferedWriterUtil_write(BufferedWriterUtil* this, AbFile* abFile, const char* data);

// Static fields with runtime initializers: call this once at startup
void BufferedWriterUtil_staticInit(void) {
    BufferedWriterUtil_instance = BufferedWriterUtil_new();
}

static void BufferedWriterUtil_initFields(BufferedWriterUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonLabels = CommonLabels_getInstance();
    this->REMOVING_OLD = "Remove old for overwriting: ";
}

void BufferedWriterUtil_init(BufferedWriterUtil* this) {
    BufferedWriterUtil_initFields(this);
}

BufferedWriterUtil* BufferedWriterUtil_new(void) {
    BufferedWriterUtil* this = calloc(1, sizeof(BufferedWriterUtil));
    BufferedWriterUtil_init(this);
    return this;
}


BufferedWriterUtil* BufferedWriterUtil_getInstance(void) {
        return BufferedWriterUtil_instance;
}


// throws Exception
void BufferedWriterUtil_overwrite(BufferedWriterUtil* this, const char* path, const char* data) {
        AbFile* abFile = AbFile_createAbFile(path);
        if (AbFile_exists(abFile)) {
            LogUtil_putF(this->logUtil, java_concat(this->REMOVING_OLD, path), this, this->commonStrings->CREATE);
            AbFile_delete(abFile);
        } else {
            const char* name = AbPathData_removeNameFromPath(AbPathData_getInstance(), path);
            AbFile* abFileDirectory = AbFile_createAbFile(name);
            if (AbFile_exists(abFileDirectory)) {
            } else {
                StringMaker* stringBuilder = StringMaker_new();
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuilder, this->commonStrings->CREATE), append, this->commonLabels->COLON_SEP), append, name), toString), this, this->commonStrings->CREATE);
                bool result = AbFile_mkdirs(abFileDirectory);
                StringMaker_delete(stringBuilder, 0, StringMaker_length(stringBuilder));
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuilder, this->commonLabels->RESULT_), appendboolean, result), toString), this, this->commonStrings->CREATE);
            }
        }
        BufferedWriterUtil_write(this, abFile, data);
}


// throws Exception
// Java overloaded method: C needs a different name
void BufferedWriterUtil_overwrite(BufferedWriterUtil* this, AbFile* abFile, const char* data) {
        if (AbFile_exists(abFile)) {
            LogUtil_putF(this->logUtil, java_concat(this->REMOVING_OLD, java_string_of(AbFile_getPath(abFile))), this, this->commonStrings->CREATE);
            AbFile_delete(abFile);
        } else {
            const char* name = AbPathData_removeNameFromPath(AbPathData_getInstance(), AbFile_getAbsolutePath(abFile));
            AbFile* abFileDirectory = AbFile_createAbFile(name);
            if (AbFile_exists(abFileDirectory)) {
            } else {
                StringMaker* stringBuilder = StringMaker_new();
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuilder, this->commonStrings->CREATE), append, this->commonLabels->COLON_SEP), append, name), toString), this, this->commonStrings->CREATE);
                bool result = AbFile_mkdirs(abFileDirectory);
                StringMaker_delete(stringBuilder, 0, StringMaker_length(stringBuilder));
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuilder, this->commonLabels->RESULT_), appendboolean, result), toString), this, this->commonStrings->CREATE);
            }
        }
        BufferedWriterUtil_write(this, abFile, data);
}


// throws Exception
void BufferedWriterUtil_write(BufferedWriterUtil* this, AbFile* abFile, const char* data) {
        BufferedWriter* fileOut = BufferedWriter_new(FileWriter_new(AbFileNativeUtil_get(abFile)));
        BufferedWriter_write(fileOut, data, 0, ((int32_t) strlen(data)));
        BufferedWriter_newLine(fileOut);
        BufferedWriter_flush(fileOut);
}

