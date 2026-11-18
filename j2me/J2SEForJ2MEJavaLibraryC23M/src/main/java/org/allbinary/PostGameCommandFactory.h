#ifndef ORG_ALLBINARY_POSTGAMECOMMANDFACTORY_H
#define ORG_ALLBINARY_POSTGAMECOMMANDFACTORY_H
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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Canvas Canvas;
typedef struct MultiPlayerGameFeatureFactory MultiPlayerGameFeatureFactory;

typedef struct PostGameCommandFactory PostGameCommandFactory;
struct PostGameCommandFactory {
    char unused;
};


PostGameCommandFactory* PostGameCommandFactory_new(void);
void PostGameCommandFactory_init(PostGameCommandFactory* this);

PostGameCommandFactory* PostGameCommandFactory_getInstance(void);

void PostGameCommandFactory_addCommands(PostGameCommandFactory* this, Canvas* canvas);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PostGameCommandFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PostGameCommandFactory_register(void);


#endif // ORG_ALLBINARY_POSTGAMECOMMANDFACTORY_H
