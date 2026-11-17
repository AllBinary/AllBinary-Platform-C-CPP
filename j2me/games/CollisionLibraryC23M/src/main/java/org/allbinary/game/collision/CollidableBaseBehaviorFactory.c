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
// package org.allbinary.game.collision

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactoryInterface.h"

typedef struct CollidableBaseBehaviorFactory CollidableBaseBehaviorFactory;
struct CollidableBaseBehaviorFactory {
    CollidableBaseBehaviorFactoryInterface CollidableBaseBehaviorFactoryInterface_interface;
};


CollidableBaseBehaviorFactory* CollidableBaseBehaviorFactory_new(void);
CollidableBaseBehavior* CollidableBaseBehaviorFactory_createBehavior(CollidableBaseBehaviorFactory* this);

void CollidableBaseBehaviorFactory_init(CollidableBaseBehaviorFactory* this) {
}

CollidableBaseBehaviorFactory* CollidableBaseBehaviorFactory_new(void) {
    CollidableBaseBehaviorFactory* this = calloc(1, sizeof(CollidableBaseBehaviorFactory));
    CollidableBaseBehaviorFactory_init(this);
    return this;
}


CollidableBaseBehavior* CollidableBaseBehaviorFactory_createBehavior(CollidableBaseBehaviorFactory* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

