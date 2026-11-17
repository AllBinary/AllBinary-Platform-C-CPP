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
// package org.allbinary.game.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ResourceLoadingLevel ResourceLoadingLevel;
struct ResourceLoadingLevel {
    const char* name;
    int32_t level;
};


ResourceLoadingLevel* ResourceLoadingLevel_new(const char* name, int32_t level);

void ResourceLoadingLevel_init(ResourceLoadingLevel* this, const char* name, int32_t level);
int32_t ResourceLoadingLevel_getLevel(ResourceLoadingLevel* this);
const char* ResourceLoadingLevel_getName(ResourceLoadingLevel* this);

static void ResourceLoadingLevel_initFields(ResourceLoadingLevel* this) {
    
    
}


void ResourceLoadingLevel_init(ResourceLoadingLevel* this, const char* name, int32_t level) {
    ResourceLoadingLevel_initFields(this);
        this->name = name;
        this->level = level;
}

ResourceLoadingLevel* ResourceLoadingLevel_new(const char* name, int32_t level) {
    ResourceLoadingLevel* this = calloc(1, sizeof(ResourceLoadingLevel));
    ResourceLoadingLevel_init(this, name, level);
    return this;
}


int32_t ResourceLoadingLevel_getLevel(ResourceLoadingLevel* this) {
        return this->level;
}


const char* ResourceLoadingLevel_getName(ResourceLoadingLevel* this) {
        return this->name;
}

