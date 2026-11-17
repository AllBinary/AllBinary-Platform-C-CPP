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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"

typedef struct Anchor Anchor;
struct Anchor {
    char unused;
};

int32_t Anchor_TOP_LEFT;

Anchor* Anchor_new(void);

// Static fields with runtime initializers: call this once at startup
void Anchor_staticInit(void) {
    Anchor_TOP_LEFT = Graphics_TOP & Graphics_LEFT;
}

void Anchor_init(Anchor* this) {
}

Anchor* Anchor_new(void) {
    Anchor* this = calloc(1, sizeof(Anchor));
    Anchor_init(this);
    return this;
}

