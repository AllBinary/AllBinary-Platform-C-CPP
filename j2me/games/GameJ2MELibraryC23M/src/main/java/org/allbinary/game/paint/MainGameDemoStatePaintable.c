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
// package org.allbinary.game.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct MainGameDemoStatePaintable MainGameDemoStatePaintable;
struct MainGameDemoStatePaintable {
    Paintable base;
    Paintable* ownershipPaintableInterface;
    Paintable* menuPaintableInterface;
};


MainGameDemoStatePaintable* MainGameDemoStatePaintable_new(Paintable* ownershipPaintableInterface, Paintable* menuPaintableInterface);

void MainGameDemoStatePaintable_init(MainGameDemoStatePaintable* this, Paintable* ownershipPaintableInterface, Paintable* menuPaintableInterface);
void MainGameDemoStatePaintable_paint(MainGameDemoStatePaintable* this, Graphics* graphics);
Paintable* MainGameDemoStatePaintable_getOwnershipPaintableInterface(MainGameDemoStatePaintable* this);
Paintable* MainGameDemoStatePaintable_getMenuPaintableInterface(MainGameDemoStatePaintable* this);

static void MainGameDemoStatePaintable_initFields(MainGameDemoStatePaintable* this) {
    
    
}


void MainGameDemoStatePaintable_init(MainGameDemoStatePaintable* this, Paintable* ownershipPaintableInterface, Paintable* menuPaintableInterface) {
    Paintable_init(&this->base);
    MainGameDemoStatePaintable_initFields(this);
        this->ownershipPaintableInterface = ownershipPaintableInterface;
        this->menuPaintableInterface = menuPaintableInterface;
}

MainGameDemoStatePaintable* MainGameDemoStatePaintable_new(Paintable* ownershipPaintableInterface, Paintable* menuPaintableInterface) {
    MainGameDemoStatePaintable* this = calloc(1, sizeof(MainGameDemoStatePaintable));
    MainGameDemoStatePaintable_init(this, ownershipPaintableInterface, menuPaintableInterface);
    return this;
}


void MainGameDemoStatePaintable_paint(MainGameDemoStatePaintable* this, Graphics* graphics) {
        Paintable_paint(this->menuPaintableInterface, graphics);
        Paintable_paint(this->ownershipPaintableInterface, graphics);
}


Paintable* MainGameDemoStatePaintable_getOwnershipPaintableInterface(MainGameDemoStatePaintable* this) {
        return this->ownershipPaintableInterface;
}


Paintable* MainGameDemoStatePaintable_getMenuPaintableInterface(MainGameDemoStatePaintable* this) {
        return this->menuPaintableInterface;
}

