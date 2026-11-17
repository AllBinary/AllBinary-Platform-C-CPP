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

typedef struct SpecialGameInputFactory SpecialGameInputFactory;
struct SpecialGameInputFactory {
    char unused;
};

SpecialGameInput* SpecialGameInputFactory_NO_SPECIAL_GAME_INPUT;

SpecialGameInputFactory* SpecialGameInputFactory_new(void);

// Static fields with runtime initializers: call this once at startup
void SpecialGameInputFactory_staticInit(void) {
    SpecialGameInputFactory_NO_SPECIAL_GAME_INPUT = SpecialGameInput_new();
}

void SpecialGameInputFactory_init(SpecialGameInputFactory* this) {
}

SpecialGameInputFactory* SpecialGameInputFactory_new(void) {
    SpecialGameInputFactory* this = calloc(1, sizeof(SpecialGameInputFactory));
    SpecialGameInputFactory_init(this);
    return this;
}

