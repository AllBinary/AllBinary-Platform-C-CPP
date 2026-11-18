#ifndef ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_H
#define ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_H
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct TestInputInterface TestInputInterface;
typedef struct Graphics Graphics;
#include "org/allbinary/game/input/TestInputInterface.h"

typedef struct TestInputExample TestInputExample;
struct TestInputExample {
    TestInputInterface TestInputInterface_interface;
    int32_t testValue;
};


TestInputExample* TestInputExample_new(void);
void TestInputExample_init(TestInputExample* this);

void TestInputExample_up(TestInputExample* this);

void TestInputExample_down(TestInputExample* this);

void TestInputExample_left(TestInputExample* this);

void TestInputExample_right(TestInputExample* this);

void TestInputExample_strafeLeft(TestInputExample* this);

void TestInputExample_strafeRight(TestInputExample* this);

void TestInputExample_paint(TestInputExample* this, Graphics* graphics);

void TestInputExample_paintThreed(TestInputExample* this, Graphics* graphics);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TestInputExample_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TestInputExample_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_H
