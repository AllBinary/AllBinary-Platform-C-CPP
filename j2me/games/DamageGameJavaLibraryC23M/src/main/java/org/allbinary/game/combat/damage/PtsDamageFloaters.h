#ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_H
#define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_H
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
// package org.allbinary.game.combat.damage

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DamageFloaters DamageFloaters;
typedef struct Graphics Graphics;
typedef struct MyRandomFactory MyRandomFactory;
typedef struct BasicColor BasicColor;
typedef struct BasicColorArrayIndexer BasicColorArrayIndexer;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BasicColorSetUtil BasicColorSetUtil;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct CharArrayFactory CharArrayFactory;
typedef struct PrimitiveLongUtil PrimitiveLongUtil;
typedef struct CircularIndexUtil CircularIndexUtil;
typedef struct ViewPositionBase ViewPositionBase;
#if __has_include("org/allbinary/game/rand/MyRandomFactory.h")
#include "org/allbinary/game/rand/MyRandomFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorArrayIndexer.h")
#include "org/allbinary/graphics/color/BasicColorArrayIndexer.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorSetUtil.h")
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/logic/math/PrimitiveLongUtil.h")
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#endif
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
// #include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/game/combat/damage/DamageFloaters.h"

typedef struct PtsDamageFloaters PtsDamageFloaters;
struct PtsDamageFloaters {
    DamageFloaters base;
    BasicColorSetUtil* basicSetColorUtil;
    AllBinaryLayer* layerInterface;
    int32_t* lastDamage;
    uint16_t** lastDamageString;
    int32_t* lastDamageStringSizeArray;
    CircularIndexUtil* circularIndexUtil;
    PrimitiveLongUtil* primitiveLongUtil;
    MyRandomFactory* myRandomFactory;
};


PtsDamageFloaters* PtsDamageFloaters_new(AllBinaryLayer* layerInterface);

void PtsDamageFloaters_init(PtsDamageFloaters* this, AllBinaryLayer* layerInterface);

void PtsDamageFloaters_add(PtsDamageFloaters* this, int32_t damage);

void PtsDamageFloaters_paint(PtsDamageFloaters* this, Graphics* graphics);
#define PtsDamageFloaters_new1 PtsDamageFloaters_new
#define PtsDamageFloaters_init1 PtsDamageFloaters_init
#ifndef PtsDamageFloaters_getInstance
#define PtsDamageFloaters_getInstance DamageFloaters_getInstance
#endif
#ifndef PtsDamageFloaters_setBasicColorP
#define PtsDamageFloaters_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef PtsDamageFloaters_paintThreed
#define PtsDamageFloaters_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PtsDamageFloaters_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PtsDamageFloaters_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_H
