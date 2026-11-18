#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HUDRESOURCES_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HUDRESOURCES_H
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
// package org.allbinary.game.ag.layer.hud.basic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HudResources HudResources;
struct HudResources {
    const char* RESOURCE_LIFE;
    const char* RESOURCE_HEALTH;
};


HudResources* HudResources_new(void);

HudResources* HudResources_getInstance(void);

void HudResources_init(HudResources* this);
#define HudResources_new0 HudResources_new
#define HudResources_init0 HudResources_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HudResources_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HudResources_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HUDRESOURCES_H
