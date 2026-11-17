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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct GeographicPathFinderBase GeographicPathFinderBase;
struct GeographicPathFinderBase {
    CommonStrings* commonStrings;
};

GeographicPathFinderBase* GeographicPathFinderBase_NULL_GEOGRAPHIC_PATH_FINDER_BASE;

GeographicPathFinderBase* GeographicPathFinderBase_new(void);
BasicArrayList* GeographicPathFinderBase_searchTotalPath(GeographicPathFinderBase* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths);
BasicArrayList* GeographicPathFinderBase_searchTotalPathN(GeographicPathFinderBase* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths, MultipassState* multipassState);

// Static fields with runtime initializers: call this once at startup
void GeographicPathFinderBase_staticInit(void) {
    GeographicPathFinderBase_NULL_GEOGRAPHIC_PATH_FINDER_BASE = GeographicPathFinderBase_new();
}

static void GeographicPathFinderBase_initFields(GeographicPathFinderBase* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void GeographicPathFinderBase_init(GeographicPathFinderBase* this) {
    GeographicPathFinderBase_initFields(this);
}

GeographicPathFinderBase* GeographicPathFinderBase_new(void) {
    GeographicPathFinderBase* this = calloc(1, sizeof(GeographicPathFinderBase));
    GeographicPathFinderBase_init(this);
    return this;
}


// throws Exception
BasicArrayList* GeographicPathFinderBase_searchTotalPath(GeographicPathFinderBase* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
BasicArrayList* GeographicPathFinderBase_searchTotalPathN(GeographicPathFinderBase* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths, MultipassState* multipassState) {
        java_throw(java_exception_new("RuntimeException", ""));
}

