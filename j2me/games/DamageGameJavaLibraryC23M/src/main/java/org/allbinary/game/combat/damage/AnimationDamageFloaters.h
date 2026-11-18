#ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H
#define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H
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
typedef struct IndexedAnimation IndexedAnimation;
typedef struct CanvasStrings CanvasStrings;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct CircularIndexUtil CircularIndexUtil;
typedef struct ViewPositionBase ViewPositionBase;
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
// #include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/game/combat/damage/DamageFloaters.h"

typedef struct AnimationDamageFloaters AnimationDamageFloaters;
struct AnimationDamageFloaters {
    DamageFloaters base;
    LogUtil* logUtil;
    AllBinaryLayer* layerInterface;
    IndexedAnimation** animationInterfaceArray;
    CircularIndexUtil* circularIndexUtil;
    int32_t dx;
    int32_t dy;
};


AnimationDamageFloaters* AnimationDamageFloaters_new(AllBinaryLayer* layerInterface, IndexedAnimation** animationInterfaceArray, int32_t dx, int32_t dy);

void AnimationDamageFloaters_init(AnimationDamageFloaters* this, AllBinaryLayer* layerInterface, IndexedAnimation** animationInterfaceArray, int32_t dx, int32_t dy);

void AnimationDamageFloaters_add(AnimationDamageFloaters* this, int32_t damage);

void AnimationDamageFloaters_paint(AnimationDamageFloaters* this, Graphics* graphics);
#define AnimationDamageFloaters_new4 AnimationDamageFloaters_new
#define AnimationDamageFloaters_init4 AnimationDamageFloaters_init
#ifndef AnimationDamageFloaters_getInstance
#define AnimationDamageFloaters_getInstance DamageFloaters_getInstance
#endif
#ifndef AnimationDamageFloaters_setBasicColorP
#define AnimationDamageFloaters_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef AnimationDamageFloaters_paintThreed
#define AnimationDamageFloaters_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationDamageFloaters_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnimationDamageFloaters_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H
