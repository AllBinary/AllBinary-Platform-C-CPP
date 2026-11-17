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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"

typedef struct ItemPaintable ItemPaintable;
struct ItemPaintable {
    char unused;
};


ItemPaintable* ItemPaintable_new(void);
void ItemPaintable_paint(ItemPaintable* this, Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y);

void ItemPaintable_init(ItemPaintable* this) {
}

ItemPaintable* ItemPaintable_new(void) {
    ItemPaintable* this = calloc(1, sizeof(ItemPaintable));
    ItemPaintable_init(this);
    return this;
}


void ItemPaintable_paint(ItemPaintable* this, Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y) {
}

