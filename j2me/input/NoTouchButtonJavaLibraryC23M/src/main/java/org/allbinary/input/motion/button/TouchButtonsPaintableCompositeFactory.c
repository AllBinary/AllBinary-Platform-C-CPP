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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/mapping/InputMappingInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/paint/ProcessPaintable.h"

typedef struct TouchButtonsPaintableCompositeFactory TouchButtonsPaintableCompositeFactory;
struct TouchButtonsPaintableCompositeFactory {
    char unused;
};


TouchButtonsPaintableCompositeFactory* TouchButtonsPaintableCompositeFactory_new(void);
ProcessPaintable* TouchButtonsPaintableCompositeFactory_getInstance(InputMappingInterface* inputMappingInterface, BasicColor* basicColor);

void TouchButtonsPaintableCompositeFactory_init(TouchButtonsPaintableCompositeFactory* this) {
}

TouchButtonsPaintableCompositeFactory* TouchButtonsPaintableCompositeFactory_new(void) {
    TouchButtonsPaintableCompositeFactory* this = calloc(1, sizeof(TouchButtonsPaintableCompositeFactory));
    TouchButtonsPaintableCompositeFactory_init(this);
    return this;
}


ProcessPaintable* TouchButtonsPaintableCompositeFactory_getInstance(InputMappingInterface* inputMappingInterface, BasicColor* basicColor) {
        return ProcessPaintable_new();
}

