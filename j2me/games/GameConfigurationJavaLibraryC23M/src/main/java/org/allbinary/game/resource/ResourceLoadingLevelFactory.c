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

static ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_instance;

ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_new(void);
ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_getInstance(void);
const char* ResourceLoadingLevelFactory_getLevelString(ResourceLoadingLevelFactory* this, int32_t level);

// Static fields with runtime initializers: call this once at startup
void ResourceLoadingLevelFactory_staticInit(void) {
    ResourceLoadingLevelFactory_instance = ResourceLoadingLevelFactory_new();
}

static void ResourceLoadingLevelFactory_initFields(ResourceLoadingLevelFactory* this) {
    this->LOAD_EARLY = ResourceLoadingLevel_new("Load Early", Integer_MAX_VALUE);
    this->LOAD_TOUCH = ResourceLoadingLevel_new("Load Touch", Integer_MAX_VALUE - 1);
    this->LOAD_GAME = ResourceLoadingLevel_new("Load Game", Integer_MAX_VALUE - 2);
    this->LEVEL = ResourceLoadingLevel_new("Level", Integer_MAX_VALUE - 99);
    this->MAX_LEVEL = ResourceLoadingLevel_new("Max Level", Integer_MAX_VALUE - 100);
    this->LOAD_ALL = ResourceLoadingLevel_new("Load All", -1);
    this->RESOURCE_LOADING_LEVEL_ARRAY = ((ResourceLoadingLevel**) java_array_from(sizeof(ResourceLoadingLevel*), sizeof((ResourceLoadingLevel*[]){ this->LOAD_ALL, this->MAX_LEVEL, this->LEVEL, this->LOAD_GAME, this->LOAD_TOUCH, this->LOAD_EARLY }) / sizeof(ResourceLoadingLevel*), (ResourceLoadingLevel*[]){ this->LOAD_ALL, this->MAX_LEVEL, this->LEVEL, this->LOAD_GAME, this->LOAD_TOUCH, this->LOAD_EARLY }));
}

void ResourceLoadingLevelFactory_init(ResourceLoadingLevelFactory* this) {
    ResourceLoadingLevelFactory_initFields(this);
}

ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_new(void) {
    ResourceLoadingLevelFactory* this = calloc(1, sizeof(ResourceLoadingLevelFactory));
    ResourceLoadingLevelFactory_init(this);
    return this;
}


ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_getInstance(void) {
        return ResourceLoadingLevelFactory_instance;
}


const char* ResourceLoadingLevelFactory_getLevelString(ResourceLoadingLevelFactory* this, int32_t level) {
        for (int32_t index = 0; index < java_array_length(this->RESOURCE_LOADING_LEVEL_ARRAY); index++) {
            if (level == JAVA_CALL(this->RESOURCE_LOADING_LEVEL_ARRAY[index], getLevel)) {
                return JAVA_CALL(this->RESOURCE_LOADING_LEVEL_ARRAY[index], getName);
            }
        }
        return java_string_of(level);
}

