#ifndef ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_H
#define ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_H
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

typedef struct TopULayerBounds TopULayerBounds;
struct TopULayerBounds {
    LayerBounds base;
};


TopULayerBounds* TopULayerBounds_new(Rectangle* rectangle);

void TopULayerBounds_init(TopULayerBounds* this, Rectangle* rectangle);

void TopULayerBounds_visit(TopULayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface);
#define TopULayerBounds_new1 TopULayerBounds_new
#define TopULayerBounds_init1 TopULayerBounds_init
#ifndef TopULayerBounds_getRectangleP
#define TopULayerBounds_getRectangleP LayerBounds_getRectangleP
#endif
#ifndef TopULayerBounds_onEvent
#define TopULayerBounds_onEvent LayerBounds_onEvent
#endif
#ifndef TopULayerBounds_onBoundsChangeEvent
#define TopULayerBounds_onBoundsChangeEvent LayerBounds_onBoundsChangeEvent
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TopULayerBounds_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TopULayerBounds_register(void);


#endif // ORG_ALLBINARY_BOUNDS_TOPULAYERBOUNDS_H
