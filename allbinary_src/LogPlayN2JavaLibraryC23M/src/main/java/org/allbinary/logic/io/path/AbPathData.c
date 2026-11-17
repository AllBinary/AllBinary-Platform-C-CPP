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
#include "jsinterop/annotations/JsType.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"

//Used to correct user input for paths
typedef struct AbPathData AbPathData;
struct AbPathData {
    const char* EXTENSION_SEP;
    uint16_t SEPARATORCHAR;
    const char* SEPARATOR;
};

static AbPathData* AbPathData_instance;

AbPathData* AbPathData_new(void);
AbPathData* AbPathData_getInstance(void);

void AbPathData_init(AbPathData* this);
int32_t AbPathData_getExtensionIndex(AbPathData* this, const char* filePath);
const char* AbPathData_getExtensionWithDot(AbPathData* this, const char* filePath);
const char* AbPathData_getExtension(AbPathData* this, const char* filePath);
const char* AbPathData_getNameFromPath(AbPathData* this, const char* path);
const char* AbPathData_removeNameFromPath(AbPathData* this, const char* path);

// Static fields with runtime initializers: call this once at startup
void AbPathData_staticInit(void) {
    AbPathData_instance = AbPathData_new();
}

static void AbPathData_initFields(AbPathData* this) {
    this->EXTENSION_SEP = CommonSeps_getInstance()->PERIOD;
    this->SEPARATORCHAR = u'/';
    this->SEPARATOR = CommonSeps_getInstance()->FORWARD_SLASH;
}


AbPathData* AbPathData_getInstance(void) {
        return AbPathData_instance;
}


void AbPathData_init(AbPathData* this) {
    AbPathData_initFields(this);
}

AbPathData* AbPathData_new(void) {
    AbPathData* this = calloc(1, sizeof(AbPathData));
    AbPathData_init(this);
    return this;
}


int32_t AbPathData_getExtensionIndex(AbPathData* this, const char* filePath) {
        int32_t indexOfFileExtensionDelmiter = java_string_lastIndexOf(filePath, this->EXTENSION_SEP);
        int32_t indexOfLatDelimiter = java_string_lastIndexOf(filePath, this->SEPARATORCHAR);
        if (indexOfFileExtensionDelmiter < 0) {
            return -1;
        }
        if (indexOfFileExtensionDelmiter < indexOfLatDelimiter) {
            return -1;
        }
        return indexOfFileExtensionDelmiter;
}


const char* AbPathData_getExtensionWithDot(AbPathData* this, const char* filePath) {
        int32_t indexOfFileExtensionDelmiter = AbPathData_getExtensionIndex(this, filePath);
        const char* extension = StringUtil_getInstance()->EMPTY_STRING;
        if (indexOfFileExtensionDelmiter >= 0) {
            extension = java_substring(filePath, indexOfFileExtensionDelmiter, (int32_t) strlen(filePath));
        }
        return extension;
}


const char* AbPathData_getExtension(AbPathData* this, const char* filePath) {
        int32_t indexOfFileExtensionDelmiter = AbPathData_getExtensionIndex(this, filePath);
        const char* extension = StringUtil_getInstance()->EMPTY_STRING;
        if (indexOfFileExtensionDelmiter >= 0) {
            extension = java_substring(filePath, indexOfFileExtensionDelmiter + 1, (int32_t) strlen(filePath));
        }
        return extension;
}


const char* AbPathData_getNameFromPath(AbPathData* this, const char* path) {
        int32_t endIndex = java_string_lastIndexOf(path, this->SEPARATORCHAR);
        if (endIndex < 0) {
            endIndex = java_string_lastIndexOf(path, FilePathData_getInstance()->SEPARATORCHAR);
        }
        if (endIndex < 0) {
            return path;
        }
        if (((int32_t) strlen(path)) == endIndex + 1) {
            const char* categoryName = java_substring(path, 0, endIndex);
            return AbPathData_getNameFromPath(this, categoryName);
        } else {
            const char* categoryName = java_substring(path, endIndex + 1, (int32_t) strlen(path));
            return categoryName;
        }
}


const char* AbPathData_removeNameFromPath(AbPathData* this, const char* path) {
        int32_t endIndex = java_string_lastIndexOf(path, this->SEPARATORCHAR);
        if (endIndex < 0) {
            endIndex = java_string_lastIndexOf(path, FilePathData_getInstance()->SEPARATORCHAR);
        }
        if (endIndex < 0) {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
        if (((int32_t) strlen(path)) == endIndex + 1) {
            return AbPathData_removeNameFromPath(this, java_substring(path, 0, endIndex - 1));
        } else {
            const char* pathWithoutName = java_substring(path, 0, endIndex);
            return pathWithoutName;
        }
}

