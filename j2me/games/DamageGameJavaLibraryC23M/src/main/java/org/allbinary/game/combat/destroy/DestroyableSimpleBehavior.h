#ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLESIMPLEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLESIMPLEBEHAVIOR_H
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
// package org.allbinary.game.combat.destroy

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DestroyableBaseBehavior DestroyableBaseBehavior;
typedef struct DestroyedLayerProcessor DestroyedLayerProcessor;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
#if __has_include("org/allbinary/game/layer/CollidableCompositeLayer.h")
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#endif
#include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"

typedef struct DestroyableSimpleBehavior DestroyableSimpleBehavior;
struct DestroyableSimpleBehavior {
    DestroyableBaseBehavior base;
    CollidableCompositeLayer* ownerLayer;
    bool destroyed;
};


DestroyableSimpleBehavior* DestroyableSimpleBehavior_new(CollidableCompositeLayer* ownerLayer);

void DestroyableSimpleBehavior_init(DestroyableSimpleBehavior* this, CollidableCompositeLayer* ownerLayer);

bool DestroyableSimpleBehavior_isDestroyed(DestroyableSimpleBehavior* this);

void DestroyableSimpleBehavior_setDestroyed(DestroyableSimpleBehavior* this, bool destroyed);
#define DestroyableSimpleBehavior_new1 DestroyableSimpleBehavior_new
#define DestroyableSimpleBehavior_init1 DestroyableSimpleBehavior_init
#ifndef DestroyableSimpleBehavior_getInstance
#define DestroyableSimpleBehavior_getInstance DestroyableBaseBehavior_getInstance
#endif
#ifndef DestroyableSimpleBehavior_getName
#define DestroyableSimpleBehavior_getName DestroyableBaseBehavior_getName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DestroyableSimpleBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DestroyableSimpleBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLESIMPLEBEHAVIOR_H
