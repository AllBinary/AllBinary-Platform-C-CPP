#ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEINTERFACE_H
#define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEINTERFACE_H
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
typedef struct NamedInterface NamedInterface;
#include "org/allbinary/layer/NamedInterface.h"

typedef struct DestroyableInterface DestroyableInterface;
struct DestroyableInterface {
    bool (*isDestroyed)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DestroyableInterface_staticInit(void);

static inline bool DestroyableInterface_isDestroyed(void* this) {
    return ((__typeof__(((DestroyableInterface*) nullptr)->isDestroyed)) java_method_of(this, "isDestroyed"))(this);
}
#define DestroyableInterface_getName NamedInterface_getName


#endif // ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEINTERFACE_H
