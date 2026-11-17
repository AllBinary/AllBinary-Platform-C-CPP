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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/input/PCGameInputMapping.h"

typedef struct LaptopGameInputMapping LaptopGameInputMapping;
struct LaptopGameInputMapping {
    PCGameInputMapping base;
};


LaptopGameInputMapping* LaptopGameInputMapping_new(void);
InputToGameKeyMapping* LaptopGameInputMapping_getDefault(LaptopGameInputMapping* this);

void LaptopGameInputMapping_init(LaptopGameInputMapping* this) {
    PCGameInputMapping_init(&this->base);
}

LaptopGameInputMapping* LaptopGameInputMapping_new(void) {
    LaptopGameInputMapping* this = calloc(1, sizeof(LaptopGameInputMapping));
    LaptopGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* LaptopGameInputMapping_getDefault(LaptopGameInputMapping* this) {
        return LaptopDefaultGameInputMapping_getInputMapping(LaptopDefaultGameInputMapping_new());
}

