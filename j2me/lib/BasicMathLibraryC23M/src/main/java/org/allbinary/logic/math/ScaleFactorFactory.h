#ifndef ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_H
#define ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_H
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
// package org.allbinary.logic.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ScaleFactorFactory ScaleFactorFactory;
struct ScaleFactorFactory {
    int32_t DEFAULT_SCALE_FACTOR;
    int32_t DEFAULT_SCALE_VALUE;
};


ScaleFactorFactory* ScaleFactorFactory_new(void);
void ScaleFactorFactory_init(ScaleFactorFactory* this);

ScaleFactorFactory* ScaleFactorFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScaleFactorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScaleFactorFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_H
