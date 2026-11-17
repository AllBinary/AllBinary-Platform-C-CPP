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
#include "org/allbinary/game/ag/life/LifeInterface.h"

typedef struct Life Life;
struct Life {
    LifeInterface LifeInterface_interface;
    int16_t lives;
    int16_t startLives;
    int16_t maxlives;
};

Life* Life_NO_LIFE;

Life* Life_new(int16_t lives, int16_t maxlives);
Life* Life_createLife(void);

void Life_init(Life* this, int16_t lives, int16_t maxlives);
int16_t Life_get(Life* this);
void Life_set(Life* this, int16_t lives);
void Life_reset(Life* this);
void Life_add(Life* this, int16_t lives);
bool Life_isAlive(Life* this);
int16_t Life_getMaxlives(Life* this);
static bool Life_reachedLimit(Life* this);
void Life_deaths(Life* this, int16_t lives);
int16_t Life_getStartLives(Life* this);
void Life_setStartLives(Life* this, int16_t startLives);

// Static fields with runtime initializers: call this once at startup
void Life_staticInit(void) {
    Life_NO_LIFE = Life_createLife();
}

static void Life_initFields(Life* this) {
    
    
    
}


Life* Life_createLife(void) {
        JAVA_TRY {
            return Life_new(((int16_t) 0), ((int16_t) 0));
        } JAVA_CATCH(Exception, e) {
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}


void Life_init(Life* this, int16_t lives, int16_t maxlives) {
    Life_initFields(this);
        this->maxlives = maxlives;
        if (lives > this->maxlives) {
            java_throw(java_exception_new("Exception", "To Many Lives"));
        }
        this->lives = lives;
        this->startLives = lives;
}

Life* Life_new(int16_t lives, int16_t maxlives) {
    Life* this = calloc(1, sizeof(Life));
    Life_init(this, lives, maxlives);
    return this;
}


int16_t Life_get(Life* this) {
        return this->lives;
}


void Life_set(Life* this, int16_t lives) {
        this->lives = lives;
}


void Life_reset(Life* this) {
        this->lives = this->startLives;
}


void Life_add(Life* this, int16_t lives) {
        if (!Life_reachedLimit(this)) {
            if (this->lives + lives <= ((int32_t) Life_getMaxlives(this))) {
                this->lives = ((int16_t) (this->lives + lives));
            } else {
                this->lives = Life_getMaxlives(this);
            }
        }
}


bool Life_isAlive(Life* this) {
        if (((int32_t) this->lives) <= 0) {
            return false;
        } else {
            return true;
        }
}


int16_t Life_getMaxlives(Life* this) {
        return this->maxlives;
}


static bool Life_reachedLimit(Life* this) {
        if (this->lives > this->maxlives || ((int32_t) this->lives) < 0) {
            return true;
        } else {
            return false;
        }
}


void Life_deaths(Life* this, int16_t lives) {
        if (!Life_reachedLimit(this)) {
            if (this->lives - lives >= 0) {
                this->lives = ((int16_t) (this->lives - lives));
            } else {
                this->lives = 0;
            }
        }
}


int16_t Life_getStartLives(Life* this) {
        return this->startLives;
}


void Life_setStartLives(Life* this, int16_t startLives) {
        this->startLives = startLives;
}

