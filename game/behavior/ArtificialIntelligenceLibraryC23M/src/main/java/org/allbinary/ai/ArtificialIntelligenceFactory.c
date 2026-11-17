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
#include "org/allbinary/ai/ArtificialIntelligenceFactoryInterface.h"

typedef struct ArtificialIntelligenceFactory ArtificialIntelligenceFactory;
struct ArtificialIntelligenceFactory {
    ArtificialIntelligenceFactoryInterface ArtificialIntelligenceFactoryInterface_interface;
};


ArtificialIntelligenceFactory* ArtificialIntelligenceFactory_new(void);
ArtificialIntelligence* ArtificialIntelligenceFactory_getInstance(ArtificialIntelligenceFactory* this, Any* anyType);

void ArtificialIntelligenceFactory_init(ArtificialIntelligenceFactory* this) {
}

ArtificialIntelligenceFactory* ArtificialIntelligenceFactory_new(void) {
    ArtificialIntelligenceFactory* this = calloc(1, sizeof(ArtificialIntelligenceFactory));
    ArtificialIntelligenceFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligence* ArtificialIntelligenceFactory_getInstance(ArtificialIntelligenceFactory* this, Any* anyType) {
        java_throw(java_exception_new("RuntimeException", ""));
}

