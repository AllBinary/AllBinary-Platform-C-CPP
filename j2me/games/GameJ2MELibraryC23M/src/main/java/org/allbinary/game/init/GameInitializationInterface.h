#ifndef ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONINTERFACE_H
#define ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONINTERFACE_H
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
// package org.allbinary.game.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CommandListener CommandListener;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;

typedef struct GameInitializationInterface GameInitializationInterface;
struct GameInitializationInterface {
    void (*init)(void* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInitializationInterface_staticInit(void);

static inline void GameInitializationInterface_initMethod(void* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level) {
    ((__typeof__(((GameInitializationInterface*) nullptr)->init)) java_method_of(this, "init"))(this, abeClientInformation, commandListener, level);
}


#endif // ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONINTERFACE_H
