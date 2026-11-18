#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_OVERLAYPAINTABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_OVERLAYPAINTABLE_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct InitUpdatePaintable InitUpdatePaintable;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct OverlayPaintable OverlayPaintable;
struct OverlayPaintable {
    InitUpdatePaintable base;
    LogUtil* logUtil;
};


OverlayPaintable* OverlayPaintable_new(void);

void OverlayPaintable_init(OverlayPaintable* this);

void OverlayPaintable_update(OverlayPaintable* this);

void OverlayPaintable_paint(OverlayPaintable* this, Graphics* graphics);
#define OverlayPaintable_new0 OverlayPaintable_new
#define OverlayPaintable_init0 OverlayPaintable_init
#ifndef OverlayPaintable_setBasicColorP
#define OverlayPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef OverlayPaintable_paintThreed
#define OverlayPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OverlayPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OverlayPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_OVERLAYPAINTABLE_H
