#ifndef ORG_ALLBINARY_GAME_INPUT_KEYINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_KEYINTERFACE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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

typedef struct KeyInterface KeyInterface;
struct KeyInterface {
    void (*keyPressed)(void* this, int32_t keyCode);
    void (*keyReleased)(void* this, int32_t keyCode);
    void (*keyPressedByDevice)(void* this, int32_t keyCode, int32_t deviceId);
    void (*keyReleasedByDevice)(void* this, int32_t keyCode, int32_t deviceId);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void KeyInterface_staticInit(void);

static inline void KeyInterface_keyPressed(void* this, int32_t keyCode) {
    ((__typeof__(((KeyInterface*) nullptr)->keyPressed)) java_method_of(this, "keyPressed"))(this, keyCode);
}

static inline void KeyInterface_keyReleased(void* this, int32_t keyCode) {
    ((__typeof__(((KeyInterface*) nullptr)->keyReleased)) java_method_of(this, "keyReleased"))(this, keyCode);
}

static inline void KeyInterface_keyPressedByDevice(void* this, int32_t keyCode, int32_t deviceId) {
    ((__typeof__(((KeyInterface*) nullptr)->keyPressedByDevice)) java_method_of(this, "keyPressedByDevice"))(this, keyCode, deviceId);
}

static inline void KeyInterface_keyReleasedByDevice(void* this, int32_t keyCode, int32_t deviceId) {
    ((__typeof__(((KeyInterface*) nullptr)->keyReleasedByDevice)) java_method_of(this, "keyReleasedByDevice"))(this, keyCode, deviceId);
}


#endif // ORG_ALLBINARY_GAME_INPUT_KEYINTERFACE_H
