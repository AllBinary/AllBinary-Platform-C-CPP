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

typedef struct DesktopGameInputMapping DesktopGameInputMapping;
struct DesktopGameInputMapping {
    PCGameInputMapping base;
};


DesktopGameInputMapping* DesktopGameInputMapping_new(void);
InputToGameKeyMapping* DesktopGameInputMapping_getDefault(DesktopGameInputMapping* this);

void DesktopGameInputMapping_init(DesktopGameInputMapping* this) {
    PCGameInputMapping_init(&this->base);
}

DesktopGameInputMapping* DesktopGameInputMapping_new(void) {
    DesktopGameInputMapping* this = calloc(1, sizeof(DesktopGameInputMapping));
    DesktopGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* DesktopGameInputMapping_getDefault(DesktopGameInputMapping* this) {
        return DesktopDefaultGameInputMapping_getInputMapping(DesktopDefaultGameInputMapping_new());
}

