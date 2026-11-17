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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/TestInputInterface.h"

typedef struct TestInputExample TestInputExample;
struct TestInputExample {
    TestInputInterface TestInputInterface_interface;
    int32_t testValue;
};


TestInputExample* TestInputExample_new(void);
void TestInputExample_up(TestInputExample* this);
void TestInputExample_down(TestInputExample* this);
void TestInputExample_left(TestInputExample* this);
void TestInputExample_right(TestInputExample* this);
void TestInputExample_strafeLeft(TestInputExample* this);
void TestInputExample_strafeRight(TestInputExample* this);
void TestInputExample_paint(TestInputExample* this, Graphics* graphics);
void TestInputExample_paintThreed(TestInputExample* this, Graphics* graphics);

static void TestInputExample_initFields(TestInputExample* this) {
    this->testValue = 0;
}

void TestInputExample_init(TestInputExample* this) {
    TestInputExample_initFields(this);
}

TestInputExample* TestInputExample_new(void) {
    TestInputExample* this = calloc(1, sizeof(TestInputExample));
    TestInputExample_init(this);
    return this;
}


void TestInputExample_up(TestInputExample* this) {
}


void TestInputExample_down(TestInputExample* this) {
}


void TestInputExample_left(TestInputExample* this) {
        this->testValue++;
}


void TestInputExample_right(TestInputExample* this) {
        this->testValue--;
}


void TestInputExample_strafeLeft(TestInputExample* this) {
}


void TestInputExample_strafeRight(TestInputExample* this) {
}


void TestInputExample_paint(TestInputExample* this, Graphics* graphics) {
}


void TestInputExample_paintThreed(TestInputExample* this, Graphics* graphics) {
}

