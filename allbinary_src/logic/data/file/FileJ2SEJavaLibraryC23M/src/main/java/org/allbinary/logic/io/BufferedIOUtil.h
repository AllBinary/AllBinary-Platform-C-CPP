#ifndef ORG_ALLBINARY_LOGIC_IO_BUFFEREDIOUTIL_H
#define ORG_ALLBINARY_LOGIC_IO_BUFFEREDIOUTIL_H
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
typedef struct AbFileNativeUtil AbFileNativeUtil;
typedef struct StringUtil StringUtil;
#include "java/io/BufferedReader.h"
#include "java/io/BufferedWriter.h"
#include "java/io/FileReader.h"
#include "java/io/FileWriter.h"

typedef struct BufferedIOUtil BufferedIOUtil;
struct BufferedIOUtil {
    char unused;
};


BufferedIOUtil* BufferedIOUtil_new(void);
void BufferedIOUtil_init(BufferedIOUtil* this);

void BufferedIOUtil_copy(AbFile* backupFile, AbFile* backupFileBak);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BufferedIOUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BufferedIOUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_BUFFEREDIOUTIL_H
