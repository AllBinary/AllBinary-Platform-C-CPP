#ifndef ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H
#define ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PlayerGameInputCompositeInterface PlayerGameInputCompositeInterface;
typedef struct NoPlayerGameInput NoPlayerGameInput;
typedef struct PlayerGameInput PlayerGameInput;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct StringUtil StringUtil;
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"

typedef struct NullPlayerGameInputComposite NullPlayerGameInputComposite;
struct NullPlayerGameInputComposite {
    PlayerGameInputCompositeInterface PlayerGameInputCompositeInterface_interface;
};

extern NullPlayerGameInputComposite* NullPlayerGameInputComposite_NULL_PLAYER_GAME_INPUT_COMPOSITE;

NullPlayerGameInputComposite* NullPlayerGameInputComposite_new(void);
void NullPlayerGameInputComposite_init(NullPlayerGameInputComposite* this);

const char* NullPlayerGameInputComposite_getName(NullPlayerGameInputComposite* this);

void NullPlayerGameInputComposite_processInput(NullPlayerGameInputComposite* this, AllBinaryLayerManager* layerManager);

void NullPlayerGameInputComposite_initInputProcessors(NullPlayerGameInputComposite* this);

PlayerGameInput* NullPlayerGameInputComposite_getPlayerGameInput(NullPlayerGameInputComposite* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullPlayerGameInputComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullPlayerGameInputComposite_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H
