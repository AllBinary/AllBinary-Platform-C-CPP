/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.behavior.topview

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/physics/FrictionProperties.h"
#include "org/allbinary/game/physics/friction/FrictionData.h"

typedef struct CharacterFrictionProperties CharacterFrictionProperties;
struct CharacterFrictionProperties {
    FrictionProperties base;
    int32_t WATER_FRICTION_NOMINATOR;
    int32_t AIR_FRICTION_NOMINATOR;
    int32_t COLLISION_FRICTION_NOMINATOR;
};


CharacterFrictionProperties* CharacterFrictionProperties_new(int32_t airFriction, int32_t waterFriction, int32_t collisionFriction);

void CharacterFrictionProperties_init(CharacterFrictionProperties* this, int32_t airFriction, int32_t waterFriction, int32_t collisionFriction);
int32_t CharacterFrictionProperties_getWATER_FRICTION_NOMINATOR(CharacterFrictionProperties* this);
int32_t CharacterFrictionProperties_getAIR_FRICTION_NOMINATOR(CharacterFrictionProperties* this);
int32_t CharacterFrictionProperties_getCOLLISION_FRICTION_NOMINATOR(CharacterFrictionProperties* this);

static void CharacterFrictionProperties_initFields(CharacterFrictionProperties* this) {
    
    
    
}


void CharacterFrictionProperties_init(CharacterFrictionProperties* this, int32_t airFriction, int32_t waterFriction, int32_t collisionFriction) {
    FrictionProperties_init(&this->base);
    CharacterFrictionProperties_initFields(this);
        this->AIR_FRICTION_NOMINATOR = FrictionData_getFrictionDenominator() - airFriction;
        this->COLLISION_FRICTION_NOMINATOR = FrictionData_getFrictionDenominator() - collisionFriction;
        this->WATER_FRICTION_NOMINATOR = FrictionData_getFrictionDenominator() - waterFriction;
}

CharacterFrictionProperties* CharacterFrictionProperties_new(int32_t airFriction, int32_t waterFriction, int32_t collisionFriction) {
    CharacterFrictionProperties* this = calloc(1, sizeof(CharacterFrictionProperties));
    CharacterFrictionProperties_init(this, airFriction, waterFriction, collisionFriction);
    return this;
}


int32_t CharacterFrictionProperties_getWATER_FRICTION_NOMINATOR(CharacterFrictionProperties* this) {
        return this->WATER_FRICTION_NOMINATOR;
}


int32_t CharacterFrictionProperties_getAIR_FRICTION_NOMINATOR(CharacterFrictionProperties* this) {
        return this->AIR_FRICTION_NOMINATOR;
}


int32_t CharacterFrictionProperties_getCOLLISION_FRICTION_NOMINATOR(CharacterFrictionProperties* this) {
        return this->COLLISION_FRICTION_NOMINATOR;
}

