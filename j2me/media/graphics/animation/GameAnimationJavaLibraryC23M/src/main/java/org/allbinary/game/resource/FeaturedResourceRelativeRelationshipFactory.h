#ifndef ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_H
#define ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_H
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
typedef struct FeaturedResourceFactory FeaturedResourceFactory;
typedef struct ResourceRelativeRelationshipFactoryInterface ResourceRelativeRelationshipFactoryInterface;
typedef struct PointFactory PointFactory;
typedef struct RelativeRelationship RelativeRelationship;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct RelativeLayerRelationship RelativeLayerRelationship;
typedef struct StringMaker StringMaker;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#include "org/allbinary/game/resource/FeaturedResourceFactory.h"

typedef struct FeaturedResourceRelativeRelationshipFactory FeaturedResourceRelativeRelationshipFactory;
struct FeaturedResourceRelativeRelationshipFactory {
    FeaturedResourceFactory base;
    BasicArrayListUtil* basicArrayListUtil;
};


FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_new(void);

void FeaturedResourceRelativeRelationshipFactory_init(FeaturedResourceRelativeRelationshipFactory* this);

FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_getInstance(void);

BasicArrayList* FeaturedResourceRelativeRelationshipFactory_getRelativeRelationshipList(FeaturedResourceRelativeRelationshipFactory* this, const char* resource, AllBinaryLayer* layer);

#define FeaturedResourceRelativeRelationshipFactory_new0 FeaturedResourceRelativeRelationshipFactory_new
#define FeaturedResourceRelativeRelationshipFactory_init0 FeaturedResourceRelativeRelationshipFactory_init
#ifndef FeaturedResourceRelativeRelationshipFactory_clear
#define FeaturedResourceRelativeRelationshipFactory_clear FeaturedResourceFactory_clear
#endif
#ifndef FeaturedResourceRelativeRelationshipFactory_add
#define FeaturedResourceRelativeRelationshipFactory_add FeaturedResourceFactory_add
#endif
#ifndef FeaturedResourceRelativeRelationshipFactory_getList
#define FeaturedResourceRelativeRelationshipFactory_getList FeaturedResourceFactory_getList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FeaturedResourceRelativeRelationshipFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FeaturedResourceRelativeRelationshipFactory_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_H
