#ifndef ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_H
#define ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_H
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
// package org.allbinary.game.terrain

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Angle Angle;
typedef struct AngleFactory AngleFactory;
#if __has_include("org/allbinary/math/Angle.h")
#include "org/allbinary/math/Angle.h"
#endif

typedef struct BasicTerrainInfo BasicTerrainInfo;
struct BasicTerrainInfo {
    Angle* angle;
};

extern BasicTerrainInfo* BasicTerrainInfo_NULL_BASIC_TERRAIN_INFO;

BasicTerrainInfo* BasicTerrainInfo_new(Angle* angle);

void BasicTerrainInfo_init(BasicTerrainInfo* this, Angle* angle);

Angle* BasicTerrainInfo_getAngle(BasicTerrainInfo* this);

void BasicTerrainInfo_setAngle(BasicTerrainInfo* this, Angle* angle);
#define BasicTerrainInfo_new1 BasicTerrainInfo_new
#define BasicTerrainInfo_init1 BasicTerrainInfo_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicTerrainInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicTerrainInfo_register(void);

#if __has_include("org/allbinary/math/Angle.h")
#include "org/allbinary/math/Angle.h"
#endif

#endif // ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_H
