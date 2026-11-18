#ifndef ORG_ALLBINARY_GAME_AG_VECTOR_MINEVECTORDATA_H
#define ORG_ALLBINARY_GAME_AG_VECTOR_MINEVECTORDATA_H
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
// package org.allbinary.game.ag.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MineVectorData MineVectorData;
struct MineVectorData {
    char unused;
};

extern int32_t*** MineVectorData_points;

MineVectorData* MineVectorData_new(void);

void MineVectorData_init(MineVectorData* this);
#define MineVectorData_new0 MineVectorData_new
#define MineVectorData_init0 MineVectorData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MineVectorData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MineVectorData_register(void);


#endif // ORG_ALLBINARY_GAME_AG_VECTOR_MINEVECTORDATA_H
