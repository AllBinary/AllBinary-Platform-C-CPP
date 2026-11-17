/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.game.behavior.topview

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct InitialJumpBehavior InitialJumpBehavior;
struct InitialJumpBehavior {
    char unused;
};


InitialJumpBehavior* InitialJumpBehavior_new(void);
void InitialJumpBehavior_process(InitialJumpBehavior* this);

void InitialJumpBehavior_init(InitialJumpBehavior* this) {
}

InitialJumpBehavior* InitialJumpBehavior_new(void) {
    InitialJumpBehavior* this = calloc(1, sizeof(InitialJumpBehavior));
    InitialJumpBehavior_init(this);
    return this;
}


void InitialJumpBehavior_process(InitialJumpBehavior* this) {
}

