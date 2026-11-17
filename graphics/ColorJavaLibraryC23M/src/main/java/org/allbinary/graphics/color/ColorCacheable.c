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
// package org.allbinary.graphics.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"

typedef struct ColorCacheable ColorCacheable;
struct ColorCacheable {
    CacheableInterface CacheableInterface_interface;
    Any* key;
    Color* color;
};


ColorCacheable* ColorCacheable_new(Any* key);

void ColorCacheable_init(ColorCacheable* this, Any* key);
Any* ColorCacheable_getKey(ColorCacheable* this);
Color* ColorCacheable_getColor(ColorCacheable* this);
void ColorCacheable_setColor(ColorCacheable* this, Color* color);

static void ColorCacheable_initFields(ColorCacheable* this) {
    
    
}


void ColorCacheable_init(ColorCacheable* this, Any* key) {
    ColorCacheable_initFields(this);
        this->key = key;
        this->color = Color_new(Integer_intValue((((int32_t) key))));
}

ColorCacheable* ColorCacheable_new(Any* key) {
    ColorCacheable* this = calloc(1, sizeof(ColorCacheable));
    ColorCacheable_init(this, key);
    return this;
}


Any* ColorCacheable_getKey(ColorCacheable* this) {
        return this->key;
}


Color* ColorCacheable_getColor(ColorCacheable* this) {
        return this->color;
}


void ColorCacheable_setColor(ColorCacheable* this, Color* color) {
        this->color = color;
}

