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
// package org.allbinary.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"

typedef struct LoadTextures LoadTextures;
struct LoadTextures {
    char unused;
};


LoadTextures* LoadTextures_new(void);
void LoadTextures_load(LoadTextures* this, GL10* gl);

void LoadTextures_init(LoadTextures* this) {
}

LoadTextures* LoadTextures_new(void) {
    LoadTextures* this = calloc(1, sizeof(LoadTextures));
    LoadTextures_init(this);
    return this;
}


// throws Exception
void LoadTextures_load(LoadTextures* this, GL10* gl) {
}

