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
// package org.allbinary.media.graphics.geography.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GeographicMapCellPositionBaseFactory GeographicMapCellPositionBaseFactory;
struct GeographicMapCellPositionBaseFactory {
    char unused;
};


GeographicMapCellPositionBaseFactory* GeographicMapCellPositionBaseFactory_new(void);
BasicGeographicMapCellPositionFactory* GeographicMapCellPositionBaseFactory_getInstance(GeographicMapCellPositionBaseFactory* this, BasicGeographicMap* geographicMapInterface);

void GeographicMapCellPositionBaseFactory_init(GeographicMapCellPositionBaseFactory* this) {
}

GeographicMapCellPositionBaseFactory* GeographicMapCellPositionBaseFactory_new(void) {
    GeographicMapCellPositionBaseFactory* this = calloc(1, sizeof(GeographicMapCellPositionBaseFactory));
    GeographicMapCellPositionBaseFactory_init(this);
    return this;
}


// throws Exception
BasicGeographicMapCellPositionFactory* GeographicMapCellPositionBaseFactory_getInstance(GeographicMapCellPositionBaseFactory* this, BasicGeographicMap* geographicMapInterface) {
        return BasicGeographicMapCellPositionFactory_new(geographicMapInterface);
}

