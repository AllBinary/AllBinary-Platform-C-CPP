#ifndef ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H
#define ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H
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
// package org.allbinary.game.ag.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Life Life;
typedef struct Graphics Graphics;
typedef struct Health Health;
typedef struct HealthBarAnimation HealthBarAnimation;
typedef struct HealthBarTwodAnimation HealthBarTwodAnimation;
typedef struct HealthInterface HealthInterface;
typedef struct HealthListenerInterface HealthListenerInterface;
typedef struct Paintable Paintable;
typedef struct AllBinaryLayer AllBinaryLayer;
#if __has_include("org/allbinary/game/health/HealthBarAnimation.h")
#include "org/allbinary/game/health/HealthBarAnimation.h"
#endif
#if __has_include("org/allbinary/game/health/HealthInterface.h")
#include "org/allbinary/game/health/HealthInterface.h"
#endif
#include "org/allbinary/game/health/HealthListenerInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/game/ag/life/Life.h")
#include "org/allbinary/game/ag/life/Life.h"
#endif

typedef struct HealthIncludingLifeBar HealthIncludingLifeBar;
struct HealthIncludingLifeBar {
    Paintable base;
    HealthListenerInterface HealthListenerInterface_interface;
    HealthBarAnimation* animationInterface;
    Life* life;
    HealthInterface* healthInterface;
    AllBinaryLayer* allbinaryLayer;
};


HealthIncludingLifeBar* HealthIncludingLifeBar_new(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction);

HealthIncludingLifeBar* HealthIncludingLifeBar_createHealthIncludingLifeBar(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, int32_t location, int32_t direction);

void HealthIncludingLifeBar_init(HealthIncludingLifeBar* this, AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction);

void HealthIncludingLifeBar_onHealthChange(HealthIncludingLifeBar* this);

void HealthIncludingLifeBar_paint(HealthIncludingLifeBar* this, Graphics* graphics);

void HealthIncludingLifeBar_paintThreed(HealthIncludingLifeBar* this, Graphics* graphics);
#define HealthIncludingLifeBar_new5 HealthIncludingLifeBar_new
#define HealthIncludingLifeBar_init5 HealthIncludingLifeBar_init
#ifndef HealthIncludingLifeBar_setBasicColorP
#define HealthIncludingLifeBar_setBasicColorP Paintable_setBasicColorP
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealthIncludingLifeBar_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealthIncludingLifeBar_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H
