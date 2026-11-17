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
// package org.allbinary.graphics.pipeline

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct RandomRotationFactory RandomRotationFactory;
struct RandomRotationFactory {
    MyRandomFactory* myRandomFactory;
    AngleFactory* angleFactory;
};

static RandomRotationFactory* RandomRotationFactory_instance;

RandomRotationFactory* RandomRotationFactory_new(void);
RandomRotationFactory* RandomRotationFactory_getInstance(void);
BasicArrayList* RandomRotationFactory_getInstanceList(RandomRotationFactory* this, BasicArrayList* vector, int32_t howMuch);
int32_t RandomRotationFactory_getNextRandomAngle(RandomRotationFactory* this, int32_t howMuch);

// Static fields with runtime initializers: call this once at startup
void RandomRotationFactory_staticInit(void) {
    RandomRotationFactory_instance = RandomRotationFactory_new();
}

static void RandomRotationFactory_initFields(RandomRotationFactory* this) {
    this->myRandomFactory = MyRandomFactory_getInstance();
    this->angleFactory = AngleFactory_getInstance();
}

void RandomRotationFactory_init(RandomRotationFactory* this) {
    RandomRotationFactory_initFields(this);
}

RandomRotationFactory* RandomRotationFactory_new(void) {
    RandomRotationFactory* this = calloc(1, sizeof(RandomRotationFactory));
    RandomRotationFactory_init(this);
    return this;
}


RandomRotationFactory* RandomRotationFactory_getInstance(void) {
        return RandomRotationFactory_instance;
}


// throws Exception
BasicArrayList* RandomRotationFactory_getInstanceList(RandomRotationFactory* this, BasicArrayList* vector, int32_t howMuch) {
        BasicGraphicsPipeline* graphicsPipe = BasicGraphicsPipeline_new(vector);
        BasicGraphicsPipeline_createMatrix(graphicsPipe);
        BasicGraphicsPipeline_rotateToAngle(graphicsPipe, AngleFactory_getAt(this->angleFactory, RandomRotationFactory_getNextRandomAngle(this, howMuch)));
        return BasicGraphicsPipeline_getMatrix(graphicsPipe);
}


int32_t RandomRotationFactory_getNextRandomAngle(RandomRotationFactory* this, int32_t howMuch) {
        return MyRandomFactory_getNextInt(this->myRandomFactory, howMuch * 10);
}

