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
// package org.allbinary.business.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct InitInfoInterface InitInfoInterface;
struct InitInfoInterface {
    bool (*isTesting)(void* this);
    const char* (*getTesting)(void* this);
    const char* (*getTestHtmlPath)(void* this);
    const char* (*getMainPath)(void* this);
    void (*setTesting)(void* this, const char* value);
    void (*setTestHtmlPath)(void* this, AbPath* value);
    void (*setMainPath)(void* this, AbPath* value);
    bool (*isTestingValid)(void* this, const char* testing);
    bool (*isTestHtmlPathValid)(void* this, AbPath* value);
    bool (*isMainPathValid)(void* this, AbPath* value);
};


