#ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_H
#define ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_H
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
// package org.allbinary.game.identification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Group Group;
typedef struct NullUtil NullUtil;
#if __has_include("org/allbinary/game/identification/Group.h")
#include "org/allbinary/game/identification/Group.h"
#endif

typedef struct BasicGroupFactory BasicGroupFactory;
struct BasicGroupFactory {
    const char* NAME;
    const char* NO_SUCH_GROUP;
    Group* GOOD;
    Group* ENEMY;
    Group* ENEMY_ON_LEVEL;
    Group* NONE;
    Group** GOOD_ARRAY;
    Group** ENEMY_ARRAY;
    Group** ENEMY_ON_LEVEL_ARRAY;
    Group** NONE_ARRAY;
};


BasicGroupFactory* BasicGroupFactory_new(void);
void BasicGroupFactory_init(BasicGroupFactory* this);

BasicGroupFactory* BasicGroupFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicGroupFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicGroupFactory_register(void);


#endif // ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_H
