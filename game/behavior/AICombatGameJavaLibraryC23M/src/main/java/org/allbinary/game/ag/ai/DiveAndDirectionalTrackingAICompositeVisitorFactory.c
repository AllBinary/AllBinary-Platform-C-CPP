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
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct DiveAndDirectionalTrackingAICompositeVisitorFactory DiveAndDirectionalTrackingAICompositeVisitorFactory;
struct DiveAndDirectionalTrackingAICompositeVisitorFactory {
    char unused;
};


DiveAndDirectionalTrackingAICompositeVisitorFactory* DiveAndDirectionalTrackingAICompositeVisitorFactory_new(void);
Visitor* DiveAndDirectionalTrackingAICompositeVisitorFactory_getInstance(DiveAndDirectionalTrackingAICompositeVisitorFactory* this, DiveAndDirectionalTrackingAI* diveBombAI);

void DiveAndDirectionalTrackingAICompositeVisitorFactory_init(DiveAndDirectionalTrackingAICompositeVisitorFactory* this) {
}

DiveAndDirectionalTrackingAICompositeVisitorFactory* DiveAndDirectionalTrackingAICompositeVisitorFactory_new(void) {
    DiveAndDirectionalTrackingAICompositeVisitorFactory* this = calloc(1, sizeof(DiveAndDirectionalTrackingAICompositeVisitorFactory));
    DiveAndDirectionalTrackingAICompositeVisitorFactory_init(this);
    return this;
}


Visitor* DiveAndDirectionalTrackingAICompositeVisitorFactory_getInstance(DiveAndDirectionalTrackingAICompositeVisitorFactory* this, DiveAndDirectionalTrackingAI* diveBombAI) {
        return Visitor_getInstance();
}

