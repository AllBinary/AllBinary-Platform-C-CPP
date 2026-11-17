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
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct MultiplayerBehavior MultiplayerBehavior;
struct MultiplayerBehavior {
    char unused;
};

MultiplayerBehavior* MultiplayerBehavior_NULL_MULTIPLAYER_BEHAVIOR;

MultiplayerBehavior* MultiplayerBehavior_new(const char* username);

void MultiplayerBehavior_init(MultiplayerBehavior* this, const char* username);
void MultiplayerBehavior_startTick(MultiplayerBehavior* this);
void MultiplayerBehavior_endTick(MultiplayerBehavior* this);
int64_t MultiplayerBehavior_getApproximateElapsed(MultiplayerBehavior* this);

// Static fields with runtime initializers: call this once at startup
void MultiplayerBehavior_staticInit(void) {
    MultiplayerBehavior_NULL_MULTIPLAYER_BEHAVIOR = MultiplayerBehavior_new(StringUtil_getInstance()->EMPTY_STRING);
}


void MultiplayerBehavior_init(MultiplayerBehavior* this, const char* username) {
}

MultiplayerBehavior* MultiplayerBehavior_new(const char* username) {
    MultiplayerBehavior* this = calloc(1, sizeof(MultiplayerBehavior));
    MultiplayerBehavior_init(this, username);
    return this;
}


void MultiplayerBehavior_startTick(MultiplayerBehavior* this) {
}


void MultiplayerBehavior_endTick(MultiplayerBehavior* this) {
}


int64_t MultiplayerBehavior_getApproximateElapsed(MultiplayerBehavior* this) {
        return 0LL;
}

