#ifndef ORG_ALLBINARY_GAME_AG_AI_NULLAI_H
#define ORG_ALLBINARY_GAME_AG_AI_NULLAI_H
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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ArtificialIntelligence ArtificialIntelligence;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/ai/ArtificialIntelligence.h"

typedef struct NullAI NullAI;
struct NullAI {
    ArtificialIntelligence base;
};


NullAI* NullAI_new(void);

void NullAI_init(NullAI* this);

void NullAI_processAI(NullAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define NullAI_new0 NullAI_new
#define NullAI_init0 NullAI_init
#ifndef NullAI_getInstance
#define NullAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef NullAI_getId
#define NullAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_NULLAI_H
