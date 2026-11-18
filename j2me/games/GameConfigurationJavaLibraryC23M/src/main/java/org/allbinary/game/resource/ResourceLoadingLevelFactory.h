#ifndef ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H
#define ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H
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
#include "java/lang/Integer.h"
#if __has_include("org/allbinary/game/resource/ResourceLoadingLevel.h")
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"
#endif

typedef struct ResourceLoadingLevelFactory ResourceLoadingLevelFactory;
struct ResourceLoadingLevelFactory {
    ResourceLoadingLevel* LOAD_EARLY;
    ResourceLoadingLevel* LOAD_TOUCH;
    ResourceLoadingLevel* LOAD_GAME;
    ResourceLoadingLevel* LEVEL;
    ResourceLoadingLevel* MAX_LEVEL;
    ResourceLoadingLevel* LOAD_ALL;
    ResourceLoadingLevel** RESOURCE_LOADING_LEVEL_ARRAY;
};


ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_new(void);
void ResourceLoadingLevelFactory_init(ResourceLoadingLevelFactory* this);

ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_getInstance(void);

const char* ResourceLoadingLevelFactory_getLevelString(ResourceLoadingLevelFactory* this, int32_t level);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ResourceLoadingLevelFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ResourceLoadingLevelFactory_register(void);


#endif // ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H
