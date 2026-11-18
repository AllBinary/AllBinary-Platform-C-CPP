#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACE_H
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
// package org.allbinary.game.layer.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameKeyEvent GameKeyEvent;
typedef struct PaintableInterface PaintableInterface;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/graphics/paint/PaintableInterface.h"

typedef struct SpecialGameInputInterface SpecialGameInputInterface;
struct SpecialGameInputInterface {
    void (*up)(void* this);
    void (*down)(void* this);
    void (*right)(void* this);
    void (*left)(void* this);
    void (*strafeLeft)(void* this);
    void (*strafeRight)(void* this);
    void (*fire)(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
    void (*special1)(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
    void (*special2)(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
    void (*special3)(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
    void (*special4)(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
    void (*special5)(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialGameInputInterface_staticInit(void);

static inline void SpecialGameInputInterface_up(void* this) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->up)) java_method_of(this, "up"))(this);
}

static inline void SpecialGameInputInterface_down(void* this) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->down)) java_method_of(this, "down"))(this);
}

static inline void SpecialGameInputInterface_right(void* this) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->right)) java_method_of(this, "right"))(this);
}

static inline void SpecialGameInputInterface_left(void* this) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->left)) java_method_of(this, "left"))(this);
}

static inline void SpecialGameInputInterface_strafeLeft(void* this) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->strafeLeft)) java_method_of(this, "strafeLeft"))(this);
}

static inline void SpecialGameInputInterface_strafeRight(void* this) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->strafeRight)) java_method_of(this, "strafeRight"))(this);
}

static inline void SpecialGameInputInterface_fire(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->fire)) java_method_of(this, "fire"))(this, layerManager, gameKeyEvent);
}

static inline void SpecialGameInputInterface_special1(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->special1)) java_method_of(this, "special1"))(this, layerManager, gameKeyEvent);
}

static inline void SpecialGameInputInterface_special2(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->special2)) java_method_of(this, "special2"))(this, layerManager, gameKeyEvent);
}

static inline void SpecialGameInputInterface_special3(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->special3)) java_method_of(this, "special3"))(this, layerManager, gameKeyEvent);
}

static inline void SpecialGameInputInterface_special4(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->special4)) java_method_of(this, "special4"))(this, layerManager, gameKeyEvent);
}

static inline void SpecialGameInputInterface_special5(void* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
    ((__typeof__(((SpecialGameInputInterface*) nullptr)->special5)) java_method_of(this, "special5"))(this, layerManager, gameKeyEvent);
}
#define SpecialGameInputInterface_paint PaintableInterface_paint
#define SpecialGameInputInterface_paintThreed PaintableInterface_paintThreed


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACE_H
