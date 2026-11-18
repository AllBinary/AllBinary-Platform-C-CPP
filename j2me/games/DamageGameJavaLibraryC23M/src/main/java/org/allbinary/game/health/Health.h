#ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTH_H
#define ORG_ALLBINARY_GAME_HEALTH_HEALTH_H
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
typedef struct HealthInterface HealthInterface;
typedef struct NullHealthListener NullHealthListener;
typedef struct HealthListenerInterface HealthListenerInterface;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
#include "org/allbinary/game/health/HealthInterface.h"
#if __has_include("org/allbinary/game/health/HealthListenerInterface.h")
#include "org/allbinary/game/health/HealthListenerInterface.h"
#endif

typedef struct Health Health;
struct Health {
    HealthInterface HealthInterface_interface;
    int32_t health;
    int32_t maxHealth;
    HealthListenerInterface* healthListenerInterface;
};

extern Health* Health_NULL_HEALTH;
extern const char* Health_NAME;

Health* Health_new(int32_t maxHealth);

void Health_init(Health* this, int32_t maxHealth);

void Health_heal(Health* this, int32_t ahealth);

void Health_healMax(Health* this);

bool Health_isDamaged(Health* this);

void Health_damage(Health* this, int32_t ahealth);

bool Health_isAlive(Health* this);

int32_t Health_getMaxHealth(Health* this);

void Health_setMaxHealth(Health* this, int32_t maxHealth);

void Health_setHealth(Health* this, int32_t health);

int32_t Health_getHealth(Health* this);

void Health_addListener(Health* this, HealthListenerInterface* healthGraphic);

const char* Health_toString(Health* this);
#define Health_new1 Health_new
#define Health_init1 Health_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Health_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Health_register(void);


#endif // ORG_ALLBINARY_GAME_HEALTH_HEALTH_H
