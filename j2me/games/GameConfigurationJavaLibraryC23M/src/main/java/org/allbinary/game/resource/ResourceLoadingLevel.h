#ifndef ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVEL_H
#define ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVEL_H
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
#define ResourceLoadingLevel_new2 ResourceLoadingLevel_new
#define ResourceLoadingLevel_init2 ResourceLoadingLevel_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ResourceLoadingLevel_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ResourceLoadingLevel_register(void);


#endif // ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVEL_H
