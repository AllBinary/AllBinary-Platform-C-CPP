/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/resources/BasicGameResources.h"
#include "org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct FlagGameResources FlagGameResources;
struct FlagGameResources {
    BasicGameResources base;
    const char* NAME;
    const char* RESOURCE_ICON_ANIMATION;
    const char* RESOURCE_ICON_BUILD;
    const char* RESOURCE_ICON;
    const char* ICON_SIZE;
};

static const char* FlagGameResources_ICON = "_icon";
static const char* FlagGameResources_BUILD = "_build";
static const char* FlagGameResources_DESTROY = "_destroy";
static const char* FlagGameResources_ICON_BUILD;

FlagGameResources* FlagGameResources_new(void);

void FlagGameResources_init(FlagGameResources* this);
void FlagGameResources_append(FlagGameResources* this, const char* ROOT, const char* sizeString);

// Static fields with runtime initializers: call this once at startup
void FlagGameResources_staticInit(void) {
    FlagGameResources_ICON_BUILD = java_concat("_icon", java_string_of(FlagGameResources_BUILD));
}

static void FlagGameResources_initFields(FlagGameResources* this) {
    this->NAME = StringUtil_getInstance()->EMPTY_STRING;
    this->RESOURCE_ICON_ANIMATION = StringUtil_getInstance()->EMPTY_STRING;
    this->RESOURCE_ICON_BUILD = StringUtil_getInstance()->EMPTY_STRING;
    this->RESOURCE_ICON = StringUtil_getInstance()->EMPTY_STRING;
    this->ICON_SIZE = "_64_by_64.png";
}


void FlagGameResources_init(FlagGameResources* this) {
    BasicGameResources_init(&this->base);
    FlagGameResources_initFields(this);
}

FlagGameResources* FlagGameResources_new(void) {
    FlagGameResources* this = calloc(1, sizeof(FlagGameResources));
    FlagGameResources_init(this);
    return this;
}


// throws Exception
void FlagGameResources_append(FlagGameResources* this, const char* ROOT, const char* sizeString) {
        BasicGameResources_append((&this->base), ROOT, sizeString);
        const char* string = GameGraphicsResourceUtil_getName(GameGraphicsResourceUtil_getInstance());
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        JAVA_CALL(BasicGameResources_stringBuffer, append, FlagGameResources_DESTROY);
        JAVA_CALL(BasicGameResources_stringBuffer, append, string);
        JAVA_CALL(BasicGameResources_stringBuffer, append, sizeString);
        this->RESOURCE_DESTROY = JAVA_CALL(BasicGameResources_stringBuffer, toString);
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, FlagGameResources_ICON);
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        this->RESOURCE_ICON_ANIMATION = JAVA_CALL(BasicGameResources_stringBuffer, toString);
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        JAVA_CALL(BasicGameResources_stringBuffer, append, FlagGameResources_ICON);
        JAVA_CALL(BasicGameResources_stringBuffer, append, string);
        JAVA_CALL(BasicGameResources_stringBuffer, append, this->ICON_SIZE);
        this->RESOURCE_ICON = JAVA_CALL(BasicGameResources_stringBuffer, toString);
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        JAVA_CALL(BasicGameResources_stringBuffer, append, FlagGameResources_ICON_BUILD);
        JAVA_CALL(BasicGameResources_stringBuffer, append, string);
        JAVA_CALL(BasicGameResources_stringBuffer, append, this->ICON_SIZE);
        this->RESOURCE_ICON_BUILD = JAVA_CALL(BasicGameResources_stringBuffer, toString);
}

