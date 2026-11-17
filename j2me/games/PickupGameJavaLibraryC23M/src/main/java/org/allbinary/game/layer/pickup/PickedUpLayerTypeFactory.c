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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct PickedUpLayerTypeFactory PickedUpLayerTypeFactory;
struct PickedUpLayerTypeFactory {
    PickedUpLayerType* NONE;
    PickedUpLayerType* BEAM;
    PickedUpLayerType* MINE;
    PickedUpLayerType* PROJECTILE;
    PickedUpLayerType* ENHANCEMENT;
    PickedUpLayerType* MORPH;
    PickedUpLayerType* PART;
    PickedUpLayerType* HEAL;
    PickedUpLayerType* LIFE;
    PickedUpLayerType* POINTS;
};

static PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_instance;

PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_new(void);
PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PickedUpLayerTypeFactory_staticInit(void) {
    PickedUpLayerTypeFactory_instance = PickedUpLayerTypeFactory_new();
}

static void PickedUpLayerTypeFactory_initFields(PickedUpLayerTypeFactory* this) {
    this->NONE = PickedUpLayerType_new(StringUtil_getInstance()->NULL_STRING);
    this->BEAM = PickedUpLayerType_new("BEAM");
    this->MINE = PickedUpLayerType_new("MINE");
    this->PROJECTILE = PickedUpLayerType_new("PROJECTILE");
    this->ENHANCEMENT = PickedUpLayerType_new("Enhancement");
    this->MORPH = PickedUpLayerType_new("Morph");
    this->PART = PickedUpLayerType_new("Part");
    this->HEAL = PickedUpLayerType_new("Heal");
    this->LIFE = PickedUpLayerType_new("Life");
    this->POINTS = PickedUpLayerType_new("Points");
}

void PickedUpLayerTypeFactory_init(PickedUpLayerTypeFactory* this) {
    PickedUpLayerTypeFactory_initFields(this);
}

PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_new(void) {
    PickedUpLayerTypeFactory* this = calloc(1, sizeof(PickedUpLayerTypeFactory));
    PickedUpLayerTypeFactory_init(this);
    return this;
}


PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_getInstance(void) {
        return PickedUpLayerTypeFactory_instance;
}

