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
// package org.allbinary.game.layer.unit

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameInputProcessor.h"

typedef struct UnitGameInputProcessor UnitGameInputProcessor;
struct UnitGameInputProcessor {
    GameInputProcessor base;
    UnitLayer* unitLayer;
};


UnitGameInputProcessor* UnitGameInputProcessor_new(UnitLayer* unitLayer);

void UnitGameInputProcessor_init(UnitGameInputProcessor* this, UnitLayer* unitLayer);

static void UnitGameInputProcessor_initFields(UnitGameInputProcessor* this) {
    
}


void UnitGameInputProcessor_init(UnitGameInputProcessor* this, UnitLayer* unitLayer) {
    GameInputProcessor_init(&this->base);
    UnitGameInputProcessor_initFields(this);
        this->unitLayer = unitLayer;
}

UnitGameInputProcessor* UnitGameInputProcessor_new(UnitLayer* unitLayer) {
    UnitGameInputProcessor* this = calloc(1, sizeof(UnitGameInputProcessor));
    UnitGameInputProcessor_init(this, unitLayer);
    return this;
}

