#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_INITUPDATEPAINTABLEINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_INITUPDATEPAINTABLEINTERFACE_H
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
typedef struct PaintableInterface PaintableInterface;
typedef struct InitInterface InitInterface;
typedef struct UpdateInterface UpdateInterface;
#include "org/allbinary/init/InitInterface.h"
#include "org/allbinary/init/UpdateInterface.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"

typedef struct InitUpdatePaintableInterface InitUpdatePaintableInterface;
struct InitUpdatePaintableInterface {
    char unused;
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InitUpdatePaintableInterface_staticInit(void);
#define InitUpdatePaintableInterface_initMethod InitInterface_initMethod
#define InitUpdatePaintableInterface_update UpdateInterface_update
#define InitUpdatePaintableInterface_paint PaintableInterface_paint
#define InitUpdatePaintableInterface_paintThreed PaintableInterface_paintThreed


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_INITUPDATEPAINTABLEINTERFACE_H
