#ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_H
#define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_H
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
typedef struct BasicGameResources BasicGameResources;
typedef struct NullUtil NullUtil;
#include "org/allbinary/game/layer/resources/BasicGameResources.h"

typedef struct MineWeaponResources MineWeaponResources;
struct MineWeaponResources {
    BasicGameResources base;
    const char* DROP_TEXT_RESOURCE;
    const char* DROP_RESOURCE;
    const char* DROP_ICON_RESOURCE;
};


MineWeaponResources* MineWeaponResources_new(void);

MineWeaponResources* MineWeaponResources_getInstance(void);

void MineWeaponResources_init(MineWeaponResources* this);
#define MineWeaponResources_new0 MineWeaponResources_new
#define MineWeaponResources_init0 MineWeaponResources_init
#ifndef MineWeaponResources_append
#define MineWeaponResources_append BasicGameResources_append
#endif
#ifndef MineWeaponResources_getString
#define MineWeaponResources_getString BasicGameResources_getString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MineWeaponResources_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MineWeaponResources_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_H
