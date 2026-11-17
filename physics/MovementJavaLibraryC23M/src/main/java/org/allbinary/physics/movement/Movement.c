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
// package org.allbinary.physics.movement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/physics/movement/MovementInterface.h"

typedef struct Movement Movement;
struct Movement {
    MovementInterface MovementInterface_interface;
};


Movement* Movement_new(void);

void Movement_init(Movement* this);
void Movement_init(Movement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);
void Movement_process(Movement* this, AllBinaryGameLayer* layer);
void Movement_stop(Movement* this);


void Movement_init(Movement* this) {
}

Movement* Movement_new(void) {
    Movement* this = calloc(1, sizeof(Movement));
    Movement_init(this);
    return this;
}


void Movement_init(Movement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
}


// throws Exception
void Movement_process(Movement* this, AllBinaryGameLayer* layer) {
}


void Movement_stop(Movement* this) {
}

