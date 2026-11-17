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
#include "org/allbinary/logic/util/cache/BaseBasicArrayListCache.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct BasicGeographicMapExtractedPathCacheFactory BasicGeographicMapExtractedPathCacheFactory;
struct BasicGeographicMapExtractedPathCacheFactory {
    BaseBasicArrayListCache base;
    int32_t maxConcurrentPaths;
    int32_t maxPaths;
};

static BasicGeographicMapExtractedPathCacheFactory* BasicGeographicMapExtractedPathCacheFactory_instance;

BasicGeographicMapExtractedPathCacheFactory* BasicGeographicMapExtractedPathCacheFactory_new(void);
BasicGeographicMapExtractedPathCacheFactory* BasicGeographicMapExtractedPathCacheFactory_getInstance(void);

void BasicGeographicMapExtractedPathCacheFactory_init(BasicGeographicMapExtractedPathCacheFactory* this);
void BasicGeographicMapExtractedPathCacheFactory_init(BasicGeographicMapExtractedPathCacheFactory* this, int32_t maxConcurrentPaths, int32_t maxPaths);
BasicArrayList* BasicGeographicMapExtractedPathCacheFactory_getPath(BasicGeographicMapExtractedPathCacheFactory* this);
void BasicGeographicMapExtractedPathCacheFactory_release(BasicGeographicMapExtractedPathCacheFactory* this, BasicArrayList* list);

// Static fields with runtime initializers: call this once at startup
void BasicGeographicMapExtractedPathCacheFactory_staticInit(void) {
    BasicGeographicMapExtractedPathCacheFactory_instance = BasicGeographicMapExtractedPathCacheFactory_new();
}

static void BasicGeographicMapExtractedPathCacheFactory_initFields(BasicGeographicMapExtractedPathCacheFactory* this) {
    this->maxConcurrentPaths = 0;
    this->maxPaths = 0;
}


BasicGeographicMapExtractedPathCacheFactory* BasicGeographicMapExtractedPathCacheFactory_getInstance(void) {
        return BasicGeographicMapExtractedPathCacheFactory_instance;
}


void BasicGeographicMapExtractedPathCacheFactory_init(BasicGeographicMapExtractedPathCacheFactory* this) {
    BaseBasicArrayListCache_init(&this->base);
    BasicGeographicMapExtractedPathCacheFactory_initFields(this);
}

BasicGeographicMapExtractedPathCacheFactory* BasicGeographicMapExtractedPathCacheFactory_new(void) {
    BasicGeographicMapExtractedPathCacheFactory* this = calloc(1, sizeof(BasicGeographicMapExtractedPathCacheFactory));
    BasicGeographicMapExtractedPathCacheFactory_init(this);
    return this;
}


void BasicGeographicMapExtractedPathCacheFactory_init(BasicGeographicMapExtractedPathCacheFactory* this, int32_t maxConcurrentPaths, int32_t maxPaths) {
        if (maxConcurrentPaths != this->maxConcurrentPaths) {
            for (int32_t index = maxConcurrentPaths; index >= this->maxConcurrentPaths; index--) {
                BasicArrayList_add(this->list, BasicArrayListS_new(maxPaths));
            }
            this->maxConcurrentPaths = maxConcurrentPaths;
        }
        this->maxPaths = maxPaths;
}


BasicArrayList* BasicGeographicMapExtractedPathCacheFactory_getPath(BasicGeographicMapExtractedPathCacheFactory* this) {
        if (BasicArrayList_size(this->list) > 0) {
            return ((BasicArrayList*) BasicArrayList_removeAt(this->list, 0));
        } else {
            return BasicArrayListS_new(this->maxPaths);
        }
}


void BasicGeographicMapExtractedPathCacheFactory_release(BasicGeographicMapExtractedPathCacheFactory* this, BasicArrayList* list) {
        BasicArrayList_clear(list);
        BasicArrayList_add(this->list, list);
}

