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
#include "org/allbinary/game/input/J2MEGameInputMapping.h"

typedef struct MotionJ2MEGameInputMapping MotionJ2MEGameInputMapping;
struct MotionJ2MEGameInputMapping {
    J2MEGameInputMapping base;
};


MotionJ2MEGameInputMapping* MotionJ2MEGameInputMapping_new(void);
InputToGameKeyMapping* MotionJ2MEGameInputMapping_getDefault(MotionJ2MEGameInputMapping* this);

void MotionJ2MEGameInputMapping_init(MotionJ2MEGameInputMapping* this) {
    J2MEGameInputMapping_init(&this->base);
}

MotionJ2MEGameInputMapping* MotionJ2MEGameInputMapping_new(void) {
    MotionJ2MEGameInputMapping* this = calloc(1, sizeof(MotionJ2MEGameInputMapping));
    MotionJ2MEGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* MotionJ2MEGameInputMapping_getDefault(MotionJ2MEGameInputMapping* this) {
        return MotionJ2MEDefaultGameInputMapping_getInputMapping(MotionJ2MEDefaultGameInputMapping_new());
}

