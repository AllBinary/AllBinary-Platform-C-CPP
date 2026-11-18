#ifndef ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMTRANSLATION_H
#define ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMTRANSLATION_H
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
typedef struct BasicGraphicsPipeline BasicGraphicsPipeline;
typedef struct MyRandomFactory MyRandomFactory;
typedef struct BasicArrayList BasicArrayList;

typedef struct RandomTranslation RandomTranslation;
struct RandomTranslation {
    char unused;
};


RandomTranslation* RandomTranslation_new(void);
void RandomTranslation_init(RandomTranslation* this);

BasicArrayList* RandomTranslation_getInstance(BasicArrayList* vector, int32_t howMuch);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RandomTranslation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RandomTranslation_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMTRANSLATION_H
