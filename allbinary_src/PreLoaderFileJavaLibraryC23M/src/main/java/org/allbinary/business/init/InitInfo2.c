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
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct InitInfo2 InitInfo2;
struct InitInfo2 {
    Directory* directory;
};

static InitInfo2* InitInfo2_instance;

InitInfo2* InitInfo2_new(void);
InitInfo2* InitInfo2_getInstance(void);
bool InitInfo2_isTestHtmlPathValid(InitInfo2* this, AbPath* value);
bool InitInfo2_isMainPathValid(InitInfo2* this, AbPath* value);

// Static fields with runtime initializers: call this once at startup
void InitInfo2_staticInit(void) {
    InitInfo2_instance = InitInfo2_new();
}

static void InitInfo2_initFields(InitInfo2* this) {
    this->directory = Directory_getInstance();
}

void InitInfo2_init(InitInfo2* this) {
    InitInfo2_initFields(this);
}

InitInfo2* InitInfo2_new(void) {
    InitInfo2* this = calloc(1, sizeof(InitInfo2));
    InitInfo2_init(this);
    return this;
}


InitInfo2* InitInfo2_getInstance(void) {
        return InitInfo2_instance;
}


bool InitInfo2_isTestHtmlPathValid(InitInfo2* this, AbPath* value) {
        return Directory_create(this->directory, value);
}


bool InitInfo2_isMainPathValid(InitInfo2* this, AbPath* value) {
        return Directory_create(this->directory, value);
}

