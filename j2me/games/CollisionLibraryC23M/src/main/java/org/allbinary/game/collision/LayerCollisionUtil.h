#ifndef ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_H
#define ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_H
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
// package org.allbinary.game.collision

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CollisionProcessor CollisionProcessor;
typedef struct Collision2DProcessor Collision2DProcessor;
typedef struct CollisionThreedProcessor CollisionThreedProcessor;
typedef struct Features Features;
typedef struct GameFeatureFactory GameFeatureFactory;
typedef struct OpenGLFeatureUtil OpenGLFeatureUtil;
typedef struct AllBinaryLayer AllBinaryLayer;
#if __has_include("org/allbinary/game/collision/CollisionProcessor.h")
#include "org/allbinary/game/collision/CollisionProcessor.h"
#endif

typedef struct LayerCollisionUtil LayerCollisionUtil;
struct LayerCollisionUtil {
    CollisionProcessor* collisionProcessor;
};


LayerCollisionUtil* LayerCollisionUtil_new(void);

LayerCollisionUtil* LayerCollisionUtil_getInstance(void);

void LayerCollisionUtil_init(LayerCollisionUtil* this);

bool LayerCollisionUtil_isCollision(LayerCollisionUtil* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);
#define LayerCollisionUtil_new0 LayerCollisionUtil_new
#define LayerCollisionUtil_init0 LayerCollisionUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerCollisionUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerCollisionUtil_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_H
