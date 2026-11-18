#ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBAR_H
#define ORG_ALLBINARY_GAME_HEALTH_HEALTHBAR_H
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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HealthListenerInterface HealthListenerInterface;
typedef struct HealthBarAnimation HealthBarAnimation;
typedef struct HealthInterface HealthInterface;
typedef struct Health Health;
typedef struct Graphics Graphics;
typedef struct Paintable Paintable;
typedef struct AllBinaryLayer AllBinaryLayer;
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#include "org/allbinary/game/health/HealthListenerInterface.h"
#if __has_include("org/allbinary/game/health/HealthBarAnimation.h")
#include "org/allbinary/game/health/HealthBarAnimation.h"
#endif
#if __has_include("org/allbinary/game/health/HealthInterface.h")
#include "org/allbinary/game/health/HealthInterface.h"
#endif

typedef struct HealthBar HealthBar;
struct HealthBar {
    Paintable base;
    HealthListenerInterface HealthListenerInterface_interface;
    HealthBarAnimation* animationInterface;
    HealthInterface* healthInterface;
    AllBinaryLayer* allbinaryLayer;
};


HealthBar* HealthBar_new(AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction);

void HealthBar_init(HealthBar* this, AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction);

void HealthBar_onHealthChange(HealthBar* this);

void HealthBar_paint(HealthBar* this, Graphics* graphics);

void HealthBar_paintThreed(HealthBar* this, Graphics* graphics);
#define HealthBar_new4 HealthBar_new
#define HealthBar_init4 HealthBar_init
#ifndef HealthBar_setBasicColorP
#define HealthBar_setBasicColorP Paintable_setBasicColorP
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealthBar_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealthBar_register(void);


#endif // ORG_ALLBINARY_GAME_HEALTH_HEALTHBAR_H
