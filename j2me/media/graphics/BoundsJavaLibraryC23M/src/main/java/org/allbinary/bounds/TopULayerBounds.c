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

typedef struct TopULayerBounds TopULayerBounds;
struct TopULayerBounds {
    LayerBounds base;
};


TopULayerBounds* TopULayerBounds_new(Rectangle* rectangle);

void TopULayerBounds_init(TopULayerBounds* this, Rectangle* rectangle);
void TopULayerBounds_visit(TopULayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface);


void TopULayerBounds_init(TopULayerBounds* this, Rectangle* rectangle) {
        LayerBounds_init(&this->base, rectangle);
}

TopULayerBounds* TopULayerBounds_new(Rectangle* rectangle) {
    TopULayerBounds* this = calloc(1, sizeof(TopULayerBounds));
    TopULayerBounds_init(this, rectangle);
    return this;
}


void TopULayerBounds_visit(TopULayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface) {
        if (BoundsVisitorInterface_getX(boundsVisitorInterface) > Rectangle_getMaxX(this->rectangle)) {
            BoundsVisitorInterface_maxX(boundsVisitorInterface);
        }
        if (BoundsVisitorInterface_getX(boundsVisitorInterface) < JAVA_CALL(Rectangle_getPoint(this->rectangle), getX)) {
            BoundsVisitorInterface_minX(boundsVisitorInterface);
        }
        if (BoundsVisitorInterface_getY(boundsVisitorInterface) < JAVA_CALL(Rectangle_getPoint(this->rectangle), getY)) {
            BoundsVisitorInterface_minY(boundsVisitorInterface);
        }
}

