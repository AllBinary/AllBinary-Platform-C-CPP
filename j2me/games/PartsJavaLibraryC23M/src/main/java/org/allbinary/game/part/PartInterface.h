#ifndef ORG_ALLBINARY_GAME_PART_PARTINTERFACE_H
#define ORG_ALLBINARY_GAME_PART_PARTINTERFACE_H
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
// package org.allbinary.game.part

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AnimationInterfaceCompositeInterface AnimationInterfaceCompositeInterface;
typedef struct PaintableInterface PaintableInterface;
#include "org/allbinary/animation/AnimationInterfaceCompositeInterface.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"

typedef struct PartInterface PartInterface;
struct PartInterface {
    char unused;
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PartInterface_staticInit(void);
#define PartInterface_paint PaintableInterface_paint
#define PartInterface_paintThreed PaintableInterface_paintThreed
#define PartInterface_getAnimationInterface AnimationInterfaceCompositeInterface_getAnimationInterface


#endif // ORG_ALLBINARY_GAME_PART_PARTINTERFACE_H
