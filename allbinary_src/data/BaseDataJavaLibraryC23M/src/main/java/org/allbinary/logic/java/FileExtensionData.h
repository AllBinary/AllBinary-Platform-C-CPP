#ifndef ORG_ALLBINARY_LOGIC_JAVA_FILEEXTENSIONDATA_H
#define ORG_ALLBINARY_LOGIC_JAVA_FILEEXTENSIONDATA_H
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
// package org.allbinary.logic.java

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct FileExtensionData FileExtensionData;
struct FileExtensionData {
    const char* DOT_JAVA_SOURCE;
    const char* JAVA_SOURCE;
};


FileExtensionData* FileExtensionData_new(void);

FileExtensionData* FileExtensionData_getInstance(void);

void FileExtensionData_init(FileExtensionData* this);
#define FileExtensionData_new0 FileExtensionData_new
#define FileExtensionData_init0 FileExtensionData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FileExtensionData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FileExtensionData_register(void);


#endif // ORG_ALLBINARY_LOGIC_JAVA_FILEEXTENSIONDATA_H
