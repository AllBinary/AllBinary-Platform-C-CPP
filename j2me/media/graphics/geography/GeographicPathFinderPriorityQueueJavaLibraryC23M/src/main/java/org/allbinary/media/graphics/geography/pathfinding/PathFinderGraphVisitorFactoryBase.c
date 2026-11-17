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
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"

typedef struct PathFinderGraphVisitorFactoryBase PathFinderGraphVisitorFactoryBase;
struct PathFinderGraphVisitorFactoryBase {
    char unused;
};


PathFinderGraphVisitorFactoryBase* PathFinderGraphVisitorFactoryBase_new(void);
PathFinderGraphVisitorBase* PathFinderGraphVisitorFactoryBase_getInstance(PathFinderGraphVisitorFactoryBase* this, BasicGeographicMap* geographicMapInterface);

void PathFinderGraphVisitorFactoryBase_init(PathFinderGraphVisitorFactoryBase* this) {
}

PathFinderGraphVisitorFactoryBase* PathFinderGraphVisitorFactoryBase_new(void) {
    PathFinderGraphVisitorFactoryBase* this = calloc(1, sizeof(PathFinderGraphVisitorFactoryBase));
    PathFinderGraphVisitorFactoryBase_init(this);
    return this;
}


PathFinderGraphVisitorBase* PathFinderGraphVisitorFactoryBase_getInstance(PathFinderGraphVisitorFactoryBase* this, BasicGeographicMap* geographicMapInterface) {
        java_throw(java_exception_new("RuntimeException", ""));
}

