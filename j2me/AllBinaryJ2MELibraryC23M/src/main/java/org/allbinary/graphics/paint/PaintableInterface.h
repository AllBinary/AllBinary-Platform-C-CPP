#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_PAINTABLEINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_PAINTABLEINTERFACE_H
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

typedef struct PaintableInterface PaintableInterface;
struct PaintableInterface {
    void (*paint)(void* this, Graphics* graphics);
    void (*paintThreed)(void* this, Graphics* graphics);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PaintableInterface_staticInit(void);

static inline void PaintableInterface_paint(void* this, Graphics* graphics) {
    ((__typeof__(((PaintableInterface*) nullptr)->paint)) java_method_of(this, "paint"))(this, graphics);
}

static inline void PaintableInterface_paintThreed(void* this, Graphics* graphics) {
    ((__typeof__(((PaintableInterface*) nullptr)->paintThreed)) java_method_of(this, "paintThreed"))(this, graphics);
}


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_PAINTABLEINTERFACE_H
