#ifndef ORG_ALLBINARY_GAME_INPUT_TESTINPUTINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_TESTINPUTINTERFACE_H
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
typedef struct PaintableInterface PaintableInterface;
#include "org/allbinary/graphics/paint/PaintableInterface.h"

typedef struct TestInputInterface TestInputInterface;
struct TestInputInterface {
    void (*up)(void* this);
    void (*down)(void* this);
    void (*left)(void* this);
    void (*right)(void* this);
    void (*strafeLeft)(void* this);
    void (*strafeRight)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TestInputInterface_staticInit(void);

static inline void TestInputInterface_up(void* this) {
    ((__typeof__(((TestInputInterface*) nullptr)->up)) java_method_of(this, "up"))(this);
}

static inline void TestInputInterface_down(void* this) {
    ((__typeof__(((TestInputInterface*) nullptr)->down)) java_method_of(this, "down"))(this);
}

static inline void TestInputInterface_left(void* this) {
    ((__typeof__(((TestInputInterface*) nullptr)->left)) java_method_of(this, "left"))(this);
}

static inline void TestInputInterface_right(void* this) {
    ((__typeof__(((TestInputInterface*) nullptr)->right)) java_method_of(this, "right"))(this);
}

static inline void TestInputInterface_strafeLeft(void* this) {
    ((__typeof__(((TestInputInterface*) nullptr)->strafeLeft)) java_method_of(this, "strafeLeft"))(this);
}

static inline void TestInputInterface_strafeRight(void* this) {
    ((__typeof__(((TestInputInterface*) nullptr)->strafeRight)) java_method_of(this, "strafeRight"))(this);
}
#define TestInputInterface_paint PaintableInterface_paint
#define TestInputInterface_paintThreed PaintableInterface_paintThreed


#endif // ORG_ALLBINARY_GAME_INPUT_TESTINPUTINTERFACE_H
