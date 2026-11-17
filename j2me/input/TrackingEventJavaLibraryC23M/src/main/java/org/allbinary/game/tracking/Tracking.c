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
// package org.allbinary.game.tracking

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"

typedef struct Tracking Tracking;
struct Tracking {
    char unused;
};


Tracking* Tracking_new(void);

void Tracking_init(Tracking* this);
void Tracking_paint(Tracking* this, Graphics* graphics);


void Tracking_init(Tracking* this) {
}

Tracking* Tracking_new(void) {
    Tracking* this = calloc(1, sizeof(Tracking));
    Tracking_init(this);
    return this;
}


void Tracking_paint(Tracking* this, Graphics* graphics) {
}

