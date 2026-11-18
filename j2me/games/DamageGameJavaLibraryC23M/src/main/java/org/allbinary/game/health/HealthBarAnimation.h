#ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_H
#define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_H
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
typedef struct Animation Animation;
typedef struct BasicHudFactory BasicHudFactory;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct AllBinaryLayer AllBinaryLayer;
#include "org/allbinary/animation/Animation.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

typedef struct HealthBarAnimation HealthBarAnimation;
struct HealthBarAnimation {
    Animation base;
    BasicColorFactory* basicColorFactory;
    int32_t x2;
    int32_t thickness;
    int32_t location;
    AllBinaryLayer* allbinaryLayer;
};


HealthBarAnimation* HealthBarAnimation_new(AllBinaryLayer* layerInterface, int32_t location);

void HealthBarAnimation_init(HealthBarAnimation* this, AllBinaryLayer* layerInterface, int32_t location);

void HealthBarAnimation_onHealthChange(HealthBarAnimation* this, int32_t newX2);

int32_t HealthBarAnimation_getY(HealthBarAnimation* this);
#define HealthBarAnimation_new2 HealthBarAnimation_new
#define HealthBarAnimation_init2 HealthBarAnimation_init
#ifndef HealthBarAnimation_setAlpha
#define HealthBarAnimation_setAlpha Animation_setAlpha
#endif
#ifndef HealthBarAnimation_nextFrame
#define HealthBarAnimation_nextFrame Animation_nextFrame
#endif
#ifndef HealthBarAnimation_paintXY
#define HealthBarAnimation_paintXY Animation_paintXY
#endif
#ifndef HealthBarAnimation_paintThreedXYZ
#define HealthBarAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef HealthBarAnimation_isThreed
#define HealthBarAnimation_isThreed Animation_isThreed
#endif
#ifndef HealthBarAnimation_getBasicColorP
#define HealthBarAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef HealthBarAnimation_setBasicColorP
#define HealthBarAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef HealthBarAnimation_setBackgroundBasicColorP
#define HealthBarAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef HealthBarAnimation_getChangeBasicColor
#define HealthBarAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef HealthBarAnimation_changeBasicColor
#define HealthBarAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef HealthBarAnimation_getChangeColor
#define HealthBarAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef HealthBarAnimation_getColor
#define HealthBarAnimation_getColor Animation_getColor
#endif
#ifndef HealthBarAnimation_setScale
#define HealthBarAnimation_setScale Animation_setScale
#endif
#ifndef HealthBarAnimation_setMaxScale
#define HealthBarAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef HealthBarAnimation_set
#define HealthBarAnimation_set Animation_set
#endif
#ifndef HealthBarAnimation_setDx
#define HealthBarAnimation_setDx Animation_setDx
#endif
#ifndef HealthBarAnimation_getDx
#define HealthBarAnimation_getDx Animation_getDx
#endif
#ifndef HealthBarAnimation_setDy
#define HealthBarAnimation_setDy Animation_setDy
#endif
#ifndef HealthBarAnimation_getDy
#define HealthBarAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealthBarAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealthBarAnimation_register(void);


#endif // ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_H
