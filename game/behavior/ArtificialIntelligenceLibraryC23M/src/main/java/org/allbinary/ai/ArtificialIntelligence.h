#ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_H
#define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_H
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
// package org.allbinary.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ArtificialIntelligenceInterface ArtificialIntelligenceInterface;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"

typedef struct ArtificialIntelligence ArtificialIntelligence;
struct ArtificialIntelligence {
    ArtificialIntelligenceInterface ArtificialIntelligenceInterface_interface;
};

static constexpr int32_t ArtificialIntelligence_AI_ID = 2;

ArtificialIntelligence* ArtificialIntelligence_new(void);

ArtificialIntelligence* ArtificialIntelligence_getInstance(void);

void ArtificialIntelligence_init(ArtificialIntelligence* this);

void ArtificialIntelligence_processAI(ArtificialIntelligence* this, AllBinaryLayerManager* layerManager);

int32_t ArtificialIntelligence_getId(ArtificialIntelligence* this);
#define ArtificialIntelligence_new0 ArtificialIntelligence_new
#define ArtificialIntelligence_init0 ArtificialIntelligence_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ArtificialIntelligence_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ArtificialIntelligence_register(void);


#endif // ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_H
