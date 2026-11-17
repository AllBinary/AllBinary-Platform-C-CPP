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
// package org.allbinary.game.layer.unit

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
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct UnitGameResources UnitGameResources;
struct UnitGameResources {
    BasicGameResources base;
    const char* NAME;
    const char* RESOURCE_ICON_ANIMATION;
    const char* RESOURCE_ICON_BUILD;
    const char* RESOURCE_ICON;
    const char* ICON_SIZE;
};

static const char* UnitGameResources_ICON = "_icon";
static const char* UnitGameResources_BUILD = "_build";
static const char* UnitGameResources_DESTROY = "_destroy";
static const char* UnitGameResources_ICON_BUILD;

UnitGameResources* UnitGameResources_new(void);

void UnitGameResources_init(UnitGameResources* this);
void UnitGameResources_append(UnitGameResources* this, const char* ROOT, const char* sizeString);
const char* UnitGameResources_getString(UnitGameResources* this);

// Static fields with runtime initializers: call this once at startup
void UnitGameResources_staticInit(void) {
    UnitGameResources_ICON_BUILD = java_concat("_icon", java_string_of(UnitGameResources_BUILD));
}

static void UnitGameResources_initFields(UnitGameResources* this) {
    this->NAME = StringUtil_getInstance()->EMPTY_STRING;
    this->RESOURCE_ICON_ANIMATION = StringUtil_getInstance()->EMPTY_STRING;
    this->RESOURCE_ICON_BUILD = StringUtil_getInstance()->EMPTY_STRING;
    this->RESOURCE_ICON = StringUtil_getInstance()->EMPTY_STRING;
    this->ICON_SIZE = "_64_by_64.png";
}


void UnitGameResources_init(UnitGameResources* this) {
    BasicGameResources_init(&this->base);
    UnitGameResources_initFields(this);
}

UnitGameResources* UnitGameResources_new(void) {
    UnitGameResources* this = calloc(1, sizeof(UnitGameResources));
    UnitGameResources_init(this);
    return this;
}


// throws Exception
void UnitGameResources_append(UnitGameResources* this, const char* ROOT, const char* sizeString) {
        BasicGameResources_append((&this->base), ROOT, sizeString);
        const char* string = GameGraphicsResourceUtil_getName(GameGraphicsResourceUtil_getInstance());
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        JAVA_CALL(BasicGameResources_stringBuffer, append, UnitGameResources_DESTROY);
        JAVA_CALL(BasicGameResources_stringBuffer, append, string);
        JAVA_CALL(BasicGameResources_stringBuffer, append, sizeString);
        this->RESOURCE_DESTROY = JAVA_CALL(BasicGameResources_stringBuffer, toString);
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, UnitGameResources_ICON);
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        this->RESOURCE_ICON_ANIMATION = JAVA_CALL(BasicGameResources_stringBuffer, toString);
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        JAVA_CALL(BasicGameResources_stringBuffer, append, UnitGameResources_ICON);
        JAVA_CALL(BasicGameResources_stringBuffer, append, string);
        JAVA_CALL(BasicGameResources_stringBuffer, append, this->ICON_SIZE);
        this->RESOURCE_ICON = JAVA_CALL(BasicGameResources_stringBuffer, toString);
        JAVA_CALL(BasicGameResources_stringBuffer, delete, 0, JAVA_CALL(BasicGameResources_stringBuffer, length));
        JAVA_CALL(BasicGameResources_stringBuffer, append, ROOT);
        JAVA_CALL(BasicGameResources_stringBuffer, append, UnitGameResources_ICON_BUILD);
        JAVA_CALL(BasicGameResources_stringBuffer, append, string);
        JAVA_CALL(BasicGameResources_stringBuffer, append, this->ICON_SIZE);
        this->RESOURCE_ICON_BUILD = JAVA_CALL(BasicGameResources_stringBuffer, toString);
}


// throws Exception
const char* UnitGameResources_getString(UnitGameResources* this) {
        if (AndroidUtil_isAndroid()) {
            return GameGraphicsResourceUtil_getStringForFeature(GameGraphicsResourceUtil_getInstance(), GraphicsFeatureFactory_getInstance()->SPRITE_QUARTER_ROTATION_GRAPHICS);
        } else {
            return BasicGameResources_getString((&this->base));
        }
}

