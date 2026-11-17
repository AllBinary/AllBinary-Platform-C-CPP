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
// package org.allbinary.media.image.comparison.pixel

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#include "org/allbinary/media/image/comparison/color/ColorDelta.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct PixelDelta PixelDelta;
struct PixelDelta {
    CacheableInterface CacheableInterface_interface;
    GPoint* point;
    ColorDelta* colorDelta;
    Any* key;
};


PixelDelta* PixelDelta_new(GPoint* point, ColorDelta* colorDelta);

void PixelDelta_init(PixelDelta* this, GPoint* point, ColorDelta* colorDelta);
Any* PixelDelta_getKey(PixelDelta* this);
Any* PixelDelta_getKey(GPoint* point, ColorDelta* colorDelta);
GPoint* PixelDelta_getPoint(PixelDelta* this);
void PixelDelta_setPoint(PixelDelta* this, GPoint* point);
ColorDelta* PixelDelta_getColorDelta(PixelDelta* this);
void PixelDelta_setColorDelta(PixelDelta* this, ColorDelta* colorDelta);
const char* PixelDelta_toString(PixelDelta* this);

static void PixelDelta_initFields(PixelDelta* this) {
    this->point = nullptr;
    this->colorDelta = nullptr;
    
}


void PixelDelta_init(PixelDelta* this, GPoint* point, ColorDelta* colorDelta) {
    PixelDelta_initFields(this);
        PixelDelta_setPoint(this, point);
        PixelDelta_setColorDelta(this, colorDelta);
        this->key = PixelDelta_getKey(PixelDelta_getPoint(this), PixelDelta_getColorDelta(this));
}

PixelDelta* PixelDelta_new(GPoint* point, ColorDelta* colorDelta) {
    PixelDelta* this = calloc(1, sizeof(PixelDelta));
    PixelDelta_init(this, point, colorDelta);
    return this;
}


Any* PixelDelta_getKey(PixelDelta* this) {
        return this->key;
}


// Java overloaded method: C needs a different name
Any* PixelDelta_getKey(GPoint* point, ColorDelta* colorDelta) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(StringMaker_new(), ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), point))), append, CommonSeps_getInstance()->UNDERSCORE), append, JAVA_CALL(ColorDelta_getKey(colorDelta), toString)), toString);
}


GPoint* PixelDelta_getPoint(PixelDelta* this) {
        return this->point;
}


void PixelDelta_setPoint(PixelDelta* this, GPoint* point) {
        this->point = point;
}


ColorDelta* PixelDelta_getColorDelta(PixelDelta* this) {
        return this->colorDelta;
}


void PixelDelta_setColorDelta(PixelDelta* this, ColorDelta* colorDelta) {
        this->colorDelta = colorDelta;
}


const char* PixelDelta_toString(PixelDelta* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "PixelDelta: Point: "), append, GPoint_toString(this->point)), append, CommonSeps_getInstance()->SPACE), append, ColorDelta_toString(this->colorDelta)), toString);
}

