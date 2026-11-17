/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.game.physics.velocity

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"

typedef struct NoDragVelocityBehavior NoDragVelocityBehavior;
struct NoDragVelocityBehavior {
    VelocityBehaviorBase base;
};

NoDragVelocityBehavior* NoDragVelocityBehavior_instance;

NoDragVelocityBehavior* NoDragVelocityBehavior_new(void);

// Static fields with runtime initializers: call this once at startup
void NoDragVelocityBehavior_staticInit(void) {
    NoDragVelocityBehavior_instance = NoDragVelocityBehavior_new();
}

void NoDragVelocityBehavior_init(NoDragVelocityBehavior* this) {
    VelocityBehaviorBase_init(&this->base);
}

NoDragVelocityBehavior* NoDragVelocityBehavior_new(void) {
    NoDragVelocityBehavior* this = calloc(1, sizeof(NoDragVelocityBehavior));
    NoDragVelocityBehavior_init(this);
    return this;
}

