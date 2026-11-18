#ifndef ORG_ALLBINARY_GAME_GD_RESOURCE_GDRESOURCES_H
#define ORG_ALLBINARY_GAME_GD_RESOURCE_GDRESOURCES_H
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
// package org.allbinary.game.gd.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GDResources GDResources;
struct GDResources {
    const char** resourceStringArray;
    int32_t currentLayoutRequiredTotal;
};


GDResources* GDResources_new(void);
void GDResources_init(GDResources* this);

GDResources* GDResources_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GDResources_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GDResources_register(void);


#endif // ORG_ALLBINARY_GAME_GD_RESOURCE_GDRESOURCES_H
