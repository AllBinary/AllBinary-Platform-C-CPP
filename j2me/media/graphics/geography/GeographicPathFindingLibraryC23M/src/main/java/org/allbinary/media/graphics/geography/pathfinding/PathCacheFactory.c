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
// package org.allbinary.media.graphics.geography.pathfinding

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct PathCacheFactory PathCacheFactory;
struct PathCacheFactory {
    BasicArrayListUtil* basicArrayListUtil;
    ABHashtable* hashtable;
};

static PathCacheFactory* PathCacheFactory_pathFactory;

PathCacheFactory* PathCacheFactory_new(void);

void PathCacheFactory_init(PathCacheFactory* this);
PathCacheFactory* PathCacheFactory_getInstance(void);
int32_t PathCacheFactory_getSize(PathCacheFactory* this);
void PathCacheFactory_add(PathCacheFactory* this, int32_t pathId, BasicArrayList* list);
void PathCacheFactory_remove(PathCacheFactory* this, int32_t pathId);
void PathCacheFactory_removeAll(PathCacheFactory* this);
BasicArrayList* PathCacheFactory_getOrCreate(PathCacheFactory* this, int32_t pathIdInteger);

// Static fields with runtime initializers: call this once at startup
void PathCacheFactory_staticInit(void) {
    PathCacheFactory_pathFactory = PathCacheFactory_new();
}

static void PathCacheFactory_initFields(PathCacheFactory* this) {
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}


void PathCacheFactory_init(PathCacheFactory* this) {
    PathCacheFactory_initFields(this);
}

PathCacheFactory* PathCacheFactory_new(void) {
    PathCacheFactory* this = calloc(1, sizeof(PathCacheFactory));
    PathCacheFactory_init(this);
    return this;
}


PathCacheFactory* PathCacheFactory_getInstance(void) {
        return PathCacheFactory_pathFactory;
}


int32_t PathCacheFactory_getSize(PathCacheFactory* this) {
        return ABHashtable_size(this->hashtable);
}


void PathCacheFactory_add(PathCacheFactory* this, int32_t pathId, BasicArrayList* list) {
        ABHashtable_put(this->hashtable, pathId, list);
}


void PathCacheFactory_remove(PathCacheFactory* this, int32_t pathId) {
        ABHashtable_remove(this->hashtable, pathId);
}


// throws Exception
void PathCacheFactory_removeAll(PathCacheFactory* this) {
        ABHashtable_clear(this->hashtable);
        if (ABHashtable_size(this->hashtable) > 0) {
            java_throw(java_exception_new("Exception", "Did not clear"));
        }
}


// throws Exception
BasicArrayList* PathCacheFactory_getOrCreate(PathCacheFactory* this, int32_t pathIdInteger) {
        Any* listCanBeNull = ABHashtable_get(this->hashtable, pathIdInteger);
        if (listCanBeNull == nullptr) {
            listCanBeNull = BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
        }
        return ((BasicArrayList*) listCanBeNull);
}

