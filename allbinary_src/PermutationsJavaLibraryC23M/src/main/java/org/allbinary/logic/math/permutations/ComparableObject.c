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
// package org.allbinary.logic.math.permutations

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/math/permutations/Comparable.h"

typedef struct ComparableObject ComparableObject;
struct ComparableObject {
    Comparable Comparable_interface;
};


ComparableObject* ComparableObject_new(void);
int32_t ComparableObject_compareTo(ComparableObject* this, Any* anyType);

void ComparableObject_init(ComparableObject* this) {
}

ComparableObject* ComparableObject_new(void) {
    ComparableObject* this = calloc(1, sizeof(ComparableObject));
    ComparableObject_init(this);
    return this;
}


int32_t ComparableObject_compareTo(ComparableObject* this, Any* anyType) {
        if (TsUtil_hashCode(TsUtil_getInstance(), this) < TsUtil_hashCode(TsUtil_getInstance(), anyType)) {
            return -1;
        } else if (TsUtil_hashCode(TsUtil_getInstance(), this) > TsUtil_hashCode(TsUtil_getInstance(), anyType)) {
            return 1;
        }
        return 0;
}

