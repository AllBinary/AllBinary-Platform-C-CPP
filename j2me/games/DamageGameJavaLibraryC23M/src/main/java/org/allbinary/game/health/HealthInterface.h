#ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHINTERFACE_H
#define ORG_ALLBINARY_GAME_HEALTH_HEALTHINTERFACE_H
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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HealthListenerInterface HealthListenerInterface;

typedef struct HealthInterface HealthInterface;
struct HealthInterface {
    bool (*isAlive)(void* this);
    void (*damage)(void* this, int32_t ahealth);
    void (*heal)(void* this, int32_t ahealth);
    void (*healMax)(void* this);
    int32_t (*getMaxHealth)(void* this);
    void (*setMaxHealth)(void* this, int32_t maxHealth);
    int32_t (*getHealth)(void* this);
    void (*addListener)(void* this, HealthListenerInterface* healthListenerInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealthInterface_staticInit(void);

static inline bool HealthInterface_isAlive(void* this) {
    return ((__typeof__(((HealthInterface*) nullptr)->isAlive)) java_method_of(this, "isAlive"))(this);
}

static inline void HealthInterface_damage(void* this, int32_t ahealth) {
    ((__typeof__(((HealthInterface*) nullptr)->damage)) java_method_of(this, "damage"))(this, ahealth);
}

static inline void HealthInterface_heal(void* this, int32_t ahealth) {
    ((__typeof__(((HealthInterface*) nullptr)->heal)) java_method_of(this, "heal"))(this, ahealth);
}

static inline void HealthInterface_healMax(void* this) {
    ((__typeof__(((HealthInterface*) nullptr)->healMax)) java_method_of(this, "healMax"))(this);
}

static inline int32_t HealthInterface_getMaxHealth(void* this) {
    return ((__typeof__(((HealthInterface*) nullptr)->getMaxHealth)) java_method_of(this, "getMaxHealth"))(this);
}

static inline void HealthInterface_setMaxHealth(void* this, int32_t maxHealth) {
    ((__typeof__(((HealthInterface*) nullptr)->setMaxHealth)) java_method_of(this, "setMaxHealth"))(this, maxHealth);
}

static inline int32_t HealthInterface_getHealth(void* this) {
    return ((__typeof__(((HealthInterface*) nullptr)->getHealth)) java_method_of(this, "getHealth"))(this);
}

static inline void HealthInterface_addListener(void* this, HealthListenerInterface* healthListenerInterface) {
    ((__typeof__(((HealthInterface*) nullptr)->addListener)) java_method_of(this, "addListener"))(this, healthListenerInterface);
}


#endif // ORG_ALLBINARY_GAME_HEALTH_HEALTHINTERFACE_H
