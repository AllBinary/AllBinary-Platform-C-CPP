#ifndef ORG_ALLBINARY_GAME_PLAYERTYPE_H
#define ORG_ALLBINARY_GAME_PLAYERTYPE_H
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
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringUtil StringUtil;

typedef struct PlayerType PlayerType;
struct PlayerType {
    int32_t id;
    const char* name;
};


PlayerType* PlayerType_new(const char* name, int32_t value);

void PlayerType_init(PlayerType* this, const char* name, int32_t value);

int32_t PlayerType_getId(PlayerType* this);

const char* PlayerType_getName(PlayerType* this);

const char* PlayerType_toString(PlayerType* this);
#define PlayerType_new2 PlayerType_new
#define PlayerType_init2 PlayerType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlayerType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlayerType_register(void);


#endif // ORG_ALLBINARY_GAME_PLAYERTYPE_H
