#ifndef ORG_ALLBINARY_GAME_AG_LIFE_LIFE_H
#define ORG_ALLBINARY_GAME_AG_LIFE_LIFE_H
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
#include "org/allbinary/game/ag/life/LifeInterface.h"

typedef struct Life Life;
struct Life {
    LifeInterface LifeInterface_interface;
    int16_t lives;
    int16_t startLives;
    int16_t maxlives;
};

extern Life* Life_NO_LIFE;

Life* Life_new(int16_t lives, int16_t maxlives);

Life* Life_createLife(void);

void Life_init(Life* this, int16_t lives, int16_t maxlives);

int16_t Life_get(Life* this);

void Life_set(Life* this, int16_t lives);

void Life_reset(Life* this);

void Life_add(Life* this, int16_t lives);

bool Life_isAlive(Life* this);

int16_t Life_getMaxlives(Life* this);


void Life_deaths(Life* this, int16_t lives);

int16_t Life_getStartLives(Life* this);

void Life_setStartLives(Life* this, int16_t startLives);
#define Life_new2 Life_new
#define Life_init2 Life_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Life_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Life_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LIFE_LIFE_H
