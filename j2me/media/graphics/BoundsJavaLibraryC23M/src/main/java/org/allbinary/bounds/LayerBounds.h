#ifndef ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_H
#define ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_H
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
typedef struct BoundsVisitorInterface BoundsVisitorInterface;
typedef struct BoundsChangeEvent BoundsChangeEvent;
typedef struct BoundsChangeEventListener BoundsChangeEventListener;
typedef struct Rectangle Rectangle;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
#include "org/allbinary/bounds/event/BoundsChangeEventListener.h"
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct LayerBounds LayerBounds;
struct LayerBounds {
    BoundsChangeEventListener BoundsChangeEventListener_interface;
    LogUtil* logUtil;
    Rectangle* rectangle;
};


LayerBounds* LayerBounds_new(Rectangle* rectangle);

void LayerBounds_init(LayerBounds* this, Rectangle* rectangle);

Rectangle* LayerBounds_getRectangleP(LayerBounds* this);

void LayerBounds_visit(LayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface);

void LayerBounds_onEvent(LayerBounds* this, AllBinaryEventObject* eventObject);

void LayerBounds_onBoundsChangeEvent(LayerBounds* this, BoundsChangeEvent* boundsChangeEvent);
#define LayerBounds_new1 LayerBounds_new
#define LayerBounds_init1 LayerBounds_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerBounds_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerBounds_register(void);

#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif

#endif // ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_H
