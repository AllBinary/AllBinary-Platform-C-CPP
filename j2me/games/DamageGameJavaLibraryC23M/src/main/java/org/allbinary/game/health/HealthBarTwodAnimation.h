#ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTWODANIMATION_H
#define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTWODANIMATION_H
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
typedef struct HealthBarAnimation HealthBarAnimation;
typedef struct Graphics Graphics;
typedef struct AllBinaryLayer AllBinaryLayer;
#include "org/allbinary/game/health/HealthBarAnimation.h"

typedef struct HealthBarTwodAnimation HealthBarTwodAnimation;
struct HealthBarTwodAnimation {
    HealthBarAnimation base;
};


HealthBarTwodAnimation* HealthBarTwodAnimation_new(AllBinaryLayer* layerInterface, int32_t location);

void HealthBarTwodAnimation_init(HealthBarTwodAnimation* this, AllBinaryLayer* layerInterface, int32_t location);

void HealthBarTwodAnimation_paintXY(HealthBarTwodAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define HealthBarTwodAnimation_new2 HealthBarTwodAnimation_new
#define HealthBarTwodAnimation_init2 HealthBarTwodAnimation_init
#ifndef HealthBarTwodAnimation_onHealthChange
#define HealthBarTwodAnimation_onHealthChange HealthBarAnimation_onHealthChange
#endif
#ifndef HealthBarTwodAnimation_getY
#define HealthBarTwodAnimation_getY HealthBarAnimation_getY
#endif
#ifndef HealthBarTwodAnimation_setAlpha
#define HealthBarTwodAnimation_setAlpha Animation_setAlpha
#endif
#ifndef HealthBarTwodAnimation_nextFrame
#define HealthBarTwodAnimation_nextFrame Animation_nextFrame
#endif
#ifndef HealthBarTwodAnimation_paintThreedXYZ
#define HealthBarTwodAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef HealthBarTwodAnimation_isThreed
#define HealthBarTwodAnimation_isThreed Animation_isThreed
#endif
#ifndef HealthBarTwodAnimation_getBasicColorP
#define HealthBarTwodAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef HealthBarTwodAnimation_setBasicColorP
#define HealthBarTwodAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef HealthBarTwodAnimation_setBackgroundBasicColorP
#define HealthBarTwodAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef HealthBarTwodAnimation_getChangeBasicColor
#define HealthBarTwodAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef HealthBarTwodAnimation_changeBasicColor
#define HealthBarTwodAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef HealthBarTwodAnimation_getChangeColor
#define HealthBarTwodAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef HealthBarTwodAnimation_getColor
#define HealthBarTwodAnimation_getColor Animation_getColor
#endif
#ifndef HealthBarTwodAnimation_setScale
#define HealthBarTwodAnimation_setScale Animation_setScale
#endif
#ifndef HealthBarTwodAnimation_setMaxScale
#define HealthBarTwodAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef HealthBarTwodAnimation_set
#define HealthBarTwodAnimation_set Animation_set
#endif
#ifndef HealthBarTwodAnimation_setDx
#define HealthBarTwodAnimation_setDx Animation_setDx
#endif
#ifndef HealthBarTwodAnimation_getDx
#define HealthBarTwodAnimation_getDx Animation_getDx
#endif
#ifndef HealthBarTwodAnimation_setDy
#define HealthBarTwodAnimation_setDy Animation_setDy
#endif
#ifndef HealthBarTwodAnimation_getDy
#define HealthBarTwodAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealthBarTwodAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealthBarTwodAnimation_register(void);


#endif // ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTWODANIMATION_H
