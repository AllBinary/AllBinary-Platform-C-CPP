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

typedef struct NormalJ2MEGameInputMapping NormalJ2MEGameInputMapping;
struct NormalJ2MEGameInputMapping {
    J2MEGameInputMapping base;
};


NormalJ2MEGameInputMapping* NormalJ2MEGameInputMapping_new(void);
InputToGameKeyMapping* NormalJ2MEGameInputMapping_getDefault(NormalJ2MEGameInputMapping* this);

void NormalJ2MEGameInputMapping_init(NormalJ2MEGameInputMapping* this) {
    J2MEGameInputMapping_init(&this->base);
}

NormalJ2MEGameInputMapping* NormalJ2MEGameInputMapping_new(void) {
    NormalJ2MEGameInputMapping* this = calloc(1, sizeof(NormalJ2MEGameInputMapping));
    NormalJ2MEGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* NormalJ2MEGameInputMapping_getDefault(NormalJ2MEGameInputMapping* this) {
        return NormalJ2MEDefaultGameInputMapping_getInputMapping(NormalJ2MEDefaultGameInputMapping_new());
}

