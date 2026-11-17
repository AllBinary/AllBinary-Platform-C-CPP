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
// package org.allbinary.graphics.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"

typedef struct Paintable Paintable;
struct Paintable {
    PaintableInterface PaintableInterface_interface;
};


Paintable* Paintable_new(void);
void Paintable_setBasicColorP(Paintable* this, BasicColor* basicColor);
void Paintable_paint(Paintable* this, Graphics* graphics);
void Paintable_paintThreed(Paintable* this, Graphics* graphics);

void Paintable_init(Paintable* this) {
}

Paintable* Paintable_new(void) {
    Paintable* this = calloc(1, sizeof(Paintable));
    Paintable_init(this);
    return this;
}


void Paintable_setBasicColorP(Paintable* this, BasicColor* basicColor) {
}


void Paintable_paint(Paintable* this, Graphics* graphics) {
}


void Paintable_paintThreed(Paintable* this, Graphics* graphics) {
}

