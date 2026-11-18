#ifndef ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H
#define ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H
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
typedef struct Features Features;
typedef struct GameFeatureControlledInterface GameFeatureControlledInterface;
typedef struct GraphicsFeatureFactory GraphicsFeatureFactory;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct FeaturedResourceFactory FeaturedResourceFactory;
struct FeaturedResourceFactory {
    LogUtil* logUtil;
    BasicArrayList* list;
    CommonStrings* commonStrings;
    const char* ANIMATION_FEATURES;
    const char* IMAGE_LABEL;
    const char* IMAGE_GRAPHICS_ARRAY;
    const char* IMAGE_GRAPHICS_ROTATION;
    const char* SPRITE_QUARTER;
    const char* SPRITE_FULL;
    const char* IS_LOADING_LEVEL_LABEL;
    const char* IS_FEATURE;
    const char* GAME_FEATURE_CONTROLLED;
};


FeaturedResourceFactory* FeaturedResourceFactory_new(void);

void FeaturedResourceFactory_init(FeaturedResourceFactory* this);

void FeaturedResourceFactory_initMethod(FeaturedResourceFactory* this, int32_t level);

void FeaturedResourceFactory_clear(FeaturedResourceFactory* this);

void FeaturedResourceFactory_add(FeaturedResourceFactory* this, GameFeatureControlledInterface* featureInterface);

BasicArrayList* FeaturedResourceFactory_getList(FeaturedResourceFactory* this);
#define FeaturedResourceFactory_new0 FeaturedResourceFactory_new
#define FeaturedResourceFactory_init0 FeaturedResourceFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FeaturedResourceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FeaturedResourceFactory_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H
