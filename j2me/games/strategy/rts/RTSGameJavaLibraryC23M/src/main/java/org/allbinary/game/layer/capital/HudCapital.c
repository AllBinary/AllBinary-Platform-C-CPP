/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.game.layer.capital

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h"
#include "org/allbinary/game/layer/capital/Capital.h"

typedef struct HudCapital HudCapital;
struct HudCapital {
    Capital base;
    NumberStringHud* capitalGraphic;
};


HudCapital* HudCapital_new(NumberStringHud* moneyGraphic);

void HudCapital_init(HudCapital* this, NumberStringHud* moneyGraphic);
void HudCapital_removeMoney(HudCapital* this, int32_t points);
int32_t HudCapital_getTotalMoney(HudCapital* this);
void HudCapital_addMoney(HudCapital* this, int32_t points);

static void HudCapital_initFields(HudCapital* this) {
    
}


void HudCapital_init(HudCapital* this, NumberStringHud* moneyGraphic) {
    Capital_init(&this->base);
    HudCapital_initFields(this);
        this->capitalGraphic = moneyGraphic;
}

HudCapital* HudCapital_new(NumberStringHud* moneyGraphic) {
    HudCapital* this = calloc(1, sizeof(HudCapital));
    HudCapital_init(this, moneyGraphic);
    return this;
}


void HudCapital_removeMoney(HudCapital* this, int32_t points) {
        Capital_removeMoney((&this->base), points);
        NumberStringHud_reduce(this->capitalGraphic, points);
}


int32_t HudCapital_getTotalMoney(HudCapital* this) {
        return NumberStringHud_get(this->capitalGraphic);
}


void HudCapital_addMoney(HudCapital* this, int32_t points) {
        Capital_addMoney((&this->base), points);
        NumberStringHud_add(this->capitalGraphic, points);
}

