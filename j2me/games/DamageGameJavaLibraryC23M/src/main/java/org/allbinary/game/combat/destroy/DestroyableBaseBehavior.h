#ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H
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
typedef struct DestroyableInterface DestroyableInterface;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/game/combat/destroy/DestroyableInterface.h"

typedef struct DestroyableBaseBehavior DestroyableBaseBehavior;
struct DestroyableBaseBehavior {
    DestroyableInterface DestroyableInterface_interface;
};


DestroyableBaseBehavior* DestroyableBaseBehavior_new(void);
void DestroyableBaseBehavior_init(DestroyableBaseBehavior* this);

DestroyableBaseBehavior* DestroyableBaseBehavior_getInstance(void);

const char* DestroyableBaseBehavior_getName(DestroyableBaseBehavior* this);

bool DestroyableBaseBehavior_isDestroyed(DestroyableBaseBehavior* this);

void DestroyableBaseBehavior_setDestroyed(DestroyableBaseBehavior* this, bool destroyed);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DestroyableBaseBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DestroyableBaseBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H
