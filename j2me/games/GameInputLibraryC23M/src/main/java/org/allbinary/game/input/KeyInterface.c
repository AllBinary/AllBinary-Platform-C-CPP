/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct KeyInterface KeyInterface;
struct KeyInterface {
    void (*keyPressed)(void* this, int32_t keyCode);
    void (*keyReleased)(void* this, int32_t keyCode);
    void (*keyPressedByDevice)(void* this, int32_t keyCode, int32_t deviceId);
    void (*keyReleasedByDevice)(void* this, int32_t keyCode, int32_t deviceId);
};


