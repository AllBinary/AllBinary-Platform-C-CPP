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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HealthInterface HealthInterface;
struct HealthInterface {
    bool (*isAlive)(void* this);
    void (*damage)(void* this, int32_t ahealth);
    void (*heal)(void* this, int32_t ahealth);
    void (*healMax)(void* this);
    int32_t (*getMaxHealth)(void* this);
    void (*setMaxHealth)(void* this, int32_t maxHealth);
    int32_t (*getHealth)(void* this);
    void (*addListener)(void* this, HealthListenerInterface* healthListenerInterface);
};


