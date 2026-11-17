/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer.geological.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/graphics/draw/KeyValueDrawCharArray.h"

typedef struct GeologicalResourceInfoHudPaintable GeologicalResourceInfoHudPaintable;
struct GeologicalResourceInfoHudPaintable {
    WaypointInfoHudPaintable base;
    KeyValueDrawCharArray* keyvalueDrawString;
    int32_t fontHeight;
};

static const char* GeologicalResourceInfoHudPaintable_RESOURCES = "Resources: ";

GeologicalResourceInfoHudPaintable* GeologicalResourceInfoHudPaintable_new(void);

void GeologicalResourceInfoHudPaintable_init(GeologicalResourceInfoHudPaintable* this);
void GeologicalResourceInfoHudPaintable_updateMeasurement(GeologicalResourceInfoHudPaintable* this, Graphics* graphics);
void GeologicalResourceInfoHudPaintable_updateSelectionInfo(GeologicalResourceInfoHudPaintable* this);
void GeologicalResourceInfoHudPaintable_paint(GeologicalResourceInfoHudPaintable* this, Graphics* graphics);

static void GeologicalResourceInfoHudPaintable_initFields(GeologicalResourceInfoHudPaintable* this) {
    
    this->fontHeight = 0;
}


void GeologicalResourceInfoHudPaintable_init(GeologicalResourceInfoHudPaintable* this) {
    WaypointInfoHudPaintable_init(&this->base);
    GeologicalResourceInfoHudPaintable_initFields(this);
        this->keyvalueDrawString = KeyValueDrawCharArray_new(GeologicalResourceInfoHudPaintable_RESOURCES, this->textX);
}

GeologicalResourceInfoHudPaintable* GeologicalResourceInfoHudPaintable_new(void) {
    GeologicalResourceInfoHudPaintable* this = calloc(1, sizeof(GeologicalResourceInfoHudPaintable));
    GeologicalResourceInfoHudPaintable_init(this);
    return this;
}


void GeologicalResourceInfoHudPaintable_updateMeasurement(GeologicalResourceInfoHudPaintable* this, Graphics* graphics) {
        WaypointInfoHudPaintable_updateMeasurement((&this->base), graphics);
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = (2 * Font_getHeight(font));
}


void GeologicalResourceInfoHudPaintable_updateSelectionInfo(GeologicalResourceInfoHudPaintable* this) {
        WaypointInfoHudPaintable_updateSelectionInfo((&this->base));
        RTSLayer* rtsLayer = ((RTSLayer*) this->rtsLayerP);
        BasicArrayList* list = JAVA_CALL(rtsLayer->geographicMapCellPositionAreaBase, getOccupyingGeographicMapCellPositionList);
        int32_t total = 0;
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            GeologicalGeographicMapCellPosition* geographicMapCellPosition = ((GeologicalGeographicMapCellPosition*) BasicArrayList_get(list, index));
            total += JAVA_CALL(GeologicalGeographicMapCellPosition_getGeologicalResource(geographicMapCellPosition), getTotal);
        }
        KeyValueDrawCharArray_update(this->keyvalueDrawString, JAVA_CALL(GeologicalResourceInfoHudPaintable_getPrimitiveLongUtil(this), getCharArray, total), JAVA_CALL(GeologicalResourceInfoHudPaintable_getPrimitiveLongUtil(this), getCurrentTotalDigits));
}


void GeologicalResourceInfoHudPaintable_paint(GeologicalResourceInfoHudPaintable* this, Graphics* graphics) {
        WaypointInfoHudPaintable_paint((&this->base), graphics);
        KeyValueDrawCharArray_paint(this->keyvalueDrawString, graphics, (this->y + this->fontHeight));
}

