#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUDFACTORY_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUDFACTORY_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct NumberStringHud NumberStringHud;
typedef struct BasicHudFactory BasicHudFactory;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h")
#include "org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h"
#endif

typedef struct NumberStringHudFactory NumberStringHudFactory;
struct NumberStringHudFactory {
    NumberStringHud* NULL_NUMBER_STRING_HUD;
};


NumberStringHudFactory* NumberStringHudFactory_new(void);
void NumberStringHudFactory_init(NumberStringHudFactory* this);

NumberStringHudFactory* NumberStringHudFactory_getInstance(void);

NumberStringHud* NumberStringHudFactory_createHud(NumberStringHudFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NumberStringHudFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NumberStringHudFactory_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUDFACTORY_H
