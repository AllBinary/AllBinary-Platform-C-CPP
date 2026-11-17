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
// package org.allbinary.logic.io.file.path

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/io/path/AbFilePath.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"

//Used to correct user input for paths
typedef struct AbPathUtilOld AbPathUtilOld;
struct AbPathUtilOld {
    LogUtil* logUtil;
    AbPathData* abPathData;
    FilePathData* filePathData;
};

static AbPathUtilOld* AbPathUtilOld_instance;
static constexpr int32_t AbPathUtilOld_MIN = 4;

AbPathUtilOld* AbPathUtilOld_new(void);
AbPathUtilOld* AbPathUtilOld_getInstance(void);

void AbPathUtilOld_init(AbPathUtilOld* this);
const char* AbPathUtilOld_getExtension(AbPathUtilOld* this, AbFilePath* abFilePath);
const char* AbPathUtilOld_getExtension(AbPathUtilOld* this, AbPath* abPath);
const char* AbPathUtilOld_getExtension(AbPathUtilOld* this, const char* filePath);
const char* AbPathUtilOld_getWithoutExtension(AbPathUtilOld* this, AbFilePath* abFilePath);
const char* AbPathUtilOld_getWithoutExtension(AbPathUtilOld* this, AbPath* abPath);
const char* AbPathUtilOld_getWithoutExtension(AbPathUtilOld* this, const char* filePath);
bool AbPathUtilOld_isValid(AbPathUtilOld* this, const char* path);
static bool AbPathUtilOld_isValidStart(AbPathUtilOld* this, const char* path);
static bool AbPathUtilOld_isValidEnd(AbPathUtilOld* this, const char* path);
const char* AbPathUtilOld_adjustStart(AbPathUtilOld* this, const char* path);
const char* AbPathUtilOld_adjustEnd(AbPathUtilOld* this, const char* path);
const char* AbPathUtilOld_adjust(AbPathUtilOld* this, const char* path);
const char* AbPathUtilOld_getNameFromPath(AbPathUtilOld* this, const char* categoryPath);
AbPath* AbPathUtilOld_removeNameFromPath(AbPathUtilOld* this, const char* categoryPath);

// Static fields with runtime initializers: call this once at startup
void AbPathUtilOld_staticInit(void) {
    AbPathUtilOld_instance = AbPathUtilOld_new();
}

static void AbPathUtilOld_initFields(AbPathUtilOld* this) {
    this->logUtil = LogUtil_getInstance();
    this->abPathData = AbPathData_getInstance();
    this->filePathData = FilePathData_getInstance();
}


AbPathUtilOld* AbPathUtilOld_getInstance(void) {
        return AbPathUtilOld_instance;
}


void AbPathUtilOld_init(AbPathUtilOld* this) {
    AbPathUtilOld_initFields(this);
}

AbPathUtilOld* AbPathUtilOld_new(void) {
    AbPathUtilOld* this = calloc(1, sizeof(AbPathUtilOld));
    AbPathUtilOld_init(this);
    return this;
}


// throws Exception
const char* AbPathUtilOld_getExtension(AbPathUtilOld* this, AbFilePath* abFilePath) {
        return AbPathUtilOld_getExtension(this, AbFilePath_toString(abFilePath));
}


// throws Exception
// Java overloaded method: C needs a different name
const char* AbPathUtilOld_getExtension(AbPathUtilOld* this, AbPath* abPath) {
        return AbPathUtilOld_getExtension(this, AbPath_toString(abPath));
}


// throws Exception
// Java overloaded method: C needs a different name
const char* AbPathUtilOld_getExtension(AbPathUtilOld* this, const char* filePath) {
        if (((int32_t) strlen(filePath)) < AbPathUtilOld_MIN) {
            java_throw(java_exception_new("Exception", "Could not be a file path since its less that 4 characters"));
        }
        int32_t beginIndex = ((int32_t) strlen(filePath)) - AbPathUtilOld_MIN;
        const char* extension = java_substring(filePath, beginIndex + 1, (int32_t) strlen(filePath));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("FileExtension: ", extension), this, "getExtension()");
        }
        return extension;
}


// throws Exception
const char* AbPathUtilOld_getWithoutExtension(AbPathUtilOld* this, AbFilePath* abFilePath) {
        return AbPathUtilOld_getWithoutExtension(this, AbFilePath_toString(abFilePath));
}


