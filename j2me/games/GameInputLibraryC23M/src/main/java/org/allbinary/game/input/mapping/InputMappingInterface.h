#ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPINGINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPINGINTERFACE_H
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
// package org.allbinary.game.input.mapping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameKey GameKey;
typedef struct Input Input;

typedef struct InputMappingInterface InputMappingInterface;
struct InputMappingInterface {
    void (*processInputMapping)(void* this, GameKey* gameKey, Input* input);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputMappingInterface_staticInit(void);

static inline void InputMappingInterface_processInputMapping(void* this, GameKey* gameKey, Input* input) {
    ((__typeof__(((InputMappingInterface*) nullptr)->processInputMapping)) java_method_of(this, "processInputMapping"))(this, gameKey, input);
}


#endif // ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPINGINTERFACE_H
