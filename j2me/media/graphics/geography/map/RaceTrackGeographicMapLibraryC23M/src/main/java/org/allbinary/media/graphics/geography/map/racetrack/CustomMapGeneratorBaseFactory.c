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
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CustomMapGeneratorBaseFactory CustomMapGeneratorBaseFactory;
struct CustomMapGeneratorBaseFactory {
    char unused;
};

static CustomMapGeneratorBaseFactory* CustomMapGeneratorBaseFactory_instance;

CustomMapGeneratorBaseFactory* CustomMapGeneratorBaseFactory_new(void);
CustomMapGeneratorBaseFactory* CustomMapGeneratorBaseFactory_getInstance(void);

void CustomMapGeneratorBaseFactory_init(CustomMapGeneratorBaseFactory* this);
CustomMapGeneratorBase* CustomMapGeneratorBaseFactory_create(CustomMapGeneratorBaseFactory* this, RaceTrackGeographicMap* raceTrackGeographicMap);

// Static fields with runtime initializers: call this once at startup
void CustomMapGeneratorBaseFactory_staticInit(void) {
    CustomMapGeneratorBaseFactory_instance = CustomMapGeneratorBaseFactory_new();
}


CustomMapGeneratorBaseFactory* CustomMapGeneratorBaseFactory_getInstance(void) {
        return CustomMapGeneratorBaseFactory_instance;
}


void CustomMapGeneratorBaseFactory_init(CustomMapGeneratorBaseFactory* this) {
}

CustomMapGeneratorBaseFactory* CustomMapGeneratorBaseFactory_new(void) {
    CustomMapGeneratorBaseFactory* this = calloc(1, sizeof(CustomMapGeneratorBaseFactory));
    CustomMapGeneratorBaseFactory_init(this);
    return this;
}


// throws Exception
CustomMapGeneratorBase* CustomMapGeneratorBaseFactory_create(CustomMapGeneratorBaseFactory* this, RaceTrackGeographicMap* raceTrackGeographicMap) {
        return CustomMapGeneratorBase_new();
}

