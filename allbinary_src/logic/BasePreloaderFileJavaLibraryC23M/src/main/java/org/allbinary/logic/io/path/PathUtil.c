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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"

//Used to correct user input for paths
typedef struct PathUtil PathUtil;
struct PathUtil {
    AbPathData* abPathData;
    FilePathData* filePathData;
};

static PathUtil* PathUtil_instance;

PathUtil* PathUtil_new(void);
PathUtil* PathUtil_getInstance(void);

void PathUtil_init(PathUtil* this);
const char* PathUtil_getExtensionWithAbFilePath(PathUtil* this, AbFilePath* abFilePath);
const char* PathUtil_getExtensionWithAbPath(PathUtil* this, AbPath* abPath);
const char* PathUtil_getWithoutExtensionWithAbFilePath(PathUtil* this, AbFilePath* abFilePath);
const char* PathUtil_getWithoutExtensionWithAbPath(PathUtil* this, AbPath* abPath);
const char* PathUtil_getWithoutExtension(PathUtil* this, const char* filePath);
bool PathUtil_isValid(PathUtil* this, const char* path);
static bool PathUtil_isValidStart(PathUtil* this, const char* path);
static bool PathUtil_isValidEnd(PathUtil* this, const char* path);
const char* PathUtil_adjustStart(PathUtil* this, const char* path);
const char* PathUtil_adjustEnd(PathUtil* this, const char* path);
const char* PathUtil_adjust(PathUtil* this, const char* path);
AbPath* PathUtil_removeNameFromPath(PathUtil* this, const char* path);

// Static fields with runtime initializers: call this once at startup
void PathUtil_staticInit(void) {
    PathUtil_instance = PathUtil_new();
}

static void PathUtil_initFields(PathUtil* this) {
    this->abPathData = AbPathData_getInstance();
    this->filePathData = FilePathData_getInstance();
}


PathUtil* PathUtil_getInstance(void) {
        return PathUtil_instance;
}


void PathUtil_init(PathUtil* this) {
    PathUtil_initFields(this);
}

PathUtil* PathUtil_new(void) {
    PathUtil* this = calloc(1, sizeof(PathUtil));
    PathUtil_init(this);
    return this;
}


const char* PathUtil_getExtensionWithAbFilePath(PathUtil* this, AbFilePath* abFilePath) {
        return AbPathData_getExtension(this->abPathData, AbFilePath_toString(abFilePath));
}


const char* PathUtil_getExtensionWithAbPath(PathUtil* this, AbPath* abPath) {
        return AbPathData_getExtension(this->abPathData, AbPath_toString(abPath));
}


// throws Exception
const char* PathUtil_getWithoutExtensionWithAbFilePath(PathUtil* this, AbFilePath* abFilePath) {
        return PathUtil_getWithoutExtension(this, AbFilePath_toString(abFilePath));
}


// throws Exception
const char* PathUtil_getWithoutExtensionWithAbPath(PathUtil* this, AbPath* abPath) {
        return PathUtil_getWithoutExtension(this, AbPath_toString(abPath));
}


// throws Exception
const char* PathUtil_getWithoutExtension(PathUtil* this, const char* filePath) {
        int32_t indexOfFileExtensionDelmiter = AbPathData_getExtensionIndex(this->abPathData, filePath);
        const char* pathWithoutExtension = filePath;
        if (indexOfFileExtensionDelmiter >= 0) {
            pathWithoutExtension = java_substring(filePath, 0, indexOfFileExtensionDelmiter);
        }
        return pathWithoutExtension;
}


bool PathUtil_isValid(PathUtil* this, const char* path) {
        if (PathUtil_isValidStart(this, path)) {
            if (PathUtil_isValidEnd(this, path)) {
                return true;
            }
        }
        return false;
}


static bool PathUtil_isValidStart(PathUtil* this, const char* path) {
        if (((uint16_t) path[0]) == this->abPathData->SEPARATORCHAR || ((uint16_t) path[0]) == u'.') {
            return true;
        } else {
            return false;
        }
}


static bool PathUtil_isValidEnd(PathUtil* this, const char* path) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, path)) {
            return false;
        }
        if (((uint16_t) path[((int32_t) strlen(path)) - 1]) == this->abPathData->SEPARATORCHAR) {
            return true;
        } else {
            return false;
        }
}


const char* PathUtil_adjustStart(PathUtil* this, const char* path) {
        if (!PathUtil_isValidStart(this, path)) {
            path = java_concat(java_string_of(this->abPathData->SEPARATOR), path);
        }
        return path;
}


const char* PathUtil_adjustEnd(PathUtil* this, const char* path) {
        if (!PathUtil_isValidEnd(this, path)) {
            path = java_concat(path, java_string_of(this->abPathData->SEPARATOR));
        }
        return path;
}


const char* PathUtil_adjust(PathUtil* this, const char* path) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, path)) {
            return this->abPathData->SEPARATOR;
        }
        if (java_string_indexOf(path, "\\") >= 0) {
            path = java_string_replace(path, u'\\', this->abPathData->SEPARATORCHAR);
        }
        return path;
}


// throws Exception
AbPath* PathUtil_removeNameFromPath(PathUtil* this, const char* path) {
        int32_t endIndex = java_string_lastIndexOf(path, this->abPathData->SEPARATOR);
        if (endIndex < 0) {
            endIndex = java_string_lastIndexOf(path, this->filePathData->SEPARATORCHAR);
        }
        if (endIndex < 0) {
            return AbPath_createAbPath();
        }
        if (((int32_t) strlen(path)) == endIndex + 1) {
            return PathUtil_removeNameFromPath(this, java_substring(path, 0, endIndex - 1));
        } else {
            const char* pathWithoutName = java_substring(path, 0, endIndex);
            return AbPath_new(pathWithoutName, StringUtil_getInstance()->EMPTY_STRING);
        }
}

