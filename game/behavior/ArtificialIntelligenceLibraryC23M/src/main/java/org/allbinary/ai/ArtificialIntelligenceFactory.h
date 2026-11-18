#ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H
#define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H
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
// package org.allbinary.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ArtificialIntelligenceFactoryInterface ArtificialIntelligenceFactoryInterface;
typedef struct ArtificialIntelligence ArtificialIntelligence;
#include "org/allbinary/ai/ArtificialIntelligenceFactoryInterface.h"

typedef struct ArtificialIntelligenceFactory ArtificialIntelligenceFactory;
struct ArtificialIntelligenceFactory {
    ArtificialIntelligenceFactoryInterface ArtificialIntelligenceFactoryInterface_interface;
};


ArtificialIntelligenceFactory* ArtificialIntelligenceFactory_new(void);
void ArtificialIntelligenceFactory_init(ArtificialIntelligenceFactory* this);

ArtificialIntelligence* ArtificialIntelligenceFactory_getInstance(ArtificialIntelligenceFactory* this, void* anyType);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ArtificialIntelligenceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ArtificialIntelligenceFactory_register(void);


#endif // ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H
