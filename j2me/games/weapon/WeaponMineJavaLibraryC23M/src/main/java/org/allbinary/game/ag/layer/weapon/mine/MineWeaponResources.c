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
// package org.allbinary.game.ag.layer.weapon.mine

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/resources/BasicGameResources.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct MineWeaponResources MineWeaponResources;
struct MineWeaponResources {
    BasicGameResources base;
    const char* DROP_TEXT_RESOURCE;
    const char* DROP_RESOURCE;
    const char* DROP_ICON_RESOURCE;
};

static Any* MineWeaponResources_instance;

MineWeaponResources* MineWeaponResources_new(void);
MineWeaponResources* MineWeaponResources_getInstance(void);

void MineWeaponResources_init(MineWeaponResources* this);

// Static fields with runtime initializers: call this once at startup
void MineWeaponResources_staticInit(void) {
    MineWeaponResources_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void MineWeaponResources_initFields(MineWeaponResources* this) {
    this->DROP_TEXT_RESOURCE = "/mine_drop_text_20_by_20.png";
    this->DROP_RESOURCE = "/mine_drop_20_by_20.png";
    this->DROP_ICON_RESOURCE = "/mine_drop_icon_20_by_20.png";
}


MineWeaponResources* MineWeaponResources_getInstance(void) {
        if (MineWeaponResources_instance == NullUtil_getInstance()->NULL_OBJECT) {
            MineWeaponResources_instance = MineWeaponResources_new();
        }
        return ((MineWeaponResources*) MineWeaponResources_instance);
}


void MineWeaponResources_init(MineWeaponResources* this) {
    BasicGameResources_init(&this->base);
    MineWeaponResources_initFields(this);
        const char* ROOT = "/mine";
        const char* SMALL = "_20_by_20.png";
        const char* MEDIUM = SMALL;
        const char* SIZE_FOUR = SMALL;
        const char* SIZE_FIVE = SMALL;
        const char* SIZE_SIX = SMALL;
        const char** SIZE = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }) / sizeof(const char*), (const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }));
        BasicGameResources_init((&this->base), ROOT, SIZE);
}

MineWeaponResources* MineWeaponResources_new(void) {
    MineWeaponResources* this = calloc(1, sizeof(MineWeaponResources));
    MineWeaponResources_init(this);
    return this;
}

