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
// package org.allbinary.logic.io.file

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/nio/channels/FileChannel.h"
// #include "java/nio/channels/FileLock.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#include "org/allbinary/logic/io/StreamUtil.h"

typedef struct FileLockUtil FileLockUtil;
struct FileLockUtil {
    LogUtil* logUtil;
};

static FileLockUtil* FileLockUtil_instance;

FileLockUtil* FileLockUtil_new(void);
FileLockUtil* FileLockUtil_getInstance(void);

void FileLockUtil_init(FileLockUtil* this);
BasicArrayList* FileLockUtil_getAll(FileLockUtil* this, BasicArrayList* vector, bool isReturnOnFailure);
BasicArrayList* FileLockUtil_getAllPossible(FileLockUtil* this, BasicArrayList* vector);
BasicArrayList* FileLockUtil_getAllOrNone(FileLockUtil* this, BasicArrayList* vector);
FileLock* FileLockUtil_getLock(FileLockUtil* this, AbFile* file);
FileLock* FileLockUtil_getLock(FileLockUtil* this, AbFileOutputStream* fileOutputStream);
FileLock* FileLockUtil_getLock(FileLockUtil* this, FileChannel* fileChannel);

// Static fields with runtime initializers: call this once at startup
void FileLockUtil_staticInit(void) {
    FileLockUtil_instance = FileLockUtil_new();
}

static void FileLockUtil_initFields(FileLockUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


FileLockUtil* FileLockUtil_getInstance(void) {
        return FileLockUtil_instance;
}


void FileLockUtil_init(FileLockUtil* this) {
    FileLockUtil_initFields(this);
}

FileLockUtil* FileLockUtil_new(void) {
    FileLockUtil* this = calloc(1, sizeof(FileLockUtil));
    FileLockUtil_init(this);
    return this;
}


// throws Exception
BasicArrayList* FileLockUtil_getAll(FileLockUtil* this, BasicArrayList* vector, bool isReturnOnFailure) {
        BasicArrayList* fileLockVector = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            AbFile* file = ((AbFile*) BasicArrayList_get(vector, index));
            FileLock* fileLock = FileLockUtil_getLock(this, file);
            if (fileLock != nullptr) {
                LogUtil_putF(this->logUtil, java_concat("File Lock Obtained: ", java_string_of(AbFile_getAbsolutePath(file))), this, "getAll");
                BasicArrayList_add(fileLockVector, fileLock);
            } else if (isReturnOnFailure) {
                LogUtil_putF(this->logUtil, java_concat("Total Locks Obtained: ", java_string_of(BasicArrayList_size(fileLockVector))), this, "getAll");
                return fileLockVector;
            }
        }
        LogUtil_putF(this->logUtil, java_concat("Total Locks Obtained: ", java_string_of(BasicArrayList_size(fileLockVector))), this, "getAll");
        return fileLockVector;
}


// throws Exception
BasicArrayList* FileLockUtil_getAllPossible(FileLockUtil* this, BasicArrayList* vector) {
        return FileLockUtil_getAll(this, vector, false);
}


// throws Exception
BasicArrayList* FileLockUtil_getAllOrNone(FileLockUtil* this, BasicArrayList* vector) {
        BasicArrayList* fileLockVector = FileLockUtil_getAll(this, vector, true);
        if (BasicArrayList_size(vector) != BasicArrayList_size(fileLockVector)) {
            return BasicArrayListD_new();
        } else {
            return fileLockVector;
        }
}


// throws Exception
FileLock* FileLockUtil_getLock(FileLockUtil* this, AbFile* file) {
        JAVA_TRY {
            return FileLockUtil_getLock(this, AbFileOutputStream_createFromAbFileAppend(file, true));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Exception returns null", this, "getLock", e);
            return nullptr;
        } JAVA_FINALLY {
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
FileLock* FileLockUtil_getLock(FileLockUtil* this, AbFileOutputStream* fileOutputStream) {
        JAVA_TRY {
            FileLock* fileLock = FileLockUtil_getLock(this, AbFileOutputStream_getChannel(fileOutputStream));
            return fileLock;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Exception returns null", this, "getLock", e);
            return nullptr;
        } JAVA_FINALLY {
            LogUtil_putF(this->logUtil, "Finally - Closing FileOutputStream", this, "getLock");
            StreamUtil_close(StreamUtil_getInstance(), fileOutputStream);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
FileLock* FileLockUtil_getLock(FileLockUtil* this, FileChannel* fileChannel) {
        JAVA_TRY {
            FileLock* fileLock = FileChannel_tryLock(fileChannel);
            return fileLock;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Exception returns null", this, "getLock", e);
            return nullptr;
        } JAVA_FINALLY {
            LogUtil_putF(this->logUtil, "Finally - Closing FileChannel", this, "getLock");
            FileChannel_close(fileChannel);
        } JAVA_END_TRY;
}

