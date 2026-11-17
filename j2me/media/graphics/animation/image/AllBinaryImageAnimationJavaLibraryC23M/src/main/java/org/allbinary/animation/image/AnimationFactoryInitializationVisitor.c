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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct AnimationFactoryInitializationVisitor AnimationFactoryInitializationVisitor;
struct AnimationFactoryInitializationVisitor {
    int32_t width;
    int32_t height;
    int32_t dx;
    int32_t dy;
    int32_t originalDx;
    int32_t originalDy;
};


AnimationFactoryInitializationVisitor* AnimationFactoryInitializationVisitor_new(void);
void AnimationFactoryInitializationVisitor_visit(AnimationFactoryInitializationVisitor* this);
const char* AnimationFactoryInitializationVisitor_toString(AnimationFactoryInitializationVisitor* this);

static void AnimationFactoryInitializationVisitor_initFields(AnimationFactoryInitializationVisitor* this) {
    this->width = 0;
    this->height = 0;
    this->dx = 0;
    this->dy = 0;
    this->originalDx = 0;
    this->originalDy = 0;
}

void AnimationFactoryInitializationVisitor_init(AnimationFactoryInitializationVisitor* this) {
    AnimationFactoryInitializationVisitor_initFields(this);
}

AnimationFactoryInitializationVisitor* AnimationFactoryInitializationVisitor_new(void) {
    AnimationFactoryInitializationVisitor* this = calloc(1, sizeof(AnimationFactoryInitializationVisitor));
    AnimationFactoryInitializationVisitor_init(this);
    return this;
}


void AnimationFactoryInitializationVisitor_visit(AnimationFactoryInitializationVisitor* this) {
}


const char* AnimationFactoryInitializationVisitor_toString(AnimationFactoryInitializationVisitor* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        CommonLabels* commonLabels = CommonLabels_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(StringMaker_append(stringBuffer, PositionStrings_getInstance()->DX_LABEL), appendfloat, ((float) this->dx));
        JAVA_CALL(StringMaker_append(stringBuffer, PositionStrings_getInstance()->DY_LABEL), appendfloat, ((float) this->dy));
        StringMaker_append(stringBuffer, commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, this->width);
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, this->height);
        return StringMaker_toString(stringBuffer);
}

