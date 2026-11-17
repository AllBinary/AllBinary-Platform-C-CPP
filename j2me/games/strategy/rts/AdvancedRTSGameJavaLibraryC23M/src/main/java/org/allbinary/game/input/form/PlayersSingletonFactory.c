/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.input.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PlayersSingletonFactory PlayersSingletonFactory;
struct PlayersSingletonFactory {
    char unused;
};

int32_t PlayersSingletonFactory_total = 0;

PlayersSingletonFactory* PlayersSingletonFactory_new(void);

void PlayersSingletonFactory_init(PlayersSingletonFactory* this) {
}

PlayersSingletonFactory* PlayersSingletonFactory_new(void) {
    PlayersSingletonFactory* this = calloc(1, sizeof(PlayersSingletonFactory));
    PlayersSingletonFactory_init(this);
    return this;
}

