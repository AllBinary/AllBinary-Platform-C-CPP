#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTFACTORY_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTFACTORY_H
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
// package org.allbinary.game.layer.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct SpecialGameInput SpecialGameInput;
#if __has_include("org/allbinary/game/layer/special/SpecialGameInput.h")
#include "org/allbinary/game/layer/special/SpecialGameInput.h"
#endif

typedef struct SpecialGameInputFactory SpecialGameInputFactory;
struct SpecialGameInputFactory {
    char unused;
};

extern SpecialGameInput* SpecialGameInputFactory_NO_SPECIAL_GAME_INPUT;

SpecialGameInputFactory* SpecialGameInputFactory_new(void);
void SpecialGameInputFactory_init(SpecialGameInputFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialGameInputFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialGameInputFactory_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTFACTORY_H
