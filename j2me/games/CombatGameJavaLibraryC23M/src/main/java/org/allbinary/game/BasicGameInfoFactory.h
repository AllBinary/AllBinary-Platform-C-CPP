#ifndef ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
#define ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
// Generated Code Do Not Modify
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicGameInfoFactory BasicGameInfoFactory;
struct BasicGameInfoFactory {
    int32_t currentReleaseIndex;
    int32_t currentDestroyIndex;
    int32_t total;
};


BasicGameInfoFactory* BasicGameInfoFactory_new(void);

BasicGameInfoFactory* BasicGameInfoFactory_getInstance(void);

void BasicGameInfoFactory_init(BasicGameInfoFactory* this);

void BasicGameInfoFactory_initMethod(BasicGameInfoFactory* this, int32_t total);

bool BasicGameInfoFactory_isPeaked(BasicGameInfoFactory* this);

int32_t BasicGameInfoFactory_howManyLeft(BasicGameInfoFactory* this);
#define BasicGameInfoFactory_new0 BasicGameInfoFactory_new
#define BasicGameInfoFactory_init0 BasicGameInfoFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicGameInfoFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicGameInfoFactory_register(void);


#endif // ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
