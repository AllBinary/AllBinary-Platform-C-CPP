/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct RTSInterface RTSInterface;
struct RTSInterface {
    bool (*isSelfUpgradeable)(void* this);
    bool (*isCompleted)(void* this);
    int32_t (*getPercentComplete)(void* this);
    int32_t (*getLevel)(void* this);
    int32_t (*getMaxLevel)(void* this);
    int32_t (*getCost)(void* this);
    void (*downgrade)(void* this);
    int32_t (*getDowngradeCost)(void* this);
    bool (*isDowngradeable)(void* this);
    int32_t (*getUpgradeCost)(void* this);
    bool (*isUpgradeable)(void* this);
    void (*upgrade)(void* this);
};


