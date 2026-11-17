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
// package org.allbinary.game.layer.geological.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GeologicalResourceInfoHudPaintableSingleton GeologicalResourceInfoHudPaintableSingleton;
struct GeologicalResourceInfoHudPaintableSingleton {
    char unused;
};

static GeologicalResourceInfoHudPaintable* GeologicalResourceInfoHudPaintableSingleton_instance;

GeologicalResourceInfoHudPaintableSingleton* GeologicalResourceInfoHudPaintableSingleton_new(void);
GeologicalResourceInfoHudPaintable* GeologicalResourceInfoHudPaintableSingleton_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GeologicalResourceInfoHudPaintableSingleton_staticInit(void) {
    GeologicalResourceInfoHudPaintableSingleton_instance = GeologicalResourceInfoHudPaintable_new();
}

void GeologicalResourceInfoHudPaintableSingleton_init(GeologicalResourceInfoHudPaintableSingleton* this) {
}

GeologicalResourceInfoHudPaintableSingleton* GeologicalResourceInfoHudPaintableSingleton_new(void) {
    GeologicalResourceInfoHudPaintableSingleton* this = calloc(1, sizeof(GeologicalResourceInfoHudPaintableSingleton));
    GeologicalResourceInfoHudPaintableSingleton_init(this);
    return this;
}


GeologicalResourceInfoHudPaintable* GeologicalResourceInfoHudPaintableSingleton_getInstance(void) {
        return GeologicalResourceInfoHudPaintableSingleton_instance;
}

