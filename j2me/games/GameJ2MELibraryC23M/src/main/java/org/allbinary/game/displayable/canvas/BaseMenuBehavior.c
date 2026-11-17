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
#include "org/allbinary/graphics/paint/NullPaintable.h"

typedef struct BaseMenuBehavior BaseMenuBehavior;
struct BaseMenuBehavior {
    char unused;
};

static BaseMenuBehavior* BaseMenuBehavior_instance;

BaseMenuBehavior* BaseMenuBehavior_new(void);
BaseMenuBehavior* BaseMenuBehavior_getInstance(void);
void BaseMenuBehavior_onDisplayChangeEvent(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent);
void BaseMenuBehavior_initSpecialPaint(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseMenuBehavior_initMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseMenuBehavior_updateMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseMenuBehavior_popupMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseMenuBehavior_closeMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

// Static fields with runtime initializers: call this once at startup
void BaseMenuBehavior_staticInit(void) {
    BaseMenuBehavior_instance = BaseMenuBehavior_new();
}

void BaseMenuBehavior_init(BaseMenuBehavior* this) {
}

BaseMenuBehavior* BaseMenuBehavior_new(void) {
    BaseMenuBehavior* this = calloc(1, sizeof(BaseMenuBehavior));
    BaseMenuBehavior_init(this);
    return this;
}


BaseMenuBehavior* BaseMenuBehavior_getInstance(void) {
        return BaseMenuBehavior_instance;
}


// throws Exception
void BaseMenuBehavior_onDisplayChangeEvent(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent) {
}


void BaseMenuBehavior_initSpecialPaint(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_setNonBotPaintableP(allBinaryGameCanvas, NullPaintable_getInstance());
}


// throws Exception
void BaseMenuBehavior_initMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void BaseMenuBehavior_updateMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void BaseMenuBehavior_popupMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


void BaseMenuBehavior_closeMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}

