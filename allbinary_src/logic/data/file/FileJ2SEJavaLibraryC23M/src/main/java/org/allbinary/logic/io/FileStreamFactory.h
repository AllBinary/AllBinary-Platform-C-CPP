#ifndef ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H
#define ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H
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
typedef struct AbFileInputStream AbFileInputStream;
typedef struct AbFileOutputStream AbFileOutputStream;
typedef struct NullUtil NullUtil;
typedef struct AbFile AbFile;
typedef struct AbPath AbPath;

typedef struct FileStreamFactory FileStreamFactory;
struct FileStreamFactory {
    char unused;
};


FileStreamFactory* FileStreamFactory_new(void);

FileStreamFactory* FileStreamFactory_getInstance(void);

void FileStreamFactory_init(FileStreamFactory* this);

AbFileInputStream* FileStreamFactory_getFileInputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName);

AbFileOutputStream* FileStreamFactory_getFileOutputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName);

void FileStreamFactory_delete(FileStreamFactory* this, const char* path, const char* fileName);
#define FileStreamFactory_new0 FileStreamFactory_new
#define FileStreamFactory_init0 FileStreamFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FileStreamFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FileStreamFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H
