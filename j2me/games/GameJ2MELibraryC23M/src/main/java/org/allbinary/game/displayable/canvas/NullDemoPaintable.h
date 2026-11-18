#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDEMOPAINTABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDEMOPAINTABLE_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DemoPaintableInterface DemoPaintableInterface;
#include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"

typedef struct NullDemoPaintable NullDemoPaintable;
struct NullDemoPaintable {
    DemoPaintableInterface DemoPaintableInterface_interface;
};

extern NullDemoPaintable* NullDemoPaintable_NULL_DEMO_PAINTABLE;

NullDemoPaintable* NullDemoPaintable_new(void);
void NullDemoPaintable_init(NullDemoPaintable* this);

void NullDemoPaintable_showGamePaintable(NullDemoPaintable* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullDemoPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullDemoPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDEMOPAINTABLE_H
