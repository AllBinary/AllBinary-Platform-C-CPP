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
// #include "java/io/FilenameFilter.h"
// #include "java/io/IOException.h"
// #include "java/net/URI.h"

typedef struct AbFileInterface AbFileInterface;
struct AbFileInterface {
    bool (*canRead)(void* this);
    bool (*canWrite)(void* this);
    bool (*createNewFile)(void* this);
    bool (*delete)(void* this);
    void (*deleteOnExit)(void* this);
    bool (*exists)(void* this);
    const char* (*getAbsolutePath)(void* this);
    const char* (*getCanonicalPath)(void* this);
    const char* (*getParent)(void* this);
    const char* (*getPath)(void* this);
    bool (*isAbsolute)(void* this);
    bool (*isDirectory)(void* this);
    bool (*isFile)(void* this);
    bool (*isHidden)(void* this);
    int64_t (*lastModified)(void* this);
    int64_t (*length)(void* this);
    const char** (*list)(void* this);
    const char** (*listWithFilter)(void* this, FilenameFilter* filter);
    bool (*mkdir)(void* this);
    bool (*mkdirs)(void* this);
    bool (*setLastModified)(void* this, int64_t time);
    bool (*setReadOnly)(void* this);
    const char* (*toString)(void* this);
    URI* (*toURI)(void* this);
};