// throws Exception
// Java overloaded method: C needs a different name
const char* AbPathUtilOld_getWithoutExtension(AbPathUtilOld* this, AbPath* abPath) {
        return AbPathUtilOld_getWithoutExtension(this, AbPath_toString(abPath));
}


// throws Exception
// Java overloaded method: C needs a different name
const char* AbPathUtilOld_getWithoutExtension(AbPathUtilOld* this, const char* filePath) {
        if (((int32_t) strlen(filePath)) < AbPathUtilOld_MIN) {
            java_throw(java_exception_new("Exception", "Could not be a file path since its less that 4 characters"));
        }
        int32_t endIndex = ((int32_t) strlen(filePath)) - AbPathUtilOld_MIN;
        const char* pathWithoutExtension = java_substring(filePath, 0, endIndex);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("FileWithoutExtension: ", pathWithoutExtension), this, "getWithoutExtension()");
        }
        return pathWithoutExtension;
}


bool AbPathUtilOld_isValid(AbPathUtilOld* this, const char* path) {
        if (AbPathUtilOld_isValidStart(this, path)) {
            if (AbPathUtilOld_isValidEnd(this, path)) {
                return true;
            }
        }
        return false;
}


static bool AbPathUtilOld_isValidStart(AbPathUtilOld* this, const char* path) {
        if (((uint16_t) path[0]) == this->abPathData->SEPARATORCHAR) {
            return true;
        } else {
            return false;
        }
}


static bool AbPathUtilOld_isValidEnd(AbPathUtilOld* this, const char* path) {
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), path)) {
            return false;
        }
        if (((uint16_t) path[((int32_t) strlen(path)) - 1]) == this->abPathData->SEPARATORCHAR) {
            return true;
        } else {
            return false;
        }
}


const char* AbPathUtilOld_adjustStart(AbPathUtilOld* this, const char* path) {
        if (!AbPathUtilOld_isValidStart(this, path)) {
            path = java_concat(java_string_of(this->abPathData->SEPARATOR), path);
        }
        return path;
}


const char* AbPathUtilOld_adjustEnd(AbPathUtilOld* this, const char* path) {
        if (!AbPathUtilOld_isValidEnd(this, path)) {
            path = java_concat(path, java_string_of(this->abPathData->SEPARATOR));
        }
        return path;
}


const char* AbPathUtilOld_adjust(AbPathUtilOld* this, const char* path) {
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), path)) {
            return this->abPathData->SEPARATOR;
        }
        if (java_string_indexOf(path, "\\") >= 0) {
            path = java_string_replace(path, u'\\', this->abPathData->SEPARATORCHAR);
        }
        return path;
}


// synchronized
const char* AbPathUtilOld_getNameFromPath(AbPathUtilOld* this, const char* categoryPath) {
        int32_t endIndex = java_string_lastIndexOf(categoryPath, this->abPathData->SEPARATOR);
        if (endIndex < 0) {
            endIndex = java_string_lastIndexOf(categoryPath, this->filePathData->SEPARATORCHAR);
        }
        if (endIndex < 0) {
            return categoryPath;
        }
        if (((int32_t) strlen(categoryPath)) == endIndex + 1) {
            const char* categoryName = java_substring(categoryPath, 0, endIndex);
            return AbPathUtilOld_getNameFromPath(this, categoryName);
        } else {
            const char* categoryName = java_substring(categoryPath, endIndex + 1, (int32_t) strlen(categoryPath));
            return categoryName;
        }
}


// throws Exception
// synchronized
AbPath* AbPathUtilOld_removeNameFromPath(AbPathUtilOld* this, const char* categoryPath) {
        int32_t endIndex = java_string_lastIndexOf(categoryPath, this->abPathData->SEPARATOR);
        if (endIndex < 0) {
            endIndex = java_string_lastIndexOf(categoryPath, this->filePathData->SEPARATORCHAR);
        }
        if (endIndex < 0) {
            return AbPath_createAbPath();
        }
        if (((int32_t) strlen(categoryPath)) == endIndex + 1) {
            return AbPathUtilOld_removeNameFromPath(this, java_substring(categoryPath, 0, endIndex - 1));
        } else {
            const char* categoryName = java_substring(categoryPath, 0, endIndex);
            return AbPath_new(categoryName, StringUtil_getInstance()->EMPTY_STRING);
        }
}

