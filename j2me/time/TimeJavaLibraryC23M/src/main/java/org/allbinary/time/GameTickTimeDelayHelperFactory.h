#ifndef ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPERFACTORY_H
#define ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPERFACTORY_H
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
// package org.allbinary.time

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif

typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
struct GameTickTimeDelayHelperFactory {
    char unused;
};


GameTickTimeDelayHelperFactory* GameTickTimeDelayHelperFactory_new(void);

GameTickTimeDelayHelper* GameTickTimeDelayHelperFactory_getInstance(void);

void GameTickTimeDelayHelperFactory_init(GameTickTimeDelayHelperFactory* this);
#define GameTickTimeDelayHelperFactory_new0 GameTickTimeDelayHelperFactory_new
#define GameTickTimeDelayHelperFactory_init0 GameTickTimeDelayHelperFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameTickTimeDelayHelperFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameTickTimeDelayHelperFactory_register(void);


#endif // ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPERFACTORY_H
