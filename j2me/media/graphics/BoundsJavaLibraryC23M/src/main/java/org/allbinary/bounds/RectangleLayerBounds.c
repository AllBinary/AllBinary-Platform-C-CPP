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
// package org.allbinary.bounds

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/bounds/LayerBounds.h"

typedef struct RectangleLayerBounds RectangleLayerBounds;
struct RectangleLayerBounds {
    LayerBounds base;
};


RectangleLayerBounds* RectangleLayerBounds_new(Rectangle* rectangle);

void RectangleLayerBounds_init(RectangleLayerBounds* this, Rectangle* rectangle);
void RectangleLayerBounds_visit(RectangleLayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface);


void RectangleLayerBounds_init(RectangleLayerBounds* this, Rectangle* rectangle) {
        LayerBounds_init(&this->base, rectangle);
}

RectangleLayerBounds* RectangleLayerBounds_new(Rectangle* rectangle) {
    RectangleLayerBounds* this = calloc(1, sizeof(RectangleLayerBounds));
    RectangleLayerBounds_init(this, rectangle);
    return this;
}


void RectangleLayerBounds_visit(RectangleLayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface) {
        if (BoundsVisitorInterface_getX(boundsVisitorInterface) > Rectangle_getMaxX(this->rectangle)) {
            BoundsVisitorInterface_maxX(boundsVisitorInterface);
        }
        if (BoundsVisitorInterface_getY(boundsVisitorInterface) > Rectangle_getMaxY(this->rectangle)) {
            BoundsVisitorInterface_maxY(boundsVisitorInterface);
        }
        if (BoundsVisitorInterface_getX(boundsVisitorInterface) < JAVA_CALL(Rectangle_getPoint(this->rectangle), getX)) {
            BoundsVisitorInterface_minX(boundsVisitorInterface);
        }
        if (BoundsVisitorInterface_getY(boundsVisitorInterface) < JAVA_CALL(Rectangle_getPoint(this->rectangle), getY)) {
            BoundsVisitorInterface_minY(boundsVisitorInterface);
        }
}

