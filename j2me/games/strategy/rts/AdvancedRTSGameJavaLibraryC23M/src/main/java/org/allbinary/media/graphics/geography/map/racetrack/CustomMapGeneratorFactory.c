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
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBaseFactory.h"

typedef struct CustomMapGeneratorFactory CustomMapGeneratorFactory;
struct CustomMapGeneratorFactory {
    CustomMapGeneratorBaseFactory base;
};


CustomMapGeneratorFactory* CustomMapGeneratorFactory_new(void);
CustomMapGeneratorBase* CustomMapGeneratorFactory_create(CustomMapGeneratorFactory* this, RaceTrackGeographicMap* raceTrackGeographicMap);

void CustomMapGeneratorFactory_init(CustomMapGeneratorFactory* this) {
    CustomMapGeneratorBaseFactory_init(&this->base);
}

CustomMapGeneratorFactory* CustomMapGeneratorFactory_new(void) {
    CustomMapGeneratorFactory* this = calloc(1, sizeof(CustomMapGeneratorFactory));
    CustomMapGeneratorFactory_init(this);
    return this;
}


// throws Exception
CustomMapGeneratorBase* CustomMapGeneratorFactory_create(CustomMapGeneratorFactory* this, RaceTrackGeographicMap* raceTrackGeographicMap) {
        return CustomMapGenerator_new(raceTrackGeographicMap);
}

