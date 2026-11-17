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
// package org.allbinary.media.graphics.geography.map.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/CellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h"

typedef struct GeographicMapCellPositionEventUtil GeographicMapCellPositionEventUtil;
struct GeographicMapCellPositionEventUtil {
    GeographicMapCellPositionEvent* geographicMapCellPositionEvent;
    GeographicMapCellPositionEventHandler* geographicMapCellPositionEventHandler;
};


GeographicMapCellPositionEventUtil* GeographicMapCellPositionEventUtil_new(Any* anyType);

void GeographicMapCellPositionEventUtil_init(GeographicMapCellPositionEventUtil* this, Any* anyType);
void GeographicMapCellPositionEventUtil_update(GeographicMapCellPositionEventUtil* this, GeographicMapCellPositionTracking* geographicMapCellPositionTracking);
void GeographicMapCellPositionEventUtil_remove(GeographicMapCellPositionEventUtil* this, GeographicMapCellPositionTracking* geographicMapCellPositionTracking);

static void GeographicMapCellPositionEventUtil_initFields(GeographicMapCellPositionEventUtil* this) {
    
    this->geographicMapCellPositionEventHandler = GeographicMapCellPositionEventHandler_getInstance();
}


void GeographicMapCellPositionEventUtil_init(GeographicMapCellPositionEventUtil* this, Any* anyType) {
    GeographicMapCellPositionEventUtil_initFields(this);
        this->geographicMapCellPositionEvent = GeographicMapCellPositionEvent_new(anyType, CellPositionFactory_getInstance()->NONE);
}

GeographicMapCellPositionEventUtil* GeographicMapCellPositionEventUtil_new(Any* anyType) {
    GeographicMapCellPositionEventUtil* this = calloc(1, sizeof(GeographicMapCellPositionEventUtil));
    GeographicMapCellPositionEventUtil_init(this, anyType);
    return this;
}


// throws Exception
void GeographicMapCellPositionEventUtil_update(GeographicMapCellPositionEventUtil* this, GeographicMapCellPositionTracking* geographicMapCellPositionTracking) {
        GeographicMapCellPositionEvent_setGeographicMapCellPosition(this->geographicMapCellPositionEvent, GeographicMapCellPositionTracking_getCurrentGeographicMapCellPosition(geographicMapCellPositionTracking));
        GeographicMapCellPositionEventHandler_fireEvent(this->geographicMapCellPositionEventHandler, this->geographicMapCellPositionEvent);
}


// throws Exception
void GeographicMapCellPositionEventUtil_remove(GeographicMapCellPositionEventUtil* this, GeographicMapCellPositionTracking* geographicMapCellPositionTracking) {
        GeographicMapCellPositionEvent_setGeographicMapCellPosition(this->geographicMapCellPositionEvent, GeographicMapCellPositionTracking_getCurrentGeographicMapCellPosition(geographicMapCellPositionTracking));
        GeographicMapCellPositionEventHandler_fireRemoveEvent(this->geographicMapCellPositionEventHandler, this->geographicMapCellPositionEvent);
}

