#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_LOCATIONPAINTABLEINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_LOCATIONPAINTABLEINTERFACE_H
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
typedef struct Graphics Graphics;

typedef struct LocationPaintableInterface LocationPaintableInterface;
struct LocationPaintableInterface {
    void (*paintXY)(void* this, Graphics* graphics, int32_t x, int32_t y);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LocationPaintableInterface_staticInit(void);

static inline void LocationPaintableInterface_paintXY(void* this, Graphics* graphics, int32_t x, int32_t y) {
    ((__typeof__(((LocationPaintableInterface*) nullptr)->paintXY)) java_method_of(this, "paintXY"))(this, graphics, x, y);
}


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_LOCATIONPAINTABLEINTERFACE_H
