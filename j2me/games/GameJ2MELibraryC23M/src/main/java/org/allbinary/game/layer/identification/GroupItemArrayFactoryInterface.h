#ifndef ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPITEMARRAYFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPITEMARRAYFACTORYINTERFACE_H
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
// package org.allbinary.game.layer.identification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Group Group;
typedef struct ABCustomItem ABCustomItem;

typedef struct GroupItemArrayFactoryInterface GroupItemArrayFactoryInterface;
struct GroupItemArrayFactoryInterface {
    ABCustomItem** (*getInstance)(void* this, Group* groupInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GroupItemArrayFactoryInterface_staticInit(void);

static inline ABCustomItem** GroupItemArrayFactoryInterface_getInstance(void* this, Group* groupInterface) {
    return ((__typeof__(((GroupItemArrayFactoryInterface*) nullptr)->getInstance)) java_method_of(this, "getInstance"))(this, groupInterface);
}


#endif // ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPITEMARRAYFACTORYINTERFACE_H
