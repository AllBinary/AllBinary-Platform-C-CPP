#ifndef ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H
#define ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H
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
// package org.allbinary.direction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Direction Direction;
typedef struct StringMaker StringMaker;
typedef struct CommonPhoneStrings CommonPhoneStrings;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/direction/Direction.h")
#include "org/allbinary/direction/Direction.h"
#endif

typedef struct DirectionFactory DirectionFactory;
struct DirectionFactory {
    const char* NAME;
    Direction* LEFT;
    Direction* RIGHT;
    Direction* DOWN;
    Direction* UP;
    Direction* UP_LEFT;
    Direction* UP_RIGHT;
    Direction* DOWN_LEFT;
    Direction* DOWN_RIGHT;
    Direction* NOT_BORDERED_WITH;
    Direction* NO_DIRECTION;
    Direction* TOP;
    Direction* BOTTOM;
    Direction* ALL_DIRECTION;
};


DirectionFactory* DirectionFactory_new(void);

DirectionFactory* DirectionFactory_getInstance(void);

void DirectionFactory_init(DirectionFactory* this);
#define DirectionFactory_new0 DirectionFactory_new
#define DirectionFactory_init0 DirectionFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DirectionFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DirectionFactory_register(void);


#endif // ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H
