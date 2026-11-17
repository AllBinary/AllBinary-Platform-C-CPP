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

typedef struct LastKeyAIVisitorFactory LastKeyAIVisitorFactory;
struct LastKeyAIVisitorFactory {
    char unused;
};

static LastKeyAIVisitor* LastKeyAIVisitorFactory_instance;

LastKeyAIVisitorFactory* LastKeyAIVisitorFactory_new(void);
LastKeyAIVisitor* LastKeyAIVisitorFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LastKeyAIVisitorFactory_staticInit(void) {
    LastKeyAIVisitorFactory_instance = LastKeyAIVisitor_new();
}

void LastKeyAIVisitorFactory_init(LastKeyAIVisitorFactory* this) {
}

LastKeyAIVisitorFactory* LastKeyAIVisitorFactory_new(void) {
    LastKeyAIVisitorFactory* this = calloc(1, sizeof(LastKeyAIVisitorFactory));
    LastKeyAIVisitorFactory_init(this);
    return this;
}


LastKeyAIVisitor* LastKeyAIVisitorFactory_getInstance(void) {
        return LastKeyAIVisitorFactory_instance;
}

