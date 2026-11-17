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
// package org.allbinary.game.ag.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LifeInterface LifeInterface;
struct LifeInterface {
    int16_t (*get)(void* this);
    void (*set)(void* this, int16_t lives);
    void (*reset)(void* this);
    void (*add)(void* this, int16_t lives);
    void (*deaths)(void* this, int16_t lives);
    int16_t (*getMaxlives)(void* this);
    bool (*isAlive)(void* this);
};


