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
// package org.allbinary.logic.control.sort

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Comparator.h"

typedef struct StringComparator StringComparator;
struct StringComparator {
    Comparator Comparator_interface;
};


StringComparator* StringComparator_new(void);

void StringComparator_init(StringComparator* this);
int32_t StringComparator_compare(StringComparator* this, Any* anyType, Any* object2);


void StringComparator_init(StringComparator* this) {
}

StringComparator* StringComparator_new(void) {
    StringComparator* this = calloc(1, sizeof(StringComparator));
    StringComparator_init(this);
    return this;
}


int32_t StringComparator_compare(StringComparator* this, Any* anyType, Any* object2) {
        const char* string = ((const char*) anyType);
        const char* string2 = ((const char*) object2);
        return strcmp(string, string2);
}

