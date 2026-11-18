#ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERBEHAVIOR_H
#define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERBEHAVIOR_H
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
// package org.allbinary.game.multiplayer.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringUtil StringUtil;

typedef struct MultiplayerBehavior MultiplayerBehavior;
struct MultiplayerBehavior {
    char unused;
};

extern MultiplayerBehavior* MultiplayerBehavior_NULL_MULTIPLAYER_BEHAVIOR;

MultiplayerBehavior* MultiplayerBehavior_new(const char* username);

void MultiplayerBehavior_init(MultiplayerBehavior* this, const char* username);

void MultiplayerBehavior_startTick(MultiplayerBehavior* this);

void MultiplayerBehavior_endTick(MultiplayerBehavior* this);

int64_t MultiplayerBehavior_getApproximateElapsed(MultiplayerBehavior* this);
#define MultiplayerBehavior_new1 MultiplayerBehavior_new
#define MultiplayerBehavior_init1 MultiplayerBehavior_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MultiplayerBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MultiplayerBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERBEHAVIOR_H
