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
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/resource/ResourceRelativeRelationshipFactoryInterface.h"

typedef struct ResourceRelativeRelationshipFactory ResourceRelativeRelationshipFactory;
struct ResourceRelativeRelationshipFactory {
    ResourceRelativeRelationshipFactoryInterface ResourceRelativeRelationshipFactoryInterface_interface;
    BasicArrayListUtil* basicArrayListUtil;
    ABHashtable* hashtable;
    bool initialized;
};


ResourceRelativeRelationshipFactory* ResourceRelativeRelationshipFactory_new(void);
void ResourceRelativeRelationshipFactory_init(ResourceRelativeRelationshipFactory* this, int32_t level);
BasicArrayList* ResourceRelativeRelationshipFactory_getResourceRelativeRelationshipList(ResourceRelativeRelationshipFactory* this, const char* resource);
void ResourceRelativeRelationshipFactory_addResourceRelativeRelationship(ResourceRelativeRelationshipFactory* this, const char* resource, RelativeRelationship* hardPoint);
bool ResourceRelativeRelationshipFactory_isLoadingLevel(ResourceRelativeRelationshipFactory* this, int32_t level);
bool ResourceRelativeRelationshipFactory_isFeature(ResourceRelativeRelationshipFactory* this);
void ResourceRelativeRelationshipFactory_setInitialized(ResourceRelativeRelationshipFactory* this, bool initialized);
bool ResourceRelativeRelationshipFactory_isInitialized(ResourceRelativeRelationshipFactory* this);

static void ResourceRelativeRelationshipFactory_initFields(ResourceRelativeRelationshipFactory* this) {
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->initialized = false;
}

void ResourceRelativeRelationshipFactory_init(ResourceRelativeRelationshipFactory* this) {
    ResourceRelativeRelationshipFactory_initFields(this);
}

ResourceRelativeRelationshipFactory* ResourceRelativeRelationshipFactory_new(void) {
    ResourceRelativeRelationshipFactory* this = calloc(1, sizeof(ResourceRelativeRelationshipFactory));
    ResourceRelativeRelationshipFactory_init(this);
    return this;
}


// throws Exception
void ResourceRelativeRelationshipFactory_init(ResourceRelativeRelationshipFactory* this, int32_t level) {
        ResourceRelativeRelationshipFactory_setInitialized(this, true);
}


// throws Exception
BasicArrayList* ResourceRelativeRelationshipFactory_getResourceRelativeRelationshipList(ResourceRelativeRelationshipFactory* this, const char* resource) {
        Any* listCanBeNull = ABHashtable_get(this->hashtable, resource);
        if (listCanBeNull == nullptr) {
            return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
        }
        return ((BasicArrayList*) listCanBeNull);
}


// throws Exception
void ResourceRelativeRelationshipFactory_addResourceRelativeRelationship(ResourceRelativeRelationshipFactory* this, const char* resource, RelativeRelationship* hardPoint) {
        BasicArrayList* list = ResourceRelativeRelationshipFactory_getResourceRelativeRelationshipList(this, resource);
        if (list == BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil)) {
            list = BasicArrayListD_new();
        }
        BasicArrayList_add(list, hardPoint);
        ABHashtable_put(this->hashtable, resource, list);
}


bool ResourceRelativeRelationshipFactory_isLoadingLevel(ResourceRelativeRelationshipFactory* this, int32_t level) {
        return false;
}


bool ResourceRelativeRelationshipFactory_isFeature(ResourceRelativeRelationshipFactory* this) {
        return false;
}


void ResourceRelativeRelationshipFactory_setInitialized(ResourceRelativeRelationshipFactory* this, bool initialized) {
        this->initialized = initialized;
}


bool ResourceRelativeRelationshipFactory_isInitialized(ResourceRelativeRelationshipFactory* this) {
        return this->initialized;
}

