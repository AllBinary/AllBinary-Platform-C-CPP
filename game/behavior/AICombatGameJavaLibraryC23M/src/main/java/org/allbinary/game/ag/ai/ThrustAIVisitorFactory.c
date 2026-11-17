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

typedef struct ThrustAIVisitorFactory ThrustAIVisitorFactory;
struct ThrustAIVisitorFactory {
    char unused;
};

static ThrustAIVisitor* ThrustAIVisitorFactory_instance;

ThrustAIVisitorFactory* ThrustAIVisitorFactory_new(void);
ThrustAIVisitor* ThrustAIVisitorFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ThrustAIVisitorFactory_staticInit(void) {
    ThrustAIVisitorFactory_instance = ThrustAIVisitor_new();
}

void ThrustAIVisitorFactory_init(ThrustAIVisitorFactory* this) {
}

ThrustAIVisitorFactory* ThrustAIVisitorFactory_new(void) {
    ThrustAIVisitorFactory* this = calloc(1, sizeof(ThrustAIVisitorFactory));
    ThrustAIVisitorFactory_init(this);
    return this;
}


ThrustAIVisitor* ThrustAIVisitorFactory_getInstance(void) {
        return ThrustAIVisitorFactory_instance;
}

