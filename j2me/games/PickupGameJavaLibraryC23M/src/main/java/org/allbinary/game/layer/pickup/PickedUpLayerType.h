#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPE_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPE_H
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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PickedUpLayerType PickedUpLayerType;
struct PickedUpLayerType {
    const char* name;
};


PickedUpLayerType* PickedUpLayerType_new(const char* name);

void PickedUpLayerType_init(PickedUpLayerType* this, const char* name);

const char* PickedUpLayerType_toString(PickedUpLayerType* this);
#define PickedUpLayerType_new1 PickedUpLayerType_new
#define PickedUpLayerType_init1 PickedUpLayerType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickedUpLayerType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PickedUpLayerType_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPE_H
