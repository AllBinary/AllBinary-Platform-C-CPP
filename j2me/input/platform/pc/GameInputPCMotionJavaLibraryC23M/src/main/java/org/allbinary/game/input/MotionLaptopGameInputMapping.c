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

typedef struct MotionLaptopGameInputMapping MotionLaptopGameInputMapping;
struct MotionLaptopGameInputMapping {
    PCGameInputMapping base;
};


MotionLaptopGameInputMapping* MotionLaptopGameInputMapping_new(void);
InputToGameKeyMapping* MotionLaptopGameInputMapping_getDefault(MotionLaptopGameInputMapping* this);

void MotionLaptopGameInputMapping_init(MotionLaptopGameInputMapping* this) {
    PCGameInputMapping_init(&this->base);
}

MotionLaptopGameInputMapping* MotionLaptopGameInputMapping_new(void) {
    MotionLaptopGameInputMapping* this = calloc(1, sizeof(MotionLaptopGameInputMapping));
    MotionLaptopGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* MotionLaptopGameInputMapping_getDefault(MotionLaptopGameInputMapping* this) {
        return MotionLaptopDefaultGameInputMapping_getInputMapping(MotionLaptopDefaultGameInputMapping_new());
}

