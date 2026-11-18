#ifndef ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORY_H
#define ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORY_H
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
typedef struct ResourceRelativeRelationshipFactoryInterface ResourceRelativeRelationshipFactoryInterface;
typedef struct RelativeRelationship RelativeRelationship;
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#include "org/allbinary/game/resource/ResourceRelativeRelationshipFactoryInterface.h"

typedef struct ResourceRelativeRelationshipFactory ResourceRelativeRelationshipFactory;
struct ResourceRelativeRelationshipFactory {
    ResourceRelativeRelationshipFactoryInterface ResourceRelativeRelationshipFactoryInterface_interface;
    BasicArrayListUtil* basicArrayListUtil;
    ABHashtable* hashtable;
    bool initialized;
};


ResourceRelativeRelationshipFactory* ResourceRelativeRelationshipFactory_new(void);
void ResourceRelativeRelationshipFactory_init(ResourceRelativeRelationshipFactory* this);

void ResourceRelativeRelationshipFactory_initMethod(ResourceRelativeRelationshipFactory* this, int32_t level);

BasicArrayList* ResourceRelativeRelationshipFactory_getResourceRelativeRelationshipList(ResourceRelativeRelationshipFactory* this, const char* resource);

void ResourceRelativeRelationshipFactory_addResourceRelativeRelationship(ResourceRelativeRelationshipFactory* this, const char* resource, RelativeRelationship* hardPoint);

bool ResourceRelativeRelationshipFactory_isLoadingLevel(ResourceRelativeRelationshipFactory* this, int32_t level);

bool ResourceRelativeRelationshipFactory_isFeature(ResourceRelativeRelationshipFactory* this);

void ResourceRelativeRelationshipFactory_setInitialized(ResourceRelativeRelationshipFactory* this, bool initialized);

bool ResourceRelativeRelationshipFactory_isInitialized(ResourceRelativeRelationshipFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ResourceRelativeRelationshipFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ResourceRelativeRelationshipFactory_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORY_H
