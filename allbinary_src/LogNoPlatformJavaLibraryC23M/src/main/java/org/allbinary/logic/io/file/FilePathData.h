#ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H
#define ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H
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
#include "java/io/File.h"

typedef struct FilePathData FilePathData;
struct FilePathData {
    uint16_t SEPARATORCHAR;
    const char* PATH_START;
};


FilePathData* FilePathData_new(void);

FilePathData* FilePathData_getInstance(void);

void FilePathData_init(FilePathData* this);
#define FilePathData_new0 FilePathData_new
#define FilePathData_init0 FilePathData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FilePathData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FilePathData_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H
