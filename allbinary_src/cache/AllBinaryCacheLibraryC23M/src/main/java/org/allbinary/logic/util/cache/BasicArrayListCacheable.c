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
// package org.allbinary.logic.util.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"

typedef struct BasicArrayListCacheable BasicArrayListCacheable;
struct BasicArrayListCacheable {
    BasicArrayListD base;
    CacheableInterface CacheableInterface_interface;
};


BasicArrayListCacheable* BasicArrayListCacheable_new(void);
Any* BasicArrayListCacheable_getKey(BasicArrayListCacheable* this);

void BasicArrayListCacheable_init(BasicArrayListCacheable* this) {
    BasicArrayListD_init(&this->base);
}

BasicArrayListCacheable* BasicArrayListCacheable_new(void) {
    BasicArrayListCacheable* this = calloc(1, sizeof(BasicArrayListCacheable));
    BasicArrayListCacheable_init(this);
    return this;
}


Any* BasicArrayListCacheable_getKey(BasicArrayListCacheable* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}

