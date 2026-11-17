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
// package org.allbinary.logic.util.queue

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

typedef struct BasicQueue BasicQueue;
struct BasicQueue {
    BasicArrayList* queueVector;
};


BasicQueue* BasicQueue_new(void);

void BasicQueue_init(BasicQueue* this);
bool BasicQueue_offer(BasicQueue* this, Any* anyType);
void BasicQueue_remove(BasicQueue* this, Any* anyType);
Any* BasicQueue_removeLast(BasicQueue* this);

static void BasicQueue_initFields(BasicQueue* this) {
    this->queueVector = BasicArrayListD_new();
}


void BasicQueue_init(BasicQueue* this) {
    BasicQueue_initFields(this);
}

BasicQueue* BasicQueue_new(void) {
    BasicQueue* this = calloc(1, sizeof(BasicQueue));
    BasicQueue_init(this);
    return this;
}


// throws Exception
// synchronized
bool BasicQueue_offer(BasicQueue* this, Any* anyType) {
        BasicArrayList_add(this->queueVector, anyType);
        return true;
}


// synchronized
void BasicQueue_remove(BasicQueue* this, Any* anyType) {
        BasicArrayList_remove(this->queueVector, anyType);
}


// synchronized
Any* BasicQueue_removeLast(BasicQueue* this) {
        Any* anyType = BasicArrayList_get(this->queueVector, BasicArrayList_size(this->queueVector) - 1);
        BasicArrayList_remove(this->queueVector, anyType);
        return anyType;
}

