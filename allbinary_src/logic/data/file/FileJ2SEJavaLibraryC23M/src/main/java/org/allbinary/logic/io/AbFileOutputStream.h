#ifndef ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H
#define ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H
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
typedef struct AbFile AbFile;
#include "java/io/FileNotFoundException.h"
#include "java/io/FileOutputStream.h"
// #include "org/allbinary/logic/io/file/AbFileNativeUtil.h"

typedef struct AbFileOutputStream AbFileOutputStream;
struct AbFileOutputStream {
    FileOutputStream base;
};


AbFileOutputStream* AbFileOutputStream_new(const char* name, bool append);

AbFileOutputStream* AbFileOutputStream_createFromAbFile(AbFile* file);

AbFileOutputStream* AbFileOutputStream_createFromAbFileAppend(AbFile* file, bool append);

AbFileOutputStream* AbFileOutputStream_createFromFilePath(const char* name);

AbFileOutputStream* AbFileOutputStream_createFromFilePathAppend(const char* name, bool append);

void AbFileOutputStream_init(AbFileOutputStream* this, const char* name, bool append);
#define AbFileOutputStream_new2 AbFileOutputStream_new
#define AbFileOutputStream_init2 AbFileOutputStream_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbFileOutputStream_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbFileOutputStream_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H
