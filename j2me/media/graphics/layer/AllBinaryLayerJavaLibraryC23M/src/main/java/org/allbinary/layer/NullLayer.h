#ifndef ORG_ALLBINARY_LAYER_NULLLAYER_H
#define ORG_ALLBINARY_LAYER_NULLLAYER_H
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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Layer Layer;
typedef struct Graphics Graphics;
#include "org/allbinary/layer/Layer.h"

typedef struct NullLayer NullLayer;
struct NullLayer {
    Layer base;
};


NullLayer* NullLayer_new(void);

NullLayer* NullLayer_getInstance(void);

void NullLayer_init(NullLayer* this);

void NullLayer_paint(NullLayer* this, Graphics* graphics);
#define NullLayer_new0 NullLayer_new
#define NullLayer_init0 NullLayer_init
#ifndef NullLayer_setPosition
#define NullLayer_setPosition Layer_setPosition
#endif
#ifndef NullLayer_moveDXY
#define NullLayer_moveDXY Layer_moveDXY
#endif
#ifndef NullLayer_moveDXYZ
#define NullLayer_moveDXYZ Layer_moveDXYZ
#endif
#ifndef NullLayer_getXP
#define NullLayer_getXP Layer_getXP
#endif
#ifndef NullLayer_getYP
#define NullLayer_getYP Layer_getYP
#endif
#ifndef NullLayer_getZP
#define NullLayer_getZP Layer_getZP
#endif
#ifndef NullLayer_getWidth
#define NullLayer_getWidth Layer_getWidth
#endif
#ifndef NullLayer_getHeight
#define NullLayer_getHeight Layer_getHeight
#endif
#ifndef NullLayer_getDepth
#define NullLayer_getDepth Layer_getDepth
#endif
#ifndef NullLayer_setVisible
#define NullLayer_setVisible Layer_setVisible
#endif
#ifndef NullLayer_isVisible
#define NullLayer_isVisible Layer_isVisible
#endif
#ifndef NullLayer_setLayerWidth
#define NullLayer_setLayerWidth Layer_setLayerWidth
#endif
#ifndef NullLayer_setLayerHeight
#define NullLayer_setLayerHeight Layer_setLayerHeight
#endif
#ifndef NullLayer_toStringAppend
#define NullLayer_toStringAppend Layer_toStringAppend
#endif
#ifndef NullLayer_setSize
#define NullLayer_setSize Layer_setSize
#endif
#ifndef NullLayer_getX
#define NullLayer_getX Layer_getX
#endif
#ifndef NullLayer_getY
#define NullLayer_getY Layer_getY
#endif
#ifndef NullLayer_move
#define NullLayer_move Layer_move
#endif
#ifndef NullLayer_setPosition
#define NullLayer_setPosition Layer_setPosition
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullLayer_register(void);


#endif // ORG_ALLBINARY_LAYER_NULLLAYER_H
