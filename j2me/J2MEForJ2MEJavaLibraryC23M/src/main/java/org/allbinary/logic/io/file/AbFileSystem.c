/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.logic.io.file

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

//J2MEForJ2ME
typedef struct AbFileSystem AbFileSystem;
struct AbFileSystem {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

static AbFileSystem* AbFileSystem_instance;

AbFileSystem* AbFileSystem_new(void);
AbFileSystem* AbFileSystem_getInstance(void);
bool AbFileSystem_isDirectoryOrFile(AbFileSystem* this, const char* path);
bool AbFileSystem_isDirectory(AbFileSystem* this, const char* path);
const char** AbFileSystem_getFilesAsStringArrayForPath(AbFileSystem* this, const char* currentDirPath);
const char* AbFileSystem_readAsString(AbFileSystem* this, const char* fileName);
const char* AbFileSystem_readAsString(AbFileSystem* this, const char* fileName, int8_t* bytes);
bool AbFileSystem_close(AbFileSystem* this, Any* closeable);

// Static fields with runtime initializers: call this once at startup
void AbFileSystem_staticInit(void) {
    AbFileSystem_instance = AbFileSystem_new();
}

static void AbFileSystem_initFields(AbFileSystem* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}

void AbFileSystem_init(AbFileSystem* this) {
    AbFileSystem_initFields(this);
}

AbFileSystem* AbFileSystem_new(void) {
    AbFileSystem* this = calloc(1, sizeof(AbFileSystem));
    AbFileSystem_init(this);
    return this;
}


AbFileSystem* AbFileSystem_getInstance(void) {
        return AbFileSystem_instance;
}


bool AbFileSystem_isDirectoryOrFile(AbFileSystem* this, const char* path) {
        return false;
}


bool AbFileSystem_isDirectory(AbFileSystem* this, const char* path) {
        return false;
}


const char** AbFileSystem_getFilesAsStringArrayForPath(AbFileSystem* this, const char* currentDirPath) {
        return StringUtil_getArrayInstance(StringUtil_getInstance());
}


const char* AbFileSystem_readAsString(AbFileSystem* this, const char* fileName) {
        int8_t* bytes = ((int8_t*) java_array_new(sizeof(int8_t), 1000000));
        return AbFileSystem_readAsString(this, fileName, bytes);
}


// Java overloaded method: C needs a different name
const char* AbFileSystem_readAsString(AbFileSystem* this, const char* fileName, int8_t* bytes) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool AbFileSystem_close(AbFileSystem* this, Any* closeable) {
        JAVA_TRY {
            if (closeable != nullptr) {
                InputStream* inputStream = (((InputStream*) closeable));
                InputStream_close(inputStream);
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CLOSE, e);
            return false;
        } JAVA_END_TRY;
}

