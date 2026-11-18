#ifndef ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORYINTERFACE_H
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
typedef struct GameFeatureControlledInterface GameFeatureControlledInterface;
typedef struct RelativeRelationship RelativeRelationship;
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h"

typedef struct ResourceRelativeRelationshipFactoryInterface ResourceRelativeRelationshipFactoryInterface;
struct ResourceRelativeRelationshipFactoryInterface {
    BasicArrayList* (*getResourceRelativeRelationshipList)(void* this, const char* resource);
    void (*addResourceRelativeRelationship)(void* this, const char* resource, RelativeRelationship* relativeRelationship);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ResourceRelativeRelationshipFactoryInterface_staticInit(void);

static inline BasicArrayList* ResourceRelativeRelationshipFactoryInterface_getResourceRelativeRelationshipList(void* this, const char* resource) {
    return ((__typeof__(((ResourceRelativeRelationshipFactoryInterface*) nullptr)->getResourceRelativeRelationshipList)) java_method_of(this, "getResourceRelativeRelationshipList"))(this, resource);
}

static inline void ResourceRelativeRelationshipFactoryInterface_addResourceRelativeRelationship(void* this, const char* resource, RelativeRelationship* relativeRelationship) {
    ((__typeof__(((ResourceRelativeRelationshipFactoryInterface*) nullptr)->addResourceRelativeRelationship)) java_method_of(this, "addResourceRelativeRelationship"))(this, resource, relativeRelationship);
}
#define ResourceRelativeRelationshipFactoryInterface_initMethod GameFeatureControlledInterface_initMethod
#define ResourceRelativeRelationshipFactoryInterface_isFeature GameFeatureControlledInterface_isFeature
#define ResourceRelativeRelationshipFactoryInterface_isLoadingLevel GameFeatureControlledInterface_isLoadingLevel

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORYINTERFACE_H
