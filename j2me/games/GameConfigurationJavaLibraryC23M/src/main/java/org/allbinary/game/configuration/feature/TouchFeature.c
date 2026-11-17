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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Feature.h"

typedef struct TouchFeature TouchFeature;
struct TouchFeature {
    Feature base;
};


TouchFeature* TouchFeature_new(const char* name);

void TouchFeature_init(TouchFeature* this, const char* name);


void TouchFeature_init(TouchFeature* this, const char* name) {
        Feature_init(&this->base, name);
}

TouchFeature* TouchFeature_new(const char* name) {
    TouchFeature* this = calloc(1, sizeof(TouchFeature));
    TouchFeature_init(this, name);
    return this;
}

