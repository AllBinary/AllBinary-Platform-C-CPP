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
// package org.allbinary.business.init.db

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct DatabaseConnectionInfoInterface DatabaseConnectionInfoInterface;
struct DatabaseConnectionInfoInterface {
    const char* (*getUrl)(void* this);
    const char* (*getJdbcDriver)(void* this);
    const char* (*getName)(void* this);
    const char* (*getUserName)(void* this);
    const char* (*getPassword)(void* this);
    const char* (*getHost)(void* this);
    const char* (*getSchema)(void* this);
    const char* (*getServer)(void* this);
    const char* (*getPort)(void* this);
    void (*setJdbcDriver)(void* this, const char* value);
    void (*setName)(void* this, const char* value);
    void (*setUserName)(void* this, const char* value);
    void (*setPassword)(void* this, const char* value);
    void (*setSchema)(void* this, const char* value);
    void (*setServer)(void* this, const char* value);
    void (*setPort)(void* this, const char* value);
    const char* (*getUserNameKey)(void* this);
    const char* (*getPasswordKey)(void* this);
};


