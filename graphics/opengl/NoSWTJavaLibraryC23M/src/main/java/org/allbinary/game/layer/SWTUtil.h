#ifndef ORG_ALLBINARY_GAME_LAYER_SWTUTIL_H
#define ORG_ALLBINARY_GAME_LAYER_SWTUTIL_H
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SWTUtil SWTUtil;
struct SWTUtil {
    char unused;
};

extern bool SWTUtil_isSWT;
extern const char* SWTUtil_SWT;

SWTUtil* SWTUtil_new(void);
void SWTUtil_init(SWTUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SWTUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SWTUtil_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SWTUTIL_H
