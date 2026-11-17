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
// package org.allbinary.media.image.comparison.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"

typedef struct MotionRectanglesResultsFrameCacheable MotionRectanglesResultsFrameCacheable;
struct MotionRectanglesResultsFrameCacheable {
    CacheableInterface CacheableInterface_interface;
    MotionRectangles* motionRectangles;
    int64_t frame;
};


MotionRectanglesResultsFrameCacheable* MotionRectanglesResultsFrameCacheable_new(MotionRectangles* motionRectangles, int64_t frame);

void MotionRectanglesResultsFrameCacheable_init(MotionRectanglesResultsFrameCacheable* this, MotionRectangles* motionRectangles, int64_t frame);
Any* MotionRectanglesResultsFrameCacheable_getKey(MotionRectanglesResultsFrameCacheable* this);
MotionRectangles* MotionRectanglesResultsFrameCacheable_getMotionRectangles(MotionRectanglesResultsFrameCacheable* this);
void MotionRectanglesResultsFrameCacheable_setMotionRectangles(MotionRectanglesResultsFrameCacheable* this, MotionRectangles* motionRectangles);
const char* MotionRectanglesResultsFrameCacheable_toString(MotionRectanglesResultsFrameCacheable* this);

static void MotionRectanglesResultsFrameCacheable_initFields(MotionRectanglesResultsFrameCacheable* this) {
    this->motionRectangles = nullptr;
    
}


void MotionRectanglesResultsFrameCacheable_init(MotionRectanglesResultsFrameCacheable* this, MotionRectangles* motionRectangles, int64_t frame) {
    MotionRectanglesResultsFrameCacheable_initFields(this);
        this->frame = frame;
        MotionRectanglesResultsFrameCacheable_setMotionRectangles(this, motionRectangles);
}

MotionRectanglesResultsFrameCacheable* MotionRectanglesResultsFrameCacheable_new(MotionRectangles* motionRectangles, int64_t frame) {
    MotionRectanglesResultsFrameCacheable* this = calloc(1, sizeof(MotionRectanglesResultsFrameCacheable));
    MotionRectanglesResultsFrameCacheable_init(this, motionRectangles, frame);
    return this;
}


Any* MotionRectanglesResultsFrameCacheable_getKey(MotionRectanglesResultsFrameCacheable* this) {
        return this->frame;
}


MotionRectangles* MotionRectanglesResultsFrameCacheable_getMotionRectangles(MotionRectanglesResultsFrameCacheable* this) {
        return this->motionRectangles;
}


void MotionRectanglesResultsFrameCacheable_setMotionRectangles(MotionRectanglesResultsFrameCacheable* this, MotionRectangles* motionRectangles) {
        this->motionRectangles = motionRectangles;
}


const char* MotionRectanglesResultsFrameCacheable_toString(MotionRectanglesResultsFrameCacheable* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_class_of(this));
        StringMaker_append(stringBuffer, " Frame: ");
        StringMaker_append(stringBuffer, JAVA_CALL(MotionRectanglesResultsFrameCacheable_getKey(this), toString));
        return StringMaker_toString(stringBuffer);
}

