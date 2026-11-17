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
#include "org/allbinary/util/BasicArrayList.h"

typedef struct RandomTranslation RandomTranslation;
struct RandomTranslation {
    char unused;
};


RandomTranslation* RandomTranslation_new(void);
BasicArrayList* RandomTranslation_getInstance(BasicArrayList* vector, int32_t howMuch);

void RandomTranslation_init(RandomTranslation* this) {
}

RandomTranslation* RandomTranslation_new(void) {
    RandomTranslation* this = calloc(1, sizeof(RandomTranslation));
    RandomTranslation_init(this);
    return this;
}


// throws Exception
BasicArrayList* RandomTranslation_getInstance(BasicArrayList* vector, int32_t howMuch) {
        MyRandomFactory* myRandomFactory = MyRandomFactory_getInstance();
        int32_t x = -MyRandomFactory_getNextInt(myRandomFactory, howMuch);
        int32_t y = MyRandomFactory_getNextInt(myRandomFactory, howMuch);
        BasicGraphicsPipeline* graphicsPipe = BasicGraphicsPipeline_new(vector);
        BasicGraphicsPipeline_createMatrix(graphicsPipe);
        BasicGraphicsPipeline_translate(graphicsPipe, x, y);
        return BasicGraphicsPipeline_getMatrix(graphicsPipe);
}

