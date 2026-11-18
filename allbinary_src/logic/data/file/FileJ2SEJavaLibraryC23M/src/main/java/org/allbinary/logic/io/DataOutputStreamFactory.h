#ifndef ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H
#define ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H
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
typedef struct AbFileOutputStream AbFileOutputStream;
typedef struct AbDataOutputStream AbDataOutputStream;
typedef struct FileStreamFactory FileStreamFactory;
typedef struct AbFile AbFile;

typedef struct DataOutputStreamFactory DataOutputStreamFactory;
struct DataOutputStreamFactory {
    char unused;
};


DataOutputStreamFactory* DataOutputStreamFactory_new(void);
void DataOutputStreamFactory_init(DataOutputStreamFactory* this);

DataOutputStreamFactory* DataOutputStreamFactory_getInstance0(void);

AbDataOutputStream* DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory* this, AbFile* file);

AbDataOutputStream* DataOutputStreamFactory_getInstance3(DataOutputStreamFactory* this, const char* filePath, const char* fileName);
#define DataOutputStreamFactory_getInstance(...) JAVA_OVERLOADED(DataOutputStreamFactory_getInstance, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DataOutputStreamFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DataOutputStreamFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H
