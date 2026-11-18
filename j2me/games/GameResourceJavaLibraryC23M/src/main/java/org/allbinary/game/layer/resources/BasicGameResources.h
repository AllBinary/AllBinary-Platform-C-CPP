#ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H
#define ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H
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
// package org.allbinary.game.layer.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameGraphicsResourceUtil GameGraphicsResourceUtil;
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif

typedef struct BasicGameResources BasicGameResources;
struct BasicGameResources {
    LogUtil* logUtil;
    const char* RESOURCE;
    const char* RESOURCE_DESTROY;
};

extern StringMaker* BasicGameResources_stringBuffer;

BasicGameResources* BasicGameResources_new(void);

void BasicGameResources_init(BasicGameResources* this);

void BasicGameResources_initMethod(BasicGameResources* this, const char* ROOT, const char** SIZE);

void BasicGameResources_append(BasicGameResources* this, const char* ROOT, const char* sizeString);

const char* BasicGameResources_getString(BasicGameResources* this);
#define BasicGameResources_new0 BasicGameResources_new
#define BasicGameResources_init0 BasicGameResources_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicGameResources_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicGameResources_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H
