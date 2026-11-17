/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct FileUtil2 FileUtil2;
struct FileUtil2 {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    StreamUtil* streamUtil;
};

static FileUtil2* FileUtil2_instance;

FileUtil2* FileUtil2_new(void);
FileUtil2* FileUtil2_getInstance(void);

void FileUtil2_init(FileUtil2* this);
BasicArrayList* FileUtil2_loadFileAsList(FileUtil2* this, AbFile* file, int32_t max, int8_t* byteArray1);

// Static fields with runtime initializers: call this once at startup
void FileUtil2_staticInit(void) {
    FileUtil2_instance = FileUtil2_new();
}

static void FileUtil2_initFields(FileUtil2* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->streamUtil = StreamUtil_getInstance();
}


FileUtil2* FileUtil2_getInstance(void) {
        return FileUtil2_instance;
}


void FileUtil2_init(FileUtil2* this) {
    FileUtil2_initFields(this);
}

FileUtil2* FileUtil2_new(void) {
    FileUtil2* this = calloc(1, sizeof(FileUtil2));
    FileUtil2_init(this);
    return this;
}


BasicArrayList* FileUtil2_loadFileAsList(FileUtil2* this, AbFile* file, int32_t max, int8_t* byteArray1) {
        AbFileInputStream* inputStream = nullptr;
        JAVA_TRY {
            inputStream = AbFileInputStream_createFromAbFile(file);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, e);
        } JAVA_END_TRY;
        return SimpleFileUtil_loadFileAsList(SimpleFileUtil_getInstance(), inputStream, max, byteArray1);
}

