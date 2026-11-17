#ifndef ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_H
#define ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_H
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
// package org.allbinary.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AngleIncrementInfo AngleIncrementInfo;
typedef struct AngleFactory AngleFactory;
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif

typedef struct AngleIncrementInfoFactory AngleIncrementInfoFactory;
struct AngleIncrementInfoFactory {
    AngleIncrementInfo** angleIncrementInfo;
};


AngleIncrementInfoFactory* AngleIncrementInfoFactory_new(void);
void AngleIncrementInfoFactory_init(AngleIncrementInfoFactory* this);

AngleIncrementInfoFactory* AngleIncrementInfoFactory_getInstance(void);

AngleIncrementInfo* AngleIncrementInfoFactory_getAt(AngleIncrementInfoFactory* this, int16_t angleIncrement);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AngleIncrementInfoFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AngleIncrementInfoFactory_register(void);


#endif // ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_H
