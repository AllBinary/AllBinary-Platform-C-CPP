#ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H
#define ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H
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

typedef struct BasicHudFactory BasicHudFactory;
struct BasicHudFactory {
    const char* DIRECTION_EXCEPTION;
    int32_t VERTICAL;
    int32_t HORIZONTAL;
    int32_t BOTTOMLEFT;
    int32_t BOTTOMRIGHT;
    int32_t TOPLEFT;
    int32_t TOPRIGHT;
    int32_t BOTTOMCENTER;
    int32_t TOPCENTER;
    int32_t ABSOLUTE;
};


BasicHudFactory* BasicHudFactory_new(void);

BasicHudFactory* BasicHudFactory_getInstance(void);

void BasicHudFactory_init(BasicHudFactory* this);
#define BasicHudFactory_new0 BasicHudFactory_new
#define BasicHudFactory_init0 BasicHudFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicHudFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicHudFactory_register(void);


#endif // ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H
