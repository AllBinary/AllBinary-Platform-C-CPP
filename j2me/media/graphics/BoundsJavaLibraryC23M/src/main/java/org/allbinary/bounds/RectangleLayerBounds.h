#ifndef ORG_ALLBINARY_BOUNDS_RECTANGLELAYERBOUNDS_H
#define ORG_ALLBINARY_BOUNDS_RECTANGLELAYERBOUNDS_H
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
typedef struct LayerBounds LayerBounds;
typedef struct BoundsVisitorInterface BoundsVisitorInterface;
typedef struct Rectangle Rectangle;
#include "org/allbinary/bounds/LayerBounds.h"

typedef struct RectangleLayerBounds RectangleLayerBounds;
struct RectangleLayerBounds {
    LayerBounds base;
};


RectangleLayerBounds* RectangleLayerBounds_new(Rectangle* rectangle);

void RectangleLayerBounds_init(RectangleLayerBounds* this, Rectangle* rectangle);

void RectangleLayerBounds_visit(RectangleLayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface);
#define RectangleLayerBounds_new1 RectangleLayerBounds_new
#define RectangleLayerBounds_init1 RectangleLayerBounds_init
#ifndef RectangleLayerBounds_getRectangleP
#define RectangleLayerBounds_getRectangleP LayerBounds_getRectangleP
#endif
#ifndef RectangleLayerBounds_onEvent
#define RectangleLayerBounds_onEvent LayerBounds_onEvent
#endif
#ifndef RectangleLayerBounds_onBoundsChangeEvent
#define RectangleLayerBounds_onBoundsChangeEvent LayerBounds_onBoundsChangeEvent
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RectangleLayerBounds_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RectangleLayerBounds_register(void);


#endif // ORG_ALLBINARY_BOUNDS_RECTANGLELAYERBOUNDS_H
