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
#include "org/allbinary/logic/io/file/AbFile.h"

typedef struct DataOutputStreamFactory DataOutputStreamFactory;
struct DataOutputStreamFactory {
    char unused;
};

static DataOutputStreamFactory* DataOutputStreamFactory_instance;

DataOutputStreamFactory* DataOutputStreamFactory_new(void);
DataOutputStreamFactory* DataOutputStreamFactory_getInstance(void);
AbDataOutputStream* DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory* this, AbFile* file);
AbDataOutputStream* DataOutputStreamFactory_getInstance(DataOutputStreamFactory* this, const char* filePath, const char* fileName);

// Static fields with runtime initializers: call this once at startup
void DataOutputStreamFactory_staticInit(void) {
    DataOutputStreamFactory_instance = DataOutputStreamFactory_new();
}

void DataOutputStreamFactory_init(DataOutputStreamFactory* this) {
}

DataOutputStreamFactory* DataOutputStreamFactory_new(void) {
    DataOutputStreamFactory* this = calloc(1, sizeof(DataOutputStreamFactory));
    DataOutputStreamFactory_init(this);
    return this;
}


DataOutputStreamFactory* DataOutputStreamFactory_getInstance(void) {
        return DataOutputStreamFactory_instance;
}


// throws Exception
AbDataOutputStream* DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory* this, AbFile* file) {
        AbFileOutputStream* idFileOutputStream = AbFileOutputStream_createFromAbFile(file);
        AbDataOutputStream* idOutData = AbDataOutputStream_new(idFileOutputStream);
        return idOutData;
}


// throws Exception
// Java overloaded method: C needs a different name
AbDataOutputStream* DataOutputStreamFactory_getInstance(DataOutputStreamFactory* this, const char* filePath, const char* fileName) {
        FileStreamFactory* fileStreamFactory = FileStreamFactory_getInstance();
        AbFileOutputStream* fileOutputStream = FileStreamFactory_getFileOutputStreamInstance(fileStreamFactory, filePath, fileName);
        AbDataOutputStream* idOutData = AbDataOutputStream_new(fileOutputStream);
        return idOutData;
}

