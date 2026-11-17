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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/combat/destroy/DestroyableInterface.h"

typedef struct DestroyableBaseBehavior DestroyableBaseBehavior;
struct DestroyableBaseBehavior {
    DestroyableInterface DestroyableInterface_interface;
};

static DestroyableBaseBehavior* DestroyableBaseBehavior_instance;

DestroyableBaseBehavior* DestroyableBaseBehavior_new(void);
DestroyableBaseBehavior* DestroyableBaseBehavior_getInstance(void);
const char* DestroyableBaseBehavior_getName(DestroyableBaseBehavior* this);
bool DestroyableBaseBehavior_isDestroyed(DestroyableBaseBehavior* this);
void DestroyableBaseBehavior_setDestroyed(DestroyableBaseBehavior* this, bool destroyed);

// Static fields with runtime initializers: call this once at startup
void DestroyableBaseBehavior_staticInit(void) {
    DestroyableBaseBehavior_instance = DestroyableBaseBehavior_new();
}

void DestroyableBaseBehavior_init(DestroyableBaseBehavior* this) {
}

DestroyableBaseBehavior* DestroyableBaseBehavior_new(void) {
    DestroyableBaseBehavior* this = calloc(1, sizeof(DestroyableBaseBehavior));
    DestroyableBaseBehavior_init(this);
    return this;
}


DestroyableBaseBehavior* DestroyableBaseBehavior_getInstance(void) {
        return DestroyableBaseBehavior_instance;
}


const char* DestroyableBaseBehavior_getName(DestroyableBaseBehavior* this) {
        return java_class_of(this);
}


// throws Exception
bool DestroyableBaseBehavior_isDestroyed(DestroyableBaseBehavior* this) {
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}


void DestroyableBaseBehavior_setDestroyed(DestroyableBaseBehavior* this, bool destroyed) {
}

