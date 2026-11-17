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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/util/cache/BaseBasicArrayListCache.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct BasicGeographicMapExtractedPathsCacheFactory BasicGeographicMapExtractedPathsCacheFactory;
struct BasicGeographicMapExtractedPathsCacheFactory {
    BaseBasicArrayListCache base;
    int32_t maxConcurrentPaths;
    int32_t maxPaths;
};

static BasicGeographicMapExtractedPathsCacheFactory* BasicGeographicMapExtractedPathsCacheFactory_instance;

BasicGeographicMapExtractedPathsCacheFactory* BasicGeographicMapExtractedPathsCacheFactory_new(void);
BasicGeographicMapExtractedPathsCacheFactory* BasicGeographicMapExtractedPathsCacheFactory_getInstance(void);

void BasicGeographicMapExtractedPathsCacheFactory_init(BasicGeographicMapExtractedPathsCacheFactory* this);
void BasicGeographicMapExtractedPathsCacheFactory_init(BasicGeographicMapExtractedPathsCacheFactory* this, int32_t maxConcurrentPaths, int32_t maxPaths);
BasicArrayList* BasicGeographicMapExtractedPathsCacheFactory_getPaths(BasicGeographicMapExtractedPathsCacheFactory* this);
void BasicGeographicMapExtractedPathsCacheFactory_release(BasicGeographicMapExtractedPathsCacheFactory* this, BasicArrayList* list);

// Static fields with runtime initializers: call this once at startup
void BasicGeographicMapExtractedPathsCacheFactory_staticInit(void) {
    BasicGeographicMapExtractedPathsCacheFactory_instance = BasicGeographicMapExtractedPathsCacheFactory_new();
}

static void BasicGeographicMapExtractedPathsCacheFactory_initFields(BasicGeographicMapExtractedPathsCacheFactory* this) {
    this->maxConcurrentPaths = 0;
    this->maxPaths = 0;
}


BasicGeographicMapExtractedPathsCacheFactory* BasicGeographicMapExtractedPathsCacheFactory_getInstance(void) {
        return BasicGeographicMapExtractedPathsCacheFactory_instance;
}


void BasicGeographicMapExtractedPathsCacheFactory_init(BasicGeographicMapExtractedPathsCacheFactory* this) {
    BaseBasicArrayListCache_init(&this->base);
    BasicGeographicMapExtractedPathsCacheFactory_initFields(this);
}

BasicGeographicMapExtractedPathsCacheFactory* BasicGeographicMapExtractedPathsCacheFactory_new(void) {
    BasicGeographicMapExtractedPathsCacheFactory* this = calloc(1, sizeof(BasicGeographicMapExtractedPathsCacheFactory));
    BasicGeographicMapExtractedPathsCacheFactory_init(this);
    return this;
}


void BasicGeographicMapExtractedPathsCacheFactory_init(BasicGeographicMapExtractedPathsCacheFactory* this, int32_t maxConcurrentPaths, int32_t maxPaths) {
        if (maxConcurrentPaths != this->maxConcurrentPaths) {
            for (int32_t index = maxConcurrentPaths; index >= this->maxConcurrentPaths; index--) {
                BasicArrayList_add(this->list, BasicArrayListS_new(maxPaths));
            }
            this->maxConcurrentPaths = maxConcurrentPaths;
        }
        this->maxPaths = maxPaths;
}


BasicArrayList* BasicGeographicMapExtractedPathsCacheFactory_getPaths(BasicGeographicMapExtractedPathsCacheFactory* this) {
        if (BasicArrayList_size(this->list) > 0) {
            return ((BasicArrayList*) BasicArrayList_removeAt(this->list, 0));
        } else {
            return BasicArrayListS_new(this->maxPaths);
        }
}


void BasicGeographicMapExtractedPathsCacheFactory_release(BasicGeographicMapExtractedPathsCacheFactory* this, BasicArrayList* list) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            BasicGeographicMapExtractedPathCacheFactory_release(BasicGeographicMapExtractedPathCacheFactory_getInstance(), ((BasicArrayList*) BasicArrayList_get(list, index)));
        }
        BasicArrayList_clear(list);
        BasicArrayList_add(this->list, list);
}

