#ifndef ORG_ALLBINARY_AG_GAME_VECTOR_HEALTHVECTORDATA_H
#define ORG_ALLBINARY_AG_GAME_VECTOR_HEALTHVECTORDATA_H
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
// package org.allbinary.ag.game.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HealthVectorData HealthVectorData;
struct HealthVectorData {
    char unused;
};

extern int32_t*** HealthVectorData_points;

HealthVectorData* HealthVectorData_new(void);
void HealthVectorData_init(HealthVectorData* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealthVectorData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealthVectorData_register(void);


#endif // ORG_ALLBINARY_AG_GAME_VECTOR_HEALTHVECTORDATA_H
