#ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_MULTIPASSSTATE_H
#define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_MULTIPASSSTATE_H
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
// package org.allbinary.media.graphics.geography.pathfinding

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MultipassState MultipassState;
struct MultipassState {
    int32_t step;
    int32_t iteration;
    int32_t iteration2;
};


MultipassState* MultipassState_new(void);
void MultipassState_init(MultipassState* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MultipassState_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MultipassState_register(void);


#endif // ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_MULTIPASSSTATE_H
