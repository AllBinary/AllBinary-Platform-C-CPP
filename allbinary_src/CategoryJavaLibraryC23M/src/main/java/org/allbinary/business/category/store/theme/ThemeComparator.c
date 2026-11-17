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
// package org.allbinary.business.category.store.theme

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Comparator.h"

typedef struct ThemeComparator ThemeComparator;
struct ThemeComparator {
    Comparator Comparator_interface;
};


ThemeComparator* ThemeComparator_new(void);

void ThemeComparator_init(ThemeComparator* this);
int32_t ThemeComparator_compare(ThemeComparator* this, Any* anyType, Any* object2);


void ThemeComparator_init(ThemeComparator* this) {
}

ThemeComparator* ThemeComparator_new(void) {
    ThemeComparator* this = calloc(1, sizeof(ThemeComparator));
    ThemeComparator_init(this);
    return this;
}


int32_t ThemeComparator_compare(ThemeComparator* this, Any* anyType, Any* object2) {
        const char* string = ((const char*) anyType);
        const char* string2 = ((const char*) object2);
        return strcmp(string, string2);
}

