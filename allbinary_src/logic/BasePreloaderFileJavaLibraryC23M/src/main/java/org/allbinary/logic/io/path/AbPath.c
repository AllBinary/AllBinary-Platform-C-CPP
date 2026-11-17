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
// package org.allbinary.logic.io.path

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/io/file/FilePathUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct AbPath AbPath;
struct AbPath {
    CommonSeps* commonSeps;
    AbPathData* abPathData;
    PathUtil* abPathUtil;
    const char* EMPTY_STRING;
    const char* schema;
    const char* path;
    const char* nameP;
    bool hasSchemaP;
    int32_t numberOfSeps;
};

static const char* AbPath_NETWORK_SEP = ":/";

AbPath* AbPath_new(const char* aPath, const char* name);
AbPath* AbPath_createAbPath(void);

void AbPath_init(AbPath* this, const char* aPath, const char* name);
static void AbPath_init(AbPath* this);
const char* AbPath_getSchema(AbPath* this, const char* aPath);
bool AbPath_hasSchema(AbPath* this);
const char* AbPath_getPathFromPath(AbPath* this, const char* aPath);
void AbPath_setName(AbPath* this, const char* name);
const char* AbPath_getName(AbPath* this);
const char* AbPath_toString(AbPath* this);
const char* AbPath_toFileSystemString(AbPath* this);
const char* AbPath_getPath(AbPath* this);
void AbPath_setPath(AbPath* this, const char* path);

static void AbPath_initFields(AbPath* this) {
    this->commonSeps = CommonSeps_getInstance();
    this->abPathData = AbPathData_getInstance();
    this->abPathUtil = PathUtil_getInstance();
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
    this->schema = this->EMPTY_STRING;
    this->path = this->EMPTY_STRING;
    this->nameP = this->EMPTY_STRING;
    this->hasSchemaP = false;
    this->numberOfSeps = 0;
}


AbPath* AbPath_createAbPath(void) {
        JAVA_TRY {
            const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
            return AbPath_new(EMPTY_STRING, EMPTY_STRING);
        } JAVA_CATCH(Exception, ex) {
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}


void AbPath_init(AbPath* this, const char* aPath, const char* name) {
    AbPath_initFields(this);
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (!StringValidationUtil_isEmpty(stringValidationUtil, aPath)) {
            this->schema = AbPath_getSchema(this, aPath);
            this->nameP = name;
            this->path = PathUtil_adjustEnd(this->abPathUtil, PathUtil_adjust(this->abPathUtil, AbPath_getPathFromPath(this, aPath)));
        } else {
            AbPath_init(this);
            if (!StringValidationUtil_isEmpty(stringValidationUtil, name)) {
                this->nameP = name;
            }
        }
}

AbPath* AbPath_new(const char* aPath, const char* name) {
    AbPath* this = calloc(1, sizeof(AbPath));
    AbPath_init(this, aPath, name);
    return this;
}


static void AbPath_init(AbPath* this) {
        this->schema = this->EMPTY_STRING;
        AbPath_setPath(this, this->abPathData->SEPARATOR);
        this->nameP = this->EMPTY_STRING;
}


const char* AbPath_getSchema(AbPath* this, const char* aPath) {
        int32_t beginIndex = java_string_indexOf(aPath, this->commonSeps->COLON);
        if (beginIndex >= 0) {
            this->hasSchemaP = true;
            return java_substring(aPath, 0, beginIndex);
        }
        this->hasSchemaP = false;
        return this->EMPTY_STRING;
}


bool AbPath_hasSchema(AbPath* this) {
        return this->hasSchemaP;
}


// throws Exception
const char* AbPath_getPathFromPath(AbPath* this, const char* aPath) {
        FilePathData* filePathData = FilePathData_getInstance();
        const char* tempPath = aPath;
        if (!AbPath_hasSchema(this)) {
            tempPath = PathUtil_adjustStart(this->abPathUtil, tempPath);
        } else {
            int32_t beginIndex = java_string_indexOf(tempPath, this->commonSeps->COLON);
            if (beginIndex >= 0) {
                beginIndex++;
                while (((uint16_t) tempPath[beginIndex]) == this->abPathData->SEPARATORCHAR || ((uint16_t) tempPath[beginIndex]) == filePathData->SEPARATORCHAR) {
                    beginIndex++;
                    this->numberOfSeps++;
                    if (this->numberOfSeps > 2) {
                        java_throw(java_exception_new("Exception", "Should Not Have More Than Two Seps"));
                    }
                }
                tempPath = java_substring(tempPath, beginIndex, ((int32_t) strlen(tempPath)));
            }
        }
        return tempPath;
}


void AbPath_setName(AbPath* this, const char* name) {
        this->nameP = name;
}


const char* AbPath_getName(AbPath* this) {
        return this->nameP;
}


const char* AbPath_toString(AbPath* this) {
        StringMaker* stringBuffer = StringMaker_new();
        if (AbPath_hasSchema(this)) {
            StringMaker_append(stringBuffer, this->schema);
            StringMaker_append(stringBuffer, AbPath_NETWORK_SEP);
        }
        StringMaker_append(stringBuffer, AbPath_getPath(this));
        StringMaker_append(stringBuffer, this->nameP);
        return StringMaker_toString(stringBuffer);
}


const char* AbPath_toFileSystemString(AbPath* this) {
        if (AbPath_hasSchema(this)) {
            FilePathData* filePathData = FilePathData_getInstance();
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->schema);
            StringMaker_append(stringBuffer, this->commonSeps->COLON);
            StringMaker_append(stringBuffer, filePathData->PATH_START);
            StringMaker_append(stringBuffer, FilePathUtil_adjust(AbPath_getPath(this)));
            StringMaker_append(stringBuffer, this->nameP);
            return StringMaker_toString(stringBuffer);
        } else {
            return java_concat(java_string_of(FilePathUtil_adjust(AbPath_getPath(this))), this->nameP);
        }
}


const char* AbPath_getPath(AbPath* this) {
        return this->path;
}


void AbPath_setPath(AbPath* this, const char* path) {
        this->path = path;
}

