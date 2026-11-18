#ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H
#define ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H
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
// package org.allbinary.game.graphics.hud

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GPoint GPoint;
typedef struct PointFactory PointFactory;
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif

typedef struct HudGraphicsPosition HudGraphicsPosition;
struct HudGraphicsPosition {
    int32_t anchor;
    GPoint* point;
};

extern HudGraphicsPosition* HudGraphicsPosition_NULL_HUD_GRAPHICS_POSITION;

HudGraphicsPosition* HudGraphicsPosition_new(GPoint* point, int32_t anchor);

void HudGraphicsPosition_init(HudGraphicsPosition* this, GPoint* point, int32_t anchor);

int32_t HudGraphicsPosition_getAnchor(HudGraphicsPosition* this);


GPoint* HudGraphicsPosition_getPoint(HudGraphicsPosition* this);

void HudGraphicsPosition_setPoint(HudGraphicsPosition* this, GPoint* point);
#define HudGraphicsPosition_new2 HudGraphicsPosition_new
#define HudGraphicsPosition_init2 HudGraphicsPosition_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HudGraphicsPosition_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HudGraphicsPosition_register(void);

#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif

#endif // ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H
