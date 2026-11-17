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
// package org.allbinary.game.collision

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CollisionType CollisionType;
struct CollisionType {
    const char* name;
};


CollisionType* CollisionType_new(const char* name);

void CollisionType_init(CollisionType* this, const char* name);
const char* CollisionType_toString(CollisionType* this);

static void CollisionType_initFields(CollisionType* this) {
    
}


void CollisionType_init(CollisionType* this, const char* name) {
    CollisionType_initFields(this);
        this->name = name;
}

CollisionType* CollisionType_new(const char* name) {
    CollisionType* this = calloc(1, sizeof(CollisionType));
    CollisionType_init(this, name);
    return this;
}


const char* CollisionType_toString(CollisionType* this) {
        return this->name;
}

