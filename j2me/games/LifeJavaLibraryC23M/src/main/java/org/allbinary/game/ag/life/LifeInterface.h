#ifndef ORG_ALLBINARY_GAME_AG_LIFE_LIFEINTERFACE_H
#define ORG_ALLBINARY_GAME_AG_LIFE_LIFEINTERFACE_H
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
// package org.allbinary.game.ag.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LifeInterface LifeInterface;
struct LifeInterface {
    int16_t (*get)(void* this);
    void (*set)(void* this, int16_t lives);
    void (*reset)(void* this);
    void (*add)(void* this, int16_t lives);
    void (*deaths)(void* this, int16_t lives);
    int16_t (*getMaxlives)(void* this);
    bool (*isAlive)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LifeInterface_staticInit(void);

static inline int16_t LifeInterface_get(void* this) {
    return ((__typeof__(((LifeInterface*) nullptr)->get)) java_method_of(this, "get"))(this);
}

static inline void LifeInterface_set(void* this, int16_t lives) {
    ((__typeof__(((LifeInterface*) nullptr)->set)) java_method_of(this, "set"))(this, lives);
}

static inline void LifeInterface_reset(void* this) {
    ((__typeof__(((LifeInterface*) nullptr)->reset)) java_method_of(this, "reset"))(this);
}

static inline void LifeInterface_add(void* this, int16_t lives) {
    ((__typeof__(((LifeInterface*) nullptr)->add)) java_method_of(this, "add"))(this, lives);
}

static inline void LifeInterface_deaths(void* this, int16_t lives) {
    ((__typeof__(((LifeInterface*) nullptr)->deaths)) java_method_of(this, "deaths"))(this, lives);
}

static inline int16_t LifeInterface_getMaxlives(void* this) {
    return ((__typeof__(((LifeInterface*) nullptr)->getMaxlives)) java_method_of(this, "getMaxlives"))(this);
}

static inline bool LifeInterface_isAlive(void* this) {
    return ((__typeof__(((LifeInterface*) nullptr)->isAlive)) java_method_of(this, "isAlive"))(this);
}


#endif // ORG_ALLBINARY_GAME_AG_LIFE_LIFEINTERFACE_H
