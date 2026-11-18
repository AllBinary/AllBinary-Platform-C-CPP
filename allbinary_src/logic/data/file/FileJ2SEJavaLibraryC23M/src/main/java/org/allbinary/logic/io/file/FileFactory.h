#ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H
#define ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H
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
typedef struct AbFile AbFile;

typedef struct FileFactory FileFactory;
struct FileFactory {
    char unused;
};


FileFactory* FileFactory_new(void);
void FileFactory_init(FileFactory* this);

FileFactory* FileFactory_getInstance0(void);

AbFile* FileFactory_getInstance2(FileFactory* this, const char* filePath);

AbFile* FileFactory_getInstance3(FileFactory* this, AbFile* file, const char* childFilePath);

bool FileFactory_isFile(FileFactory* this, const char* path);
#define FileFactory_getInstance(...) JAVA_OVERLOADED(FileFactory_getInstance, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FileFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FileFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H
