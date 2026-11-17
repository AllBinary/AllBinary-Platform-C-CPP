/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct SteeringVisitor SteeringVisitor;
struct SteeringVisitor {
    Visitor base;
    BasicArrayList* list;
};


SteeringVisitor* SteeringVisitor_new(void);
BasicArrayList* SteeringVisitor_getList(SteeringVisitor* this);

static void SteeringVisitor_initFields(SteeringVisitor* this) {
    this->list = BasicArrayListD_new();
}

void SteeringVisitor_init(SteeringVisitor* this) {
    Visitor_init(&this->base);
    SteeringVisitor_initFields(this);
}

SteeringVisitor* SteeringVisitor_new(void) {
    SteeringVisitor* this = calloc(1, sizeof(SteeringVisitor));
    SteeringVisitor_init(this);
    return this;
}


BasicArrayList* SteeringVisitor_getList(SteeringVisitor* this) {
        return this->list;
}

