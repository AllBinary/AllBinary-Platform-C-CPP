#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXPAINTABLE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct Graphics Graphics;
typedef struct ABCustomItem ABCustomItem;

typedef struct ItemIndexPaintable ItemIndexPaintable;
struct ItemIndexPaintable {
    char unused;
};


ItemIndexPaintable* ItemIndexPaintable_new(void);
void ItemIndexPaintable_init(ItemIndexPaintable* this);

ItemIndexPaintable* ItemIndexPaintable_getInstance(void);

int32_t ItemIndexPaintable_paint(ItemIndexPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ItemIndexPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ItemIndexPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXPAINTABLE_H
