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
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/graphics/CellPositionFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"

typedef struct GeographicMapCellPositionEvent GeographicMapCellPositionEvent;
struct GeographicMapCellPositionEvent {
    AllBinaryEventObject base;
    CellPosition* geographicMapCellPosition;
};


GeographicMapCellPositionEvent* GeographicMapCellPositionEvent_new(Any* anyType, CellPosition* geographicMapCellPosition);

void GeographicMapCellPositionEvent_init(GeographicMapCellPositionEvent* this, Any* anyType, CellPosition* geographicMapCellPosition);
void GeographicMapCellPositionEvent_init(GeographicMapCellPositionEvent* this, Any* anyType);
void GeographicMapCellPositionEvent_setGeographicMapCellPosition(GeographicMapCellPositionEvent* this, GeographicMapCellPosition* geographicMapCellPosition);
GeographicMapCellPosition* GeographicMapCellPositionEvent_getGeographicMapCellPosition(GeographicMapCellPositionEvent* this);
const char* GeographicMapCellPositionEvent_toString(GeographicMapCellPositionEvent* this);

static void GeographicMapCellPositionEvent_initFields(GeographicMapCellPositionEvent* this) {
    this->geographicMapCellPosition = CellPositionFactory_getInstance()->NONE;
}


void GeographicMapCellPositionEvent_init(GeographicMapCellPositionEvent* this, Any* anyType, CellPosition* geographicMapCellPosition) {
        AllBinaryEventObject_init(&this->base, anyType);
        GeographicMapCellPositionEvent_initFields(this);
        this->geographicMapCellPosition = geographicMapCellPosition;
}

GeographicMapCellPositionEvent* GeographicMapCellPositionEvent_new(Any* anyType, CellPosition* geographicMapCellPosition) {
    GeographicMapCellPositionEvent* this = calloc(1, sizeof(GeographicMapCellPositionEvent));
    GeographicMapCellPositionEvent_init(this, anyType, geographicMapCellPosition);
    return this;
}


void GeographicMapCellPositionEvent_init(GeographicMapCellPositionEvent* this, Any* anyType) {
        GeographicMapCellPositionEvent_setSource(this, anyType);
}


void GeographicMapCellPositionEvent_setGeographicMapCellPosition(GeographicMapCellPositionEvent* this, GeographicMapCellPosition* geographicMapCellPosition) {
        this->geographicMapCellPosition = geographicMapCellPosition;
}


GeographicMapCellPosition* GeographicMapCellPositionEvent_getGeographicMapCellPosition(GeographicMapCellPositionEvent* this) {
        return ((GeographicMapCellPosition*) this->geographicMapCellPosition);
}


const char* GeographicMapCellPositionEvent_toString(GeographicMapCellPositionEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "CellPositionEvent: ");
        StringMaker_append(stringBuffer, "\nGeographicMapCellPosition: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), GeographicMapCellPositionEvent_getGeographicMapCellPosition(this)));
        return StringMaker_toString(stringBuffer);
}

