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
// package org.allbinary.graphics.displayable.screen

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Displayable.h"

typedef struct ScreenRepaintUtil ScreenRepaintUtil;
struct ScreenRepaintUtil {
    char unused;
};


ScreenRepaintUtil* ScreenRepaintUtil_new(void);
void ScreenRepaintUtil_repaint(Displayable* displayable);

void ScreenRepaintUtil_init(ScreenRepaintUtil* this) {
}

ScreenRepaintUtil* ScreenRepaintUtil_new(void) {
    ScreenRepaintUtil* this = calloc(1, sizeof(ScreenRepaintUtil));
    ScreenRepaintUtil_init(this);
    return this;
}


void ScreenRepaintUtil_repaint(Displayable* displayable) {
        Canvas* canvas = ((Canvas*) displayable);
        Canvas_repaint(canvas);
}

