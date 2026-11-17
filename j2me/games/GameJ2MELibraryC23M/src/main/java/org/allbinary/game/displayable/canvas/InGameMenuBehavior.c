/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"

typedef struct InGameMenuBehavior InGameMenuBehavior;
struct InGameMenuBehavior {
    BaseMenuBehavior base;
};

static InGameMenuBehavior* InGameMenuBehavior_instanceC;

InGameMenuBehavior* InGameMenuBehavior_new(void);
InGameMenuBehavior* InGameMenuBehavior_getInstance(void);
void InGameMenuBehavior_onDisplayChangeEvent(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent);
void InGameMenuBehavior_initSpecialPaint(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void InGameMenuBehavior_initMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void InGameMenuBehavior_updateMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void InGameMenuBehavior_popupMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void InGameMenuBehavior_closeMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

// Static fields with runtime initializers: call this once at startup
void InGameMenuBehavior_staticInit(void) {
    InGameMenuBehavior_instanceC = InGameMenuBehavior_new();
}

void InGameMenuBehavior_init(InGameMenuBehavior* this) {
    BaseMenuBehavior_init(&this->base);
}

InGameMenuBehavior* InGameMenuBehavior_new(void) {
    InGameMenuBehavior* this = calloc(1, sizeof(InGameMenuBehavior));
    InGameMenuBehavior_init(this);
    return this;
}


InGameMenuBehavior* InGameMenuBehavior_getInstance(void) {
        return InGameMenuBehavior_instanceC;
}


// throws Exception
void InGameMenuBehavior_onDisplayChangeEvent(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent) {
        AllBinaryGameCanvas_updateMenuFromEvent(allBinaryGameCanvas, displayChangeEvent);
}


void InGameMenuBehavior_initSpecialPaint(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_setNonBotPaintableP(allBinaryGameCanvas, GameCanvasNonBotPaintable_new(allBinaryGameCanvas));
}


// throws Exception
void InGameMenuBehavior_initMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_initMenu2(allBinaryGameCanvas);
}


// throws Exception
void InGameMenuBehavior_updateMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_initMenu2(allBinaryGameCanvas);
}


// throws Exception
void InGameMenuBehavior_popupMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_popupMenu2(allBinaryGameCanvas);
}


void InGameMenuBehavior_closeMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_closeMenu2(allBinaryGameCanvas);
}

