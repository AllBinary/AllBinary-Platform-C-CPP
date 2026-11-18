#ifndef ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_H
#define ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_H
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
// package org.allbinary.game.rand

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct MathUtil MathUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
#include "java/util/Random.h"
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
#if __has_include("org/allbinary/logic/math/MathUtil.h")
#include "org/allbinary/logic/math/MathUtil.h"
#endif
#include "java/lang/System.h"
#include "java/lang/Integer.h"

//Do not use in client code for money related things.
typedef struct MyRandomFactory MyRandomFactory;
struct MyRandomFactory {
    MathUtil* mathUtil;
    Random* rand;
};


MyRandomFactory* MyRandomFactory_new(void);

MyRandomFactory* MyRandomFactory_getInstance(void);

void MyRandomFactory_init(MyRandomFactory* this);

void MyRandomFactory_setSeed(MyRandomFactory* this, int64_t seed);

int32_t MyRandomFactory_getNextInt(MyRandomFactory* this, int32_t range);

int32_t MyRandomFactory_getAbsoluteNextInt(MyRandomFactory* this, int32_t range);

int32_t MyRandomFactory_getAbsoluteNextIntAllowZero(MyRandomFactory* this, int32_t range);

void MyRandomFactory_shuffle(MyRandomFactory* this, int32_t* intArray);

void MyRandomFactory_shuffleTotal(MyRandomFactory* this, int32_t* intArray, int32_t shuffleTotal);

void MyRandomFactory_shuffle2(MyRandomFactory* this, int32_t* intArray, int32_t* intArray2);

void MyRandomFactory_shuffle2Total(MyRandomFactory* this, int32_t* intArray, int32_t* intArray2, int32_t shuffleTotal);

void MyRandomFactory_main(const char** args);
#define MyRandomFactory_new0 MyRandomFactory_new
#define MyRandomFactory_init0 MyRandomFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MyRandomFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MyRandomFactory_register(void);


#endif // ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_H
